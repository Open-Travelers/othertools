import bpy
import struct
import math
import os
from mathutils import Matrix, Color
class TLVBlock:
    header = None
    start = 0
    length = 0
    data = None
    
    def __init__(self, header, start, length, data):
        self.header = header
        self.start = start
        self.length = length
        self.data = data
    
    def __str__(self):
        return "{}: 0x{:08X}".format(self.header, self.length)

class DataFile:
    raw_data = None
    data_ptr = 0
    
    def __init__(self, data, endianness, data_ptr=0):
        self.raw_data = data
        self.endianness = endianness
        self.data_ptr = data_ptr
    
    def correct_format(self, fmt):
        if self.endianness == 'little':
            return '<' + fmt
        elif self.endianness == 'big':
            return '>' + fmt
    
    def data_seek(self, value, seek_type):
        if seek_type == 'set':
            self.data_ptr = value
        elif seek_type == 'end':
            self.data_ptr = len(self.raw_data) - value - 1
        elif seek_type == 'cur':
            self.data_ptr += value

    def data_read(self, n):
        start = self.data_ptr
        end = min(len(self.raw_data), self.data_ptr + n)
        value = self.raw_data[start : end]
        self.data_seek(n, 'cur')
        return value

    def data_eof(self):
        return ( self.data_ptr >= len(self.raw_data) )

class TLVBlockFile(DataFile):
    
    blocks = []
    endianness = 'little'
    valid_blocks = []
    root = True
    def cond_end(self):
        return False

    def read_block(self, peek=False):
        old_ptr = self.data_ptr

        header = self.data_read(4).decode('utf-8')
        if self.endianness == 'big':
            header = header[::-1]
        
        length = struct.unpack(self.correct_format("i"), self.data_read(4))[0]
        if length < 0:
            length = -length
        data = self.data_read(length - 8)
        
        if peek:
            self.data_ptr = old_ptr
        return TLVBlock(header, old_ptr + 8, length, data)

    def __init__(self, data, endianness, root=True):
        self.raw_data = data
        self.endianness = endianness
        self.root = root

        block_index = 0
        while (not self.cond_end()) and (not self.data_eof()):
            block = self.read_block(peek=False)
            print(f'{self.root}: {block}')
            if self.root:
                if block.header not in self.valid_blocks:
                    raise Exception('invalid block header: {}'.format(block.header))
            else:
                if block.header not in self.valid_blocks:
                    return
            # read block from class function dictionary
            name = 'parse_block_{}'.format(block.header.lower())
            if name in self.__class__.__dict__:
                self.__class__.__dict__[name](self, block, block_index)
            else:
                print('Block {} not handled'.format(block.header))

            self.blocks.append(block)
            block_index += 1

def DXTBlend(v1, v2): return (v1 * 3 + v2 * 5) >> 3
def Convert3To8(v): return (v << 5) | (v << 2) | (v >> 1)
def Convert4To8(v): return (v << 4) | v
def Convert5To8(v): return (v << 3) | (v >> 2)
def Convert6To8(v): return (v << 2) | (v >> 4)
class Texture(DataFile):
    texture_type = 0
    width = 0
    height = 0
    palette = None
    image = []
    def decode_dxt_block(self, pixel_data, i, block_x, block_y):
        c1, c2 = struct.unpack(self.correct_format('2H'), pixel_data[i:i+3])
        lines = pixel_data[i+4:i+7]
        
        b1 = Convert5To8(c1 & 0x1F)
        b2 = Convert5To8(c2 & 0x1F)
        g1 = Convert6To8(((c1 >> 5) & 0x3F))
        g2 = Convert6To8(((c2 >> 5) & 0x3F))
        r1 = Convert5To8(((c1 >> 11) & 0x1F))
        r2 = Convert5To8(((c2 >> 11) & 0x1F))
        
        colors = [
            [r1, g1, b1, 255],
            [r2, g2, b2, 255]
        ]
        if c1 > c2:
            colors = [
                [r1, g1, b1, 255],
                [r2, g2, b2, 255],
                [DXTBlend(r2, r1), DXTBlend(g2, g1), DXTBlend(b2, b1), 255],
                [DXTBlend(r1, r2), DXTBlend(g1, g2), DXTBlend(b1, b2), 255]
            ]
        else:
            avgr = (r1 + r2) // 2
            avgg = (g1 + g2) // 2
            avgb = (b1 + b2) // 2
            colors = [
                [r1, g1, b1, 255],
                [r2, g2, b2, 255],
                [avgr, avgg, avgb, 255],
                [avgr, avgg, avgb, 0]
            ]
        for y in range(0, 4):
            val = lines[y]
            for x in range(0, 4):
                self.image[y + block_y][x + block_x] = colors[(val >> 6) & 3]
                val <<= 2

    def convert_dxt(self, pixel_data, palette_data):
        i = 0
        for y in range(0, self.height, 8):
            for x in range(0, self.width, 8):
                self.decode_dxt_block(pixel_data, i, x, y)
                i += 8
                self.decode_dxt_block(pixel_data, i, x + 4, y)
                i += 8
                self.decode_dxt_block(pixel_data, i, x, y + 4)
                i += 8
                self.decode_dxt_block(pixel_data, i, x + 4, y + 4)
                i += 8
    def convert_x5(self, pixel_data, palette_data):
        print('x5 texture')
    def convert_rgb5a3(self, pixel_data, palette_data):
        print('rgb5a3 texture')
    def convert_x82(self, pixel_data, palette_data):
        print('x82 texture')

    def __str__(self):
        return "Type: {}, Width: {}, Height: {}".format(self.texture_type, self.width, self.height)
    def __init__(self, data, endianness):
        super().__init__(data, endianness)
        self.texture_type, self.width, self.height, pixel_data_length = struct.unpack(self.correct_format('4I'), self.data_read(16))
        read_funcs = {
            128: self.convert_dxt,
            129: self.convert_rgb5a3,
            0x82: self.convert_x82,
            0x5: self.convert_x5
        }

        if self.texture_type not in read_funcs:
            raise Exception('invalid texture type 0x{:X}'.format(self.texture_type))
        
        # prepare pixel data
        pixel_size = [16, 16, 24, 32, 4, 8]
        if (self.texture_type & 0x80) == 0:
            pixel_data_length = pixel_size[self.texture_type] * self.width * self.height
            if pixel_data_length < 0:
                pixel_data_length += 7
            pixel_data_length >>= 3
        pixel_data = self.data_read(pixel_data_length)
        
        # prepare palette data
        palette_data_length = 0
        if self.texture_type == 4:
            palette_data_length = 0x40
        elif self.texture_type == 5:
            palette_data_length = 0x400
        palette_data = self.data_read(palette_data_length)
        
        # convert to rgba
        self.image = [ [[0, 0, 0, 0]] * self.width ] * self.height
        read_funcs[self.texture_type](pixel_data, palette_data)
#NUSBLOCKS = [
#    'GSC0', 
#    'NTBL', 
#    'MS00', 
#    'TST0', 'TSH0', 'TXM0', 
#    'GST0', 
#    'INST', 
#    'ALIB', 
#    'SPEC', 
#    'SST0', 
#    'TAS0', 
#    'LDIR', 
#    'SPHE'
#]
class TextureSet(TLVBlockFile):
    texture_count = 0
    textures = []
    temp = 0
    valid_blocks = [ 'TSH0', 'TXM0' ]
    def __init__(self, data, endianness):
        super().__init__(data, endianness, False)
    
    def cond_end(self):
        print(f'{self.temp} >= {self.texture_count - 1}')
        return self.temp >= (self.texture_count - 1)

    def parse_block_tsh0(self, block, index):
        self.texture_count = struct.unpack(self.correct_format('I'), block.data[0:4])[0]
        print("  Texture count: {}".format(self.texture_count))
    
    def parse_block_txm0(self, block, index):
        self.temp += 1
        #with open(f'D:\\Documents\\tex\\{len(self.textures)}.bin', 'wb') as f:
        #    f.write(block.data)
        #print('texture')
        #tex = Texture(block.data, self.endianness)
        #self.textures.append(tex)


class Vertex:
    x = 0
    y = 0
    z = 0
    u = 0
    v = 0
    nx = 0
    ny = 0
    nz = 0
    color = 0
    def __init__(self, x, y, z, u, v, nx, ny, nz, color):
        self.x = x
        self.y = y
        self.z = z
        self.u = u
        self.v = v
        self.nx = nx
        self.ny = ny
        self.nz = nz
        self.color = color
class Primitive:
    prim_type = 0
    data = []
    def __init__(self, prim_type, data):
        self.prim_type = prim_type
        self.data = data
class GeometryDefinition:
    vertices = None
    primitives = None
    skins = None
    blendshapes = None
    material_index = 0

    def __init__(self, material_index, vertices, primitives, skins, blendshapes):
        self.material_index = material_index
        self.vertices = vertices
        self.primitives = primitives
        self.skins = skins
        self.blendshapes = blendshapes
class Material:
    texture = None
    def __init__(self, texture):
        self.texture = texture
class Instance:
    model_index = -1
    transform = None
    unknown = None
    def __init__(self, model_index, transform, unknown):
        self.model_index = model_index
        self.transform = transform
        self.unknown = unknown

class GeometryObject:
    geometry_definitions = []
    faces = []
    def __init__(self, geometry_definitions, faces):
        self.geometry_definitions = geometry_definitions
        self.faces = faces

class NUSFile(TLVBlockFile):
    texture_set = []
    _texture_set_blockfile = None
    geometry_object_set = []
    material_set = []
    nametable = []
    instances = []
    valid_blocks = [ '0CSG', 'GSC0', 'NTBL', 'MS00', 'TST0', 'GST0', 'INST', 'ALIB', 'SPEC', 'SST0', 'TAS0', 'LDIR', 'SPHE' ]
    def __init__(self, data, endianness):
        self.texture_set = []
        self.geometry_object_set = []
        self.material_set = []
        self.nametable = []
        self.instances = []
        super().__init__(data, endianness, True)
    def parse_block_tst0(self, block, index):
        texture_set_blockfile = TextureSet(block.data, self.endianness)
        self.texture_set = [x for x in texture_set_blockfile.textures]
    def parse_block_0csg(self, block, index):
        if index != 0:
            raise Exception('little endian GSC0 in invalid position')
        self.data_seek(8, 'set')
        self.endianness = 'little'
    def parse_block_gsc0(self, block, index):
        if index != 0:
            raise Exception('big-endian GSC0 in invalid position')
        self.data_seek(8, 'set')
        self.endianness = 'big'
    def parse_block_ntbl(self, block, index):
        data_length = struct.unpack(self.correct_format('I'), block.data[0:4])[0]
        index = 0
        temp = ''
        while index < len(block.data) - 5:
            byte = block.data[5 + index]
            if byte == 0:
                if temp:
                    self.nametable.append(temp)
                    temp = ''
            else:
                temp += chr(byte)
            index += 1
    def parse_block_ms00(self, block, index):
        self.data_seek(block.start, 'set')
        begin_block = self.data_ptr
        material_count = struct.unpack(self.correct_format('I'), self.data_read(4))[0]
        for i in range(0, material_count):
            unk_data_1 = self.data_read(20)
            diffuse_r, diffuse_g, diffuse_b = struct.unpack(self.correct_format('fff'), self.data_read(12))
            unk_data_2 = self.data_read(16)
            unk4 = struct.unpack(self.correct_format('f'), self.data_read(4))[0]
            unk5 = struct.unpack(self.correct_format('f'), self.data_read(4))[0]
            texture = struct.unpack(self.correct_format('i'), self.data_read(4))[0]
            unk_data_3 = self.data_read(24)
            self.material_set.append(Material(texture))

        # padding correction
        self.data_seek((block.length - 8) - (self.data_ptr - begin_block), 'cur')
    def parse_block_gst0(self, block, index):   
        self.data_seek(block.start, 'set')
        begin_block = self.data_ptr
        
        geometry_object_count = struct.unpack(self.correct_format('I'), self.data_read(4))[0]
        for geometry_object_index in range(0, geometry_object_count):
            # read geometry object items
            item_count = struct.unpack(self.correct_format('I'), self.data_read(4))[0]
            geometry_definitions = []
            faces = []
            for item_index in range(0, item_count):
                is_face = struct.unpack(self.correct_format('I'), self.data_read(4))[0]
                if is_face == 0:
                    # read geometry definitions
                    unk_data = self.data_read(0xC)
                    geometry_definition_count = struct.unpack(self.correct_format('I'), self.data_read(4))[0]
                    for geometry_definition_index in range(0, geometry_definition_count):
                        vertices = []
                        primitives = []
                        
                        material_index = struct.unpack(self.correct_format('I'), self.data_read(4))[0]
                        
                        # vertices
                        vertex_count = struct.unpack(self.correct_format('I'), self.data_read(4))[0]
                        for vertex_index in range(0, vertex_count):
                            x, y, z = struct.unpack(self.correct_format('fff'), self.data_read(12))
                            nx, ny, nz = struct.unpack(self.correct_format('fff'), self.data_read(12))
                            color = struct.unpack(self.correct_format('I'), self.data_read(4))[0]
                            u, v = struct.unpack(self.correct_format('ff'), self.data_read(8))
                            vertices.append(Vertex(x, y, z, u, v, nx, ny, nz, color))

                        # cntrl
                        cntrl = struct.unpack(self.correct_format('I'), self.data_read(4))[0]

                        # primitives
                        geometry_definition_primitive_count = struct.unpack(self.correct_format('I'), self.data_read(4))[0]
                        for _ in range(0, geometry_definition_primitive_count):
                            prim_type, prim_length = struct.unpack(self.correct_format('II'), self.data_read(8))
                            data = struct.unpack(self.correct_format('H' * prim_length), self.data_read(prim_length * 2))

                            primitives.append(Primitive(prim_type, data))

                        # skins
                        skins = []
                        skin_count = struct.unpack(self.correct_format('I'), self.data_read(4))[0]
                        
                        # blendshapes
                        blendshapes = []
                        blendshape_count = struct.unpack(self.correct_format('I'), self.data_read(4))[0]
                        geometry_definitions.append(GeometryDefinition(material_index, vertices, primitives, skins, blendshapes))
                else:
                    # read faces (whatever that means)
                    face_count = struct.unpack(self.correct_format('I'), self.data_read(4))[0]
                    for face_index in range(0, face_count):
                        face_a, face_data_count, face_b, face_c = struct.unpack(self.correct_format('IIIf'), self.data_read(16))
                        face_data = self.data_read(face_data_count * 0x18)

            self.geometry_object_set.append(GeometryObject(geometry_definitions, faces))
        # correct for padding
        self.data_seek((block.length - 8) - (self.data_ptr - begin_block), 'cur')
    def parse_block_inst(self, block, index):
        self.data_seek(block.start, 'set')
        print(f'block start {block.start}')
        begin_block = self.data_ptr

        inst_count_1 = struct.unpack(self.correct_format('I'), self.data_read(4))[0]
        print(f'inst count 1 {inst_count_1}')
        for i in range(0, inst_count_1):
            transform = struct.unpack(self.correct_format('f'*16), self.data_read(4*16))
            model_index = struct.unpack(self.correct_format('I'), self.data_read(4))[0]
            unknown = self.data_read(12)
            self.instances.append(Instance(model_index, transform, unknown))

        inst_count_2 = struct.unpack(self.correct_format('I'), self.data_read(4))[0]
        print(f'inst count 2 {inst_count_2}')
        for i in range(0, inst_count_2):
            self.data_read(0x60)

        # correct for padding
        self.data_seek((block.length - 8) - (self.data_ptr - begin_block), 'cur')

from bpy_extras.io_utils import axis_conversion
def process_nus(context, path):
    
    print(f'LOAD {path}')
    file_data = None
    with open(path, 'rb') as f:
        file_data = f.read()
    nusfile = NUSFile(file_data, 'big')

    filename, fileext = os.path.splitext(os.path.basename(path))
    print(f'filename: {filename}')

    assets_name = filename + '_assets'
    instances_name = filename + '_instances'
    geometry_object_fmt = filename + '_geometry_object_{}'
    image_fmt = filename + '_image_{}'
    mesh_fmt = filename + '_mesh_{}_{}'
    geometry_definition_fmt = filename + '_geometry_definition_{}_{}'
    instance_fmt = filename + '_instance_{}'
    print('created names')

    assets_collection = bpy.data.collections.new(assets_name)
    bpy.context.scene.collection.children.link(assets_collection)
    assets_collection.hide_viewport = True

    #if nusfile.texture_set != None:
    #    print(f'starting texture conversion: length {len(nusfile.texture_set)}')
    #    texidx = 0
    #    for tex in nusfile.texture_set:
    #        image = bpy.data.images.new(image_fmt.format(texidx), width=tex.width, height=tex.height)
    #        pixels = [0.0] * tex.width * tex.height
    #        if tex.texture_type == 0x80:
    #            for y in range(0, tex.height):
    #                for x in range(0, tex.width):
    #                    pix = tex.image[y][x]
    #                    pixels.append(pix[0] / 255)
    #                    pixels.append(pix[1] / 255)
    #                    pixels.append(pix[2] / 255)
    #                    pixels.append(pix[3] / 255)
    #        image.pixels = pixels
    #        texidx += 1

    print(f'starting geometry object generation: length {len(nusfile.geometry_object_set)}')
    # generating unique objects
    geometry_object_index = 0
    for geometry_object in nusfile.geometry_object_set:
        print(f'geom. object index: {geometry_object_index}')
        collection = bpy.data.collections.new(geometry_object_fmt.format(geometry_object_index))
        assets_collection.children.link(collection)
        definition_index = 0
        for definition in geometry_object.geometry_definitions:
            vertices = []
            normals = []
            edges = []
            faces = []
            colors = []
            # vertices
            for vtx in definition.vertices:
                vertices.append((vtx.x, vtx.y, vtx.z))
                normals.append((vtx.nx, vtx.ny, vtx.nz))

            # primitives (TODO: trilist doesn't seem to work properly)
            for prim in definition.primitives:
                if prim.prim_type == 5:
                    # trilist
                    for i in range(0, len(prim.data), 3):
                        a = prim.data[i]
                        b = prim.data[i + 1]
                        c = prim.data[i + 2]
                        faces.append((a, b, c))
                elif prim.prim_type == 6:
                    # tristrip
                    index = 0
                    while index < len(prim.data):
                        face_size = prim.data[index]
                        index += 1
                        for z in range(2, face_size):
                            a = prim.data[index + z - 2]
                            b = prim.data[index + z - 1]
                            c = prim.data[index + z]
                            if ((z - 2) % 2) == 0:
                                faces.append((a, b, c))
                            else:
                                faces.append((a, c, b))
                        index += face_size
                    
                else:
                    raise Exception('invalid primitive type {}'.format(prim.type))
            
            # mesh generation            
            print(f'generating mesh "{mesh_fmt.format(geometry_object_index, definition_index)}"')
            new_mesh = bpy.data.meshes.new(mesh_fmt.format(geometry_object_index, definition_index))

            new_mesh.from_pydata(vertices, edges, faces)
            new_mesh.normals_split_custom_set_from_vertices(normals)
            new_mesh.update()
            
            print('generating vertex color map')
            new_object_color_map = new_mesh.vertex_colors.new()
            i = 0
            for poly in new_mesh.polygons:
                for loop_index in poly.loop_indices:
                    loop_vert_index = new_mesh.loops[loop_index].vertex_index
                    vtx = definition.vertices[loop_vert_index]
                    a = (vtx.color & 0xFF000000) >> 24
                    r = (vtx.color & 0x00FF0000) >> 16
                    g = (vtx.color & 0x0000FF00) >> 8
                    b = (vtx.color & 0x000000FF)
                    color = [r / 255, g / 255, b / 255, a / 255]
                    new_object_color_map.data[i].color = color
                    i += 1
            new_mesh.vertex_colors.active = new_object_color_map
            new_mesh.update()

            new_object = bpy.data.objects.new(geometry_definition_fmt.format(geometry_object_index, definition_index), new_mesh)
            collection.objects.link(new_object)
            definition_index += 1
        geometry_object_index += 1
    print(f'creating instance collection "{instances_name}"')
    instances_collection = bpy.data.collections.new(instances_name)
    bpy.context.scene.collection.children.link(instances_collection)
    # generating scene collections for the unique objects

    instance_index = 0
    print(f'generating scene instance data: length {len(nusfile.instances)}')
    for instance in nusfile.instances:
        if instance.model_index != -1:
            instance_object = bpy.data.objects.new(name=instance_fmt.format(instance_index), object_data=None)
            instance_object.instance_type = 'COLLECTION'
            instance_object.instance_collection = assets_collection.children[geometry_object_fmt.format(instance.model_index)]
            m = Matrix((
                (instance.transform[0], instance.transform[1], instance.transform[2], 0),
                (instance.transform[4], instance.transform[5], instance.transform[6], 0),
                (instance.transform[8], instance.transform[9], instance.transform[10], 0),
                (instance.transform[12], instance.transform[13], instance.transform[14], 1)
            ))
            m.transpose()
            instance_object.matrix_world = m
            instances_collection.objects.link(instance_object)
        instance_index += 1

    return {'FINISHED'}


# ImportHelper is a helper class, defines filename and
# invoke() function which calls the file selector.
from bpy_extras.io_utils import ImportHelper
from bpy.props import StringProperty, BoolProperty, EnumProperty
from bpy.types import Operator

class ImportNus(Operator, ImportHelper):
    """This appears in the tooltip of the operator and in the generated docs"""
    bl_idname = "twoc_tools.import_nus"  # important since its how bpy.ops.import_test.some_data is constructed
    bl_label = "Import NUS Scene"

    # ImportHelper mixin class uses this
    filename_ext = ".nus"

    filter_glob: StringProperty(
        default="*.nus",
        options={'HIDDEN'},
        maxlen=255,  # Max internal buffer length, longer would be clamped.
    )

    # List of operator properties, the attributes will be assigned
    # to the class instance from the operator settings before calling.
    #use_setting: BoolProperty(
    #    name="Example Boolean",
    #    description="Example Tooltip",
    #    default=True,
    #)

    #type: EnumProperty(
    #    name="Example Enum",
    #    description="Choose between two items",
    #    items=(
    #        ('OPT_A', "First Option", "Description one"),
    #        ('OPT_B', "Second Option", "Description two"),
    #    ),
    #    default='OPT_A',
    #)

    def execute(self, context):
        return process_nus(context, self.filepath)


# Only needed if you want to add into a dynamic menu
def menu_func_import(self, context):
    self.layout.operator(ImportNus.bl_idname, text="Import NUS Scene")


def register():
    bpy.utils.register_class(ImportNus)
    bpy.types.TOPBAR_MT_file_import.append(menu_func_import)


def unregister():
    bpy.utils.unregister_class(ImportNus)
    bpy.types.TOPBAR_MT_file_import.remove(menu_func_import)


if __name__ == "__main__":
    register()

    # test call
    bpy.ops.twoc_tools.import_nus('INVOKE_DEFAULT')
