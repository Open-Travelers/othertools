#ifndef _LIBTWOC_H_
#define _LIBTWOC_H_
#include "common.h"
#include <stdarg.h>
extern u32 Level;
extern f32 YTOL;

extern u8* superbuffer_ptr;
extern u8* superbuffer_base;
extern u8* superbuffer_end;
extern u32 superbuffersize;
extern int printf(char* format, ...);
extern int sprintf(char *buffer, char* format, ...);

extern void* NuMemAlloc(u32 size);
extern void NuMemFree(void* mem);

extern void* NuFileLoad(char* path);
extern u32 NuFileLoadBuffer(char *path, void* buffer, u32 length);
extern int NuFileOpen(char *filename, u32 mode);
extern int NuFilePos(int file);
extern u32 NuFileRead(int file, void *data, u32 length);
extern void NuFileSeek(int file, long offset, u32 origin);
extern u32 NuFileSize(char *path);

extern u8 NuFileReadChar(u32 file);
extern u16 NuFileReadShort(u32 file);
extern u32 NuFileReadInt(u32 file);
extern f32 NuFileReadFloat(u32 file);
    
extern void NuStopLoadScreen(void);

typedef void NuErrorFunction_t(char *message, va_list args);
extern NuErrorFunction_t* NuErrorProlog(char *file, u32 line);

extern void* memcpy(void *dest, void *src, u32 size);
#endif