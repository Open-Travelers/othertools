#!/usr/bin/python.exe
import sys
import struct
def stradr(v):
    return "{0:#010x}".format(v)

class dolsection:
    offset = 0
    size = 0
    address = 0
    executable = False
    def __init__(self, offset, size, address, executable=False):
        self.offset = offset
        self.size = size
        self.address = address
        self.executable = executable
    def __str__(self):
        return "Offset " + stradr(self.offset) + ", Size " + stradr(self.size) + ", Address " + stradr(self.address) + (" (EXEC)" if self.executable else "")

class dolfile:
    sections = []
    section_data = []
    bss_address = 0
    bss_length = 0
    entry_point = 0

    def __init__(self):
        self.sections.clear()
        for i in range (0, 18):
            self.sections.append(dolsection(0, 0, 0, (i < 7)))

    def __str__(self):
        s = ""
        for i in range (0, 18):
            s += "Section {:02d}: {}\n".format(i, self.sections[i])
        s += "BSS Address: " + stradr(self.bss_address) + '\n'
        s += "BSS Length: " + stradr(self.bss_length) + '\n'
        s += "Entry Point: " + stradr(self.entry_point)
        return s

    def calculate_offset(self, index):
        prev = self.sections[index - 1] 
        return prev.offset + prev.size

    def calculate_address(self, index):
        prev = self.sections[index - 1] 
        return prev.address + prev.size

    def add_section(self, index, data, address=-1):
        if index > 17 or index < 0:
            print("invalid section {0} supplied".format(index))
            return

        section = self.sections[index]
        if section.offset != 0:
            print("can't add section {0} because it isn't empty", index)
            return
        
#        i = 0
#        while i < 18:
#            if self.sections[i + 1].offset == 0:
#                break
#            i += 1

        self.section_data[index] = data
        self.sections[index].offset = self.calculate_offset(index)
        if address == -1:
            self.sections[index].address = self.calculate_address(index)
        else:
            self.sections[index].address = address
        self.sections[index].size = len(data)
    def resize_section(self, index, size):
        if index > 17 or index < 0:
            print("invalid section {0} supplied".format(index))
            return

        section = self.sections[index]
        if section.offset == 0:
            print("can't resize section {0} because it's empty", index)
            return

        delta = size - section.size
        if delta < 0:
            print("can't make section {0} smaller, only bigger".format(index))
            return

        #todo: figure out if python passes objects in arrays as references
        self.sections[index].size = size

        # modify offsets of following sections
        for i in range(index + 1, 18):
            new_section = self.sections[i]
            if new_section.offset != 0:
                self.sections[i].offset += delta

    def read(self, f):
        # section info
        for i in range(0, 18):
            self.sections[i].offset = struct.unpack(">I", f.read(4))[0]

        for i in range(0, 18):
            self.sections[i].address = struct.unpack(">I", f.read(4))[0]

        for i in range(0, 18):
            self.sections[i].size = struct.unpack(">I", f.read(4))[0]

        # bss info
        self.bss_address = struct.unpack(">I", f.read(4))[0]
        self.bss_length = struct.unpack(">I", f.read(4))[0]

        # entry point
        self.entry_point = struct.unpack(">I", f.read(4))[0]

        # section data
        for i in range (0, 18):
            section = self.sections[i]
            if section.offset != 0:
                f.seek(section.offset)
                self.section_data.append(f.read(section.size))
            else:
                self.section_data.append(bytes([0]))

    def write(self, f):
        # section info
        for i in range(0, 18):
            f.write(struct.pack(">I", self.sections[i].offset))
        for i in range(0, 18):
            f.write(struct.pack(">I", self.sections[i].address))
        for i in range(0, 18):
            f.write(struct.pack(">I", self.sections[i].size))

        # bss info
        f.write(struct.pack(">I", self.bss_address))
        f.write(struct.pack(">I", self.bss_length))

        # entry point
        f.write(struct.pack(">I", self.entry_point))

        # padding
        for i in range(0, 0x1C):
            f.write(bytes([0]))

        # data
        for i in range(0, 18):
            if self.sections[i].offset != 0:
                f.write(self.section_data[i])
                delta = self.sections[i].size - len(self.section_data[i])
                if delta > 0:
                    f.write(bytes(delta))

if __name__ == "__main__":
    dol = dolfile()
    with open(sys.argv[1], 'rb') as f:
        dol.read(f)
    print(str(dol))