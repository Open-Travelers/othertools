#!/usr/bin/env python
import dolapi
import argparse

def autoint(s):
    return int(s, 0)
def add_section(args, dol):
    dol.add_section(args.section, open(args.source, "rb").read(), args.address)
    with open(args.destination, "wb") as f:
        dol.write(f)

def resize_section(args, dol):
    newsize = args.size
    if args.relative:
        newsize = dol.sections[args.section].size + args.size
    dol.resize_section(args.section, newsize)
    with open(args.destination, "wb") as f:
        dol.write(f)

def resize_bss(args, dol):
    if args.relative:
        dol.bss_length += args.size
    else:
        dol.bss_length = args.size
    with open(args.destination, "wb") as f:
        dol.write(f)

def reposition_bss(args, dol):
    if args.relative:
        dol.bss_address += args.pos
    else:
        dol.bss_address = args.pos
    with open(args.destination, "wb") as f:
        dol.write(f)

def print_dol_file(args, dol):
    print(dol)

def extract_section(args, dol):
    section = dol.section_data[args.section]
    with open(args.destination, "wb") as f:
        f.write(section)

def patch_data(args, dol):
    valid_sections = []
    for i in range(0, 18):
        section = dol.sections[i]
        if args.address in range(section.address, section.address + section.size):
            valid_sections.append(i)

    if len(valid_sections) == 0:
        print("invalid address supplied")
    elif len(valid_sections) == 1:
        print("valid section found: ", valid_sections[0])
        
        data = []
        with open(args.file, "rb") as f:
            data = f.read()
        
        section = dol.sections[valid_sections[0]]
        offset = args.address - section.address
        if offset + len(data) > section.size:
            print("section too small; resizing")
            dol.resize_section(valid_sections[0], offset + len(data))
        temp = bytearray(dol.section_data[valid_sections[0]])
        for i in range(0, len(data)):
            temp[offset + i] = data[i]
        dol.section_data[valid_sections[0]] = temp
        
        with open(args.destination, "wb") as f:
            dol.write(f)
    else:
        print("address found in multiple sections")
if __name__ == "__main__":
    # gotta be able to: 
    #  - reposition bss (absolute, relative)
    #  - resize bss (absolute, relative)
    #  - resize section (absolute, relative)
    #  - add section
    # doltools source [options] ...

    parser = argparse.ArgumentParser(description="Modify a .dol file.")
    parser.add_argument("source", type=str)

    subparsers = parser.add_subparsers()
    # resize bss command
    parser_resize_bss = subparsers.add_parser("resize-bss")
    parser_resize_bss.add_argument("size", type=autoint)
    parser_resize_bss.add_argument("--relative", default=False, action="store_true")
    parser_resize_bss.add_argument("destination", type=str)
    parser_resize_bss.set_defaults(func=resize_bss)
    
    # reposition bss command
    parser_reposition_bss = subparsers.add_parser("reposition-bss")
    parser_reposition_bss.add_argument("pos", type=autoint)
    parser_reposition_bss.add_argument("--relative", default=False, action="store_true")
    parser_reposition_bss.add_argument("destination", type=str)
    parser_reposition_bss.set_defaults(func=reposition_bss)

    # extract section command
    parser_extract_section = subparsers.add_parser("extract-section")
    parser_extract_section.add_argument("section", type=autoint, choices=range(0, 18))
    parser_extract_section.add_argument("destination", type=str)
    parser_extract_section.set_defaults(func=extract_section)
    
    # patch data command
    parser_patch_data = subparsers.add_parser("patch-data")
    parser_patch_data.add_argument("address", type=autoint)
    parser_patch_data.add_argument("file", type=str, help="path to file that gets patched in at the specified location")
    parser_patch_data.add_argument("destination", type=str)
    parser_patch_data.set_defaults(func=patch_data)

    # add section command
    parser_add_section = subparsers.add_parser("add-section")
    parser_add_section.add_argument("section", type=autoint, choices=range(0, 18))
    parser_add_section.add_argument("address", type=autoint)
    parser_add_section.add_argument("file", type=str, help="path to file that gets added as a section")
    parser_add_section.add_argument("destination", type=str)
    parser_add_section.set_defaults(func=add_section)
    
    # resize section command
    parser_resize_section = subparsers.add_parser("resize-section")
    parser_resize_section.add_argument("section", type=autoint, choices=range(0, 18))
    parser_resize_section.add_argument("size", type=autoint)
    parser_resize_section.add_argument("--relative", default=False, action="store_true")
    parser_resize_section.add_argument("destination", type=str)
    parser_resize_section.set_defaults(func=resize_section)
    
    # print file command
    parser_print_file = subparsers.add_parser("print-file")
    parser_print_file.set_defaults(func=print_dol_file)
    
    args = parser.parse_args()

    dol = dolapi.dolfile()
    with open(args.source, "rb") as f:
        dol.read(f)

    args.func(args, dol)
