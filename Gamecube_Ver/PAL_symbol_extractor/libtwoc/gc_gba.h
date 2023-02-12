#ifndef _gc_gba_h_
#define _gc_gba_h_
#include "common.h"
extern unk GBABG_mtl;
extern unk GBABG_Ptr;
extern unk GBABG_tid;
extern unk GBAStatus;
extern unk __GBA;
extern unk __GBAReset;
extern void GBA_DownloadStart(void /* TODO */);
extern void GBA_Download(void /* TODO */);
extern void GBA_DownloadEnd(void /* TODO */);
extern void GBA_Draw(void /* TODO */);
extern void GBA_LoadFile(void /* TODO */);
extern void GBA_Init(void /* TODO */);
extern void GBAGetStatus(void /* TODO */);
extern void GBARead(void /* TODO */);
extern void GBAWrite(void /* TODO */);
extern void GBAReset(void /* TODO */);
extern void GBAJoyBootAsync(void /* TODO */);
extern void GBAGetProcessStatus(void /* TODO */);
extern void GBAInit(void /* TODO */);
extern void GBAGetStatusAsync(void /* TODO */);
extern void GBAResetAsync(void /* TODO */);
extern void __GBATransfer(void /* TODO */);
extern void __GBASyncCallback(void /* TODO */);
extern void __GBASync(void /* TODO */);
extern void __GBAX01(void /* TODO */);
extern void GBAReadAsync(void /* TODO */);
extern void __GBAX02(void /* TODO */);
extern void GBAWriteAsync(void /* TODO */);
extern void __GBASetDelay(void /* TODO */);
#endif
