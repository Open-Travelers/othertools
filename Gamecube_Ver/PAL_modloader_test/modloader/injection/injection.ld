OUTPUT_FORMAT("elf32-powerpc", "elf32-powerpc", "elf32-powerpc")
OUTPUT_ARCH(powerpc:common)
SEARCH_DIR("/opt/devkitpro/devkitPPC/powerpc-eabi/lib32"); 
SEARCH_DIR("/opt/devkitpro/devkitPPC/powerpc-eabi/lib");

superbuffer_ptr = 0x803d8f08;
superbuffer_base = 0x803d9130;
superbuffer_end = 0x803d8f9c;
superbuffersize = 0x803d91fc;
NuMemAlloc = 0x800be7d4;
NuMemFree = 0x800be8e4;
Level = 0x803d6fa8;
YTOL = 0x803d728c;
NuStopLoadScreen = 0x800bdfe8;

NuFileExists = 0x800bd6a8;
NuFileLoad = 0x800bdc60;
NuFileLoadBuffer = 0x800bdcd8;
NuFileOpen = 0x800bd714;
NuFilePos = 0x800bdb24;
NuFileRead = 0x800bddc4;
NuFileReadChar = 0x800be08c;
NuFileReadShort = 0x800be060;
NuFileReadInt = 0x800be034;
NuFileReadFloat = 0x800bdffc;
NuFileSize = 0x800bdbe8;
NuFileSeek = 0x800bdb7c;
NuErrorProlog = 0x800bd624;
printf = 0x800d953c;
sprintf = 0x800d95e8;
memcmp = 0x800db128;
memcpy = 0x800db1b8;
memset = 0x800db25c;
strncasecmp = 0x800db76c;

CODE_ORG = 0x800d47c8;
SECTIONS {
    .text CODE_ORG : {
        *(.text._start)
        *(.rodata._start)
        *(.data._start)
        *(.bss._start)

        *(.text*)
        *(.rodata*)
        *(.data*)
        *(.bss*)
    }
}