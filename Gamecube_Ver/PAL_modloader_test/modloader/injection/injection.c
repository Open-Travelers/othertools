#include <libtwoc.h>

typedef void overlay_entry_point_t(void);
typedef struct overlay_header {
    overlay_entry_point_t* entry_point;
} overlay_header_t; // sizeof = 4b

#define OVERLAY_FILENAME "load"
#define OVERLAY_ADDRESS (0x800c7be4) // starting with GBA_LoadFile
void _start(void)
{
    overlay_header_t* overlay_destination = (overlay_header_t*)OVERLAY_ADDRESS;
    u32 size = NuFileSize((char*) OVERLAY_FILENAME);
    if (size == -1)
    {
        printf("bad");
        return;
    }
    
    u8* temporary = NuMemAlloc(size);
    memcpy(temporary, (void*) overlay_destination, size);
    
    NuFileLoadBuffer((char*) OVERLAY_FILENAME, (void*) overlay_destination, size);
    __asm("isync");

    overlay_destination->entry_point();
    
    memcpy((void*) overlay_destination, (void*) temporary, size);
    NuMemFree(temporary);
}

/*u32 i;
*(u32*)(0x80052600) = 0x60000000;
*(u32*)(0x80052604) = 0x60000000;
*(u32*)(0x80052608) = 0x60000000;

Patch((void*)0x80052674, &Temp, 5);

*(u32*)(0x800526d0) = 0x60000000;
*(u32*)(0x800526d4) = 0x60000000;


Patch((void*)0x80050778, &LevelInit, 8);
*(u32*)(0x8005076c) = 0x60000000;
*(u32*)(0x80050770) = 0x60000000;*/

// start of frame
// 0x80052344
// 0x80052348
// 0x8005234c
// 0x80052350
// 0x80052354

// TBCODESTART(0, "Plats")
// 0x80052600
// 0x80052604
// 0x80052608

// TBCODEEND(0)
// 0x80052674
// 0x80052678
// TBCODESTART(1, "Chars")
// 0x8005267C
// 0x80052680
// 0x80052684

// TBCODEEND(1)
// 0x800526d0
// 0x800526d4
// TBCODESTART(2, "Update")
// 0x800526d8
// 0x800526dc
// 0x800526e0

// TBCODESTART(3, "Deb")
// 0x80052738
// 0x8005273c
// 0x80052740

// TBCODEEND(3)
// 0x800527dc
// 0x800527e0

// TBDRAWSTART(0, "Chars")
// 0x80052a98
// 0x80052a9c
// 0x80052aa0
// 0x80052aa4
// 0x80052aa8
// 0x80052aac

// TBDRAWSTART(1, "Crash")
// 0x80052b1c
// 0x80052b34
