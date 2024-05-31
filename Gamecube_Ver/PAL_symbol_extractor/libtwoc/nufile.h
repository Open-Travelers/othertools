#ifndef _nufile_h_
#define _nufile_h_
#include "common.h"
extern unk nufile_buffering_enabled;
extern s32   NuFileExists(char *path);
extern u32   NuFileLoadBuffer(char *path, void* buffer, u32 length);
extern void  NuMemFileOpen(void /* TODO */);
extern u32   NuFileReadInt(s32 file);
extern u8    NuFileReadChar(s32 file);
extern f32   NuFileReadFloat(s32 file);
extern void  NuFileClose(s32 file);
extern u16   NuFileReadShort(s32 file);
extern u32   NuFileSize(char *path);
extern s32   NuFileOpen(char *path, u32 mode);
extern u32   NuFileRead(s32 file, void *data, u32 length);
extern void  NuFileInitEx(void /* TODO */);
extern void* NuFileLoad(char *path);
extern void  NuFileBeginBlkRead(void /* TODO */);
extern void  NuFileEndBlkRead(void /* TODO */);
extern s32   NuFilePos(s32 file);
extern void  NuFileSeek(s32 file, s64 offset, u32 origin);
extern void  NuFileGetBadGameDisc(void /* TODO */);
extern void  NuMemFileClose(void /* TODO */);
extern void  NuDatFilePos(void /* TODO */);
extern void  NuDatFileRead(void /* TODO */);
extern void  NuDatFileSeek(void /* TODO */);
extern void  NuDatFileClose(void /* TODO */);
extern void  NuMemFilePos(void /* TODO */);
extern void  NuMemFileRead(void /* TODO */);
extern void  NuMemFileSeek(void /* TODO */);
#endif
