#!/usr/bin/env python
import math
import re
import sys
import struct
import os
from elftools.elf.elffile import ELFFile
if __name__ == "__main__":
    with open("crashwoc.elf", 'rb') as f:
        elf = ELFFile(f)
        try:
            os.mkdir("libtwoc")
        except FileExistsError as e:
            print("dir libtwoc exists")
        symtab = elf.get_section_by_name('.symtab')
        with open("libtwoc/libtwoc_gen.ld", "w") as of:
            for it in symtab.iter_symbols():
                if it.name and it.entry["st_value"] and re.match("[_a-zA-Z][_a-zA-Z0-9]*", it.name) and it.name != "gcc2_compiled." and (it.entry.st_info.type == "STT_FUNC" or it.entry.st_info.type == "STT_OBJECT") and it.entry.st_info.bind == "STB_GLOBAL":
                    of.write("{} = 0x{:08X};\n".format(it.name.replace(".", "_").replace(" ", "_"), it.entry["st_value"]))

        funcdefs = {
            "NuFileClose":      ["void",  "s32 file"],
            "NuFileLoad":       ["void*", "char *path"],
            "NuFileLoadBuffer": ["u32",   "char *path, void* buffer, u32 length"],
            "NuFileOpen":       ["s32",   "char *path, u32 mode"],
            "NuFilePos":        ["s32",   "s32 file"],
            "NuFileRead":       ["u32",   "s32 file, void *data, u32 length"],
            "NuFileSeek":       ["void",  "s32 file, s64 offset, u32 origin"],
            "NuFileSize":       ["u32",   "char *path"],

            "NuFileReadChar":   ["u8", "s32 file"],
            "NuFileReadShort":  ["u16", "s32 file"],
            "NuFileReadInt":    ["u32", "s32 file"],
            "NuFileReadFloat":  ["f32", "s32 file"],
            "NuFileExists":     ["s32", "char *path"],

            "NuMemAlloc":       ["void*", "u32 size"],
            "NuMemFree":        ["void",  "void* mem"],
            "NuStopLoadScreen": ["void", "void"],

            "printf":           ["s32", "char *format, ..."],
            "sprintf":          ["s32", "char *buffer, char *format, ..."],      
            "vprintf":          ["s32", "char *format, ..."],
            "vfprintf":         ["s32", "FILE *stream, char *format, ..."],
            "vsprintf":         ["s32", "char *buffer, char *format, ..."],
            "memcpy":           ["void*", "void *dest, void *src, u32 size"],
            "memcmp":           ["s32", "void *s1, void *s2, u32 size"],
            "fopen":            ["FILE*", "char *filename, char *modes"],
            "fclose":           ["s32", "FILE *stream"],
            "fread":            ["s32", "void *ptr, s32 size, s32 count, FILE *stream"],
            "fseek":            ["s32", "FILE *stream, s64 offset, s32 whence"]

        }
        vardefs = {
            "Level": "s32",
            "YTOL": "f32",
            "superbuffer_ptr": "u8*",
            "superbuffer_base": "u8*",
            "superbuffersize": "u32",
        }
        patterns = {
            "^clearerr$":  "stdio.h",
            "^fclose$":    "stdio.h",
            "^feof$":      "stdio.h",
            "^ferror$":    "stdio.h",
            "^fflush$":    "stdio.h",
            "^fgetc$":     "stdio.h",
            "^fgetpos$":   "stdio.h",
            "^fgets$":     "stdio.h",
            "^fopen$":     "stdio.h",
            "^fprintf$":   "stdio.h",
            "^fputc$":     "stdio.h",
            "^fputs$":     "stdio.h",
            "^fread$":     "stdio.h",
            "^freopen$":   "stdio.h",
            "^fscanf$":    "stdio.h",
            "^fseek$":     "stdio.h",
            "^fsetpos$":   "stdio.h",
            "^ftell$":     "stdio.h",
            "^fwrite$":    "stdio.h",
            "^getc$":      "stdio.h",
            "^getchar$":   "stdio.h",
            "^gets$":      "stdio.h",
            "^perror$":    "stdio.h",
            "^printf$":    "stdio.h",
            "^putc$":      "stdio.h",
            "^putchar$":   "stdio.h",
            "^puts$":      "stdio.h",
            "^remove$":    "stdio.h",
            "^rename$":    "stdio.h",
            "^rewind$":    "stdio.h",
            "^scanf$":     "stdio.h",
            "^setbuf$":    "stdio.h",
            "^setvbuf$":   "stdio.h",
            "^snprintf$":  "stdio.h",
            "^sprintf$":   "stdio.h",
            "^sscanf$":    "stdio.h",
            "^tmpfile$":   "stdio.h",
            "^tmpnam$":    "stdio.h",
            "^ungetc$":    "stdio.h",
            "^vfprintf$":  "stdio.h",
            "^vfscanf$":   "stdio.h",
            "^vprintf$":   "stdio.h",
            "^vscanf$":    "stdio.h",
            "^vsnprintf$": "stdio.h",
            "^vsprintf$":  "stdio.h",
            "^vsscanf$":   "stdio.h",
            "^abort$":         "stdlib.h",
            "^abs$":           "stdlib.h",
            "^atexit$":        "stdlib.h",
            "^atof$":          "stdlib.h",
            "^atoi$":          "stdlib.h",
            "^atol$":          "stdlib.h",
            "^atoll$":         "stdlib.h",
            "^at_quick_exit$": "stdlib.h",
            "^bsearch$":       "stdlib.h",
            "^calloc$":        "stdlib.h",
            "^div$":           "stdlib.h",
            "^exit$":          "stdlib.h",
            "^free$":          "stdlib.h",
            "^free_x$":          "stdlib.h",
            "^getenv$":        "stdlib.h",
            "^labs$":          "stdlib.h",
            "^ldiv$":          "stdlib.h",
            "^llabs$":         "stdlib.h",
            "^lldiv$":         "stdlib.h",
            "^malloc$":        "stdlib.h",
            "^malloc_x$":        "stdlib.h",
            "^mblen$":         "stdlib.h",
            "^mbstowcs$":      "stdlib.h",
            "^mbtowc$":        "stdlib.h",
            "^qsort$":         "stdlib.h",
            "^quick_exit$":    "stdlib.h",
            "^rand$":          "stdlib.h",
            "^realloc$":       "stdlib.h",
            "^srand$":         "stdlib.h",
            "^strtod$":        "stdlib.h",
            "^strtof$":        "stdlib.h",
            "^strtol$":        "stdlib.h",
            "^strtold$":       "stdlib.h",
            "^strtoll$":       "stdlib.h",
            "^strtoul$":       "stdlib.h",
            "^strtoull$":      "stdlib.h",
            "^system$":        "stdlib.h",
            "^wcstombs$":      "stdlib.h",
            "^wctomb$":        "stdlib.h",
            "^itoa$":          "stdlib.h",
            "^_exit$":         "stdlib.h",

            "^memchr$":   "string.h",
            "^memcmp$":   "string.h",
            "^memcpy$":   "string.h",
            "^memmove$":  "string.h",
            "^memset$":   "string.h",
            "^strcat$":   "string.h",
            "^strchr$":   "string.h",
            "^strcmp$":   "string.h",
            "^strcoll$":  "string.h",
            "^strcpy$":   "string.h",
            "^strcspn$":  "string.h",
            "^strerror$": "string.h",
            "^strlen$":   "string.h",
            "^strncat$":  "string.h",
            "^strncmp$":  "string.h",
            "^strncpy$":  "string.h",
            "^strpbrk$":  "string.h",
            "^strrchr$":  "string.h",
            "^strspn$":   "string.h",
            "^strstr$":   "string.h",
            "^strtok$":   "string.h",
            "^strxfrm$":  "string.h",
            "^strlwr$":   "string.h",

            "^asctime$":   "time.h",
            "^clock$":     "time.h",
            "^ctime$":     "time.h",
            "^difftime$":  "time.h",
            "^gmtime$":    "time.h",
            "^localtime$": "time.h",
            "^mktime$":    "time.h",
            "^strftime$":  "time.h",
            "^time$":      "time.h",
            
            "^isalnum$":  "ctype.h",
            "^isalpha$":  "ctype.h",
            "^isblank$":  "ctype.h",
            "^iscntrl$":  "ctype.h",
            "^isdigit$":  "ctype.h",
            "^isgraph$":  "ctype.h",
            "^islower$":  "ctype.h",
            "^isprint$":  "ctype.h",
            "^ispunct$":  "ctype.h",
            "^isspace$":  "ctype.h",
            "^isupper$":  "ctype.h",
            "^isxdigit$": "ctype.h",
            "^tolower$":  "ctype.h",
            "^toupper$":  "ctype.h",

            "^cosf$":           "math.h",
            "^sinf$":           "math.h",
            "^tanf$":           "math.h",
            "^abs$":            "math.h",
            "^acos$":           "math.h",
            "^acosh$":          "math.h",
            "^asin$":           "math.h",
            "^asinh$":          "math.h",
            "^atan$":           "math.h",
            "^atan2$":          "math.h",
            "^atanh$":          "math.h",
            "^cbrt$":           "math.h",
            "^ceil$":           "math.h",
            "^copysign$":       "math.h",
            "^ceilf$":          "math.h",
            "^copysignf$":      "math.h",
            "^cos$":            "math.h",
            "^cosh$":           "math.h",
            "^erf$":            "math.h",
            "^erfc$":           "math.h",
            "^exp$":            "math.h",
            "^exp2$":           "math.h",
            "^expm1$":          "math.h",
            "^fabs$":           "math.h",
            "^fabsf$":          "math.h",
            "^fdim$":           "math.h",
            "^floor$":          "math.h",
            "^floorf$":         "math.h",
            "^fma$":            "math.h",
            "^fmax$":           "math.h",
            "^fmin$":           "math.h",
            "^fmod$":           "math.h",
            "^fpclassify$":     "math.h",
            "^frexp$":          "math.h",
            "^hypot$":          "math.h",
            "^ilogb$":          "math.h",
            "^isfinite$":       "math.h",
            "^isgreater$":      "math.h",
            "^isgreaterequal$": "math.h",
            "^isinf$":          "math.h",
            "^isless$":         "math.h",
            "^islessequal$":    "math.h",
            "^islessgreater$":  "math.h",
            "^isnan$":          "math.h",
            "^isnormal$":       "math.h",
            "^isunordered$":    "math.h",
            "^ldexp$":          "math.h",
            "^lgamma$":         "math.h",
            "^llrint$":         "math.h",
            "^llround$":        "math.h",
            "^log$":            "math.h",
            "^log10$":          "math.h",
            "^log1p$":          "math.h",
            "^log2$":           "math.h",
            "^logb$":           "math.h",
            "^lrint$":          "math.h",
            "^lround$":         "math.h",
            "^modf$":           "math.h",
            "^nan$":            "math.h",
            "^nanf$":           "math.h",
            "^nanl$":           "math.h",
            "^nearbyint$":      "math.h",
            "^nextafter$":      "math.h",
            "^nexttoward$":     "math.h",
            "^pow$":            "math.h",
            "^remainder$":      "math.h",
            "^remquo$":         "math.h",
            "^rint$":           "math.h",
            "^round$":          "math.h",
            "^scalbln$":        "math.h",
            "^scalbn$":         "math.h",
            "^signbit$":        "math.h",
            "^sin$":            "math.h",
            "^sinh$":           "math.h",
            "^sqrt$":           "math.h",
            "^sqrtf$":          "math.h",
            "^tan$":            "math.h",
            "^tanh$":           "math.h",
            "^tgamma$":         "math.h",
            "^trunc$":          "math.h",
            
            "^AIType$":                 "libtwoc.h",
            "^AITab$":                  "libtwoc.h",
            "^AIVISRANGE$":             "libtwoc.h",
            "^DEMOMENUS$":              "libtwoc.h",
            "^SIDECAMDISTANCE$":        "libtwoc.h",
            "^SINKENGINEVOL$":          "libtwoc.h",
            "^SINKTORPVOL$":            "libtwoc.h",
            "^SINKTORPPITCH$":          "libtwoc.h",
            "^SPACEMASKADJUSTY$":       "libtwoc.h",
            "^SPACETRAN$":              "libtwoc.h",
            "^SPACETORNADOSCALE$":      "libtwoc.h",
            "^SPACEMINSPEEDIN$":        "libtwoc.h",
            "^SPACESTATIONEXPLODEVOL$": "libtwoc.h",

            "^[_a-zA-Z][_a-zA-Z0-9]*ModelList$": "model_lists.h",
            "^[_a-zA-Z][_a-zA-Z0-9]*PlayList$": "play_lists.h",
            "^ai_lookpos$":             "libtwoc.h",
            "^__ai_src_time_end$":      "libtwoc.h",
            "^__ai_src_time_start$":    "libtwoc.h",
            "^AMBIENTCOUNT$":           "libtwoc.h",
            "^AMBIENTVOL$":             "libtwoc.h",
            "^AmbientPosition$":        "libtwoc.h",
            "^__ArenaLo$":              "libtwoc.h",
            "^__ArenaHi$":              "libtwoc.h",
            "^arrow_xrot$":             "libtwoc.h",
            "^arrow_yrot$":             "libtwoc.h",

            "^Demo$":             "libtwoc.h",
            "^demopad$":          "libtwoc.h",
            "^DemoLevel$":        "libtwoc.h",
            "^demo_inactivity$":  "libtwoc.h",
            "^DemoFrameBuffer1$": "libtwoc.h",
            "^DemoStatEnable$":   "libtwoc.h",
            "^situtotal$":        "libtwoc.h",

            "NuFile[_a-zA-Z0-9]*":    "nufile.h",
            "NuMemFile[_a-zA-Z0-9]*": "nufile.h",
            "NuDatFile[_a-zA-Z0-9]*": "nufile.h",
            "nufile[_a-zA-Z0-9]*":    "nufile.h",
            
            "(?i)edanim[_a-zA-Z0-9]*": "edanim.h",
            "(?i)edbits[_a-zA-Z0-9]*": "edbits.h",
            "(?i)edfile[_a-zA-Z0-9]*": "edfile.h",
            "(?i)edgra[_a-zA-Z0-9]*":  "edgra.h",
            "(?i)edobj[_a-zA-Z0-9]*":  "edobj.h",
            "(?i)edpp[_a-zA-Z0-9]*":   "edpp.h",
            "(?i)edmain[_a-zA-Z0-9]*": "edmain.h",
            "(?i)ed[_a-zA-Z0-9]*":     "edmain.h",
            
            "(?i)GX[_a-zA-Z0-9]*":   "gc_gx.h",
            "(?i)__GX[_a-zA-Z0-9]*": "gc_gx.h",
            
            "(?i)GS[_a-zA-Z0-9]*":   "gc_gs.h",
            "(?i)__GS[_a-zA-Z0-9]*": "gc_gs.h",
            
            "(?i)GBA[_a-zA-Z0-9]*":   "gc_gba.h",
            "(?i)__GBA[_a-zA-Z0-9]*": "gc_gba.h",

            "(?i)DVD[_a-zA-Z0-9]*":   "gc_dvd.h",
            "(?i)__DVD[_a-zA-Z0-9]*": "gc_dvd.h",

            "(?i)OS[_a-zA-Z0-9]*":   "gc_os.h",
            "(?i)__OS[_a-zA-Z0-9]*": "gc_os.h",
            
            "(?i)SI[_a-zA-Z0-9]*":   "gc_si.h",
            "(?i)__SI[_a-zA-Z0-9]*": "gc_si.h",

            "(?i)AX[_a-zA-Z0-9]*":   "gc_ax.h",
            "(?i)__AX[_a-zA-Z0-9]*": "gc_ax.h",

            "(?i)AM[_a-zA-Z0-9]*":   "gc_am.h",
            "(?i)__AM[_a-zA-Z0-9]*": "gc_am.h",

            "(?i)ARQ[_a-zA-Z0-9]*":   "gc_arq.h",
            "(?i)__ARQ[_a-zA-Z0-9]*": "gc_arq.h",
            
            "(?i)AR[_a-zA-Z0-9]*":   "gc_ar.h",
            "(?i)__AR[_a-zA-Z0-9]*": "gc_ar.h",

            "(?i)AI[_a-zA-Z0-9]*":   "gc_ai.h",
            "(?i)__AI[_a-zA-Z0-9]*": "gc_ai.h",

            "SP[_a-zA-Z0-9]*":   "gc_sp.h",
            "__SP[_a-zA-Z0-9]*": "gc_sp.h",

            "(?i)DSP[_a-zA-Z0-9]*":   "gc_dsp.h",
            "(?i)__DSP[_a-zA-Z0-9]*": "gc_dsp.h",

            "(?i)CARD[_a-zA-Z0-9]*":   "gc_card.h",
            "(?i)__CARD[_a-zA-Z0-9]*": "gc_card.h",
            
            "(?i)DTK[_a-zA-Z0-9]*":   "gc_dtk.h",
            "(?i)__DTK[_a-zA-Z0-9]*": "gc_dtk.h",

            "(?i)MIX[_a-zA-Z0-9]*":   "gc_mix.h",
            "(?i)__MIX[_a-zA-Z0-9]*": "gc_mix.h",

            "(?i)PPCM[_a-zA-Z0-9]*":   "gc_ppcm.h",
            "(?i)__PPCM[_a-zA-Z0-9]*": "gc_ppcm.h",
            
            "(?i)DB[_a-zA-Z0-9]*":   "gc_db.h",
            "(?i)__DB[_a-zA-Z0-9]*": "gc_db.h",

            "(?i)VI[_a-zA-Z0-9]*":   "gc_vi.h",
            "(?i)__VI[_a-zA-Z0-9]*": "gc_vi.h",
            
            "(?i)SS_[_a-zA-Z0-9]*":   "gc_ss.h",
            "(?i)__SS_[_a-zA-Z0-9]*": "gc_ss.h",
            
            "(?i)EXI[_a-zA-Z0-9]*":   "gc_exi.h",

            "(?i)DEMO[_a-zA-Z0-9]*":  "gc_init.h"
        }
        files = {}
        for it in symtab.iter_symbols():
            if it.name and it.entry["st_value"] and re.match("[_a-zA-Z][_a-zA-Z0-9]*", it.name) and it.name != "gcc2_compiled." and it.entry.st_info.bind == "STB_GLOBAL":
                identifier = it.name.replace(".", "_").replace(" ", "_")
                filename = "libtwoc.h"
                for k in patterns.keys():
                    m = re.match(k, identifier)
                    if m:
                        filename = patterns[k]
                        break
                if not filename in files:
                    files[filename] = {
                        "max-ret-length": 0,
                        "vars": "",
                        "funcs": [],
                        "includes": ["common.h"]
                    }
                if filename != "libtwoc.h" and not (filename in files["libtwoc.h"]["includes"]):
                    files["libtwoc.h"]["includes"].append(filename)

                if it.entry.st_info.type == "STT_OBJECT":
                    t = "unk"
                    if identifier in vardefs:
                        t = vardefs[identifier]
                    files[filename]["vars"] += "extern {} {};\n".format(t, identifier)
                else:
                    ret = "void"
                    if identifier in funcdefs:
                        ret = funcdefs[identifier][0]
                    files[filename]["max-ret-length"] = max(files[filename]["max-ret-length"], len(ret)) 
                    files[filename]["funcs"].append(identifier)

        for f in files.keys():
            with open("libtwoc/{}".format(f), "w") as of:
                file = files[f]

                guard = "_{}_".format(f.replace(".", "_"))
                of.write("#ifndef {}\n".format(guard))
                of.write("#define {}\n".format(guard))
                for inc in files[f]["includes"]:
                    of.write("#include \"{}\"\n".format(inc))
                of.write(file["vars"])
                for fun in file["funcs"]:
                    ret = "void"
                    args = "void /* TODO */"
                    if fun in funcdefs:
                        ret = funcdefs[fun][0]
                        args = funcdefs[fun][1]
                    of.write("extern {}{}{}({});\n".format(ret, ' ' * (1+files[f]["max-ret-length"] - len(ret)), fun, args))
                of.write("#endif\n")


