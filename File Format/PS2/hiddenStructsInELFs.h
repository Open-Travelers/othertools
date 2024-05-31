// E3 DEMO:
	AKUAKU,  
	UKAUKA,  
	NGIN,  
	NTROPY,  
	ANGELWINGS,  
	SPINCRASH,  
	SPINCRASHARMS,  
	CRASHBODYPARTS,  
	AKUAKUFEATHERS,  
	PENGUINP,  
	SNOWHOG,  
	POLARGUARD,  
	PARROT,  
	PARROTFEATHERS,  
	MONKEY,  
	BANANA,  
	SHARK,  
	BLUESTARFISH,  
	GORILLA,  
	TURTLE,  
	DRAGONFLY,  
	CRAB,  
	CLAM,  
	DONKEY,  
	EEL,  
	FISH,  
	GECKO,  
	LIONFISH,  
	SALMON,  
	SUBMARINE,  
	VULTURE,  
	ANGLERFISH,  
	SCORPION,  
	MOLE,  
	BLUEBLOB,  
	GREENBLOB,  
	PURPLEBLOB,  
	REDBLOB,  
	SNOWMACHINE,  
	WARTHOG,  
	BABYRHINO,  
	GIRAFFE,  
	ELEPHANT,  
	HIPPO,  
	PENGUINF,  
	BIRD,  
	BIRD2,  
	BUTTERFLY,  
	BEE,  
	LION,  
	DADDYRHINO,  
	GLIDER,  
	SEAL,  
	NARWHAL,  
	KNIGHT,  
	WIZARD,  
	GYRO,  
	KOICARP,  
	NINJA,  
	BAT,  
	GONGBONGER,  
	FLAMINGO,  
	ZOFFA,  
	DRAGON,  
	HOVABLIMP,  
	MECH,  
	WUMPA,  
	MAMMOTH,  
	BOUNCYCRATE,  
	ARROWCRATE,  
	METALARROWCRATE,  
	AKUAKUCRATE,  
	CHECKPOINTCRATE,  
	METALEXCLAMATIONCRATE,  
	NITROEXCLAMATIONCRATE,  
	REINFORCEDCRATE,  
	ICECUBE,  
	DINGODILE,  
	DINGODILE2,  
	ZEPPLIN,  
	PLANE,  
	TINY,  
	ATLASPHERE,  
	CRASHSKELETON,  
	EARTHMASK,  
	FIREMASK,  
	WATERMASK,  
	WINDMASK,  
	PIG,  
	COW,  
	ZOFFANGIN,  
	ZOFFATINY,  
	ZOFFADINGODILE,  
	ZOFFANTROPY,  
	GAMETITLE,  
	LIZARD,  
	BLIMPICON,  
	MAXCHARACTERS,  
};





typedef struct
{
	char *file;
	short action;
	unsigned char blend_in_frames;
	unsigned char blend_out_frames;
	float speed;
	unsigned short flags;
	char pad1;
	char pad2;
	unsigned int levbits;  
}
AnimList;





enum
{
	JUMP_STAR=0,
	JUMP_NORMAL,
	JUMP_STANDING,
	JUMP_HIGH,
};




typedef struct
{
	char *path;
	char *file;
	char *name;
	AnimList *anim;
	float y_bot,y_top;
	float radius;
	float scale;
	float shadow_scale;
}
CharacterData;
extern CharacterData CData[];
extern signed char CRemap[];
 
 
 
enum
{
	ACT_ATTACK=0,
	ACT_ATTACK2,
	ACT_CRAWL,
	ACT_CROUCHDOWN,
	ACT_CROUCHIDLE,
	ACT_CROUCHUP,
	ACT_DIE,
	ACT_DIE2,
	ACT_DOWN,
	ACT_DROWN,
	ACT_EXPLODE,  
	ACT_FALL,
	ACT_FILL,
	ACT_FLY,
	ACT_GETUP,
	ACT_HANG,
	ACT_HOP,
	ACT_IDLE,
	ACT_IDLE00,  
	ACT_IDLE01,  
	ACT_IDLE02,  
	ACT_IDLE03,  
	ACT_IDLE04,  
	ACT_IDLE05,  
	ACT_IDLE06,  
	ACT_IDLE07,  
	ACT_IN,
	ACT_JUMP,
	ACT_JUMP2,
	ACT_LAND,
	ACT_LAND2,  
	ACT_LEFT,
	ACT_LOSE,
	ACT_OPEN,
	ACT_OUT,
	ACT_PULL,
	ACT_PUSH,
	ACT_RIGHT,
	ACT_RUN,
	ACT_RUN2,
	ACT_RUNNINGJUMP,  
	ACT_SHAKE,
	ACT_SIT,
	ACT_SKATE,
	ACT_SKID,
	ACT_SLAM,
	ACT_SLEEP,
	ACT_SLIDE,
	ACT_SOMERSAULT,
	ACT_SPENT,
	ACT_SPIN,  
	ACT_SPIN2,
	ACT_SPRINT,
	ACT_STARJUMP,
	ACT_SUPERSLAM,
	ACT_SWIM,
	ACT_SWING,
	ACT_TIPTOE,
	ACT_TRAPPED,
	ACT_TRAPPEDSHAKE,
	ACT_TURN,  
	ACT_UP,
	ACT_WADE,
	ACT_WAIT,
	ACT_WALK,
	ACT_WIN,
	ACT_FLYZOFFA,
	MAXACTIONS,  
};

 








 



typedef struct
{
	NUHGOBJ *obj;
	NUANIMDATA *anmdata[MAXACTIONS];
	AnimList *animlist[MAXACTIONS];
	NUANIMDATA *fanmdata[MAXACTIONS];
	AnimList *fanimlist[MAXACTIONS];
	SHADDATA *shaddata[MAXACTIONS];
	SHADHDR *shadhdr;
	SHADDATA *shaddatarest;
	short character;
	char pad1;
	char pad2;
	NUPOINTOFINTEREST *pLOCATOR[16];  
}
CharacterModel;
extern CharacterModel CModel[];
void LoadCharacterModels();


 
 
 

typedef struct
{
	NUVEC oldpos;  
	NUVEC newpos;  
	float time;  
	float duration;  
	float spins;
	float speed;
	float radius;
	float distance;
	float height;
	float lateral;  
	float scale;  
	unsigned short oldangle;  
	unsigned short angle;  
	unsigned short old_yrot;  
	unsigned short movflags;  
	unsigned short terflags;  
	unsigned short rotflags;  
	unsigned short rotspeed;
	signed char direction;
	signed char i0;  
	signed char i1;
	char pad1;
	char pad2;
	char pad3;
	float event_distance[2];  
	signed char event[2];  
	signed char event_branch[2];  
	signed char event_index[2];  
	unsigned char event_flags[2];





// 9-21-2001 (Master Disk):
NULISTLNK   *tail;                
}NULISTHDR;

 
 

int        NuListCheck(NULISTHDR *hdr);
void       NuListAppend(NULISTHDR *hdr, NULISTLNK *newlnk);                          
void       NuListInsert(NULISTHDR *hdr, NULISTLNK *newlnk);                          
void       NuListInsertBefore(NULISTHDR *hdr, NULISTLNK *lnk, NULISTLNK *newlnk);    
void       NuListInsertAfter(NULISTHDR *hdr, NULISTLNK *lnk, NULISTLNK *newlnk);     
void       NuListRemove(NULISTHDR *hdr, NULISTLNK *lnk);                             
NULISTLNK* NuListGetHead(NULISTHDR *hdr);                                            
NULISTLNK* NuListGetTail(NULISTHDR *hdr);                                            
NULISTLNK* NuListGetNext(NULISTHDR *hdr, NULISTLNK *lnk);                            
NULISTLNK* NuListGetPrev(NULISTHDR *hdr, NULISTLNK *lnk);                            


 
 

 
 



enum {
	NUMEM_MALLOC,
	NUMEM_DISCARDABLE
};

 
 

typedef struct numemblk_s {
   void        **free;               
   int         blksize;              
   int         blkcnt;               
   int         blkfree;              
}NUMEMBLK __attribute__((aligned(32)));

 
 

NUMEMBLK*   NuMemBlkCreateHigh(int size, int cnt, int mask);    
NUMEMBLK*   NuMemBlkCreate(int size, int cnt, int mask);        
void        NuMemBlkDestroy(NUMEMBLK *memblk);                  
void*       NuMemBlkAlloc(NUMEMBLK *memblk);                    
void        NuMemBlkFree(NUMEMBLK *memblk, void *ptr);          

 
 

 
 

void  NuAllocHighInit(void *addr, int size);
void* NuAllocHigh(int size);
void  NuFreeHigh(void *ptr);


 
 
void NuMemSet128(void *d, unsigned char v, int cnt);	 
void NuMemCopy128(void *d, void *s, int cnt);			 

 
 



















void*    NuMemAllocFn(int size, char *file, int line);
void*    NuMemReAllocFn(void *addr, int size, char *file, int line);
void     NuMemFreeFn(void *addr, char *file, int line);
int      NuMemValidateFn(void);
void     NuMemDumpFn(int bytes);
void     NuMemFlushFn(void);








# 1226 "../nu2.ps2/nu2api.h"



void *NuMemSetDiscardable(void *dbuff);    			 
void NuMemFlushDiscardable(void *dbuff);				 
void *NuMemCreateDiscardable(int size);				 
void NuMemDestroyDiscardable(void *dbuff);			 
void NuMemSetExternal(VARIPTR_T *ptr, VARIPTR_T *end);	 


 
 

 
 





 






 
 

typedef void NUERRORFUNC(char *msg,...);
typedef void NUWARNINGFUNC(char *msg,...);
typedef void NUDEBUGMSGFUNC(char *msg,...);

 
 

NUERRORFUNC*		NuErrorProlog(char *file, int line);
NUWARNINGFUNC*		NuWarningProlog(char *file, int line);
NUDEBUGMSGFUNC*	NuDebugMsgProlog(char *file, int line);
void              NuAssertMsg(char *file, int line, char *msg);

extern int errmsg_to_file;

 
 

 
 

void NuStrCat(char *str, char *ext);
void NuStrCpy(char *dst, char *src);
int NuStrLen(char *str);
char *NuStrStr(char *str, char *sub);
char *NuStrIStr(char *str, char *sub);

 
 

 
 



























 
 

typedef enum nufilemode_e {
	NUFILE_READ,
	NUFILE_WRITE,
	NUFILE_APPEND,
	NUFILE_READ_NOWAIT,
	NUFILE_MODE_CNT,
}NUFILEMODE;

typedef enum nufileseek_e {
	NUFILE_SEEK_START,
	NUFILE_SEEK_CURRENT,
	NUFILE_SEEK_END,
	NUFILE_SEEK_CNT,
}NUFILESEEK;

typedef enum nufilestatus_s {
	NUFILE_COMPLETED,
	NUFILE_EXECUTING,
}NUFILESTATUS;

typedef int NUFILE;

typedef struct nuiffhdr_s {
	int blk;
	int size;
}NUIFFHDR;

typedef struct nudfnode_s {
	short childix;	 
	short sibix;	 
	char *txt;		 
} NUDFNODE;

typedef struct nudatinfo_s {
	int foffset;	 
	int flen;		 
	int uplen;		 
	int ppack:1;	 
} NUDATFINFO;

typedef struct nudathdr_s {
	int ver;
	int nfiles;						 
	NUDATFINFO *finfo;			 
	int treecnt;					 
	NUDFNODE *filetree;			 
	int leafnamesize;				 
	char *leafnames;				 
	int df


// US Release:
} tGIF_P3CNT;



 
 
 
 
 
 
 
 
 
 
 






 
 
 
typedef struct {
	unsigned LOOPCNT:15;	 
	unsigned EOP    : 1;	 
	unsigned p0     :16;
} tGIF_P3TAG;



 

 
 
 
 
 
 
 
 
 
 
 























 
 
 
typedef struct {
	unsigned VPS: 2;	 
	unsigned VEW: 1;	 
	unsigned p0 : 3;
	unsigned MRK: 1;	 
	unsigned p1 : 1;
	unsigned VSS: 1;	 
	unsigned VFS: 1;	 
	unsigned VIS: 1;	 
	unsigned INT: 1;	 
	unsigned ERO: 1;	 
	unsigned ER1: 1;	 
	unsigned p2 :10;
	unsigned FQC: 4;	 
	unsigned p3 : 4;

} tVIF0_STAT;



 
 
 
 
 
 
 
 
 
 
 











 
 
 
typedef struct {
	unsigned RST: 1;	 
	unsigned FBK: 1;	 
	unsigned STP: 1;	 
	unsigned STC: 1;	 
	unsigned p0 :28;
} tVIF0_FBRST;



 
 
 
 
 
 
 
 
 
 
 









 
 
 
typedef struct {
	unsigned MII: 1;	 
	unsigned ME0: 1;	 
	unsigned ME1: 1;	 
	unsigned p0 :29;
} tVIF0_ERR;



 
 
 
 
 
 
 
 
 
 
 






 
 
 
typedef struct {
	unsigned MARK:16;	 
	unsigned p0  :16;
} tVIF_MARK;



 
 
 
 
 
 
 
 
 
 
 







 
 
 
typedef struct {
	unsigned CL: 8;		 
	unsigned WL: 8;		 
	unsigned p0:16;
} tVIF_CYCLE;



 
 
 
 
 
 
 
 
 
 
 





 
 
 
typedef struct {
	unsigned MOD: 2;	 
	unsigned p0 :30;
} tVIF_MODE;



 
 
 
 
 
 
 
 
 
 
 





 
 
 
typedef struct {
	unsigned num: 8;	 
	unsigned p0 :24;
} tVIF0_NUM;



 
 
 
 
 
 
 
 
 
 
 



































 
 
 
typedef struct {
	unsigned m0 :2;		 
	unsigned m1 :2;		 
	unsigned m2 :2;		 
	unsigned m3 :2;		 
	unsigned m4 :2;		 
	unsigned m5 :2;		 
	unsigned m6 :2;		 
	unsigned m7 :2;		 
	unsigned m8 :2;		 
	unsigned m9 :2;		 
	unsigned m10:2;		 
	unsigned m11:2;		 
	unsigned m12:2;		 
	unsigned m13:2;		 
	unsigned m14:2;		 
	unsigned m15:2;		 
} tVIF_MASK;



 
 
 
 
 
 
 
 
 
 
 









 
 
 
typedef struct {
	unsigned immediate :16;	 
	unsigned num       : 8;	 
	unsigned CMD       : 8;	 
} tVIF_CODE;



 
 
 
 
 
 
 
 
 
 
 





 
 
 
typedef struct {
	unsigned ITOPS :10;	 
	unsigned p0    :22;
} tVIF_ITOPS;



 
 
 
 
 
 
 
 
 
 
 





 
 
 
typedef struct {
	unsigned ITOP :10;	 
	unsigned p0   :22;
} tVIF_ITOP;



 
 
 
 
 
 
 
 
 
 
 





 
 
 
typedef struct {
	unsigned R0 :32;	 
} tVIF_R0;



 
 
 
 
 
 
 
 
 
 
 





 
 
 
typedef struct {
	unsigned R1 :32;	 
} tVIF_R1;



 
 
 
 
 
 
 
 
 
 
 





 
 
 
typedef struct {
	unsigned R2 :32;	 
} tVIF_R2;



 
 
 
 
 
 
 
 
 
 
 





 
 
 
typedef struct {
	unsigned R3 :32;	 
} tVIF_R3;



 
 
 
 
 
 
 
 
 
 
 





 
 
 
typedef struct {
	unsigned C0 :32;	 
} tVIF_C0;



 
 
 
 
 
 
 
 
 
 
 





 
 
 
typedef struct {
	unsigned C1 :32;	 
} tVIF_C1;



 
 
 
 
 
 
 
 
 
 
 





 
 
 
typedef struct {
	unsigned C2 :32;	 
} tVIF_C2;



 
 
 
 
 
 
 
 
 
 
 





 
 
 
typedef struct {
	unsigned C3 :32;	 
} tVIF_C3;



 
 
 
 
 
 
 
 
 
 
 





























 
 
 
typedef struct {
	unsigned VPS: 2;	 
	unsigned VEW: 1;	 
	unsigned VGW: 1;	 
	unsigned p0 : 2;
	unsigned MRK: 1;	 
	unsi