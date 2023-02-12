#ifndef _gc_ax_h_
#define _gc_ax_h_
#include "common.h"
extern unk __AXClMode;
extern unk __AXLocalProfile;
extern unk ax_dram_image;
extern unk axDspSlave;
extern unk axDspSlaveLength;
extern void AXSetVoiceState(void /* TODO */);
extern void AXFreeVoice(void /* TODO */);
extern void AXAcquireVoice(void /* TODO */);
extern void AXInit(void /* TODO */);
extern void AXRegisterCallback(void /* TODO */);
extern void __AXAllocInit(void /* TODO */);
extern void __AXVPBInit(void /* TODO */);
extern void __AXSPBInit(void /* TODO */);
extern void __AXAuxInit(void /* TODO */);
extern void __AXClInit(void /* TODO */);
extern void __AXOutInit(void /* TODO */);
extern void __AXGetStackHead(void /* TODO */);
extern void __AXServiceCallbackStack(void /* TODO */);
extern void __AXPopCallbackStack(void /* TODO */);
extern void __AXRemoveFromStack(void /* TODO */);
extern void __AXPushFreeStack(void /* TODO */);
extern void __AXPushCallbackStack(void /* TODO */);
extern void __AXSetPBDefault(void /* TODO */);
extern void __AXGetAuxAInput(void /* TODO */);
extern void __AXGetAuxAOutput(void /* TODO */);
extern void __AXGetAuxBInput(void /* TODO */);
extern void __AXGetAuxBOutput(void /* TODO */);
extern void __AXProcessAux(void /* TODO */);
extern void __AXGetCommandListCycles(void /* TODO */);
extern void __AXGetCommandListAddress(void /* TODO */);
extern void __AXNextFrame(void /* TODO */);
extern void __AXGetStudio(void /* TODO */);
extern void __AXGetPBs(void /* TODO */);
extern void __AXOutNewFrame(void /* TODO */);
extern void __AXOutAiCallback(void /* TODO */);
extern void __AXOutInitDSP(void /* TODO */);
extern void __AXSyncPBs(void /* TODO */);
extern void __AXPrintStudio(void /* TODO */);
extern void __AXGetNumVoices(void /* TODO */);
extern void __AXGetCurrentProfile(void /* TODO */);
extern void __AXDepopVoice(void /* TODO */);
extern void __AXServiceVPB(void /* TODO */);
#endif
