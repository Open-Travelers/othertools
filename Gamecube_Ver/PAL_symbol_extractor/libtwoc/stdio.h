#ifndef _stdio_h_
#define _stdio_h_
#include "common.h"
extern s32   sprintf(char *buffer, char *format, ...);
extern s32   printf(char *format, ...);
extern s32   vsprintf(char *buffer, char *format, ...);
extern FILE* fopen(char *filename, char *modes);
extern s32   fclose(FILE *stream);
extern s32   fseek(FILE *stream, s64 offset, s32 whence);
extern s32   fread(void *ptr, s32 size, s32 count, FILE *stream);
extern s32   vfprintf(FILE *stream, char *format, ...);
extern s32   vprintf(char *format, ...);
#endif
