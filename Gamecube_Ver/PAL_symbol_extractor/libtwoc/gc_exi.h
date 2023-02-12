#ifndef _gc_exi_h_
#define _gc_exi_h_
#include "common.h"
extern unk exit_demo_manual;
extern unk exit_demo_timeout;
extern void EXI2_Init(void /* TODO */);
extern void EXI2_EnableInterrupts(void /* TODO */);
extern void EXI2_Poll(void /* TODO */);
extern void EXI2_ReadN(void /* TODO */);
extern void EXI2_WriteN(void /* TODO */);
extern void EXI2_Reserve(void /* TODO */);
extern void EXI2_Unreserve(void /* TODO */);
extern void EXIInit(void /* TODO */);
extern void EXILock(void /* TODO */);
extern void EXISelect(void /* TODO */);
extern void EXIUnlock(void /* TODO */);
extern void EXIImm(void /* TODO */);
extern void EXISync(void /* TODO */);
extern void EXIDeselect(void /* TODO */);
extern void EXIDma(void /* TODO */);
extern void EXIImmEx(void /* TODO */);
extern void EXISetExiCallback(void /* TODO */);
extern void EXIProbe(void /* TODO */);
extern void EXIProbeEx(void /* TODO */);
extern void EXIGetState(void /* TODO */);
extern void EXIGetID(void /* TODO */);
extern void EXIAttach(void /* TODO */);
extern void EXIDetach(void /* TODO */);
extern void EXIClearInterrupts(void /* TODO */);
#endif
