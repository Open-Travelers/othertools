#ifndef _gc_dvd_h_
#define _gc_dvd_h_
#include "common.h"
extern unk __DVDLongFileNameFlag;
extern unk __DVDThreadQueue;
extern void DVDOpen(void /* TODO */);
extern void DVDReadPrio(void /* TODO */);
extern void DVDInit(void /* TODO */);
extern void DVDReadAsyncPrio(void /* TODO */);
extern void DVDGetDriveStatus(void /* TODO */);
extern void DVDClose(void /* TODO */);
extern void DVDGetCurrentDiskID(void /* TODO */);
extern void DVDGetCommandBlockStatus(void /* TODO */);
extern void DVDStopStreamAtEndAsync(void /* TODO */);
extern void DVDPrepareStreamAsync(void /* TODO */);
extern void DVDGetStreamErrorStatusAsync(void /* TODO */);
extern void DVDGetStreamPlayAddrAsync(void /* TODO */);
extern void DVDCancelStreamAsync(void /* TODO */);
extern void DVDReadAbsAsyncForBS(void /* TODO */);
extern void DVDSetAutoInvalidation(void /* TODO */);
extern void __DVDPrepareResetAsync(void /* TODO */);
extern void DVDCheckDisk(void /* TODO */);
extern void __DVDFSInit(void /* TODO */);
extern void DVDConvertPathToEntrynum(void /* TODO */);
extern void DVDGetCurrentDir(void /* TODO */);
extern void DVDCancel(void /* TODO */);
extern void DVDReadAbsAsyncPrio(void /* TODO */);
extern void DVDPrepareStreamAbsAsync(void /* TODO */);
extern void DVDReset(void /* TODO */);
extern void DVDReadDiskID(void /* TODO */);
extern void DVDCancelAsync(void /* TODO */);
extern void __DVDClearWaitingQueue(void /* TODO */);
extern void __DVDInitWA(void /* TODO */);
extern void __DVDInterruptHandler(void /* TODO */);
extern void DVDLowRead(void /* TODO */);
extern void __DVDStoreErrorCode(void /* TODO */);
extern void DVDLowStopMotor(void /* TODO */);
extern void DVDLowRequestError(void /* TODO */);
extern void DVDLowSeek(void /* TODO */);
extern void DVDLowAudioBufferConfig(void /* TODO */);
extern void DVDLowReadDiskID(void /* TODO */);
extern void DVDLowWaitCoverClose(void /* TODO */);
extern void __DVDCheckWaitingQueue(void /* TODO */);
extern void __DVDPopWaitingQueue(void /* TODO */);
extern void DVDLowRequestAudioStatus(void /* TODO */);
extern void DVDLowAudioStream(void /* TODO */);
extern void DVDLowInquiry(void /* TODO */);
extern void __DVDPushWaitingQueue(void /* TODO */);
extern void DVDLowReset(void /* TODO */);
extern void DVDLowBreak(void /* TODO */);
extern void __DVDDequeueWaitingQueue(void /* TODO */);
extern void DVDLowClearCallback(void /* TODO */);
extern void __DVDLowSetWAType(void /* TODO */);
#endif