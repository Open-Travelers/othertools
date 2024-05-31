#ifndef _gc_dsp_h_
#define _gc_dsp_h_
#include "common.h"
extern unk __DSP_tmp_task;
extern unk __DSP_curr_task;
extern unk __DSP_last_task;
extern unk __DSP_first_task;
extern unk __DSP_rude_task;
extern unk __DSP_rude_task_pending;
extern void DSPSendMailToDSP(void /* TODO */);
extern void DSPCheckMailToDSP(void /* TODO */);
extern void DSPAssertTask(void /* TODO */);
extern void DSPCheckInit(void /* TODO */);
extern void DSPInit(void /* TODO */);
extern void DSPAddTask(void /* TODO */);
extern void DSPCheckMailFromDSP(void /* TODO */);
extern void DSPReadMailFromDSP(void /* TODO */);
extern void __DSP_debug_printf(void /* TODO */);
extern void __DSPHandler(void /* TODO */);
extern void __DSP_insert_task(void /* TODO */);
extern void __DSP_boot_task(void /* TODO */);
extern void __DSP_exec_task(void /* TODO */);
extern void __DSP_remove_task(void /* TODO */);
#endif
