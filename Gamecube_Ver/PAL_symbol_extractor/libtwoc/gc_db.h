#ifndef _gc_db_h_
#define _gc_db_h_
#include "common.h"
extern unk DBTimers;
extern unk __DBInterface;
extern unk DBStackEnd;
extern unk DBStack;
extern unk DBVerbose;
extern void DBTimerStart(void /* TODO */);
extern void DBTimerEnd(void /* TODO */);
extern void DBTimerReset(void /* TODO */);
extern void DBInit(void /* TODO */);
extern void DBInitComm(void /* TODO */);
extern void DBInitInterrupts(void /* TODO */);
extern void DBQueryData(void /* TODO */);
extern void DBRead(void /* TODO */);
extern void DBWrite(void /* TODO */);
extern void DBOpen(void /* TODO */);
extern void DBClose(void /* TODO */);
extern void __DBVECTOR(void /* TODO */);
extern void DBPrintf(void /* TODO */);
extern void __DBIsExceptionMarked(void /* TODO */);
extern void __DBExceptionDestination(void /* TODO */);
extern void __DBExceptionDestinationAux(void /* TODO */);
#endif
