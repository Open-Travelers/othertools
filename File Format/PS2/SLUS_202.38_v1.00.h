typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined3;
typedef unsigned int    undefined4;
typedef unsigned long    undefined6;
typedef unsigned long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef struct _sceDmaTag _sceDmaTag, *P_sceDmaTag;


/* WARNING! conflicting data type names: /amod_struct.h/ushort - /ushort */

typedef ushort u_short;


/* WARNING! conflicting data type names: /amod_struct.h/uchar - /uchar */

typedef uchar u_char;


/* WARNING! conflicting data type names: /amod_struct.h/uint - /uint */

typedef uint u_int;

struct _sceDmaTag {
    u_short qwc;
    u_char mark;
    u_char id;
    struct _sceDmaTag *next;
    u_int p[2];
};

typedef enum actions {
    ACT_ATTACK=0,
    ACT_ATTACK2=1,
    ACT_CRAWL=2,
    ACT_CROUCHDOWN=3,
    ACT_CROUCHIDLE=4,
    ACT_CROUCHUP=5,
    ACT_DIE=6,
    ACT_DIE2=7,
    ACT_DOWN=8,
    ACT_DROWN=9,
    ACT_EXPLODE=10,
    ACT_FALL=11,
    ACT_FILL=12,
    ACT_FLY=13,
    ACT_GETUP=14,
    ACT_HANG=15,
    ACT_HOP=16,
    ACT_IDLE=17,
    ACT_IDLE00=18,
    ACT_IDLE01=19,
    ACT_IDLE02=20,
    ACT_IDLE03=21,
    ACT_IDLE04=22,
    ACT_IDLE05=23,
    ACT_IDLE06=24,
    ACT_IDLE07=25,
    ACT_IN=26,
    ACT_JUMP=27,
    ACT_JUMP2=28,
    ACT_LAND=29,
    ACT_LAND2=30,
    ACT_LEFT=31,
    ACT_LOSE=32,
    ACT_OPEN=33,
    ACT_OUT=34,
    ACT_PULL=35,
    ACT_PUSH=36,
    ACT_RIGHT=37,
    ACT_RUN=38,
    ACT_RUN2=39,
    ACT_RUNNINGJUMP=40,
    ACT_SHAKE=41,
    ACT_SIT=42,
    ACT_SKATE=43,
    ACT_SKID=44,
    ACT_SLAM=45,
    ACT_SLEEP=46,
    ACT_SLIDE=47,
    ACT_SOMERSAULT=48,
    ACT_SPENT=49,
    ACT_SPIN=50,
    ACT_SPIN2=51,
    ACT_SPRINT=52,
    ACT_STARJUMP=53,
    ACT_SUPERSLAM=54,
    ACT_SWIM=55,
    ACT_SWING=56,
    ACT_TIPTOE=57,
    ACT_TRAPPED=58,
    ACT_TRAPPEDSHAKE=59,
    ACT_TURN=60,
    ACT_UP=61,
    ACT_WADE=62,
    ACT_WAIT=63,
    ACT_WALK=64,
    ACT_WIN=65,
    ACT_FLYZOFFA=66,
    MAXACTIONS=67
} actions;

typedef struct AI_tmp AI_tmp, *PAI_tmp;

typedef struct nuvec_s nuvec_s, *Pnuvec_s;

typedef struct nuhspecial_s nuhspecial_s, *Pnuhspecial_s;

typedef struct nugscn_s nugscn_s, *Pnugscn_s;

typedef struct nuspecial_s nuspecial_s, *Pnuspecial_s;

typedef struct numtl_s numtl_s, *Pnumtl_s;

typedef struct nugobj_s nugobj_s, *Pnugobj_s;

typedef struct nuinstance_s nuinstance_s, *Pnuinstance_s;

typedef struct nugspline_s nugspline_s, *Pnugspline_s;

typedef struct nuinstanim_s nuinstanim_s, *Pnuinstanim_s;

typedef struct nuanimdata_s nuanimdata_s, *Pnuanimdata_s;

typedef struct nutexanim_s nutexanim_s, *Pnutexanim_s;

typedef struct numtx_s numtx_s, *Pnumtx_s;

typedef struct nuspecialflags nuspecialflags, *Pnuspecialflags;


/* WARNING! conflicting data type names: /amod_struct.h/ulong - /ulong */

typedef struct rndrstream_s rndrstream_s, *Prndrstream_s;

typedef struct rndrstream_s RNDRSTREAM;

typedef union variptr_WoC_u variptr_WoC_u, *Pvariptr_WoC_u;

typedef union variptr_WoC_u VARIPTR;

typedef struct numtlattrib_s numtlattrib_s, *Pnumtlattrib_s;

typedef struct numtlattrib_s NUMTLATTRIB;

typedef struct nucolour3_s nucolour3_s, *Pnucolour3_s;

typedef struct nucolour3_s NUCOLOUR3;

typedef union nufx_u nufx_u, *Pnufx_u;

typedef union nufx_u NUFX;

typedef enum gobjtype_s {
    NUGOBJ_MESH=0,
    NUGOBJ_FACEON=1
} gobjtype_s;

typedef enum gobjtype_s NUGOBJTYPE;

typedef struct nugeom_s nugeom_s, *Pnugeom_s;

typedef struct nugeom_s NUGEOM;

typedef struct nufaceongeom_s nufaceongeom_s, *Pnufaceongeom_s;

typedef struct nufaceongeom_s NUFACEONGEOM;

typedef struct nuvec_s NUVEC;

typedef struct nucolourref_s nucolourref_s, *Pnucolourref_s;

typedef struct nucolourref_s NUCOLOURREF;

typedef struct nuinstflags_s nuinstflags_s, *Pnuinstflags_s;

typedef struct nuanimdatachunk_s nuanimdatachunk_s, *Pnuanimdatachunk_s;

typedef struct nutexanimenv_s nutexanimenv_s, *Pnutexanimenv_s;

typedef struct nutexanimenv_s NUTEXANIMENV;

typedef struct nuvec4_s nuvec4_s, *Pnuvec4_s;

typedef struct nuvec4_s NUVEC4;

typedef struct nuivec_s nuivec_s, *Pnuivec_s;

typedef struct nuivec_s NUIVEC;

typedef struct nuivec4_s nuivec4_s, *Pnuivec4_s;

typedef struct nuivec4_s NUIVEC4;

typedef struct numtx_s NUMTX;

typedef struct nuvutri_s nuvutri_s, *Pnuvutri_s;

typedef struct NUTRISTREAM_s NUTRISTREAM_s, *PNUTRISTREAM_s;

typedef struct _sceDmaTag sceDmaTag;

typedef void *sceGifTag;

typedef struct sceGsZbuf sceGsZbuf, *PsceGsZbuf;

typedef void *sceGsTest;

typedef void *sceGsPrmode;

typedef struct numtl_s NUMTL;

typedef struct nutristream_s nutristream_s, *Pnutristream_s;

typedef struct nutristream_s NUTRISTREAM;

typedef enum nuvtxtype_e {
    NUVT_TC1=0,
    NUVT_TLTC1=1,
    NUVT_VUVTX=2,
    NUVT_VUVTXC=3,
    NUVT_FORCE_DWORD=2147483647
} nuvtxtype_e;

typedef enum nuvtxtype_e NUVTXTYPE;

typedef struct nuvtx_tc1_s nuvtx_tc1_s, *Pnuvtx_tc1_s;

typedef struct nuvtx_tc1_s NUVTX_TC1;

typedef struct nuprim_s nuprim_s, *Pnuprim_s;

typedef struct nuprim_s NUPRIM;

typedef struct nuskin_s nuskin_s, *Pnuskin_s;

typedef struct nuskin_s NUSKIN;

typedef struct NUVTXSKININFO_s NUVTXSKININFO_s, *PNUVTXSKININFO_s;

typedef struct NUVTXSKININFO_s NUVTXSKININFO;

typedef struct skinv_s skinv_s, *Pskinv_s;

typedef struct skinv_s SKINV;

typedef struct NUBLENDGEOM_s NUBLENDGEOM_s, *PNUBLENDGEOM_s;

typedef struct NUBLENDGEOM_s NUBLENDGEOM;

typedef enum nufaceontype_s {
    NUFACEON_FACEON=0,
    NUFACEON_FACEY=1
} nufaceontype_s;

typedef enum nufaceontype_s NUFACEONTYPE;

typedef struct nufaceon_s nufaceon_s, *Pnufaceon_s;

typedef struct nufaceon_s NUFACEON;

typedef struct nuanimcurveset_s nuanimcurveset_s, *Pnuanimcurveset_s;

typedef struct nuanimcurveset_s NUANIMCURVESET;

typedef struct nuanimkey_s nuanimkey_s, *Pnuanimkey_s;

typedef struct nuanimkey_s NUANIMKEY;

typedef struct nuanimcurve_s nuanimcurve_s, *Pnuanimcurve_s;

typedef struct nuanimcurve_s NUANIMCURVE;

typedef struct nutexanimprog_s nutexanimprog_s, *Pnutexanimprog_s;

typedef struct nutexanimprog_s NUTEXANIMPROG;

typedef struct nuvupnt_s nuvupnt_s, *Pnuvupnt_s;

typedef struct nuvupnt_s NUVUPNT;

typedef struct nuvutri_s NUVUTRI;

typedef int NUCOLOUR32;

typedef enum nuprimtype_e {
    NUPT_POINT=0,
    NUPT_LINE=1,
    NUPT_TRI=2,
    NUPT_TRISTRIP=3,
    NUPT_NDXLINE=4,
    NUPT_NDXTRI=5,
    NUPT_NDXTRISTRIP=6,
    NUPT_BEZPATCH=7,
    NUPT_BEZTRI=8,
    NUPT_FACEON=9
} nuprimtype_e;

typedef enum nuprimtype_e NUPRIMTYPE;

typedef short WORD;

typedef struct nuplane_s nuplane_s, *Pnuplane_s;

typedef struct nuplane_s NUPLANE;

typedef union nx nx, *Pnx;

struct nugspline_s {
    short len;
    short ptsize;
    char *name;
    char *pts;
};

struct NUBLENDGEOM_s {
    int nblends;
    NUVEC **blend_offsets;
    int *ix;
    NUVEC *offsets;
};

struct nuanimdatachunk_s {
    int numnodes;
    int num_valid_animcurvesets;
    NUANIMCURVESET **animcurvesets;
    NUANIMKEY *keys;
    NUANIMCURVE *curves;
};

struct nutexanimenv_s {
    NUTEXANIMPROG *prog;
    int pc;
    int rep_count[16];
    int rep_start[16];
    int rep_ix;
    int ra[16];
    int ra_ix;
    int pause;
    int pause_r;
    int pause_cnt;
    short *tids;
    int tex_ix;
    int dynalloc;
};

struct nuvec4_s {
    float x;
    float y;
    float z;
    float w;
};

struct nuplane_s {
    float a;
    float b;
    float c;
    float d;
};

union variptr_WoC_u {
    void *voidptr;
    char *s8;
    uchar *u8;
    ushort *u16;
    short *s16;
    uint *u32;
    uint *s32;
    ulong *u64;
    float *f32;
    NUVEC *vec3;
    NUVEC4 *vec4;
    NUIVEC *ivec3;
    NUIVEC4 *ivec4;
    NUMTX *mtx44;
    struct numtl_s *mtl;
    struct nuvutri_s *vutri;
    struct NUTRISTREAM_s *tristream;
    uint *viftag;
    uint intaddr;
    sceDmaTag *dmatag;
    sceGifTag *giftag;
    struct sceGsZbuf *zbuf;
    sceGsTest *test;
    sceGsPrmode *prmode;
};

union nx {
    float f32;
    ushort u16[2];
    uchar u8[4];
};

struct nuvec_s {
    float x;
    float y;
    float z;
};

struct nufaceon_s {
    NUVEC point;
    float width;
    float height;
    NUCOLOUR32 colour;
};

struct nuinstflags_s {
    int visible:1;
    int onscreen:1;
    int visitest:1;
    int isanimated:1;
};

struct numtx_s {
    float _00;
    float _01;
    float _02;
    float _03;
    float _10;
    float _11;
    float _12;
    float _13;
    float _20;
    float _21;
    float _22;
    float _23;
    float _30;
    float _31;
    float _32;
    float _33;
};

struct nuinstance_s {
    struct numtx_s matrix;
    int objid;
    struct nuinstflags_s flags;
    struct nuinstanim_s *anim;
    short room_group;
    char special_flag;
    char pad[1];
};

struct nuivec4_s {
    int x;
    int y;
    int z;
    int w;
};

struct nuvupnt_s {
    float px;
    float py;
    float pz;
    union nx nx;
    int u;
    int v;
    int ny;
    int nz;
    int r;
    int g;
    int b;
    int a;
};

struct nugscn_s {
    short *tids;
    int numtid;
    struct numtl_s **mtls;
    int nummtl;
    int numgobj;
    struct nugobj_s **gobjs;
    int numinstance;
    struct nuinstance_s *instances;
    int numspecial;
    struct nuspecial_s *specials;
    void *splinedata;
    int numsplines;
    struct nugspline_s *splines;
    char *nametable;
    int numexspecials;
    struct nuspecial_s *exspecials;
    int exallocix;
    struct nuinstanim_s *instanimblock;
    struct nuanimdata_s **instanimdata;
    int numinstanims;
    int numinstanceixs;
    short *instanceixs;
    short crossfade;
    short crossfaderate;
    int crossfadegobj;
    int crossfadefirst;
    int numtexanims;
    struct nutexanim_s *texanims;
    short *texanim_tids;
    short *instancelightix;
};

struct nuivec_s {
    int x;
    int y;
    int z;
};

struct nuspecialflags {
    int ext_onscreen:1;
    int ext_vis:1;
    int ext:1;
};

struct nuspecial_s {
    struct numtx_s mtx;
    struct nuinstance_s *instance;
    char *name;
    struct nuspecialflags flags;
    int pad;
};

struct nuanimcurve_s {
    uint mask;
    NUANIMKEY *animkeys;
    uint numkeys;
    uint flags;
};

struct nutexanim_s {
    struct nutexanim_s *succ;
    struct nutexanim_s *prev;
    short *tids;
    short numtids;
    short dynalloc;
    NUTEXANIMENV *env;
    char *ntaname;
    char *scriptname;
};

union nufx_u {
    void *voidptr;
    uchar u8;
    char s8;
    ushort u16;
    short s16;
    uint u32;
    int s32;
    float f32;
};

struct nutexanimprog_s {
    struct nutexanimprog_s *succ;
    struct nutexanimprog_s *prev;
    char name[32];
    int on_sig[32];
    int off_sig[32];
    uint on_mask;
    uint off_mask;
    short xdef_ids[32];
    short xdef_addrs[32];
    int xdef_cnt;
    short eop;
    short dynalloc;
    short code[1];
};

struct nuvutri_s {
    sceDmaTag dt;
    NUVUPNT pnts[3];
};

struct nutristream_s {
    int count;
    int pad[3];
    NUVUTRI tris[1];
};

struct nuhspecial_s {
    struct nugscn_s *scene;
    struct nuspecial_s *special;
};

struct AI_tmp {
    struct nuvec_s oldpos;
    struct nuvec_s newpos;
    struct nuvec_s wobblepos;
    float time;
    float duration;
    float spins;
    float speed;
    float radius;
    float distance;
    float height;
    float lateral;
    float scale;
    float wobble;
    ushort oldangle;
    ushort angle;
    ushort old_yrot;
    ushort movflags;
    ushort terflags;
    ushort rotflags;
    ushort rotspeed;
    ushort rotadjust;
    ushort wobble_ang;
    ushort wobble_speed;
    char direction;
    char i0;
    char i1;
    char idle_update;
    void *event_function[2];
    float event_distance[2];
    short event_branch[2];
    char event[2];
    char event_index[2];
    uchar event_flags[2];
    uchar event_occured[2];
    ushort attack_locator_bits;
    char pad1;
    char pad2;
    float attack_locator_radius;
    struct nuhspecial_s obj;
    char kill;
    char locator_kill;
    short force_action;
    short look_creature;
    uchar count;
    uchar hits;
};

struct nuanimdata_s {
    float time;
    char *node_name;
    int nchunks;
    struct nuanimdatachunk_s **chunks;
};

struct nuanimcurveset_s {
    int flags;
    float *constants;
    NUANIMCURVE **set;
    char ncurves;
    char pad[3];
};

struct nufaceongeom_s {
    struct nufaceongeom_s *next;
    NUMTL *mtl;
    int mtl_id;
    NUFACEONTYPE faceon_type;
    NUFACEON *faceons;
    int nfaceons;
    float faceon_radius;
    void *dmastream;
    undefined field8_0x20;
    undefined field9_0x21;
    undefined field10_0x22;
    undefined field11_0x23;
    undefined field12_0x24;
    undefined field13_0x25;
    undefined field14_0x26;
    undefined field15_0x27;
    undefined field16_0x28;
    undefined field17_0x29;
    undefined field18_0x2a;
    undefined field19_0x2b;
    undefined field20_0x2c;
    undefined field21_0x2d;
    undefined field22_0x2e;
    undefined field23_0x2f;
    undefined field24_0x30;
    undefined field25_0x31;
    undefined field26_0x32;
    undefined field27_0x33;
    undefined field28_0x34;
    undefined field29_0x35;
    undefined field30_0x36;
    undefined field31_0x37;
    undefined field32_0x38;
    undefined field33_0x39;
    undefined field34_0x3a;
    undefined field35_0x3b;
    undefined field36_0x3c;
    undefined field37_0x3d;
    undefined field38_0x3e;
    undefined field39_0x3f;
    undefined field40_0x40;
    undefined field41_0x41;
    undefined field42_0x42;
    undefined field43_0x43;
    undefined field44_0x44;
    undefined field45_0x45;
    undefined field46_0x46;
    undefined field47_0x47;
    undefined field48_0x48;
    undefined field49_0x49;
    undefined field50_0x4a;
    undefined field51_0x4b;
    undefined field52_0x4c;
    undefined field53_0x4d;
    undefined field54_0x4e;
    undefined field55_0x4f;
};

struct nucolour3_s {
    float r;
    float g;
    float b;
};

struct nucolourref_s {
    uint *addr;
    int count;
    uint cols[2][1];
};

struct nuvtx_tc1_s {
    NUVEC pnt;
    NUVEC nrm;
    NUCOLOUR32 diffuse;
    float tc[2];
};

struct nugobj_s {
    struct nugobj_s *sysnext;
    struct nugobj_s *syslast;
    NUGOBJTYPE type;
    NUGEOM *geom;
    NUFACEONGEOM *faceon_geom;
    float r;
    float r2;
    NUVEC min;
    NUVEC max;
    NUVEC cntr;
    float cntr_r;
    float cntr_r2;
    int ngobjs;
    struct nugobj_s *next_gobj;
    NUVEC origin;
    NUCOLOURREF *colourref;
    int colourref_size;
    NUCOLOURREF *focolourref;
    int focolourref_size;
};

struct numtlattrib_s {
    uint alpha:4;
    uint filter:2;
    uint fx:2;
    uint utc:2;
    uint vtc:2;
    uint cull:2;
    uint zmode:2;
    uint lighting:2;
    uint colour:1;
    uint fill:1;
    uint atst:3;
    uint aref:8;
    uint afail:2;
    uint uvmode:1;
    uint ot:1;
    uint shade:1;
    uint date:1;
    uint datm:1;
    uint pad:25;
};

struct nuprim_s {
    struct nuprim_s *next;
    NUPRIMTYPE type;
    int cnt;
    int max;
    WORD *vid;
    NUPLANE *pln;
};

struct NUVTXSKININFO_s {
    float wts[3];
    uchar joint_ixs[3];
    uchar pad;
};

struct nuinstanim_s {
    struct numtx_s Mtx;
    float tfactor;
    float tfirst;
    float tinterval;
    float ltime;
    uint oscillate:1;
    uint repeating:1;
    uint backwards:1;
    uint waiting:1;
    uint playing:1;
    int ipad[2];
    uchar anim_ix;
    char pad[3];
};

struct skinv_s {
    NUVEC4 *pnts;
    NUVEC4 *nrms;
    ushort *pid;
    ushort *nid;
};

struct sceGsZbuf {
    ulong ZBP:9;
    ulong pad09:15;
    ulong PSM:4;
    ulong pad28:4;
    ulong ZMSK:1;
    ulong pad33:31;
};

struct nuskin_s {
    struct nuskin_s *next;
    int vtxoffset;
    int vtxcnt;
    int mtxcnt;
    int *mtxid;
    float *weights;
    int pcnt;
    int ncnt;
    int pbase;
    int nbase;
};

struct rndrstream_s {
    VARIPTR base;
    VARIPTR ptr;
    VARIPTR t_base;
    VARIPTR t_ptr;
    uint gs_ptr;
    struct numtl_s *mtl;
    uchar *mpg;
    uint drawpri;
    int local_mtx_id;
    short view_mtx_id;
    short scissor_id;
    short xyoffset_id;
    short fx_mtx_id;
    VARIPTR misc_addr;
    uint attr;
    int tid;
};

struct nugeom_s {
    struct nugeom_s *next;
    NUMTL *mtl;
    void *dmastream;
    void *skindma;
    NUTRISTREAM *tristream;
    int mtl_id;
    NUVTXTYPE vtxtype;
    int vtxflags;
    int vtxcnt;
    int vtxmax;
    NUVTX_TC1 *vtxptr;
    NUPRIM *prim;
    NUSKIN *skin;
    NUVTXSKININFO *vtxskininfo;
    NUVEC *cntrl_pts;
    int ncntrl_pts;
    int dma_len;
    SKINV *skinv;
    NUBLENDGEOM *blendgeom;
    int id;
};

struct numtl_s { /* WoC New */
    ulong sbdata[36];
    int used:1;
    int fromblock:1;
    int intalloc:1;
    int zupd:1;
    int sbexists:1;
    int renderplane_id:8;
    char accesscount;
    char curr_rp;
    RNDRSTREAM rs;
    VARIPTR vuattr;
    struct numtl_s *snext;
    struct numtl_s *slast;
    struct numtl_s *next;
    NUMTLATTRIB attrib;
    NUCOLOUR3 ambient;
    NUCOLOUR3 diffuse;
    NUFX fx1;
    NUFX fx2;
    NUFX fx3;
    NUFX fx4;
    float power;
    float alpha;
    int tid;
    int sort_pri;
    short K;
    uchar L;
    uchar uanmmode:4;
    uchar vanmmode:4;
    float du;
    float dv;
    float su;
    float sv;
    struct numtl_s *multi_next;
    char context;
    uchar fxid;
    uchar special_id;
    uchar inuvanimlist;
    uint fb_mask;
    VARIPTR callbackdata;
};

struct NUTRISTREAM_s {
};

struct nuanimkey_s {
    float time;
    float dtime;
    float c;
    float d;
};

typedef struct anim_s anim_s, *Panim_s;

struct anim_s {
    float anim_time;
    float blend_src_time;
    float blend_dst_time;
    short action;
    short oldaction;
    short newaction;
    short blend_src_action;
    short blend_dst_action;
    short blend_frame;
    short blend_frames;
    char blend;
    uchar flags;
};

typedef struct AnimList AnimList, *PAnimList;

struct AnimList {
    char *file;
    short action;
    uchar blend_in_frames;
    uchar blend_out_frames;
    float speed;
    ushort flags;
    char pad1;
    char pad2;
    uint levbits;
};


/* WARNING! conflicting data type names: /amod_struct.h/byte - /byte */

typedef struct CharacterData_E3 CharacterData_E3, *PCharacterData_E3;

struct CharacterData_E3 {
    char *path;
    char *file;
    char *name;
    struct AnimList *anim;
    float y_bot;
    float y_top;
    float radius;
    float scale;
    float shadow_scale;
};

typedef struct CharacterData_NGC CharacterData_NGC, *PCharacterData_NGC;

struct CharacterData_NGC {
    char *path;
    char *file;
    char *name;
    struct AnimList *anim;
    float radius;
    struct nuvec_s min;
    struct nuvec_s max;
    float scale;
    float shadow_scale;
};

typedef struct CharacterModel CharacterModel, *PCharacterModel;

typedef struct NUHGOBJ_s NUHGOBJ_s, *PNUHGOBJ_s;

typedef struct nuanimdata__s nuanimdata__s, *Pnuanimdata__s;

typedef struct nuanimdata__s NUANIMDATA;

typedef struct NUSHADOWDATA_s NUSHADOWDATA_s, *PNUSHADOWDATA_s;

typedef struct NUSHADOWDATA_s NUSHADOWDATA;


/* WARNING! conflicting data type names: /amod_struct.h/undefined - /undefined */

typedef struct NUPOINTOFINTEREST_s NUPOINTOFINTEREST_s, *PNUPOINTOFINTEREST_s;

typedef struct numtl_WoC numtl_WoC, *Pnumtl_WoC;

typedef struct NUJOINTDATA_s NUJOINTDATA_s, *PNUJOINTDATA_s;

typedef struct NUJOINTDATA_s NUJOINTDATA;

typedef struct NULAYERDATA_s NULAYERDATA_s, *PNULAYERDATA_s;

typedef struct NULAYERDATA_s NULAYERDATA;

typedef struct NUPOINTOFINTEREST_s NUPOINTOFINTEREST;

typedef struct NUCOLLISIONDATA_s NUCOLLISIONDATA_s, *PNUCOLLISIONDATA_s;

typedef struct NUCOLLISIONDATA_s NUCOLLISIONDATA;

typedef struct nutexanim_s NUTEXANIM;

typedef struct nuanimdatachunk_s NUANIMDATACHUNK;

typedef struct NUELLIPSOID_s NUELLIPSOID_s, *PNUELLIPSOID_s;

typedef struct NUELLIPSOID_s NUELLIPSOID;

typedef struct NUCYLINDER_s NUCYLINDER_s, *PNUCYLINDER_s;

typedef struct NUCYLINDER_s NUCYLINDER;

typedef struct NUSHADOWMESH_s NUSHADOWMESH_s, *PNUSHADOWMESH_s;

typedef struct NUSHADOWMESH_s NUSHADOWMESH;

typedef struct nugobj_s NUGOBJ;

typedef struct NUCOLLISIONHDR_s NUCOLLISIONHDR_s, *PNUCOLLISIONHDR_s;

typedef struct NUCOLLISIONHDR_s NUCOLLISIONHDR;

struct NUELLIPSOID_s {
    NUVEC centre;
    NUVEC y_axis;
    NUVEC x_axis;
    NUVEC z_axis;
};

struct NUCOLLISIONHDR_s {
    int type;
    void *data;
};

struct NUSHADOWDATA_s {
    NUELLIPSOID *ellipsoids;
    NUCYLINDER *cylinders;
    NUSHADOWMESH *shadow_meshes;
    uchar nellipsoids;
    uchar ncylinders;
    uchar nshadow_meshes;
    uchar joint;
};

struct NULAYERDATA_s {
    char *name;
    NUGOBJ **gobjs;
    NUGOBJ *skin_gobj;
    NUGOBJ **blend_gobjs;
    NUGOBJ *blend_skin_gobj;
};

struct NUCYLINDER_s {
    NUVEC centre;
    NUVEC y_axis;
    NUVEC4 x_axis;
    NUVEC4 z_axis;
    char pad[8];
};

struct numtl_WoC {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    int field4_0x4;
    int field5_0x8;
    int field6_0xc;
    int field7_0x10;
    int field8_0x14;
    int field9_0x18;
    int field10_0x1c;
    undefined field11_0x20;
    undefined field12_0x21;
    undefined field13_0x22;
    undefined field14_0x23;
    undefined field15_0x24;
    undefined field16_0x25;
    undefined field17_0x26;
    undefined field18_0x27;
    undefined field19_0x28;
    undefined field20_0x29;
    undefined field21_0x2a;
    undefined field22_0x2b;
    undefined field23_0x2c;
    undefined field24_0x2d;
    undefined field25_0x2e;
    undefined field26_0x2f;
    undefined field27_0x30;
    undefined field28_0x31;
    undefined field29_0x32;
    undefined field30_0x33;
    undefined field31_0x34;
    undefined field32_0x35;
    undefined field33_0x36;
    undefined field34_0x37;
    undefined field35_0x38;
    undefined field36_0x39;
    undefined field37_0x3a;
    undefined field38_0x3b;
    undefined field39_0x3c;
    undefined field40_0x3d;
    undefined field41_0x3e;
    undefined field42_0x3f;
    undefined field43_0x40;
    undefined field44_0x41;
    undefined field45_0x42;
    undefined field46_0x43;
    undefined field47_0x44;
    undefined field48_0x45;
    undefined field49_0x46;
    undefined field50_0x47;
    undefined field51_0x48;
    undefined field52_0x49;
    undefined field53_0x4a;
    undefined field54_0x4b;
    undefined field55_0x4c;
    undefined field56_0x4d;
    undefined field57_0x4e;
    undefined field58_0x4f;
    undefined field59_0x50;
    undefined field60_0x51;
    undefined field61_0x52;
    undefined field62_0x53;
    undefined field63_0x54;
    undefined field64_0x55;
    undefined field65_0x56;
    undefined field66_0x57;
    undefined field67_0x58;
    undefined field68_0x59;
    undefined field69_0x5a;
    undefined field70_0x5b;
    undefined field71_0x5c;
    undefined field72_0x5d;
    undefined field73_0x5e;
    undefined field74_0x5f;
    undefined field75_0x60;
    undefined field76_0x61;
    undefined field77_0x62;
    undefined field78_0x63;
    undefined field79_0x64;
    undefined field80_0x65;
    undefined field81_0x66;
    undefined field82_0x67;
    undefined field83_0x68;
    undefined field84_0x69;
    undefined field85_0x6a;
    undefined field86_0x6b;
    undefined field87_0x6c;
    undefined field88_0x6d;
    undefined field89_0x6e;
    undefined field90_0x6f;
    undefined field91_0x70;
    undefined field92_0x71;
    undefined field93_0x72;
    undefined field94_0x73;
    undefined field95_0x74;
    undefined field96_0x75;
    undefined field97_0x76;
    undefined field98_0x77;
    undefined field99_0x78;
    undefined field100_0x79;
    undefined field101_0x7a;
    undefined field102_0x7b;
    undefined field103_0x7c;
    undefined field104_0x7d;
    undefined field105_0x7e;
    undefined field106_0x7f;
    undefined field107_0x80;
    undefined field108_0x81;
    undefined field109_0x82;
    undefined field110_0x83;
    undefined field111_0x84;
    undefined field112_0x85;
    undefined field113_0x86;
    undefined field114_0x87;
    undefined field115_0x88;
    undefined field116_0x89;
    undefined field117_0x8a;
    undefined field118_0x8b;
    undefined field119_0x8c;
    undefined field120_0x8d;
    undefined field121_0x8e;
    undefined field122_0x8f;
    undefined field123_0x90;
    undefined field124_0x91;
    undefined field125_0x92;
    undefined field126_0x93;
    undefined field127_0x94;
    undefined field128_0x95;
    undefined field129_0x96;
    undefined field130_0x97;
    undefined field131_0x98;
    undefined field132_0x99;
    undefined field133_0x9a;
    undefined field134_0x9b;
    undefined field135_0x9c;
    undefined field136_0x9d;
    undefined field137_0x9e;
    undefined field138_0x9f;
    undefined field139_0xa0;
    undefined field140_0xa1;
    undefined field141_0xa2;
    undefined field142_0xa3;
    undefined field143_0xa4;
    undefined field144_0xa5;
    undefined field145_0xa6;
    undefined field146_0xa7;
    undefined field147_0xa8;
    undefined field148_0xa9;
    undefined field149_0xaa;
    undefined field150_0xab;
    undefined field151_0xac;
    undefined field152_0xad;
    undefined field153_0xae;
    undefined field154_0xaf;
    undefined field155_0xb0;
    undefined field156_0xb1;
    undefined field157_0xb2;
    undefined field158_0xb3;
    undefined field159_0xb4;
    undefined field160_0xb5;
    undefined field161_0xb6;
    undefined field162_0xb7;
    undefined field163_0xb8;
    undefined field164_0xb9;
    undefined field165_0xba;
    undefined field166_0xbb;
    undefined field167_0xbc;
    undefined field168_0xbd;
    undefined field169_0xbe;
    undefined field170_0xbf;
    undefined field171_0xc0;
    undefined field172_0xc1;
    undefined field173_0xc2;
    undefined field174_0xc3;
    undefined field175_0xc4;
    undefined field176_0xc5;
    undefined field177_0xc6;
    undefined field178_0xc7;
    undefined field179_0xc8;
    undefined field180_0xc9;
    undefined field181_0xca;
    undefined field182_0xcb;
    undefined field183_0xcc;
    undefined field184_0xcd;
    undefined field185_0xce;
    undefined field186_0xcf;
    undefined field187_0xd0;
    undefined field188_0xd1;
    undefined field189_0xd2;
    undefined field190_0xd3;
    undefined field191_0xd4;
    undefined field192_0xd5;
    undefined field193_0xd6;
    undefined field194_0xd7;
    undefined field195_0xd8;
    undefined field196_0xd9;
    undefined field197_0xda;
    undefined field198_0xdb;
    undefined field199_0xdc;
    undefined field200_0xdd;
    undefined field201_0xde;
    undefined field202_0xdf;
    undefined field203_0xe0;
    undefined field204_0xe1;
    undefined field205_0xe2;
    undefined field206_0xe3;
    undefined field207_0xe4;
    undefined field208_0xe5;
    undefined field209_0xe6;
    undefined field210_0xe7;
    undefined field211_0xe8;
    undefined field212_0xe9;
    undefined field213_0xea;
    undefined field214_0xeb;
    undefined field215_0xec;
    undefined field216_0xed;
    undefined field217_0xee;
    undefined field218_0xef;
    undefined field219_0xf0;
    undefined field220_0xf1;
    undefined field221_0xf2;
    undefined field222_0xf3;
    undefined field223_0xf4;
    undefined field224_0xf5;
    undefined field225_0xf6;
    undefined field226_0xf7;
    undefined field227_0xf8;
    undefined field228_0xf9;
    undefined field229_0xfa;
    undefined field230_0xfb;
    undefined field231_0xfc;
    undefined field232_0xfd;
    undefined field233_0xfe;
    undefined field234_0xff;
    undefined field235_0x100;
    undefined field236_0x101;
    undefined field237_0x102;
    undefined field238_0x103;
    undefined field239_0x104;
    undefined field240_0x105;
    undefined field241_0x106;
    undefined field242_0x107;
    undefined field243_0x108;
    undefined field244_0x109;
    undefined field245_0x10a;
    undefined field246_0x10b;
    undefined field247_0x10c;
    undefined field248_0x10d;
    undefined field249_0x10e;
    undefined field250_0x10f;
    undefined field251_0x110;
    undefined field252_0x111;
    undefined field253_0x112;
    undefined field254_0x113;
    undefined field255_0x114;
    undefined field256_0x115;
    undefined field257_0x116;
    undefined field258_0x117;
    undefined field259_0x118;
    undefined field260_0x119;
    undefined field261_0x11a;
    undefined field262_0x11b;
    undefined field263_0x11c;
    undefined field264_0x11d;
    undefined field265_0x11e;
    undefined field266_0x11f;
    undefined field267_0x120;
    undefined field268_0x121;
    undefined field269_0x122;
    undefined field270_0x123;
    struct rndrstream_s rs;
    undefined field272_0x15c;
    undefined field273_0x15d;
    undefined field274_0x15e;
    undefined field275_0x15f;
    struct numtl_WoC *snext;
    struct numtl_WoC *field277_0x164;
    struct numtlattrib_s attrib;
    undefined field279_0x170;
    undefined field280_0x171;
    undefined field281_0x172;
    undefined field282_0x173;
    undefined field283_0x174;
    undefined field284_0x175;
    undefined field285_0x176;
    undefined field286_0x177;
    undefined field287_0x178;
    undefined field288_0x179;
    undefined field289_0x17a;
    undefined field290_0x17b;
    undefined field291_0x17c;
    undefined field292_0x17d;
    undefined field293_0x17e;
    undefined field294_0x17f;
    undefined field295_0x180;
    undefined field296_0x181;
    undefined field297_0x182;
    undefined field298_0x183;
    undefined field299_0x184;
    undefined field300_0x185;
    undefined field301_0x186;
    undefined field302_0x187;
    undefined field303_0x188;
    undefined field304_0x189;
    undefined field305_0x18a;
    undefined field306_0x18b;
    undefined field307_0x18c;
    undefined field308_0x18d;
    undefined field309_0x18e;
    undefined field310_0x18f;
    undefined field311_0x190;
    undefined field312_0x191;
    undefined field313_0x192;
    undefined field314_0x193;
    undefined field315_0x194;
    undefined field316_0x195;
    undefined field317_0x196;
    undefined field318_0x197;
    undefined field319_0x198;
    undefined field320_0x199;
    undefined field321_0x19a;
    undefined field322_0x19b;
    undefined field323_0x19c;
    undefined field324_0x19d;
    undefined field325_0x19e;
    undefined field326_0x19f;
    undefined field327_0x1a0;
    undefined field328_0x1a1;
    undefined field329_0x1a2;
    undefined field330_0x1a3;
    int tpid;
    int field332_0x1a8;
    undefined field333_0x1ac;
    undefined field334_0x1ad;
    undefined field335_0x1ae;
    undefined field336_0x1af;
    undefined field337_0x1b0;
    undefined field338_0x1b1;
    undefined field339_0x1b2;
    undefined field340_0x1b3;
    undefined field341_0x1b4;
    undefined field342_0x1b5;
    undefined field343_0x1b6;
    undefined field344_0x1b7;
    undefined field345_0x1b8;
    undefined field346_0x1b9;
    undefined field347_0x1ba;
    undefined field348_0x1bb;
    undefined field349_0x1bc;
    undefined field350_0x1bd;
    undefined field351_0x1be;
    undefined field352_0x1bf;
    int field353_0x1c0;
    undefined field354_0x1c4;
    undefined field355_0x1c5;
    char special_id;
    undefined field357_0x1c7;
    undefined field358_0x1c8;
    undefined field359_0x1c9;
    undefined field360_0x1ca;
    undefined field361_0x1cb;
    undefined field362_0x1cc;
    undefined field363_0x1cd;
    undefined field364_0x1ce;
    undefined field365_0x1cf;
};

struct NUCOLLISIONDATA_s {
    uint nitems;
    NUCOLLISIONHDR *hdrs;
};

struct NUSHADOWMESH_s {
    NUVEC4 *normals;
    NUVEC4 *verts;
};

struct CharacterModel {
    struct NUHGOBJ_s *obj;
    NUANIMDATA *anmdata[67];
    struct AnimList *animlist[67];
    NUANIMDATA *fanmdata[67];
    struct AnimList *fanimlist[67];
    NUSHADOWDATA *shaddata[67];
    void *shadhdr;
    NUSHADOWDATA *shaddatarest;
    short character;
    char pad1;
    char pad2;
    undefined field11_0x54c;
    undefined field12_0x54d;
    undefined field13_0x54e;
    undefined field14_0x54f;
    undefined field15_0x550;
    undefined field16_0x551;
    undefined field17_0x552;
    undefined field18_0x553;
    undefined field19_0x554;
    undefined field20_0x555;
    undefined field21_0x556;
    undefined field22_0x557;
    undefined field23_0x558;
    undefined field24_0x559;
    undefined field25_0x55a;
    undefined field26_0x55b;
    undefined field27_0x55c;
    undefined field28_0x55d;
    undefined field29_0x55e;
    undefined field30_0x55f;
    undefined field31_0x560;
    undefined field32_0x561;
    undefined field33_0x562;
    undefined field34_0x563;
    undefined field35_0x564;
    undefined field36_0x565;
    undefined field37_0x566;
    undefined field38_0x567;
    undefined field39_0x568;
    undefined field40_0x569;
    undefined field41_0x56a;
    undefined field42_0x56b;
    undefined field43_0x56c;
    undefined field44_0x56d;
    undefined field45_0x56e;
    undefined field46_0x56f;
    undefined field47_0x570;
    undefined field48_0x571;
    undefined field49_0x572;
    undefined field50_0x573;
    undefined field51_0x574;
    undefined field52_0x575;
    undefined field53_0x576;
    undefined field54_0x577;
    undefined field55_0x578;
    undefined field56_0x579;
    undefined field57_0x57a;
    undefined field58_0x57b;
    undefined field59_0x57c;
    undefined field60_0x57d;
    undefined field61_0x57e;
    undefined field62_0x57f;
    undefined field63_0x580;
    undefined field64_0x581;
    undefined field65_0x582;
    undefined field66_0x583;
    undefined field67_0x584;
    undefined field68_0x585;
    undefined field69_0x586;
    undefined field70_0x587;
    undefined field71_0x588;
    undefined field72_0x589;
    undefined field73_0x58a;
    undefined field74_0x58b;
    undefined field75_0x58c;
    undefined field76_0x58d;
    undefined field77_0x58e;
    undefined field78_0x58f;
    undefined field79_0x590;
    undefined field80_0x591;
    undefined field81_0x592;
    undefined field82_0x593;
    undefined field83_0x594;
    undefined field84_0x595;
    undefined field85_0x596;
    undefined field86_0x597;
    undefined field87_0x598;
    undefined field88_0x599;
    undefined field89_0x59a;
    undefined field90_0x59b;
    undefined field91_0x59c;
    undefined field92_0x59d;
    undefined field93_0x59e;
    undefined field94_0x59f;
    undefined field95_0x5a0;
    undefined field96_0x5a1;
    undefined field97_0x5a2;
    undefined field98_0x5a3;
    undefined field99_0x5a4;
    undefined field100_0x5a5;
    undefined field101_0x5a6;
    undefined field102_0x5a7;
    undefined field103_0x5a8;
    undefined field104_0x5a9;
    undefined field105_0x5aa;
    undefined field106_0x5ab;
    undefined field107_0x5ac;
    undefined field108_0x5ad;
    undefined field109_0x5ae;
    undefined field110_0x5af;
    undefined field111_0x5b0;
    undefined field112_0x5b1;
    undefined field113_0x5b2;
    undefined field114_0x5b3;
    undefined field115_0x5b4;
    undefined field116_0x5b5;
    undefined field117_0x5b6;
    undefined field118_0x5b7;
    undefined field119_0x5b8;
    undefined field120_0x5b9;
    undefined field121_0x5ba;
    undefined field122_0x5bb;
    undefined field123_0x5bc;
    undefined field124_0x5bd;
    undefined field125_0x5be;
    undefined field126_0x5bf;
    undefined field127_0x5c0;
    undefined field128_0x5c1;
    undefined field129_0x5c2;
    undefined field130_0x5c3;
    undefined field131_0x5c4;
    undefined field132_0x5c5;
    undefined field133_0x5c6;
    undefined field134_0x5c7;
    undefined field135_0x5c8;
    undefined field136_0x5c9;
    undefined field137_0x5ca;
    undefined field138_0x5cb;
    undefined field139_0x5cc;
    undefined field140_0x5cd;
    undefined field141_0x5ce;
    undefined field142_0x5cf;
    undefined field143_0x5d0;
    undefined field144_0x5d1;
    undefined field145_0x5d2;
    undefined field146_0x5d3;
    undefined field147_0x5d4;
    undefined field148_0x5d5;
    undefined field149_0x5d6;
    undefined field150_0x5d7;
    undefined field151_0x5d8;
    undefined field152_0x5d9;
    undefined field153_0x5da;
    undefined field154_0x5db;
    undefined field155_0x5dc;
    undefined field156_0x5dd;
    undefined field157_0x5de;
    undefined field158_0x5df;
    undefined field159_0x5e0;
    undefined field160_0x5e1;
    undefined field161_0x5e2;
    undefined field162_0x5e3;
    undefined field163_0x5e4;
    undefined field164_0x5e5;
    undefined field165_0x5e6;
    undefined field166_0x5e7;
    undefined field167_0x5e8;
    undefined field168_0x5e9;
    undefined field169_0x5ea;
    undefined field170_0x5eb;
    undefined field171_0x5ec;
    undefined field172_0x5ed;
    undefined field173_0x5ee;
    undefined field174_0x5ef;
    undefined field175_0x5f0;
    undefined field176_0x5f1;
    undefined field177_0x5f2;
    undefined field178_0x5f3;
    undefined field179_0x5f4;
    undefined field180_0x5f5;
    undefined field181_0x5f6;
    undefined field182_0x5f7;
    undefined field183_0x5f8;
    undefined field184_0x5f9;
    undefined field185_0x5fa;
    undefined field186_0x5fb;
    undefined field187_0x5fc;
    undefined field188_0x5fd;
    undefined field189_0x5fe;
    undefined field190_0x5ff;
    undefined field191_0x600;
    undefined field192_0x601;
    undefined field193_0x602;
    undefined field194_0x603;
    undefined field195_0x604;
    undefined field196_0x605;
    undefined field197_0x606;
    undefined field198_0x607;
    undefined field199_0x608;
    undefined field200_0x609;
    undefined field201_0x60a;
    undefined field202_0x60b;
    undefined field203_0x60c;
    undefined field204_0x60d;
    undefined field205_0x60e;
    undefined field206_0x60f;
    undefined field207_0x610;
    undefined field208_0x611;
    undefined field209_0x612;
    undefined field210_0x613;
    undefined field211_0x614;
    undefined field212_0x615;
    undefined field213_0x616;
    undefined field214_0x617;
    undefined field215_0x618;
    undefined field216_0x619;
    undefined field217_0x61a;
    undefined field218_0x61b;
    undefined field219_0x61c;
    undefined field220_0x61d;
    undefined field221_0x61e;
    undefined field222_0x61f;
    undefined field223_0x620;
    undefined field224_0x621;
    undefined field225_0x622;
    undefined field226_0x623;
    undefined field227_0x624;
    undefined field228_0x625;
    undefined field229_0x626;
    undefined field230_0x627;
    undefined field231_0x628;
    undefined field232_0x629;
    undefined field233_0x62a;
    undefined field234_0x62b;
    undefined field235_0x62c;
    undefined field236_0x62d;
    undefined field237_0x62e;
    undefined field238_0x62f;
    undefined field239_0x630;
    undefined field240_0x631;
    undefined field241_0x632;
    undefined field242_0x633;
    undefined field243_0x634;
    undefined field244_0x635;
    undefined field245_0x636;
    undefined field246_0x637;
    undefined field247_0x638;
    undefined field248_0x639;
    undefined field249_0x63a;
    undefined field250_0x63b;
    undefined field251_0x63c;
    undefined field252_0x63d;
    undefined field253_0x63e;
    undefined field254_0x63f;
    undefined field255_0x640;
    undefined field256_0x641;
    undefined field257_0x642;
    undefined field258_0x643;
    undefined field259_0x644;
    undefined field260_0x645;
    undefined field261_0x646;
    undefined field262_0x647;
    undefined field263_0x648;
    undefined field264_0x649;
    undefined field265_0x64a;
    undefined field266_0x64b;
    undefined field267_0x64c;
    undefined field268_0x64d;
    undefined field269_0x64e;
    undefined field270_0x64f;
    undefined field271_0x650;
    undefined field272_0x651;
    undefined field273_0x652;
    undefined field274_0x653;
    undefined field275_0x654;
    undefined field276_0x655;
    undefined field277_0x656;
    undefined field278_0x657;
    undefined field279_0x658;
    undefined field280_0x659;
    undefined field281_0x65a;
    undefined field282_0x65b;
    undefined field283_0x65c;
    undefined field284_0x65d;
    undefined field285_0x65e;
    undefined field286_0x65f;
    undefined field287_0x660;
    undefined field288_0x661;
    undefined field289_0x662;
    undefined field290_0x663;
    undefined field291_0x664;
    undefined field292_0x665;
    undefined field293_0x666;
    undefined field294_0x667;
    undefined field295_0x668;
    undefined field296_0x669;
    undefined field297_0x66a;
    undefined field298_0x66b;
    undefined field299_0x66c;
    undefined field300_0x66d;
    undefined field301_0x66e;
    undefined field302_0x66f;
    undefined field303_0x670;
    undefined field304_0x671;
    undefined field305_0x672;
    undefined field306_0x673;
    undefined field307_0x674;
    undefined field308_0x675;
    undefined field309_0x676;
    undefined field310_0x677;
    undefined field311_0x678;
    undefined field312_0x679;
    undefined field313_0x67a;
    undefined field314_0x67b;
    undefined field315_0x67c;
    undefined field316_0x67d;
    undefined field317_0x67e;
    undefined field318_0x67f;
    undefined field319_0x680;
    undefined field320_0x681;
    undefined field321_0x682;
    undefined field322_0x683;
    undefined field323_0x684;
    undefined field324_0x685;
    undefined field325_0x686;
    undefined field326_0x687;
    undefined field327_0x688;
    undefined field328_0x689;
    undefined field329_0x68a;
    undefined field330_0x68b;
    undefined field331_0x68c;
    undefined field332_0x68d;
    undefined field333_0x68e;
    undefined field334_0x68f;
    undefined field335_0x690;
    undefined field336_0x691;
    undefined field337_0x692;
    undefined field338_0x693;
    undefined field339_0x694;
    undefined field340_0x695;
    undefined field341_0x696;
    undefined field342_0x697;
    undefined field343_0x698;
    undefined field344_0x699;
    undefined field345_0x69a;
    undefined field346_0x69b;
    undefined field347_0x69c;
    undefined field348_0x69d;
    undefined field349_0x69e;
    undefined field350_0x69f;
    undefined field351_0x6a0;
    undefined field352_0x6a1;
    undefined field353_0x6a2;
    undefined field354_0x6a3;
    undefined field355_0x6a4;
    undefined field356_0x6a5;
    undefined field357_0x6a6;
    undefined field358_0x6a7;
    undefined field359_0x6a8;
    undefined field360_0x6a9;
    undefined field361_0x6aa;
    undefined field362_0x6ab;
    undefined field363_0x6ac;
    undefined field364_0x6ad;
    undefined field365_0x6ae;
    undefined field366_0x6af;
    undefined field367_0x6b0;
    undefined field368_0x6b1;
    undefined field369_0x6b2;
    undefined field370_0x6b3;
    undefined field371_0x6b4;
    undefined field372_0x6b5;
    undefined field373_0x6b6;
    undefined field374_0x6b7;
    undefined field375_0x6b8;
    undefined field376_0x6b9;
    undefined field377_0x6ba;
    undefined field378_0x6bb;
    undefined field379_0x6bc;
    undefined field380_0x6bd;
    undefined field381_0x6be;
    undefined field382_0x6bf;
    undefined field383_0x6c0;
    undefined field384_0x6c1;
    undefined field385_0x6c2;
    undefined field386_0x6c3;
    undefined field387_0x6c4;
    undefined field388_0x6c5;
    undefined field389_0x6c6;
    undefined field390_0x6c7;
    undefined field391_0x6c8;
    undefined field392_0x6c9;
    undefined field393_0x6ca;
    undefined field394_0x6cb;
    undefined field395_0x6cc;
    undefined field396_0x6cd;
    undefined field397_0x6ce;
    undefined field398_0x6cf;
    undefined field399_0x6d0;
    undefined field400_0x6d1;
    undefined field401_0x6d2;
    undefined field402_0x6d3;
    undefined field403_0x6d4;
    undefined field404_0x6d5;
    undefined field405_0x6d6;
    undefined field406_0x6d7;
    undefined field407_0x6d8;
    undefined field408_0x6d9;
    undefined field409_0x6da;
    undefined field410_0x6db;
    undefined field411_0x6dc;
    undefined field412_0x6dd;
    undefined field413_0x6de;
    undefined field414_0x6df;
    undefined field415_0x6e0;
    undefined field416_0x6e1;
    undefined field417_0x6e2;
    undefined field418_0x6e3;
    undefined field419_0x6e4;
    undefined field420_0x6e5;
    undefined field421_0x6e6;
    undefined field422_0x6e7;
    undefined field423_0x6e8;
    undefined field424_0x6e9;
    undefined field425_0x6ea;
    undefined field426_0x6eb;
    undefined field427_0x6ec;
    undefined field428_0x6ed;
    undefined field429_0x6ee;
    undefined field430_0x6ef;
    undefined field431_0x6f0;
    undefined field432_0x6f1;
    undefined field433_0x6f2;
    undefined field434_0x6f3;
    undefined field435_0x6f4;
    undefined field436_0x6f5;
    undefined field437_0x6f6;
    undefined field438_0x6f7;
    undefined field439_0x6f8;
    undefined field440_0x6f9;
    undefined field441_0x6fa;
    undefined field442_0x6fb;
    undefined field443_0x6fc;
    undefined field444_0x6fd;
    undefined field445_0x6fe;
    undefined field446_0x6ff;
    undefined field447_0x700;
    undefined field448_0x701;
    undefined field449_0x702;
    undefined field450_0x703;
    undefined field451_0x704;
    undefined field452_0x705;
    undefined field453_0x706;
    undefined field454_0x707;
    undefined field455_0x708;
    undefined field456_0x709;
    undefined field457_0x70a;
    undefined field458_0x70b;
    undefined field459_0x70c;
    undefined field460_0x70d;
    undefined field461_0x70e;
    undefined field462_0x70f;
    undefined field463_0x710;
    undefined field464_0x711;
    undefined field465_0x712;
    undefined field466_0x713;
    undefined field467_0x714;
    undefined field468_0x715;
    undefined field469_0x716;
    undefined field470_0x717;
    undefined field471_0x718;
    undefined field472_0x719;
    undefined field473_0x71a;
    undefined field474_0x71b;
    undefined field475_0x71c;
    undefined field476_0x71d;
    undefined field477_0x71e;
    undefined field478_0x71f;
    undefined field479_0x720;
    undefined field480_0x721;
    undefined field481_0x722;
    undefined field482_0x723;
    undefined field483_0x724;
    undefined field484_0x725;
    undefined field485_0x726;
    undefined field486_0x727;
    undefined field487_0x728;
    undefined field488_0x729;
    undefined field489_0x72a;
    undefined field490_0x72b;
    undefined field491_0x72c;
    undefined field492_0x72d;
    undefined field493_0x72e;
    undefined field494_0x72f;
    undefined field495_0x730;
    undefined field496_0x731;
    undefined field497_0x732;
    undefined field498_0x733;
    undefined field499_0x734;
    undefined field500_0x735;
    undefined field501_0x736;
    undefined field502_0x737;
    undefined field503_0x738;
    undefined field504_0x739;
    undefined field505_0x73a;
    undefined field506_0x73b;
    undefined field507_0x73c;
    undefined field508_0x73d;
    undefined field509_0x73e;
    undefined field510_0x73f;
    undefined field511_0x740;
    undefined field512_0x741;
    undefined field513_0x742;
    undefined field514_0x743;
    undefined field515_0x744;
    undefined field516_0x745;
    undefined field517_0x746;
    undefined field518_0x747;
    undefined field519_0x748;
    undefined field520_0x749;
    undefined field521_0x74a;
    undefined field522_0x74b;
    undefined field523_0x74c;
    undefined field524_0x74d;
    undefined field525_0x74e;
    undefined field526_0x74f;
    undefined field527_0x750;
    undefined field528_0x751;
    undefined field529_0x752;
    undefined field530_0x753;
    undefined field531_0x754;
    undefined field532_0x755;
    undefined field533_0x756;
    undefined field534_0x757;
    undefined field535_0x758;
    undefined field536_0x759;
    undefined field537_0x75a;
    undefined field538_0x75b;
    undefined field539_0x75c;
    undefined field540_0x75d;
    undefined field541_0x75e;
    undefined field542_0x75f;
    undefined field543_0x760;
    undefined field544_0x761;
    undefined field545_0x762;
    undefined field546_0x763;
    undefined field547_0x764;
    undefined field548_0x765;
    undefined field549_0x766;
    undefined field550_0x767;
    undefined field551_0x768;
    undefined field552_0x769;
    undefined field553_0x76a;
    undefined field554_0x76b;
    undefined field555_0x76c;
    undefined field556_0x76d;
    undefined field557_0x76e;
    undefined field558_0x76f;
    undefined field559_0x770;
    undefined field560_0x771;
    undefined field561_0x772;
    undefined field562_0x773;
    undefined field563_0x774;
    undefined field564_0x775;
    undefined field565_0x776;
    undefined field566_0x777;
    undefined field567_0x778;
    undefined field568_0x779;
    undefined field569_0x77a;
    undefined field570_0x77b;
    undefined field571_0x77c;
    undefined field572_0x77d;
    undefined field573_0x77e;
    undefined field574_0x77f;
    undefined field575_0x780;
    undefined field576_0x781;
    undefined field577_0x782;
    undefined field578_0x783;
    undefined field579_0x784;
    undefined field580_0x785;
    undefined field581_0x786;
    undefined field582_0x787;
    undefined field583_0x788;
    undefined field584_0x789;
    undefined field585_0x78a;
    undefined field586_0x78b;
    undefined field587_0x78c;
    undefined field588_0x78d;
    undefined field589_0x78e;
    undefined field590_0x78f;
    undefined field591_0x790;
    undefined field592_0x791;
    undefined field593_0x792;
    undefined field594_0x793;
    undefined field595_0x794;
    undefined field596_0x795;
    undefined field597_0x796;
    undefined field598_0x797;
    undefined field599_0x798;
    undefined field600_0x799;
    undefined field601_0x79a;
    undefined field602_0x79b;
    undefined field603_0x79c;
    undefined field604_0x79d;
    undefined field605_0x79e;
    undefined field606_0x79f;
    undefined field607_0x7a0;
    undefined field608_0x7a1;
    undefined field609_0x7a2;
    undefined field610_0x7a3;
    undefined field611_0x7a4;
    undefined field612_0x7a5;
    undefined field613_0x7a6;
    undefined field614_0x7a7;
    undefined field615_0x7a8;
    undefined field616_0x7a9;
    undefined field617_0x7aa;
    undefined field618_0x7ab;
    undefined field619_0x7ac;
    undefined field620_0x7ad;
    undefined field621_0x7ae;
    undefined field622_0x7af;
    undefined field623_0x7b0;
    undefined field624_0x7b1;
    undefined field625_0x7b2;
    undefined field626_0x7b3;
    undefined field627_0x7b4;
    undefined field628_0x7b5;
    undefined field629_0x7b6;
    undefined field630_0x7b7;
    undefined field631_0x7b8;
    undefined field632_0x7b9;
    undefined field633_0x7ba;
    undefined field634_0x7bb;
    undefined field635_0x7bc;
    undefined field636_0x7bd;
    undefined field637_0x7be;
    undefined field638_0x7bf;
    undefined field639_0x7c0;
    undefined field640_0x7c1;
    undefined field641_0x7c2;
    undefined field642_0x7c3;
    undefined field643_0x7c4;
    undefined field644_0x7c5;
    undefined field645_0x7c6;
    undefined field646_0x7c7;
    undefined field647_0x7c8;
    undefined field648_0x7c9;
    undefined field649_0x7ca;
    undefined field650_0x7cb;
    undefined field651_0x7cc;
    undefined field652_0x7cd;
    undefined field653_0x7ce;
    undefined field654_0x7cf;
    undefined field655_0x7d0;
    undefined field656_0x7d1;
    undefined field657_0x7d2;
    undefined field658_0x7d3;
    undefined field659_0x7d4;
    undefined field660_0x7d5;
    undefined field661_0x7d6;
    undefined field662_0x7d7;
    undefined field663_0x7d8;
    undefined field664_0x7d9;
    undefined field665_0x7da;
    undefined field666_0x7db;
    undefined field667_0x7dc;
    undefined field668_0x7dd;
    undefined field669_0x7de;
    undefined field670_0x7df;
    undefined field671_0x7e0;
    undefined field672_0x7e1;
    undefined field673_0x7e2;
    undefined field674_0x7e3;
    undefined field675_0x7e4;
    undefined field676_0x7e5;
    undefined field677_0x7e6;
    undefined field678_0x7e7;
    undefined field679_0x7e8;
    undefined field680_0x7e9;
    undefined field681_0x7ea;
    undefined field682_0x7eb;
    undefined field683_0x7ec;
    undefined field684_0x7ed;
    undefined field685_0x7ee;
    undefined field686_0x7ef;
    undefined field687_0x7f0;
    undefined field688_0x7f1;
    undefined field689_0x7f2;
    undefined field690_0x7f3;
    undefined field691_0x7f4;
    undefined field692_0x7f5;
    undefined field693_0x7f6;
    undefined field694_0x7f7;
    undefined field695_0x7f8;
    undefined field696_0x7f9;
    undefined field697_0x7fa;
    undefined field698_0x7fb;
    undefined field699_0x7fc;
    undefined field700_0x7fd;
    undefined field701_0x7fe;
    undefined field702_0x7ff;
    undefined field703_0x800;
    undefined field704_0x801;
    undefined field705_0x802;
    undefined field706_0x803;
    undefined field707_0x804;
    undefined field708_0x805;
    undefined field709_0x806;
    undefined field710_0x807;
    undefined field711_0x808;
    undefined field712_0x809;
    undefined field713_0x80a;
    undefined field714_0x80b;
    undefined field715_0x80c;
    undefined field716_0x80d;
    undefined field717_0x80e;
    undefined field718_0x80f;
    undefined field719_0x810;
    undefined field720_0x811;
    undefined field721_0x812;
    undefined field722_0x813;
    undefined field723_0x814;
    undefined field724_0x815;
    undefined field725_0x816;
    undefined field726_0x817;
    undefined field727_0x818;
    undefined field728_0x819;
    undefined field729_0x81a;
    undefined field730_0x81b;
    undefined field731_0x81c;
    undefined field732_0x81d;
    undefined field733_0x81e;
    undefined field734_0x81f;
    undefined field735_0x820;
    undefined field736_0x821;
    undefined field737_0x822;
    undefined field738_0x823;
    undefined field739_0x824;
    undefined field740_0x825;
    undefined field741_0x826;
    undefined field742_0x827;
    undefined field743_0x828;
    undefined field744_0x829;
    undefined field745_0x82a;
    undefined field746_0x82b;
    undefined field747_0x82c;
    undefined field748_0x82d;
    undefined field749_0x82e;
    undefined field750_0x82f;
    undefined field751_0x830;
    undefined field752_0x831;
    undefined field753_0x832;
    undefined field754_0x833;
    undefined field755_0x834;
    undefined field756_0x835;
    undefined field757_0x836;
    undefined field758_0x837;
    undefined field759_0x838;
    undefined field760_0x839;
    undefined field761_0x83a;
    undefined field762_0x83b;
    undefined field763_0x83c;
    undefined field764_0x83d;
    undefined field765_0x83e;
    undefined field766_0x83f;
    undefined field767_0x840;
    undefined field768_0x841;
    undefined field769_0x842;
    undefined field770_0x843;
    undefined field771_0x844;
    undefined field772_0x845;
    undefined field773_0x846;
    undefined field774_0x847;
    undefined field775_0x848;
    undefined field776_0x849;
    undefined field777_0x84a;
    undefined field778_0x84b;
    undefined field779_0x84c;
    undefined field780_0x84d;
    undefined field781_0x84e;
    undefined field782_0x84f;
    undefined field783_0x850;
    undefined field784_0x851;
    undefined field785_0x852;
    undefined field786_0x853;
    undefined field787_0x854;
    undefined field788_0x855;
    undefined field789_0x856;
    undefined field790_0x857;
    undefined field791_0x858;
    undefined field792_0x859;
    undefined field793_0x85a;
    undefined field794_0x85b;
    undefined field795_0x85c;
    undefined field796_0x85d;
    undefined field797_0x85e;
    undefined field798_0x85f;
    undefined field799_0x860;
    undefined field800_0x861;
    undefined field801_0x862;
    undefined field802_0x863;
    undefined field803_0x864;
    undefined field804_0x865;
    undefined field805_0x866;
    undefined field806_0x867;
    undefined field807_0x868;
    undefined field808_0x869;
    undefined field809_0x86a;
    undefined field810_0x86b;
    undefined field811_0x86c;
    undefined field812_0x86d;
    undefined field813_0x86e;
    undefined field814_0x86f;
    undefined field815_0x870;
    undefined field816_0x871;
    undefined field817_0x872;
    undefined field818_0x873;
    undefined field819_0x874;
    undefined field820_0x875;
    undefined field821_0x876;
    undefined field822_0x877;
    undefined field823_0x878;
    undefined field824_0x879;
    undefined field825_0x87a;
    undefined field826_0x87b;
    undefined field827_0x87c;
    undefined field828_0x87d;
    undefined field829_0x87e;
    undefined field830_0x87f;
    undefined field831_0x880;
    undefined field832_0x881;
    undefined field833_0x882;
    undefined field834_0x883;
    undefined field835_0x884;
    undefined field836_0x885;
    undefined field837_0x886;
    undefined field838_0x887;
    undefined field839_0x888;
    undefined field840_0x889;
    undefined field841_0x88a;
    undefined field842_0x88b;
    undefined field843_0x88c;
    undefined field844_0x88d;
    undefined field845_0x88e;
    undefined field846_0x88f;
    undefined field847_0x890;
    undefined field848_0x891;
    undefined field849_0x892;
    undefined field850_0x893;
    undefined field851_0x894;
    undefined field852_0x895;
    undefined field853_0x896;
    undefined field854_0x897;
    undefined field855_0x898;
    undefined field856_0x899;
    undefined field857_0x89a;
    undefined field858_0x89b;
    undefined field859_0x89c;
    undefined field860_0x89d;
    undefined field861_0x89e;
    undefined field862_0x89f;
    undefined field863_0x8a0;
    undefined field864_0x8a1;
    undefined field865_0x8a2;
    undefined field866_0x8a3;
    undefined field867_0x8a4;
    undefined field868_0x8a5;
    undefined field869_0x8a6;
    undefined field870_0x8a7;
    undefined field871_0x8a8;
    undefined field872_0x8a9;
    undefined field873_0x8aa;
    undefined field874_0x8ab;
    undefined field875_0x8ac;
    undefined field876_0x8ad;
    undefined field877_0x8ae;
    undefined field878_0x8af;
    undefined field879_0x8b0;
    undefined field880_0x8b1;
    undefined field881_0x8b2;
    undefined field882_0x8b3;
    undefined field883_0x8b4;
    undefined field884_0x8b5;
    undefined field885_0x8b6;
    undefined field886_0x8b7;
    undefined field887_0x8b8;
    undefined field888_0x8b9;
    undefined field889_0x8ba;
    undefined field890_0x8bb;
    undefined field891_0x8bc;
    undefined field892_0x8bd;
    undefined field893_0x8be;
    undefined field894_0x8bf;
    undefined field895_0x8c0;
    undefined field896_0x8c1;
    undefined field897_0x8c2;
    undefined field898_0x8c3;
    undefined field899_0x8c4;
    undefined field900_0x8c5;
    undefined field901_0x8c6;
    undefined field902_0x8c7;
    undefined field903_0x8c8;
    undefined field904_0x8c9;
    undefined field905_0x8ca;
    undefined field906_0x8cb;
    undefined field907_0x8cc;
    undefined field908_0x8cd;
    undefined field909_0x8ce;
    undefined field910_0x8cf;
    undefined field911_0x8d0;
    undefined field912_0x8d1;
    undefined field913_0x8d2;
    undefined field914_0x8d3;
    undefined field915_0x8d4;
    undefined field916_0x8d5;
    undefined field917_0x8d6;
    undefined field918_0x8d7;
    undefined field919_0x8d8;
    undefined field920_0x8d9;
    undefined field921_0x8da;
    undefined field922_0x8db;
    undefined field923_0x8dc;
    undefined field924_0x8dd;
    undefined field925_0x8de;
    undefined field926_0x8df;
    undefined field927_0x8e0;
    undefined field928_0x8e1;
    undefined field929_0x8e2;
    undefined field930_0x8e3;
    undefined field931_0x8e4;
    undefined field932_0x8e5;
    undefined field933_0x8e6;
    undefined field934_0x8e7;
    undefined field935_0x8e8;
    undefined field936_0x8e9;
    undefined field937_0x8ea;
    undefined field938_0x8eb;
    undefined field939_0x8ec;
    undefined field940_0x8ed;
    undefined field941_0x8ee;
    undefined field942_0x8ef;
    undefined field943_0x8f0;
    undefined field944_0x8f1;
    undefined field945_0x8f2;
    undefined field946_0x8f3;
    undefined field947_0x8f4;
    undefined field948_0x8f5;
    undefined field949_0x8f6;
    undefined field950_0x8f7;
    undefined field951_0x8f8;
    undefined field952_0x8f9;
    undefined field953_0x8fa;
    undefined field954_0x8fb;
    undefined field955_0x8fc;
    undefined field956_0x8fd;
    undefined field957_0x8fe;
    undefined field958_0x8ff;
    undefined field959_0x900;
    undefined field960_0x901;
    undefined field961_0x902;
    undefined field962_0x903;
    undefined field963_0x904;
    undefined field964_0x905;
    undefined field965_0x906;
    undefined field966_0x907;
    undefined field967_0x908;
    undefined field968_0x909;
    undefined field969_0x90a;
    undefined field970_0x90b;
    undefined field971_0x90c;
    undefined field972_0x90d;
    undefined field973_0x90e;
    undefined field974_0x90f;
    undefined field975_0x910;
    undefined field976_0x911;
    undefined field977_0x912;
    undefined field978_0x913;
    undefined field979_0x914;
    undefined field980_0x915;
    undefined field981_0x916;
    undefined field982_0x917;
    undefined field983_0x918;
    undefined field984_0x919;
    undefined field985_0x91a;
    undefined field986_0x91b;
    undefined field987_0x91c;
    undefined field988_0x91d;
    undefined field989_0x91e;
    undefined field990_0x91f;
    undefined field991_0x920;
    undefined field992_0x921;
    undefined field993_0x922;
    undefined field994_0x923;
    undefined field995_0x924;
    undefined field996_0x925;
    undefined field997_0x926;
    undefined field998_0x927;
    undefined field999_0x928;
    undefined field1000_0x929;
    undefined field1001_0x92a;
    undefined field1002_0x92b;
    undefined field1003_0x92c;
    undefined field1004_0x92d;
    undefined field1005_0x92e;
    undefined field1006_0x92f;
    undefined field1007_0x930;
    undefined field1008_0x931;
    undefined field1009_0x932;
    undefined field1010_0x933;
    undefined field1011_0x934;
    undefined field1012_0x935;
    undefined field1013_0x936;
    undefined field1014_0x937;
    undefined field1015_0x938;
    undefined field1016_0x939;
    undefined field1017_0x93a;
    undefined field1018_0x93b;
    undefined field1019_0x93c;
    undefined field1020_0x93d;
    undefined field1021_0x93e;
    undefined field1022_0x93f;
    undefined field1023_0x940;
    undefined field1024_0x941;
    undefined field1025_0x942;
    undefined field1026_0x943;
    undefined field1027_0x944;
    undefined field1028_0x945;
    undefined field1029_0x946;
    undefined field1030_0x947;
    struct NUPOINTOFINTEREST_s *pLOCATOR[16];
};

struct NUPOINTOFINTEREST_s {
    NUMTX offset;
    char *name;
    uchar parent_joint_ix;
    uchar pad[11];
};

struct NUHGOBJ_s {
    short *tids;
    int numtid;
    struct numtl_WoC **mtls;
    int nummtl;
    int loadtype;
    NUJOINTDATA *joints;
    NUMTX *T;
    NUMTX *INV_WT;
    uchar *joint_ixs;
    NULAYERDATA *layers;
    NUPOINTOFINTEREST *points_of_interest;
    uchar *poi_ixs;
    char *string_table;
    int string_table_size;
    float tbrdist;
    NUSHADOWDATA *shadow_data;
    float sphere_radius;
    float sphere_yoff;
    NUVEC min;
    NUVEC max;
    float cylinder_yoff;
    float cylinder_height;
    float cylinder_radius;
    NUCOLLISIONDATA *collision_data;
    int numtexanims;
    NUTEXANIM *texanims;
    short *texanim_tids;
    uchar num_joints;
    uchar num_joint_ixs;
    uchar num_layers;
    uchar num_points_of_interest;
    uchar num_poi_ixs;
    uchar shadowoff;
    char pad[2];
};

struct nuanimdata__s {
    float time;
    char *node_name;
    int nchunks;
    NUANIMDATACHUNK **chunks;
};

struct NUJOINTDATA_s {
    NUMTX orient;
    NUVEC locator_offset;
    char *name;
    uchar parent_ix;
    char flags;
    char pad[14];
};

typedef struct CharacterModel_PS2 CharacterModel_PS2, *PCharacterModel_PS2;


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/NUSHADOWDATA_s - /amod_struct.h/NUSHADOWDATA_s */

struct CharacterModel_PS2 {
    struct NUHGOBJ_s *hobj;
    struct nuanimdata_s *anmdata[118];
    struct AnimList *animlist[118];
    struct nuanimdata_s *fanmdata[118];
    struct AnimList *fanimlist[118];
    struct NUSHADOWDATA_s *shaddata[118]; /* SHADDATA */
    int shadhdr; /* SHADHDR */
    struct NUSHADOWDATA_s *shaddatarest; /* SHADDATA */
    short character;
    char pad1;
    char pad2;
    struct NUPOINTOFINTEREST_s *pLOCATOR[16];
};

typedef struct creatcmd_s creatcmd_s, *Pcreatcmd_s;

struct creatcmd_s {
    int cmd;
    int i;
    float f;
};

typedef struct creature_s_PS2 creature_s_PS2, *Pcreature_s_PS2;

typedef struct obj_s_PS2 obj_s_PS2, *Pobj_s_PS2;

typedef struct NEWBUGGY NEWBUGGY, *PNEWBUGGY;

typedef struct Moveinfo_s Moveinfo_s, *PMoveinfo_s;

typedef struct Nearest_Light_s Nearest_Light_s, *PNearest_Light_s;

typedef struct rumble_s rumble_s, *Prumble_s;

typedef struct obj_s obj_s, *Pobj_s;

typedef struct mask mask, *Pmask;

typedef struct RPos_s RPos_s, *PRPos_s;

typedef union type_s_name type_s_name, *Ptype_s_name;

typedef struct pdir_s pdir_s, *Ppdir_s;

struct pdir_s {
    int Index;
    struct nuvec_s Direction;
    struct nucolour3_s Colour;
    float Distance;
};

union type_s_name {
    uchar chrs;
    ushort all;
};

struct rumble_s {
    uchar buzz;
    uchar power;
    uchar frame;
    uchar frames;
};

struct Moveinfo_s {
    float IDLESPEED;
    float TIPTOESPEED;
    float WALKSPEED;
    float RUNSPEED;
    float SPRINTSPEED;
    float SLIDESPEED;
    float CRAWLSPEED;
    float DANGLESPEED;
    float WADESPEED;
    float JUMPHEIGHT;
    float DANGLEGAP;
    short JUMPFRAMES0;
    short JUMPFRAMES1;
    short JUMPFRAMES2;
    short STARJUMPFRAMES;
    short SOMERSAULTFRAMES;
    short SPINFRAMES;
    short SPINRESETFRAMES;
    short SUPERSPINFRAMES;
    short SUPERSPINWAITFRAMES;
    short SLAMWAITFRAMES;
    short SLIDEFRAMES;
    short CROUCHINGFRAMES;
    short JUMPLANDFRAMES;
    short spad;
};

struct RPos_s {
    char iRAIL;
    char vertical;
    short iALONG;
    short i1;
    short i2;
    float fALONG;
    float fACROSS;
    ushort angle;
    ushort cam_angle;
    uchar mode;
    char pad1;
    char pad2;
    char pad3;
    struct nuvec_s pos;
};

struct Nearest_Light_s {
    int AmbIndex;
    struct nuvec_s AmbCol;
    float ambientdist;
    int CurLoopIndex;
    struct pdir_s dir1;
    struct pdir_s dir2;
    struct pdir_s dir3;
    struct pdir_s *pDir1st;
    struct pdir_s *pDir2nd;
    struct pdir_s *pDir3rd;
    int glbambindex;
    int negativeindex;
    float negativedist;
    struct pdir_s glbdirectional;
};

struct mask {
    struct numtx_s mM;
    struct numtx_s mS;
    struct nuvec_s pos;
    struct nuvec_s newpos;
    struct Nearest_Light_s lights;
    struct anim_s anim;
    float scale;
    float shadow;
    short character;
    short active;
    short sfx;
    char pad1;
    char pad2;
    ushort xrot;
    ushort yrot;
    ushort angle;
    ushort surface_xrot;
    ushort surface_zrot;
    ushort wibble_ang[3];
    float idle_time;
    float idle_duration;
    char idle_mode;
    char reflect;
    uchar offset_frame;
    char hold;
};

struct obj_s_PS2 {
    struct obj_s *parent;
    struct CharacterModel_PS2 *model;
    struct mask *mask;
    void *contact;
    struct numtx_s *pLOCATOR;
    struct anim_s anim;
    short character;
    short vehicle;
    uint flags;
    uint frame;
    uint draw_frame;
    uint vehicle_frame;
    struct RPos_s RPos;
    struct nuvec_s pos;
    struct nuvec_s mom;
    struct nuvec_s oldpos;
    struct nuvec_s startpos;
    struct nuvec_s vSN;
    struct nuvec_s vLN;
    struct nuvec_s vRN;
    float shadow;
    float layer_shadow;
    float roof_y;
    float clearance;
    float forward;
    float abs_forward;
    float side;
    float abs_side;
    float xyz_distance;
    float xz_distance;
    float radius;
    struct nuvec_s min;
    struct nuvec_s max;
    float scale;
    float SCALE;
    float RADIUS;
    float old_SCALE;
    float objbot;
    float objtop;
    float bot;
    float top;
    float oldobjbot;
    float oldobjtop;
    float die_time;
    float die_duration;
    float reflect_y;
    float idle_gametime;
    float pad_speed;
    float pad_dx;
    float pad_dz;
    char i;
    char dead;
    ushort pad_angle;
    ushort attack;
    ushort vulnerable;
    short die_action;
    char old_ground;
    char finished;
    ushort xrot;
    ushort yrot;
    ushort zrot;
    ushort surface_xrot;
    ushort surface_zrot;
    ushort layer_xrot;
    ushort layer_zrot;
    ushort roof_xrot;
    ushort roof_zrot;
    short target_xrot;
    short target_yrot;
    short dyrot;
    union type_s_name gndflags;
    ushort hdg;
    ushort thdg;
    char ground;
    char surface_type;
    char layer_type;
    char roof_type;
    char invisible;
    uchar submerged;
    char transporting;
    char got_shadow;
    uchar boing;
    uchar contact_type;
    char die_model[2];
    uchar invincible;
    char pos_adjusted;
    char wade;
    char dangle;
    char ddsand;
    char ddsnow;
    char ddwater;
    char ddr;
    char ddg;
    char ddb;
    char last_ground;
    char direction;
    char kill_contact;
    uchar touch;
};

struct creature_s_PS2 {
    char used;
    char on;
    char off_wait;
    char i_aitab;
    struct obj_s_PS2 obj;
    struct AI_tmp ai;
    struct NEWBUGGY *Buggy;
    struct creatcmd_s *cmdtable;
    struct creatcmd_s *cmdcurr;
    struct Moveinfo_s *OnFootMoveInfo;
    struct numtx_s m;
    struct numtx_s mtxLOCATOR[16][2];
    struct nuvec_s momLOCATOR[16][2];
    struct Nearest_Light_s lights;
    struct rumble_s rumble;
    float idle_time;
    float idle_wait;
    short idle_action;
    short old_idle_action;
    char idle_mode;
    char idle_repeat;
    char jump;
    char jump_type;
    char jump_subtype;
    char ok_slam;
    char slam;
    char spin;
    char crawl;
    char crawl_lock;
    char tiptoe;
    char sprint;
    uchar somersault;
    uchar land;
    char pad_type;
    char jump_hack;
    uchar jump_hold;
    uchar allow_jump;
    short jump_frames;
    short jump_frame;
    short slam_wait;
    short spin_frames;
    short spin_frame;
    short spin_wait;
    short slide;
    short crouch_pos;
    ushort slam_frame;
    short fire_action;
    uchar fire;
    uchar tap;
    char target;
    char target_wait;
    char fire_lock;
    char idle_sigh;
    uchar hit_type;
    uchar freeze;
    char anim_processed;
    char pad1;
};

struct obj_s {
    struct obj_s *parent;
    struct CharacterModel *model;
    struct mask *mask;
    void *contact;
    struct numtx_s *pLOCATOR;
    struct anim_s anim;
    short character;
    short vehicle;
    uint flags;
    uint frame;
    uint draw_frame;
    uint vehicle_frame;
    struct RPos_s RPos;
    struct nuvec_s pos;
    struct nuvec_s mom;
    struct nuvec_s oldpos;
    struct nuvec_s startpos;
    struct nuvec_s vSN;
    struct nuvec_s vLN;
    struct nuvec_s vRN;
    float shadow;
    float layer_shadow;
    float roof_y;
    float clearance;
    float forward;
    float abs_forward;
    float side;
    float abs_side;
    float xyz_distance;
    float xz_distance;
    float radius;
    struct nuvec_s min;
    struct nuvec_s max;
    float scale;
    float SCALE;
    float RADIUS;
    float old_SCALE;
    float objbot;
    float objtop;
    float bot;
    float top;
    float oldobjbot;
    float oldobjtop;
    float die_time;
    float die_duration;
    float reflect_y;
    float idle_gametime;
    float pad_speed;
    float pad_dx;
    float pad_dz;
    char i;
    char dead;
    ushort pad_angle;
    ushort attack;
    ushort vulnerable;
    short die_action;
    char old_ground;
    char finished;
    ushort xrot;
    ushort yrot;
    ushort zrot;
    ushort surface_xrot;
    ushort surface_zrot;
    ushort layer_xrot;
    ushort layer_zrot;
    ushort roof_xrot;
    ushort roof_zrot;
    short target_xrot;
    short target_yrot;
    short dyrot;
    union type_s_name gndflags;
    ushort hdg;
    ushort thdg;
    char ground;
    char surface_type;
    char layer_type;
    char roof_type;
    char invisible;
    uchar submerged;
    char transporting;
    char got_shadow;
    uchar boing;
    uchar contact_type;
    char die_model[2];
    uchar invincible;
    char pos_adjusted;
    char wade;
    char dangle;
    char ddsand;
    char ddsnow;
    char ddwater;
    char ddr;
    char ddg;
    char ddb;
    char last_ground;
    char direction;
    char kill_contact;
    uchar touch;
};

struct NEWBUGGY {
    void *a;
};

typedef struct deformerweightsarray_s deformerweightsarray_s, *Pdeformerweightsarray_s;

typedef struct deformerweightsarray_s DEFORMERWEIGHTSARRAY;

struct deformerweightsarray_s {
    sceDmaTag dt;
    int vt;
    int cnt;
    float blend_factors[1];
};


/* WARNING! conflicting data type names: /amod_struct.h/dword - /dword */


/* WARNING! conflicting data type names: /amod_struct.h/longlong - /longlong */

typedef int NUANG;

typedef struct nuangvec_s nuangvec_s, *Pnuangvec_s;

typedef struct nuangvec_s NUANGVEC;

struct nuangvec_s {
    NUANG x;
    NUANG y;
    NUANG z;
};

typedef enum nuanimcomponents_e {
    NUANIM_X_TRANSLATION=0,
    NUANIM_Y_TRANSLATION=1,
    NUANIM_Z_TRANSLATION=2,
    NUANIM_X_ROTATION=3,
    NUANIM_Y_ROTATION=4,
    NUANIM_Z_ROTATION=5,
    NUANIM_X_SCALE=6,
    NUANIM_Y_SCALE=7,
    NUANIM_Z_SCALE=8,
    NUANIM_NUMMTXOPERATIONS=9
} nuanimcomponents_e;

typedef enum nuanimcomponents_e NUANIM_MTXOPERATIONS;

typedef struct nuanimdata_ nuanimdata_, *Pnuanimdata_;


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/nuanimdatachunk_s - /amod_struct.h/nuanimdatachunk_s */

struct nuanimdata_ {
    float time;
    char *node_name;
    int nchunks;
    struct nuanimdatachunk_s **chunks;
};

typedef struct NUANIMDATAHDR_s NUANIMDATAHDR_s, *PNUANIMDATAHDR_s;

typedef struct NUANIMDATAHDR_s NUANIMDATAHDR;

struct NUANIMDATAHDR_s {
    int version;
    int address_offset;
    NUANIMDATA *animdata;
};

typedef struct nuanimtime_s nuanimtime_s, *Pnuanimtime_s;

typedef struct nuanimtime_s NUANIMTIME;

struct nuanimtime_s {
    float time;
    float time_offset;
    int chunk;
    uint time_mask;
    uint time_byte;
};

typedef struct nudefm_s nudefm_s, *Pnudefm_s;

typedef struct nudefm_s NUDEFM;

typedef enum nudefmtype_e {
    NUDEFM_LINEAR=0
} nudefmtype_e;

typedef enum nudefmtype_e NUDEFMTYPE;

struct nudefm_s {
    NUDEFMTYPE type;
    NUMTX mtx;
};

typedef struct nufspecial_s nufspecial_s, *Pnufspecial_s;

typedef struct nufspecial_s NUFSPECIAL;

typedef struct nuspecialflags NUSPECIALFLAGS;

struct nufspecial_s {
    NUMTX mtx;
    int instanceix;
    int nameix;
    NUSPECIALFLAGS flags;
    int pad;
};

typedef struct nugscn_s NUGSCENE;

typedef struct nugscfg_s nugscfg_s, *Pnugscfg_s;

typedef struct nugscfg_s NUGSCFG;

struct nugscfg_s {
    char *name;
    int datasize;
};

typedef struct nugspline_s NUGSPLINE;

typedef struct nuhspecial_s NUHSPECIAL;

typedef struct nuinstance_s NUINSTANCE;

typedef struct nuinstanim_s NUINSTANIM;

typedef struct nuinstflags_s NUINSTFLAGS;

typedef struct NUJOINTANIM_s NUJOINTANIM_s, *PNUJOINTANIM_s;

typedef struct NUJOINTANIM_s NUJOINTANIM;

struct NUJOINTANIM_s {
    float rx;
    float ry;
    float rz;
    float tx;
    float ty;
    float tz;
    float sx;
    float sy;
    float sz;
    short max_rx;
    short max_ry;
    short max_rz;
    short min_rx;
    short min_ry;
    short min_rz;
    uchar joint_id;
    uchar flags;
    uchar pad[2];
};

typedef struct NUJOINTNODE_s NUJOINTNODE_s, *PNUJOINTNODE_s;

typedef struct NUJOINTNODE_s NUJOINTNODE;

typedef struct NUNODE_s NUNODE_s, *PNUNODE_s;

struct NUJOINTNODE_s {
    char *name;
    uint id;
    uint type;
    int nchildren;
    struct NUNODE_s *parent;
    struct NUNODE_s *child;
    struct NUNODE_s *next;
    void *data;
    NUMTX orient_mtx;
    NUMTX T;
    NUMTX WT;
    NUVEC translation;
    NUANGVEC rotation;
    NUVEC scale;
    NUVEC locator_offset;
    char mtx_flags;
    char pad;
};

struct NUNODE_s {
    char *name;
    uint id;
    uint type;
    int nchildren;
    struct NUNODE_s *parent;
    struct NUNODE_s *child;
    struct NUNODE_s *next;
    void *data;
};

typedef struct NUMESHNODE_s NUMESHNODE_s, *PNUMESHNODE_s;

typedef struct NUMESHNODE_s NUMESHNODE;

struct NUMESHNODE_s {
    char *name;
    uint id;
    uint type;
    int nchildren;
    struct NUNODE_s *parent;
    struct NUNODE_s *child;
    struct NUNODE_s *next;
    void *data;
    NUGOBJ *mesh;
    int gid;
    int mesh_flags;
};

typedef struct NUNODE_s NUNODE;

typedef void **NuNodeDataDestroyFunc;

typedef void **NuNodeIteratorFunc;

typedef union nunodeptr_s nunodeptr_s, *Pnunodeptr_s;

typedef union nunodeptr_s NUNODEPTR;

typedef struct NUTRANSFORMNODE_s NUTRANSFORMNODE_s, *PNUTRANSFORMNODE_s;

typedef struct NUTRANSFORMNODE_s NUTRANSFORMNODE;

typedef struct NUSKINNODE_s NUSKINNODE_s, *PNUSKINNODE_s;

typedef struct NUSKINNODE_s NUSKINNODE;

typedef struct NUREFERENCENODE_s NUREFERENCENODE_s, *PNUREFERENCENODE_s;

typedef struct NUREFERENCENODE_s NUREFERENCENODE;

typedef struct NUSPLINENODE_s NUSPLINENODE_s, *PNUSPLINENODE_s;

typedef struct NUSPLINENODE_s NUSPLINENODE;

typedef struct nuspline_s nuspline_s, *Pnuspline_s;

typedef struct nuspline_s NUSPLINE;

struct NUREFERENCENODE_s {
    char *name;
    uint id;
    uint type;
    int nchildren;
    struct NUNODE_s *parent;
    struct NUNODE_s *child;
    struct NUNODE_s *next;
    void *data;
    uint ref_id;
    NUNODE *ref_node;
    char *ref_name;
};

struct NUSKINNODE_s {
    char *name;
    uint id;
    uint type;
    int nchildren;
    struct NUNODE_s *parent;
    struct NUNODE_s *child;
    struct NUNODE_s *next;
    void *data;
    NUGOBJ *mesh;
    int gid;
    int njoints;
    NUMTX **joints;
    NUMTX *jointmtx;
};

union nunodeptr_s {
    NUNODE *node;
    NUMESHNODE *mesh;
    NUTRANSFORMNODE *transform;
    NUJOINTNODE *joint;
    NUSKINNODE *skin;
    NUREFERENCENODE *reference;
    NUSPLINENODE *spline;
};

struct NUTRANSFORMNODE_s {
    char *name;
    uint id;
    uint type;
    int nchildren;
    struct NUNODE_s *parent;
    struct NUNODE_s *child;
    struct NUNODE_s *next;
    void *data;
    NUMTX T;
    NUMTX WT;
    int transform_flags;
    void *ref_node;
};

struct nuspline_s {
    int ncvs;
    NUVEC *cvs;
    float r;
    float r2;
    NUVEC min;
    NUVEC max;
    NUVEC cntr;
    float cntr_r;
    float cntr_r2;
};

struct NUSPLINENODE_s {
    char *name;
    uint id;
    uint type;
    int nchildren;
    struct NUNODE_s *parent;
    struct NUNODE_s *child;
    struct NUNODE_s *next;
    void *data;
    int nsplines;
    NUSPLINE **spline;
    int *sid;
};

typedef struct nuscene_s nuscene_s, *Pnuscene_s;

typedef struct nuscene_s NUSCENE;

struct nuscene_s {
    int nnodes;
    char **names;
    NUNODE **nodes;
    char *strings;
    int numtids;
    short *tids;
    int nummtls;
    NUMTL **mtls;
    int numgobjs;
    NUGOBJ **gobjs;
    int numsplines;
    NUSPLINE *splines;
    NUVEC *spline_cvs;
    NUNODE *root_node;
    NUGSCENE *gscene;
};

typedef struct nuspecial_s NUSPECIAL;

typedef sceDmaTag NUSTARFIELD;

typedef struct objtemp_s objtemp_s, *Pobjtemp_s;

struct objtemp_s {
    short i;
    uchar flags;
    char action;
    float anim_time;
};

typedef void *PartHeader;

typedef void *PartList;

typedef struct CharacterData_NGC *PCharacterData;

typedef struct nuanimdata__s *Pnuanimdata_s;

typedef struct STERRCOLLISION_CUBE_s STERRCOLLISION_CUBE_s, *PSTERRCOLLISION_CUBE_s;

struct STERRCOLLISION_CUBE_s {
    NUMTX invmtx;
    NUVEC min;
    NUVEC max;
};

typedef struct STERRCOLLISION_CYLINDER_s STERRCOLLISION_CYLINDER_s, *PSTERRCOLLISION_CYLINDER_s;

struct STERRCOLLISION_CYLINDER_s {
    NUVEC bottom;
    float height;
    float radius;
};

typedef struct STERRCOLLISION_SPHERE_s STERRCOLLISION_SPHERE_s, *PSTERRCOLLISION_SPHERE_s;

struct STERRCOLLISION_SPHERE_s {
    NUVEC centre;
    float radius;
};

typedef struct STERRDATA_s STERRDATA_s, *PSTERRDATA_s;

typedef struct STERRINST_s STERRINST_s, *PSTERRINST_s;

typedef struct STERRINST_s STERRINST;

struct STERRINST_s {
    int instance_ix;
    short num;
    short flags;
    float radius;
    int datasize;
    int data;
};

struct STERRDATA_s {
    void *raw_data;
    NUGSCENE *gscene;
    STERRINST **instarray;
};

typedef struct STERRPRIM_s STERRPRIM_s, *PSTERRPRIM_s;

typedef enum STERRTYPES_e {
    STERRTYPE_NONE=0,
    STERRTYPE_COLLISION_SPHERE=1,
    STERRTYPE_COLLISION_CUBE=2,
    STERRTYPE_COLLISION_CYLINDER=3
} STERRTYPES_e;

typedef enum STERRTYPES_e STERRTYPES;

struct STERRPRIM_s {
    STERRTYPES type;
    int flags;
    int data;
};

typedef union variptr_WoC_u *Pvariptr_u;

typedef void *sceGsZbuf1O;

typedef struct STERRCOLLISION_CUBE_s STERRCOLLISION_CUBE;

typedef struct STERRCOLLISION_CYLINDER_s STERRCOLLISION_CYLINDER;

typedef struct STERRCOLLISION_SPHERE_s STERRCOLLISION_SPHERE;

typedef struct STERRDATA_s STERRDATA;

typedef struct STERRPRIM_s STERRPRIM;


/* WARNING! conflicting data type names: /amod_struct.h/ulonglong - /ulonglong */


/* WARNING! conflicting data type names: /amod_struct.h/undefined1 - /undefined1 */


/* WARNING! conflicting data type names: /amod_struct.h/undefined2 - /undefined2 */


/* WARNING! conflicting data type names: /amod_struct.h/undefined3 - /undefined3 */


/* WARNING! conflicting data type names: /amod_struct.h/undefined4 - /undefined4 */


/* WARNING! conflicting data type names: /amod_struct.h/undefined6 - /undefined6 */


/* WARNING! conflicting data type names: /amod_struct.h/undefined8 - /undefined8 */

typedef void *uv1deb;

typedef union variptr_WoC_u VARIPTRWoC;


/* WARNING! conflicting data type names: /amod_struct.h/word - /word */


/* WARNING! conflicting data type names: /astructs.h/_sceDmaTag - /amod_struct.h/_sceDmaTag */

typedef union csz csz, *Pcsz;

union csz {
    float f32;
    uint u32;
};

typedef struct NUCOLLISIONSPHERE_s NUCOLLISIONSPHERE_s, *PNUCOLLISIONSPHERE_s;

typedef struct NUCOLLISIONSPHERE_s NUCOLLISIONSPHERE;

struct NUCOLLISIONSPHERE_s {
    NUVEC offset;
    float r;
    uchar joint;
    uchar pad[3];
};

typedef struct nucolour4_s nucolour4_s, *Pnucolour4_s;

typedef struct nucolour4_s NUCOLOUR4;

struct nucolour4_s {
    float r;
    float g;
    float b;
    float a;
};

typedef struct nudatinfo_s nudatinfo_s, *Pnudatinfo_s;

typedef struct nudatinfo_s NUDATFINFO;

struct nudatinfo_s {
    int foffset;
    int flen;
    int uplen;
    int ppack;
};

typedef struct nudathdr_s nudathdr_s, *Pnudathdr_s;

typedef struct nudathdr_s NUDATHDR;

typedef struct nudfnode_s nudfnode_s, *Pnudfnode_s;

typedef struct nudfnode_s NUDFNODE;

typedef int NUFILE;

struct nudathdr_s {
    int ver;
    int nfiles;
    NUDATFINFO *finfo;
    int treecnt;
    NUDFNODE *filetree;
    int leafnamesize;
    char *leafnames;
    int dfhandle;
    NUFILE fh;
    short intalloc;
    short openmode;
};

struct nudfnode_s {
    short childix;
    short sibix;
    char *txt;
};


/* WARNING! conflicting data type names: /astructs.h/nufaceongeom_s - /amod_struct.h/nufaceongeom_s */

typedef enum nufilemode_e {
    NUFILE_READ=0,
    NUFILE_WRITE=1,
    NUFILE_APPEND=2,
    NUFILE_READ_NOWAIT=3,
    NUFILE_MODE_CNT=4
} nufilemode_e;

typedef enum nufilemode_e NUFILEMODE;

typedef struct nufilemtl_s nufilemtl_s, *Pnufilemtl_s;


/* WARNING! conflicting data type names: /astructs.h/numtl_s - /amod_struct.h/numtl_s */

typedef struct nufmtlattrib_s nufmtlattrib_s, *Pnufmtlattrib_s;

typedef struct nufmtlattrib_s NUFMTLATTRIB;

struct nufmtlattrib_s {
    uint alpha;
    uint filter;
    uint fx;
    uint utc;
    uint vtc;
    uint cull;
    uint zmode;
    uint lighting;
    uint colour;
    uint fill;
    uint atst;
    uint aref;
    uint afail;
    uint uvmode;
};

struct nufilemtl_s {
    struct numtl_s *next;
    NUFMTLATTRIB attrib;
    NUCOLOUR3 ambient;
    NUCOLOUR3 diffuse;
    NUFX fx1;
    NUFX fx2;
    NUFX fx3;
    NUFX fx4;
    float power;
    float alpha;
    int tid;
    short sort_pri;
    uchar fxid;
    uchar special_id;
    short K;
    uchar L;
    uchar uanmmode;
    uchar vanmmode;
    float du;
    float dv;
    float su;
    float sv;
};

typedef enum nufileseek_e {
    NUFILE_SEEK_START=0,
    NUFILE_SEEK_CURRENT=1,
    NUFILE_SEEK_END=2,
    NUFILE_SEEK_CNT=3
} nufileseek_e;

typedef enum nufileseek_e NUFILESEEK;

typedef enum nufilestatus_s {
    NUFILE_COMPLETED=0,
    NUFILE_EXECUTING=1
} nufilestatus_s;

typedef enum nufilestatus_s NUFILESTATUS;

typedef struct nufpar_s nufpar_s, *Pnufpar_s;

typedef struct nufpar_s NUFPAR;

typedef struct nufpcomjmp_s nufpcomjmp_s, *Pnufpcomjmp_s;

typedef struct nufpcomjmp_s NUFPCOMJMP;

typedef void *nufpcomfn;

struct nufpcomjmp_s {
    char *fname;
    nufpcomfn *func;
};

struct nufpar_s {
    NUFILE fh;
    char fbuff[4096];
    char lbuff[257];
    char wbuff[257];
    int line_num;
    int line_pos;
    int cpos;
    int buffstart;
    int buffend;
    NUFPCOMJMP *comstack[8];
    int compos;
    int size;
};

typedef struct nufpar_s NUFPAR_T;

typedef struct nufparpos_s nufparpos_s, *Pnufparpos_s;

typedef struct nufparpos_s NUFPARPOS;

struct nufparpos_s {
    int line_num;
    int line_pos;
    int cpos;
    int buffstart;
    int buffend;
};


/* WARNING! conflicting data type names: /astructs.h/nugeom_s - /amod_struct.h/nugeom_s */

typedef struct nugeomps2_s nugeomps2_s, *Pnugeomps2_s;

typedef struct nugeomps2_s NUGEOMPS2;

struct nugeomps2_s {
    struct nugeom_s *next;
    NUMTL *mtl;
    void *dmastream;
    void *skindma;
    NUTRISTREAM *tristream;
};


/* WARNING! conflicting data type names: /astructs.h/nugobj_s - /amod_struct.h/nugobj_s */


/* WARNING! conflicting data type names: /astructs.h/NUHGOBJ_s - /amod_struct.h/NUHGOBJ_s */

typedef struct nuiffhdr_s nuiffhdr_s, *Pnuiffhdr_s;

typedef struct nuiffhdr_s NUIFFHDR;

struct nuiffhdr_s {
    int blk;
    int size;
};

typedef enum nulight_mode {
    NULIGHT_MODE_MODSUB=0,
    NULIGHT_MODE_MODCOL=1,
    NULIGHT_MODE_ADD=2
} nulight_mode;

typedef enum nulight_mode NULIGHT_MODE;

typedef struct nulisthdr_s nulisthdr_s, *Pnulisthdr_s;

typedef struct nulisthdr_s NULISTHDR;

typedef struct nulistlnk_s nulistlnk_s, *Pnulistlnk_s;

typedef struct nulistlnk_s NULISTLNK;

struct nulistlnk_s {
    struct nulistlnk_s *next;
    struct nulistlnk_s *prev;
};

struct nulisthdr_s {
    NULISTLNK *head;
    NULISTLNK *tail;
};

typedef enum numcseek_e {
    NUMC_SEEK_START=0,
    NUMC_SEEK_CURRENT=1,
    NUMC_SEEK_END=2,
    NUMC_SEEK_CNT=3
} numcseek_e;

typedef enum numcseek_e NUMCSEEK;

typedef struct numemblk_s numemblk_s, *Pnumemblk_s;

typedef struct numemblk_s NUMEMBLK;

struct numemblk_s {
    void **free;
    int blksize;
    int blkcnt;
    int blkfree;
};

typedef struct numtl_s NUMTLOLD_T;

typedef struct nuotitem_s nuotitem_s, *Pnuotitem_s;

typedef struct nuotitem_s NUOTITEM;


/* WARNING! conflicting data type names: /astructs.h/sceDmaTag - /amod_struct.h/sceDmaTag */

struct nuotitem_s {
    sceDmaTag *dma;
    NUMTX *mtx;
    NUMTL *mtl;
    struct nuotitem_s *succ;
    union csz csz;
    int clipcode;
    int pad;
};


/* WARNING! conflicting data type names: /astructs.h/nuprim_s - /amod_struct.h/nuprim_s */


/* WARNING! conflicting data type names: /astructs.h/nuskin_s - /amod_struct.h/nuskin_s */

typedef struct nutex_s nutex_s, *Pnutex_s;

typedef struct nutex_s NUTEX;

typedef enum nutextype_e {
    NUTEX_RGB16=0,
    NUTEX_RGBA16=1,
    NUTEX_RGB24=2,
    NUTEX_RGBA32=3,
    NUTEX_PAL4=4,
    NUTEX_PAL8=5,
    NUTEX_RT8=6,
    NUTEX_RTT8=7,
    NUTEX_RT8H=8,
    NUTEX_RT32=9,
    NUTEX_RT24=10,
    NUTEX_RT16=11,
    NUTEX_RTT32=12,
    NUTEX_RTT24=13,
    NUTEX_RTT16=14,
    NUTEX_RZT32=15,
    NUTEX_RZT24=16,
    NUTEX_RZT16=17,
    NUTEX_NUMTEXTURETYPES=18
} nutextype_e;

typedef enum nutextype_e NUTEXTYPE;

struct nutex_s {
    NUTEXTYPE type;
    int width;
    int height;
    int mmcnt;
    void *bits;
    int *pal;
};


/* WARNING! conflicting data type names: /astructs.h/nutexanim_s - /amod_struct.h/nutexanim_s */

typedef struct nutexanimf_s nutexanimf_s, *Pnutexanimf_s;

typedef struct nutexanimf_s NUTEXANIMF;

struct nutexanimf_s {
    struct nutexanim_s *succ;
    struct nutexanim_s *prev;
    int tids;
    short numtids;
    short dynalloc;
    int mtl;
    NUTEXANIMENV *env;
    int ntaname;
    int scriptname;
};


/* WARNING! conflicting data type names: /astructs.h/nutexanimprog_s - /amod_struct.h/nutexanimprog_s */


/* WARNING! conflicting data type names: /astructs.h/nutristream_s - /amod_struct.h/nutristream_s */

typedef struct nuvtx_tltc1_s nuvtx_tltc1_s, *Pnuvtx_tltc1_s;

typedef struct nuvtx_tltc1_s NUVTX_TLTC1;

struct nuvtx_tltc1_s {
    NUVEC pnt;
    float rhw;
    NUCOLOUR32 diffuse;
    float tc[2];
};

typedef struct nuvtx_tltc2_s nuvtx_tltc2_s, *Pnuvtx_tltc2_s;

typedef struct nuvtx_tltc2_s NUVTX_TLTC2;

struct nuvtx_tltc2_s {
    NUVEC pnt;
    float rhw;
    NUCOLOUR32 diffuse;
    float tc[2];
    float tc2[2];
};


/* WARNING! conflicting data type names: /astructs.h/NUVUTRI - /amod_struct.h/NUVUTRI */


/* WARNING! conflicting data type names: /astructs.h/nuvutri_s - /amod_struct.h/nuvutri_s */

typedef void *NUWARNINGFUNC;

typedef struct vuvtx_s vuvtx_s, *Pvuvtx_s;

struct vuvtx_s {
    float px;
    float py;
    float pz;
    float nx;
    ushort s;
    ushort t;
    ushort ny;
    ushort nz;
    uchar vr;
    uchar vg;
    uchar vb;
    uchar va;
};

typedef struct vuvtxc_s vuvtxc_s, *Pvuvtxc_s;

struct vuvtxc_s {
    float px;
    float py;
    float pz;
    float nx;
    int s;
    int t;
    int ny;
    int nz;
    int vr;
    int vg;
    int vb;
    int va;
};


/* WARNING! conflicting data type names: /astructs.h/rndrstream_s - /amod_struct.h/rndrstream_s */

typedef union variptr_u variptr_u, *Pvariptr_u;

union variptr_u {
    void *voidptr;
    char *s8;
    uchar *u8;
    ushort *u16;
    short *s16;
    uint *u32;
    uint *s32;
    ulong *u64;
    float *f32;
    NUVEC *vec3;
    NUVEC4 *vec4;
    NUIVEC *ivec3;
    NUIVEC4 *ivec4;
    NUMTX *mtx44;
    struct nuvutri_s *vutri;
    struct NUTRISTREAM_s *tristream;
    uint *viftag;
    uint intaddr;
    sceDmaTag *dmatag;
    sceGifTag *giftag;
    sceGsZbuf1O *zbuf;
    sceGsTest *test;
    sceGsPrmode *prmode;
};

typedef struct vuvtx_s VUVTX;

typedef struct vuvtxc_s VUVTXC;

typedef struct blkinfo_s blkinfo_s, *Pblkinfo_s;

struct blkinfo_s {
    struct nuiffhdr_s hdr;
    int pos;
};

typedef struct edMainMenu edMainMenu, *PedMainMenu;

struct edMainMenu {
    int **field0_0x0;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    int **field5_0x8;
    int field6_0xc;
    undefined field7_0x10;
    undefined field8_0x11;
    undefined field9_0x12;
    undefined field10_0x13;
    undefined field11_0x14;
    undefined field12_0x15;
    undefined field13_0x16;
    undefined field14_0x17;
    undefined field15_0x18;
    undefined field16_0x19;
    undefined field17_0x1a;
    undefined field18_0x1b;
    undefined field19_0x1c;
    undefined field20_0x1d;
    undefined field21_0x1e;
    undefined field22_0x1f;
    undefined field23_0x20;
    undefined field24_0x21;
    undefined field25_0x22;
    undefined field26_0x23;
    undefined *field27_0x24;
    undefined field28_0x28;
    undefined field29_0x29;
    undefined field30_0x2a;
    undefined field31_0x2b;
    struct edMainMenu *next;
    struct edMainMenu *field33_0x30;
};

typedef struct Game_s_PS2 Game_s_PS2, *PGame_s_PS2;

typedef struct Hub Hub, *PHub;

typedef struct level level, *Plevel;

typedef struct time time, *Ptime;

struct Hub {
    uchar flags;
    uchar crystals;
    char pad1;
    char pad2;
};

struct time {
    char name[4];
    uint itime;
};

struct level {
    ushort flags;
    char pad1;
    char pad2;
    struct time time[3];
};

struct Game_s_PS2 {
    char name[9];
    uchar vibration;
    uchar surround;
    uchar sfx_volume;
    uchar music_volume;
    char screen_x;
    char screen_y;
    uchar language;
    struct Hub hub[6];
    struct level level[35];
    uchar lives;
    uchar wumpas;
    uchar mask;
    uchar percent;
    uchar crystals;
    uchar relics;
    uchar crate_gems;
    uchar bonus_gems;
    uchar gems;
    uchar gembits;
    uchar powerbits;
    int cutbits;
    uchar year;
    uchar month;
    uchar day;
    uchar hours;
    uchar mins;
};

typedef struct gsc_context gsc_context, *Pgsc_context;


/* WARNING! conflicting data type names: /haven_demo.h/variptr_u - /astructs.h/variptr_u */

struct gsc_context {
    int size;
    void *mem;
    union variptr_u freeptr;
    union variptr_u endptr;
    char *file;
};

typedef union mem_u mem_u, *Pmem_u;

typedef struct memblk_head_s memblk_head_s, *Pmemblk_head_s;

typedef struct memblk_tail_s memblk_tail_s, *Pmemblk_tail_s;

union mem_u {
    char *s8;
    int *i32;
    int intval;
    void *vptr;
    struct memblk_head_s *head;
    struct memblk_tail_s *tail;
};

struct memblk_tail_s {
    char mark[12];
};

struct memblk_head_s {
    struct memblk_head_s *succ;
    struct memblk_head_s *prev;
    union mem_u line;
    int cnt;
    int size;
    char mark[12];
};

typedef struct nufntdesc_s nufntdesc_s, *Pnufntdesc_s;

struct nufntdesc_s {
    short field0_0x0;
    short field1_0x2;
    char field2_0x4;
    char field3_0x5;
    char field4_0x6;
    undefined field5_0x7;
    undefined field6_0x8;
    undefined field7_0x9;
    float field8_0xa;
};

typedef struct nuhghhdr_s nuhghhdr_s, *Pnuhghhdr_s;

struct nuhghhdr_s {
    int filesize;
    int version;
    int numtxtrs;
    int txtrs;
    int nummtls;
    int mtls;
    int num_joints;
    int joints;
    int t;
    int inv_wt;
    int num_joint_ixs;
    int joint_ixs;
    int string_table;
    int string_table_size;
    int num_poi_ixs;
    int poi_ixs;
    int num_points_of_interest;
    int points_of_interest;
    int num_layers;
    int layers;
    int shadow_data;
    float sphere_radius;
    float sphere_yoff;
    struct nuvec_s min;
    struct nuvec_s max;
    float cylinder_yoff;
    float cylinder_height;
    float cylinder_radius;
    int collision_data;
    float tbrdist;
    int numtexanims;
    int texanims;
};

typedef struct NuLgtPolyHazeType NuLgtPolyHazeType, *PNuLgtPolyHazeType;

struct NuLgtPolyHazeType {
    struct nuvec_s pos;
    float sizex;
    float sizey;
};

typedef struct nulight_s_PS2 nulight_s_PS2, *Pnulight_s_PS2;

typedef enum nulighttype_e {
    NULIGHT_DIRECTIONAL=0,
    NULIGHT_POINT=1,
    NULIGHT_SPOT=2,
    NULIGHT_AMBIENT=3
} nulighttype_e;

struct nulight_s_PS2 {
    enum nulighttype_e type;
    int flags;
    struct nucolour3_s ambient;
    struct nucolour3_s diffuse;
    struct nucolour3_s specular;
    float range;
    float falloff;
    float attenuation[3];
    struct numtx_s mtx;
    float inner;
    float outer;
};

typedef struct NuLightSpotType NuLightSpotType, *PNuLightSpotType;

struct NuLightSpotType {
    struct nuvec_s pos;
    float size;
    uint colour;
    NULIGHT_MODE mode;
    float xspan;
    char field5_0x1c;
    char field6_0x1d;
    char field7_0x1e;
    char field8_0x1f;
};

typedef struct numemfile_s numemfile_s, *Pnumemfile_s;

struct numemfile_s {
    char *start;
    char *end;
    char *curr;
    enum nufilemode_e mode;
    int used;
};

typedef struct nusystexPS2_s nusystexPS2_s, *PnusystexPS2_s;


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/nutex_s - /astructs.h/nutex_s */

typedef struct ps2tex_s ps2tex_s, *Pps2tex_s;

struct ps2tex_s {
    struct ps2tex_s *succ;
    struct ps2tex_s *prev;
    short lowaddr;
    short highaddr;
    short req;
    short housed;
    short p2w;
    short p2h;
    sceDmaTag *dt_load[7];
    uint loadsize[7];
    uint offset[7];
    ushort loadaddr[7];
    ushort loadwidth[7];
    ushort bltwidth[7];
    uchar nummm;
    uchar psm;
    uchar bltpsm;
    uchar tcc;
    uchar texa;
    uchar tfx;
    sceDmaTag *clut_load;
    sceDmaTag *clut_alt;
    ushort clut_addr;
    ushort clut_width;
    ushort clut_psm;
    ushort clut_offset;
    ushort clut_loadsize;
    ushort unk;
    uint tmpaddr;
};

struct nusystexPS2_s { /* bionicle */
    struct nutex_s tex;
    short ref;
    short used:1;
    short xref:1;
    undefined field4_0x1b;
    undefined field5_0x1c;
    undefined field6_0x1d;
    undefined field7_0x1e;
    undefined field8_0x1f;
    struct ps2tex_s ps2tex;
    undefined field10_0xd0;
    undefined field11_0xd1;
    undefined field12_0xd2;
    undefined field13_0xd3;
    undefined field14_0xd4;
    undefined field15_0xd5;
    undefined field16_0xd6;
    undefined field17_0xd7;
    undefined field18_0xd8;
    undefined field19_0xd9;
    undefined field20_0xda;
    undefined field21_0xdb;
    undefined field22_0xdc;
    undefined field23_0xdd;
    undefined field24_0xde;
    undefined field25_0xdf;
};

typedef struct PLIGHT PLIGHT, *PPLIGHT;

struct PLIGHT {
    struct nulight_s_PS2 l;
    int ix;
    int assigned;
};

typedef struct RBClass RBClass, *PRBClass;

struct RBClass {
    struct numtx_s invBodyInertiaTensor;
    float mass;
    float kr;
    float kf;
};

typedef struct RS_FXBUFF RS_FXBUFF, *PRS_FXBUFF;

struct RS_FXBUFF {
    sceDmaTag dt;
    struct numtx_s mtx;
    sceDmaTag refdt;
};

typedef struct rs_lightbuff_s rs_lightbuff_s, *Prs_lightbuff_s;

struct rs_lightbuff_s { /* WIP struct */
    sceDmaTag dt;
    float d[2][3];
    float c[2][2];
    NUVEC4 amb;
    int vt_nop;
    int vt_unpack_fx2mtx;
    NUMTX fx2mtx;
};

typedef struct RS_SPECBUFF RS_SPECBUFF, *PRS_SPECBUFF;

struct RS_SPECBUFF {
    sceDmaTag dt;
    struct numtx_s mtx;
    NUCOLOUR4 col;
    sceDmaTag refdt;
};

typedef struct scene_inst scene_inst, *Pscene_inst;

struct scene_inst {
    struct scene_inst *next;
    int field1_0x4;
    int field2_0x8;
    int field3_0xc;
    int field4_0x10;
    int field5_0x14;
    int field6_0x18;
    int field7_0x1c;
    int *field8_0x20;
};

typedef struct sys_tb_s sys_tb_s, *Psys_tb_s;

struct sys_tb_s {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    int field4_0x4;
    int field5_0x8;
    int field6_0xc;
    int field7_0x10;
    int field8_0x14;
    int field9_0x18;
    int field10_0x1c;
    undefined field11_0x20;
    undefined field12_0x21;
    undefined field13_0x22;
    undefined field14_0x23;
    undefined field15_0x24;
    undefined field16_0x25;
    undefined field17_0x26;
    undefined field18_0x27;
    undefined field19_0x28;
    undefined field20_0x29;
    undefined field21_0x2a;
    undefined field22_0x2b;
    undefined field23_0x2c;
    undefined field24_0x2d;
    undefined field25_0x2e;
    undefined field26_0x2f;
    undefined field27_0x30;
    undefined field28_0x31;
    undefined field29_0x32;
    undefined field30_0x33;
    undefined field31_0x34;
    undefined field32_0x35;
    undefined field33_0x36;
    undefined field34_0x37;
    undefined field35_0x38;
    undefined field36_0x39;
    undefined field37_0x3a;
    undefined field38_0x3b;
    undefined field39_0x3c;
    undefined field40_0x3d;
    undefined field41_0x3e;
    undefined field42_0x3f;
    undefined field43_0x40;
    undefined field44_0x41;
    undefined field45_0x42;
    undefined field46_0x43;
    undefined field47_0x44;
    undefined field48_0x45;
    undefined field49_0x46;
    undefined field50_0x47;
    undefined field51_0x48;
    undefined field52_0x49;
    undefined field53_0x4a;
    undefined field54_0x4b;
    undefined field55_0x4c;
    undefined field56_0x4d;
    undefined field57_0x4e;
    undefined field58_0x4f;
    undefined field59_0x50;
    undefined field60_0x51;
    undefined field61_0x52;
    undefined field62_0x53;
    undefined field63_0x54;
    undefined field64_0x55;
    undefined field65_0x56;
    undefined field66_0x57;
    undefined field67_0x58;
    undefined field68_0x59;
    undefined field69_0x5a;
    undefined field70_0x5b;
    undefined field71_0x5c;
    undefined field72_0x5d;
    undefined field73_0x5e;
    undefined field74_0x5f;
    undefined field75_0x60;
    undefined field76_0x61;
    undefined field77_0x62;
    undefined field78_0x63;
    undefined field79_0x64;
    undefined field80_0x65;
    undefined field81_0x66;
    undefined field82_0x67;
    undefined field83_0x68;
    undefined field84_0x69;
    undefined field85_0x6a;
    undefined field86_0x6b;
    undefined field87_0x6c;
    undefined field88_0x6d;
    undefined field89_0x6e;
    undefined field90_0x6f;
    undefined field91_0x70;
    undefined field92_0x71;
    undefined field93_0x72;
    undefined field94_0x73;
    undefined field95_0x74;
    undefined field96_0x75;
    undefined field97_0x76;
    undefined field98_0x77;
    undefined field99_0x78;
    undefined field100_0x79;
    undefined field101_0x7a;
    undefined field102_0x7b;
    undefined field103_0x7c;
    undefined field104_0x7d;
    undefined field105_0x7e;
    undefined field106_0x7f;
    undefined field107_0x80;
    undefined field108_0x81;
    undefined field109_0x82;
    undefined field110_0x83;
    undefined field111_0x84;
    undefined field112_0x85;
    undefined field113_0x86;
    undefined field114_0x87;
    undefined field115_0x88;
    undefined field116_0x89;
    undefined field117_0x8a;
    undefined field118_0x8b;
    undefined field119_0x8c;
    undefined field120_0x8d;
    undefined field121_0x8e;
    undefined field122_0x8f;
    undefined field123_0x90;
    undefined field124_0x91;
    undefined field125_0x92;
    undefined field126_0x93;
    undefined field127_0x94;
    undefined field128_0x95;
    undefined field129_0x96;
    undefined field130_0x97;
    undefined field131_0x98;
    undefined field132_0x99;
    undefined field133_0x9a;
    undefined field134_0x9b;
    undefined field135_0x9c;
    undefined field136_0x9d;
    undefined field137_0x9e;
    undefined field138_0x9f;
    undefined field139_0xa0;
    undefined field140_0xa1;
    undefined field141_0xa2;
    undefined field142_0xa3;
    undefined field143_0xa4;
    undefined field144_0xa5;
    undefined field145_0xa6;
    undefined field146_0xa7;
    undefined field147_0xa8;
    undefined field148_0xa9;
    undefined field149_0xaa;
    undefined field150_0xab;
    undefined field151_0xac;
    undefined field152_0xad;
    undefined field153_0xae;
    undefined field154_0xaf;
    undefined field155_0xb0;
    undefined field156_0xb1;
    undefined field157_0xb2;
    undefined field158_0xb3;
    undefined field159_0xb4;
    undefined field160_0xb5;
    undefined field161_0xb6;
    undefined field162_0xb7;
    undefined field163_0xb8;
    undefined field164_0xb9;
    undefined field165_0xba;
    undefined field166_0xbb;
    undefined field167_0xbc;
    undefined field168_0xbd;
    undefined field169_0xbe;
    undefined field170_0xbf;
    undefined field171_0xc0;
    undefined field172_0xc1;
    undefined field173_0xc2;
    undefined field174_0xc3;
    undefined field175_0xc4;
    undefined field176_0xc5;
    undefined field177_0xc6;
    undefined field178_0xc7;
    undefined field179_0xc8;
    undefined field180_0xc9;
    undefined field181_0xca;
    undefined field182_0xcb;
    undefined field183_0xcc;
    undefined field184_0xcd;
    undefined field185_0xce;
    undefined field186_0xcf;
    undefined field187_0xd0;
    undefined field188_0xd1;
    undefined field189_0xd2;
    undefined field190_0xd3;
    undefined field191_0xd4;
    undefined field192_0xd5;
    undefined field193_0xd6;
    undefined field194_0xd7;
    undefined field195_0xd8;
    undefined field196_0xd9;
    undefined field197_0xda;
    undefined field198_0xdb;
    undefined field199_0xdc;
    undefined field200_0xdd;
    undefined field201_0xde;
    undefined field202_0xdf;
    undefined field203_0xe0;
    undefined field204_0xe1;
    undefined field205_0xe2;
    undefined field206_0xe3;
    undefined field207_0xe4;
    undefined field208_0xe5;
    undefined field209_0xe6;
    undefined field210_0xe7;
    undefined field211_0xe8;
    undefined field212_0xe9;
    undefined field213_0xea;
    undefined field214_0xeb;
    undefined field215_0xec;
    undefined field216_0xed;
    undefined field217_0xee;
    undefined field218_0xef;
    undefined field219_0xf0;
    undefined field220_0xf1;
    undefined field221_0xf2;
    undefined field222_0xf3;
    undefined field223_0xf4;
    undefined field224_0xf5;
    undefined field225_0xf6;
    undefined field226_0xf7;
    undefined field227_0xf8;
    undefined field228_0xf9;
    undefined field229_0xfa;
    undefined field230_0xfb;
    undefined field231_0xfc;
    undefined field232_0xfd;
    undefined field233_0xfe;
    undefined field234_0xff;
    undefined field235_0x100;
    undefined field236_0x101;
    undefined field237_0x102;
    undefined field238_0x103;
    undefined field239_0x104;
    undefined field240_0x105;
    undefined field241_0x106;
    undefined field242_0x107;
    undefined field243_0x108;
    undefined field244_0x109;
    undefined field245_0x10a;
    undefined field246_0x10b;
    undefined field247_0x10c;
    undefined field248_0x10d;
    undefined field249_0x10e;
    undefined field250_0x10f;
    undefined field251_0x110;
    undefined field252_0x111;
    undefined field253_0x112;
    undefined field254_0x113;
    undefined field255_0x114;
    undefined field256_0x115;
    undefined field257_0x116;
    undefined field258_0x117;
    undefined field259_0x118;
    undefined field260_0x119;
    undefined field261_0x11a;
    undefined field262_0x11b;
    undefined field263_0x11c;
    undefined field264_0x11d;
    undefined field265_0x11e;
    undefined field266_0x11f;
    undefined field267_0x120;
    undefined field268_0x121;
    undefined field269_0x122;
    undefined field270_0x123;
    undefined field271_0x124;
    undefined field272_0x125;
    undefined field273_0x126;
    undefined field274_0x127;
    undefined field275_0x128;
    undefined field276_0x129;
    undefined field277_0x12a;
    undefined field278_0x12b;
    undefined field279_0x12c;
    undefined field280_0x12d;
    undefined field281_0x12e;
    undefined field282_0x12f;
    undefined field283_0x130;
    undefined field284_0x131;
    undefined field285_0x132;
    undefined field286_0x133;
    undefined field287_0x134;
    undefined field288_0x135;
    undefined field289_0x136;
    undefined field290_0x137;
    undefined field291_0x138;
    undefined field292_0x139;
    undefined field293_0x13a;
    undefined field294_0x13b;
    undefined field295_0x13c;
    undefined field296_0x13d;
    undefined field297_0x13e;
    undefined field298_0x13f;
    undefined field299_0x140;
    undefined field300_0x141;
    undefined field301_0x142;
    undefined field302_0x143;
    undefined field303_0x144;
    undefined field304_0x145;
    undefined field305_0x146;
    undefined field306_0x147;
    undefined field307_0x148;
    undefined field308_0x149;
    undefined field309_0x14a;
    undefined field310_0x14b;
    undefined field311_0x14c;
    undefined field312_0x14d;
    undefined field313_0x14e;
    undefined field314_0x14f;
    undefined field315_0x150;
    undefined field316_0x151;
    undefined field317_0x152;
    undefined field318_0x153;
    undefined field319_0x154;
    undefined field320_0x155;
    undefined field321_0x156;
    undefined field322_0x157;
    undefined field323_0x158;
    undefined field324_0x159;
    undefined field325_0x15a;
    undefined field326_0x15b;
    undefined field327_0x15c;
    undefined field328_0x15d;
    undefined field329_0x15e;
    undefined field330_0x15f;
    undefined field331_0x160;
    undefined field332_0x161;
    undefined field333_0x162;
    undefined field334_0x163;
    undefined field335_0x164;
    undefined field336_0x165;
    undefined field337_0x166;
    undefined field338_0x167;
    undefined field339_0x168;
    undefined field340_0x169;
    undefined field341_0x16a;
    undefined field342_0x16b;
    undefined field343_0x16c;
    undefined field344_0x16d;
    undefined field345_0x16e;
    undefined field346_0x16f;
    undefined field347_0x170;
    undefined field348_0x171;
    undefined field349_0x172;
    undefined field350_0x173;
    undefined field351_0x174;
    undefined field352_0x175;
    undefined field353_0x176;
    undefined field354_0x177;
    undefined field355_0x178;
    undefined field356_0x179;
    undefined field357_0x17a;
    undefined field358_0x17b;
    undefined field359_0x17c;
    undefined field360_0x17d;
    undefined field361_0x17e;
    undefined field362_0x17f;
    undefined field363_0x180;
    undefined field364_0x181;
    undefined field365_0x182;
    undefined field366_0x183;
    undefined field367_0x184;
    undefined field368_0x185;
    undefined field369_0x186;
    undefined field370_0x187;
    undefined field371_0x188;
    undefined field372_0x189;
    undefined field373_0x18a;
    undefined field374_0x18b;
    undefined field375_0x18c;
    undefined field376_0x18d;
    undefined field377_0x18e;
    undefined field378_0x18f;
    undefined field379_0x190;
    undefined field380_0x191;
    undefined field381_0x192;
    undefined field382_0x193;
    undefined field383_0x194;
    undefined field384_0x195;
    undefined field385_0x196;
    undefined field386_0x197;
    undefined field387_0x198;
    undefined field388_0x199;
    undefined field389_0x19a;
    undefined field390_0x19b;
    undefined field391_0x19c;
    undefined field392_0x19d;
    undefined field393_0x19e;
    undefined field394_0x19f;
    undefined field395_0x1a0;
    undefined field396_0x1a1;
    undefined field397_0x1a2;
    undefined field398_0x1a3;
    undefined field399_0x1a4;
    undefined field400_0x1a5;
    undefined field401_0x1a6;
    undefined field402_0x1a7;
    undefined field403_0x1a8;
    undefined field404_0x1a9;
    undefined field405_0x1aa;
    undefined field406_0x1ab;
    undefined field407_0x1ac;
    undefined field408_0x1ad;
    undefined field409_0x1ae;
    undefined field410_0x1af;
    undefined field411_0x1b0;
    undefined field412_0x1b1;
    undefined field413_0x1b2;
    undefined field414_0x1b3;
    undefined field415_0x1b4;
    undefined field416_0x1b5;
    undefined field417_0x1b6;
    undefined field418_0x1b7;
    undefined field419_0x1b8;
    undefined field420_0x1b9;
    undefined field421_0x1ba;
    undefined field422_0x1bb;
    undefined field423_0x1bc;
    undefined field424_0x1bd;
    undefined field425_0x1be;
    undefined field426_0x1bf;
};

typedef struct tex tex, *Ptex;

struct tex {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    int field4_0x4;
    int field5_0x8;
    int field6_0xc;
    int field7_0x10;
    int field8_0x14;
    int field9_0x18;
    int field10_0x1c;
    undefined field11_0x20;
    undefined field12_0x21;
    undefined field13_0x22;
    undefined field14_0x23;
    undefined field15_0x24;
    undefined field16_0x25;
    undefined field17_0x26;
    undefined field18_0x27;
    undefined field19_0x28;
    undefined field20_0x29;
    undefined field21_0x2a;
    undefined field22_0x2b;
    undefined field23_0x2c;
    undefined field24_0x2d;
    undefined field25_0x2e;
    undefined field26_0x2f;
    undefined field27_0x30;
    undefined field28_0x31;
    undefined field29_0x32;
    undefined field30_0x33;
    undefined field31_0x34;
    undefined field32_0x35;
    undefined field33_0x36;
    undefined field34_0x37;
    undefined field35_0x38;
    undefined field36_0x39;
    undefined field37_0x3a;
    undefined field38_0x3b;
    undefined field39_0x3c;
    undefined field40_0x3d;
    undefined field41_0x3e;
    undefined field42_0x3f;
    undefined field43_0x40;
    undefined field44_0x41;
    undefined field45_0x42;
    undefined field46_0x43;
    undefined field47_0x44;
    undefined field48_0x45;
    undefined field49_0x46;
    undefined field50_0x47;
    undefined field51_0x48;
    undefined field52_0x49;
    undefined field53_0x4a;
    undefined field54_0x4b;
    undefined field55_0x4c;
    undefined field56_0x4d;
    undefined field57_0x4e;
    undefined field58_0x4f;
    undefined field59_0x50;
    undefined field60_0x51;
    undefined field61_0x52;
    undefined field62_0x53;
    undefined field63_0x54;
    undefined field64_0x55;
    undefined field65_0x56;
    undefined field66_0x57;
    undefined field67_0x58;
    undefined field68_0x59;
    undefined field69_0x5a;
    undefined field70_0x5b;
    undefined field71_0x5c;
    undefined field72_0x5d;
    undefined field73_0x5e;
    undefined field74_0x5f;
    undefined field75_0x60;
    undefined field76_0x61;
    undefined field77_0x62;
    undefined field78_0x63;
    undefined field79_0x64;
    undefined field80_0x65;
    undefined field81_0x66;
    undefined field82_0x67;
    undefined field83_0x68;
    undefined field84_0x69;
    undefined field85_0x6a;
    undefined field86_0x6b;
    undefined field87_0x6c;
    undefined field88_0x6d;
    undefined field89_0x6e;
    undefined field90_0x6f;
    undefined field91_0x70;
    undefined field92_0x71;
    undefined field93_0x72;
    undefined field94_0x73;
    undefined field95_0x74;
    undefined field96_0x75;
    undefined field97_0x76;
    undefined field98_0x77;
    undefined field99_0x78;
    undefined field100_0x79;
    undefined field101_0x7a;
    undefined field102_0x7b;
    undefined field103_0x7c;
    undefined field104_0x7d;
    undefined field105_0x7e;
    undefined field106_0x7f;
    undefined field107_0x80;
    undefined field108_0x81;
    undefined field109_0x82;
    undefined field110_0x83;
    undefined field111_0x84;
    undefined field112_0x85;
    undefined field113_0x86;
    undefined field114_0x87;
    undefined field115_0x88;
    undefined field116_0x89;
    undefined field117_0x8a;
    undefined field118_0x8b;
    undefined field119_0x8c;
    undefined field120_0x8d;
    undefined field121_0x8e;
    undefined field122_0x8f;
    undefined field123_0x90;
    undefined field124_0x91;
    undefined field125_0x92;
    undefined field126_0x93;
    undefined field127_0x94;
    undefined field128_0x95;
    undefined field129_0x96;
    undefined field130_0x97;
    undefined field131_0x98;
    undefined field132_0x99;
    undefined field133_0x9a;
    undefined field134_0x9b;
    undefined field135_0x9c;
    undefined field136_0x9d;
    undefined field137_0x9e;
    undefined field138_0x9f;
    undefined field139_0xa0;
    undefined field140_0xa1;
    undefined field141_0xa2;
    undefined field142_0xa3;
    undefined field143_0xa4;
    undefined field144_0xa5;
    undefined field145_0xa6;
    undefined field146_0xa7;
    undefined field147_0xa8;
    undefined field148_0xa9;
    undefined field149_0xaa;
    undefined field150_0xab;
    undefined field151_0xac;
    undefined field152_0xad;
    undefined field153_0xae;
    undefined field154_0xaf;
};

typedef struct texanimscripts_s texanimscripts_s, *Ptexanimscripts_s;

struct texanimscripts_s {
    char *path;
    int pad1;
    ulonglong levbits;
};

typedef uchar bool;


/* WARNING! conflicting data type names: /BION~213.ELF.h/byte - /byte */

typedef struct debkeydatatype_retail_s debkeydatatype_retail_s, *Pdebkeydatatype_retail_s;

typedef struct rdata_s rdata_s, *Prdata_s;

typedef struct gensorttab gensorttab, *Pgensorttab;

typedef struct debrissphere_s debrissphere_s, *Pdebrissphere_s;

typedef struct uv1deb_s uv1deb_s, *Puv1deb_s;

struct gensorttab {
    float x;
    float y;
    float z;
    float time;
    float mx;
    float my;
    float mz;
    float etime;
};

struct uv1deb_s {
    float x;
    float y;
    float z;
    float time;
    float mx;
    float my;
    float mz;
    float etime;
};

struct debrissphere_s {
    struct nuvec_s emit;
    float t;
};

struct debkeydatatype_retail_s {
    struct rdata_s *chunks[256];
    struct numtx_s rotmtx;
    struct numtx_s emitrotmtx;
    short count;
    short type;
    short active;
    short debcount;
    short disposed;
    short pointer;
    short reqcount;
    short reqdebcount;
    float x;
    float y;
    float z;
    float toffx;
    float toffy;
    float toffz;
    struct gensorttab *genptr;
    void *gencode;
    struct debkeydatatype_retail_s *next;
    struct debkeydatatype_retail_s *prev;
    short rotory;
    short rotorz;
    int instances;
    short oncount;
    short delay;
    struct debrissphere_s spheres[8];
    short sphere_next;
    short sphere_next_emit;
    int trigger_type;
    int trigger_id;
    float trigger_var;
    short refrotz;
    short refroty;
    float refoff;
    float refbounce;
    short soundnext[4];
    short group_id;
    char unk4;
    char unk5;
};

struct rdata_s {
    int dmadata[2];
    int unpackdata[2];
    struct uv1deb_s debris[32];
};


/* WARNING! conflicting data type names: /BION~213.ELF.h/debrissphere_s - /SLUS_202.38 v1.00.h/debrissphere_s */


/* WARNING! conflicting data type names: /BION~213.ELF.h/dword - /dword */

typedef longlong int16;


/* WARNING! conflicting data type names: /BION~213.ELF.h/longlong - /longlong */

typedef struct NuLgtArcLaserDataType NuLgtArcLaserDataType, *PNuLgtArcLaserDataType;

struct NuLgtArcLaserDataType {
    NUVEC start;
    NUVEC target;
    NUVEC lasdir;
    float sizew;
    float sizel;
    float sizewob;
    float arcsize;
    uchar type;
    uchar p1;
    uchar p2;
    uchar p3;
    int col;
    int seed;
};


/* WARNING! conflicting data type names: /BION~213.ELF.h/numtx_s - /amod_struct.h/numtx_s */


/* WARNING! conflicting data type names: /BION~213.ELF.h/nuvec_s - /amod_struct.h/nuvec_s */

typedef struct nuvideo_drawenv nuvideo_drawenv, *Pnuvideo_drawenv;

typedef struct nuvideo_drawenv NUVIDEO_DRAWENV;


/* WARNING! conflicting data type names: /BION~213.ELF.h/sceGifTag - /amod_struct.h/sceGifTag */

typedef struct sceGsDrawEnv1 sceGsDrawEnv1, *PsceGsDrawEnv1;

typedef struct sceGsDrawEnv2 sceGsDrawEnv2, *PsceGsDrawEnv2;

typedef struct sceGsFrame sceGsFrame, *PsceGsFrame;


/* WARNING! conflicting data type names: /BION~213.ELF.h/sceGsZbuf - /amod_struct.h/sceGsZbuf */

typedef struct sceGsXyoffset sceGsXyoffset, *PsceGsXyoffset;

typedef struct sceGsScissor sceGsScissor, *PsceGsScissor;

typedef struct sceGsPrmodecont sceGsPrmodecont, *PsceGsPrmodecont;

typedef struct sceGsColclamp sceGsColclamp, *PsceGsColclamp;

typedef struct sceGsDthe sceGsDthe, *PsceGsDthe;


/* WARNING! conflicting data type names: /BION~213.ELF.h/sceGsTest - /amod_struct.h/sceGsTest */

struct sceGsXyoffset {
    ulong OFX:16;
    ulong pad16:16;
    ulong OFY:16;
    ulong pad48:16;
};

struct sceGsColclamp {
    ulong CLAMP:1;
    ulong pad01:63;
};

struct sceGsScissor {
    ulong SCAX0:11;
    ulong pad11:5;
    ulong SCAX1:11;
    ulong pad27:5;
    ulong SCAY0:11;
    ulong pad43:5;
    ulong SCAY1:11;
    ulong pad59:5;
};

struct sceGsDthe {
    ulong DTHE:1;
    ulong pad01:63;
};

struct sceGsPrmodecont {
    ulong AC:1;
    ulong pad01:63;
};

struct sceGsFrame {
    ulong FBP:9;
    ulong pad09:7;
    ulong FBW:6;
    ulong pad22:2;
    ulong PSM:6;
    ulong pad30:2;
    ulong FBMSK:32;
};

struct sceGsDrawEnv1 {
    struct sceGsFrame frame1;
    struct sceGsZbuf zbuf1;
    long zbuf1addr;
    struct sceGsXyoffset xyoffset1;
    long xyoffset1addr;
    struct sceGsScissor scissor1;
    long scissor1addr;
    struct sceGsPrmodecont prmodecont;
    long prmodecontaddr;
    struct sceGsColclamp colclamp;
    long colclampaddr;
    struct sceGsDthe dthe;
    long dtheaddr;
    struct sceGsTest test1;
    long test1addr;
};

struct sceGsDrawEnv2 {
    struct sceGsFrame frame2;
    struct sceGsZbuf zbuf2;
    long zbuf2addr;
    struct sceGsXyoffset xyoffset2;
    long xyoffset2addr;
    struct sceGsScissor scissor2;
    long scissor2addr;
    struct sceGsPrmodecont prmodecont;
    long prmodecontaddr;
    struct sceGsColclamp colclamp;
    long colclampaddr;
    struct sceGsDthe dthe;
    long dtheaddr;
    struct sceGsTest test2;
    long test2addr;
};

struct nuvideo_drawenv {
    struct sceGifTag giftag;
    struct sceGsDrawEnv1 ctxt1;
    struct sceGsDrawEnv2 ctxt2;
};


/* WARNING! conflicting data type names: /BION~213.ELF.h/uchar - /uchar */


/* WARNING! conflicting data type names: /BION~213.ELF.h/uint - /uint */

typedef ulonglong uint16;


/* WARNING! conflicting data type names: /BION~213.ELF.h/ulong - /ulong */


/* WARNING! conflicting data type names: /BION~213.ELF.h/ulonglong - /ulonglong */


/* WARNING! conflicting data type names: /BION~213.ELF.h/undefined - /undefined */


/* WARNING! conflicting data type names: /BION~213.ELF.h/undefined1 - /undefined1 */


/* WARNING! conflicting data type names: /BION~213.ELF.h/undefined2 - /undefined2 */


/* WARNING! conflicting data type names: /BION~213.ELF.h/undefined3 - /undefined3 */


/* WARNING! conflicting data type names: /BION~213.ELF.h/undefined4 - /undefined4 */


/* WARNING! conflicting data type names: /BION~213.ELF.h/undefined8 - /undefined8 */


/* WARNING! conflicting data type names: /BION~213.ELF.h/ushort - /ushort */


/* WARNING! conflicting data type names: /BION~213.ELF.h/word - /word */

#define __STDC_VERSION__ 199900

#define _INTEGRAL_MAX_BITS 32

#define BSD 199103

typedef struct Elf32_Ehdr Elf32_Ehdr, *PElf32_Ehdr;

struct Elf32_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    dword e_entry;
    dword e_phoff;
    dword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};

typedef struct Elf32_Phdr Elf32_Phdr, *PElf32_Phdr;

typedef enum Elf_ProgramHeaderType_MIPS {
    PT_NULL=0,
    PT_LOAD=1,
    PT_DYNAMIC=2,
    PT_INTERP=3,
    PT_NOTE=4,
    PT_SHLIB=5,
    PT_PHDR=6,
    PT_TLS=7,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_STACK=1685382481,
    PT_GNU_RELRO=1685382482,
    PT_MIPS_REGINFO=1879048192,
    PT_MIPS_RTPROC=1879048193,
    PT_MIPS_OPTIONS=1879048194,
    PT_MIPS_ABIFLAGS=1879048195
} Elf_ProgramHeaderType_MIPS;

struct Elf32_Phdr {
    enum Elf_ProgramHeaderType_MIPS p_type;
    dword p_offset;
    dword p_vaddr;
    dword p_paddr;
    dword p_filesz;
    dword p_memsz;
    dword p_flags;
    dword p_align;
};

typedef struct Elf32_RegInfo_MIPS Elf32_RegInfo_MIPS, *PElf32_RegInfo_MIPS;

typedef enum Elf32_GPRMask_MIPS {
    gpr_zero=1,
    gpr_at=2,
    gpr_v0=4,
    gpr_v1=8,
    gpr_a0=16,
    gpr_a1=32,
    gpr_a2=64,
    gpr_a3=128,
    gpr_t0=256,
    gpr_t1=512,
    gpr_t2=1024,
    gpr_t3=2048,
    gpr_t4=4096,
    gpr_t5=8192,
    gpr_t6=16384,
    gpr_t7=32768,
    gpr_s0=65536,
    gpr_s1=131072,
    gpr_s2=262144,
    gpr_s3=524288,
    gpr_s4=1048576,
    gpr_s5=2097152,
    gpr_s6=4194304,
    gpr_s7=8388608,
    gpr_t8=16777216,
    gpr_t9=33554432,
    gpr_k0=67108864,
    gpr_k1=134217728,
    gpr_gp=268435456,
    gpr_sp=536870912,
    gpr_fp=1073741824,
    gpr_ra=2147483648
} Elf32_GPRMask_MIPS;

struct Elf32_RegInfo_MIPS {
    enum Elf32_GPRMask_MIPS ri_gprmask;
    dword field1_0x4[4];
    dword ri_gp_value;
};

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

typedef enum Elf_SectionHeaderType_MIPS {
    SHT_NULL=0,
    SHT_PROGBITS=1,
    SHT_SYMTAB=2,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_HASH=5,
    SHT_DYNAMIC=6,
    SHT_NOTE=7,
    SHT_NOBITS=8,
    SHT_REL=9,
    SHT_SHLIB=10,
    SHT_DYNSYM=11,
    SHT_INIT_ARRAY=14,
    SHT_FINI_ARRAY=15,
    SHT_PREINIT_ARRAY=16,
    SHT_GROUP=17,
    SHT_SYMTAB_SHNDX=18,
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_CHECKSUM=1879048184,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_syminfo=1879048188,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191,
    SHT_MIPS_LIBLIST=1879048192,
    SHT_MIPS_MSYM=1879048193,
    SHT_MIPS_CONFLICT=1879048194,
    SHT_MIPS_GPTAB=1879048195,
    SHT_MIPS_UCODE=1879048196,
    SHT_MIPS_DEBUG=1879048197,
    SHT_MIPS_REGINFO=1879048198,
    SHT_MIPS_PACKAGE=1879048199,
    SHT_MIPS_PACKSYM=1879048200,
    SHT_MIPS_RELD=1879048201,
    =1879048203,
    SHT_MIPS_CONTENT=1879048204,
    SHT_MIPS_OPTIONS=1879048205,
    SHT_MIPS_SHDR=1879048208,
    SHT_MIPS_FDESC=1879048209,
    SHT_MIPS_EXTSYM=1879048210,
    SHT_MIPS_DENSE=1879048211,
    SHT_MIPS_PDESC=1879048212,
    SHT_MIPS_LOCSYM=1879048213,
    SHT_MIPS_AUXSYM=1879048214,
    SHT_MIPS_OPTSYM=1879048215,
    SHT_MIPS_LOCSTR=1879048216,
    SHT_MIPS_LINE=1879048217,
    SHT_MIPS_RFDESC=1879048218,
    SHT_MIPS_DELTASYM=1879048219,
    SHT_MIPS_DELTAINST=1879048220,
    SHT_MIPS_DELTACLASS=1879048221,
    SHT_MIPS_DWARF=1879048222,
    SHT_MIPS_DELTADECL=1879048223,
    SHT_MIPS_SYMBOL_LIB=1879048224,
    SHT_MIPS_EVENTS=1879048225,
    SHT_MIPS_TRANSLATE=1879048226,
    SHT_MIPS_PIXIE=1879048227,
    SHT_MIPS_XLATE=1879048228,
    SHT_MIPS_XLATE_DEBUG=1879048229,
    SHT_MIPS_WHIRL=1879048230,
    SHT_MIPS_EH_REGION=1879048231,
    SHT_MIPS_XLATE_OLD=1879048232,
    SHT_MIPS_PDR_EXCEPTION=1879048233,
    SHT_MIPS_ABIFLAGS=1879048234
} Elf_SectionHeaderType_MIPS;

struct Elf32_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_MIPS sh_type;
    dword sh_flags;
    dword sh_addr;
    dword sh_offset;
    dword sh_size;
    dword sh_link;
    dword sh_info;
    dword sh_addralign;
    dword sh_entsize;
};

typedef struct Elf32_Sym Elf32_Sym, *PElf32_Sym;

struct Elf32_Sym {
    dword st_name;
    dword st_value;
    dword st_size;
    byte st_info;
    byte st_other;
    word st_shndx;
};

typedef union __dmath __dmath, *P__dmath;

typedef uint __uint32_t;

union __dmath {
    __uint32_t i[2];
    double d;
};

typedef enum __fdlibm_version {
    __fdlibm_ieee=-1,
    __fdlibm_svid=0,
    __fdlibm_xopen=1,
    __fdlibm_posix=2
} __fdlibm_version;

typedef char *__gnuc_va_list;

typedef int __int32_t;

typedef struct __sbuf __sbuf, *P__sbuf;

struct __sbuf {
    uchar *_base;
    int _size;
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct tm tm, *Ptm;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

struct _glue {
};

struct _atexit {
    struct _atexit *_next;
    int _ind;
    void **_fns[32];
};

struct tm {
};

struct __sFILE {
    uchar *_p;
    int _r;
    int _w;
    short _flags;
    short _file;
    struct __sbuf _bf;
    int _lbfsize;
    void *_cookie;
    void **_read;
    void **_write;
    void **_seek;
    void **_close;
    struct __sbuf _ub;
    uchar *_up;
    int _ur;
    uchar _ubuf[3];
    uchar _nbuf[1];
    struct __sbuf _lb;
    int _blksize;
    int _offset;
    struct _reent *_data;
};

struct _reent {
    uint _rand_next;
    char *_strtok_last;
    char _asctime_buf[26];
    struct tm _localtime_buf;
    int _gamma_signgam;
    struct _atexit *_atexit;
    struct _atexit _atexit0;
    void ***_sig_func;
    struct _glue __sglue;
    struct __sFILE __sf[3];
};

typedef struct _Bigint _Bigint, *P_Bigint;

typedef uint ULong;

struct _Bigint {
    struct _Bigint *_next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    ULong _x[1];
};

typedef long _fpos_t;

typedef float _iconVu0FVECTOR;

typedef int _iconVu0IVECTOR;

typedef union _new _new, *P_new;

typedef struct _unused _unused, *P_unused;

struct _unused {
    uchar *_nextf[30];
    uint _nmalloc[30];
};

union _new {
    struct _reent _reent;
    struct _unused _unused;
};


/* WARNING! conflicting data type names: /haven_demo.h/_sceDmaTag - /amod_struct.h/_sceDmaTag */

typedef struct _sceGifPackAd _sceGifPackAd, *P_sceGifPackAd;

typedef ulong u_long;

struct _sceGifPackAd {
    u_long DATA;
    u_long ADDR;
};

typedef struct _sceGifPackFog _sceGifPackFog, *P_sceGifPackFog;

struct _sceGifPackFog {
    u_int pad[3];
    u_int F;
};

typedef struct _sceGifPackNop _sceGifPackNop, *P_sceGifPackNop;

struct _sceGifPackNop {
    u_long pad[2];
};

typedef struct _sceGifPackRgbaq _sceGifPackRgbaq, *P_sceGifPackRgbaq;

struct _sceGifPackRgbaq {
    u_int R;
    u_int G;
    u_int B;
    u_int A;
};

typedef struct _sceGifPackSt _sceGifPackSt, *P_sceGifPackSt;

struct _sceGifPackSt {
    float S;
    float T;
    float Q;
    u_int pad96;
};

typedef struct _sceGifPackUv _sceGifPackUv, *P_sceGifPackUv;

struct _sceGifPackUv {
    int U;
    int V;
    long pad64;
};

typedef struct _sceGifPackXyz _sceGifPackXyz, *P_sceGifPackXyz;

struct _sceGifPackXyz {
    int X;
    int Y;
    u_int Z;
    u_int pad96;
    u_int ADC;
    u_int pad112;
};

typedef struct _sceGifPackXyzf _sceGifPackXyzf, *P_sceGifPackXyzf;

struct _sceGifPackXyzf {
    int X;
    int Y;
    u_int Z;
    u_int F;
    u_int pad108;
    u_int ADC;
    u_int pad112;
};

typedef struct _sif_client_data _sif_client_data, *P_sif_client_data;

typedef struct _sif_rpc_data _sif_rpc_data, *P_sif_rpc_data;

typedef void **sceSifEndFunc;

typedef struct _sif_serve_data _sif_serve_data, *P_sif_serve_data;

typedef void **sceSifRpcFunc;

typedef struct _sif_client_data sceSifClientData;

typedef struct _sif_queue_data _sif_queue_data, *P_sif_queue_data;

struct _sif_rpc_data {
    void *paddr;
    uint pid;
    int tid;
    uint mode;
};

struct _sif_client_data {
    struct _sif_rpc_data rpcd;
    uint command;
    void *buff;
    void *cbuff;
    sceSifEndFunc func;
    void *para;
    struct _sif_serve_data *serve;
};

struct _sif_serve_data {
    uint command;
    sceSifRpcFunc func;
    void *buff;
    int size;
    sceSifRpcFunc cfunc;
    void *cbuff;
    int csize;
    sceSifClientData *client;
    void *paddr;
    uint fno;
    void *receive;
    int rsize;
    int rmode;
    uint rid;
    struct _sif_serve_data *link;
    struct _sif_serve_data *next;
    struct _sif_queue_data *base;
};

struct _sif_queue_data {
    int key;
    int active;
    struct _sif_serve_data *link;
    struct _sif_serve_data *start;
    struct _sif_serve_data *end;
    struct _sif_queue_data *next;
};

typedef struct _sif_receive_data _sif_receive_data, *P_sif_receive_data;

struct _sif_receive_data {
    struct _sif_rpc_data rpcd;
    void *src;
    void *dest;
    int size;
};


/* WARNING! conflicting data type names: /haven_demo.h/AnimList - /amod_struct.h/AnimList */

typedef void *AppScriptFn;

typedef enum block_move_type {
    BLOCK_MOVE_NORMAL=0,
    BLOCK_MOVE_NOT_LAST=1,
    BLOCK_MOVE_LAST=2
} block_move_type;

typedef void *callmain;

typedef struct ccc_int128 ccc_int128, *Pccc_int128;

struct ccc_int128 {
};

typedef void **CdlCB;


/* WARNING! conflicting data type names: /haven_demo.h/CharacterModel - /amod_struct.h/CharacterModel */


/* WARNING! conflicting data type names: /haven_demo.h/CharacterModel_PS2 - /amod_struct.h/CharacterModel_PS2 */

typedef ulong clock_t;

typedef enum cmp_type {
    CMP_SI=0,
    CMP_DI=1,
    CMP_SF=2,
    CMP_DF=3,
    CMP_MAX=4
} cmp_type;

typedef struct complex complex, *Pcomplex;

struct complex {
};

typedef struct complexint complexint, *Pcomplexint;

struct complexint {
    int real;
    int imag;
};

typedef struct mips_args mips_args, *Pmips_args;

typedef struct mips_args CUMULATIVE_ARGS;

struct mips_args {
    int gp_reg_found;
    int arg_number;
    int arg_words;
    int fp_arg_words;
    int last_arg_fp;
    int fp_code;
    int num_adjusts;
    void *adjust_rtx_def[8];
};

typedef union data data, *Pdata;

typedef struct nuanimcurvedata_s nuanimcurvedata_s, *Pnuanimcurvedata_s;

typedef struct nuanimcurvedata_s NUANIMCURVEDATA;

union data {
    float constant;
    NUANIMCURVEDATA *curvedata;
};

struct nuanimcurvedata_s {
    uint *mask;
    ushort *key_ixs;
    void *key_array;
};


/* WARNING! conflicting data type names: /haven_demo.h/deformerweightsarray_s - /amod_struct.h/deformerweightsarray_s */

typedef enum delay_type {
    DELAY_NONE=0,
    DELAY_LOAD=1,
    DELAY_HILO=2,
    DELAY_HILO1=3,
    DELAY_FCMP=4
} delay_type;

typedef double DFtype;

typedef struct DIstruct DIstruct, *PDIstruct;

typedef int SItype;

struct DIstruct {
    SItype low;
    SItype high;
};

typedef long DItype;

typedef void *DIunion;

typedef void *div_t;

typedef int DWORD;

typedef enum enum_160 {
    NUJOINT_MTX_SCALE_COMPENSATE=1
} enum_160;

typedef enum enum_161 {
    NUJOINT_MTX_SCALE_CHANGED=2
} enum_161;

typedef enum enum_162 {
    NUJOINT_MTX_INVALID=4
} enum_162;

typedef enum enum_163 {
    NUJOINT_MTX_LOCATOR_OFFSET=8
} enum_163;

typedef enum enum_164 {
    NUJOINT_MTX_IK=16
} enum_164;

typedef enum enum_169 {
    NUANIMCURVE_STEPPED=1
} enum_169;

typedef enum enum_207 {
    NUHGOBJ_LOADTYPE_DYNAMIC=0,
    NUHGOBJ_LOADTYPE_EXTBLOCK=1
} enum_207;

typedef enum enum_208 {
    NUCOLLISIONSPHERETYPE=1
} enum_208;

typedef enum enum_217 {
    NUJOINTANIM_ROTATE=1
} enum_217;

typedef enum enum_218 {
    NUJOINTANIM_TRANSLATE=2
} enum_218;

typedef enum enum_219 {
    NUJOINTANIM_SCALE=4
} enum_219;

typedef enum enum_220 {
    NUJOINTANIM_APPLY_X_ROTATE_LIMITS=8
} enum_220;

typedef enum enum_221 {
    NUJOINTANIM_APPLY_Y_ROTATE_LIMITS=16
} enum_221;

typedef enum enum_222 {
    NUJOINTANIM_APPLY_Z_ROTATE_LIMITS=32
} enum_222;

typedef enum enum_25 {
    __no_type_class=-1,
    __void_type_class=0,
    __integer_type_class=1,
    __char_type_class=2,
    __enumeral_type_class=3,
    __boolean_type_class=4,
    __pointer_type_class=5,
    __reference_type_class=6,
    __offset_type_class=7,
    __real_type_class=8,
    __complex_type_class=9,
    __function_type_class=10,
    __method_type_class=11,
    __record_type_class=12,
    __union_type_class=13,
    __array_type_class=14,
    __string_type_class=15,
    __set_type_class=16,
    __file_type_class=17,
    __lang_type_class=18
} enum_25;

typedef enum enum_256 {
    NUSP_VISIBLE=0,
    NUSP_RESETMTX=1,
    NUSP_MTX=2,
    NUSP_PREMTX=3,
    NUSP_POSTMTX=4,
    NUSP_RESETPOS=5,
    NUSP_WPOS=6,
    NUSP_WPOSR=7,
    NUSP_LPOS=8,
    NUSP_LPOSR=9,
    NUSP_RESETROT=10,
    NUSP_ROTX=11,
    NUSP_ROTY=12,
    NUSP_ROTZ=13,
    NUSP_ROTXR=14,
    NUSP_ROTYR=15,
    NUSP_ROTZR=16,
    NUSP_PROTXR=17,
    NUSP_PROTYR=18,
    NUSP_PROTZR=19,
    NUSP_SCALE=20,
    NUSP_SCALER=21,
    NUSP_END=22
} enum_256;

typedef enum enum_263 {
    STERRPRIM_CAUSES_DAMAGE=1
} enum_263;

typedef enum enum_264 {
    STERRPRIM_PUSHES=2
} enum_264;

typedef enum enum_267 {
    STERRINST_DO_SCALE_TRANSFORM=1
} enum_267;

typedef enum enum_284 {
    NUTRIGGER_BEEN_PULLED=1
} enum_284;

typedef enum enum_319 {
    NU2_PT_POINT=0,
    NU2_PT_LINE=1,
    NU2_PT_TRI=2,
    NU2_PT_TRI_STRIP=3,
    NU2_PT_TRI_FAN=4,
    NU2_PT_CNT=5
} enum_319;

typedef enum enum_326 {
    PS2BLEND_SRCALPHA=0,
    PS2BLEND_INVSRCALPHA=1,
    PS2BLEND_ZERO=2,
    PS2BLEND_ONE=3,
    PS2BLEND_INVSRCCOLOR=4,
    PS2BLEND_FORCE_DWORD=2147483647
} enum_326;

typedef enum enum_327 {
    PS2TRANSFORMSTATE_WORLD=0,
    PS2TRANSFORMSTATE_WORLD1=1,
    PS2TRANSFORMSTATE_WORLD2=2,
    PS2TRANSFORMSTATE_WORLD3=3,
    PS2TRANSFORMSTATE_TEXTURE1=4,
    PS2TRANSFORMSTATE_TEXTURE2=5,
    PS2TRANSFORMSTATE_CNT=6,
    PS2TRANSFORMSTATE_FORCE_DWORD=2147483647
} enum_327;

typedef enum enum_328 {
    PS2PT_POINTLIST=0,
    PS2PT_LINELIST=1,
    PS2PT_TRIANGLELIST=2,
    PS2PT_FORCE_DWORD=2147483647
} enum_328;

typedef enum enum_329 {
    PS2_CULLMODE_NONE=0,
    PS2_CULLMODE_CW=1,
    PS2_CULLMODE_CCW=2
} enum_329;

typedef enum enum_330 {
    PS2_ZMODE_CMPUPD=0,
    PS2_ZMODE_CMP=1,
    PS2_ZMODE_UPD=2,
    PS2_ZMODE_DISABLED=3
} enum_330;

typedef enum enum_335 {
    PS2_DMA_MARK_NULL=0,
    PS2_DMA_MARK_MTL=1,
    PS2_DMA_MARK_TXTRSET=2,
    PS2_DMA_MARK_TXTRLOAD=3,
    PS2_DMA_MARK_GEOMCALL=4,
    PS2_DMA_MARK_GOBJDATA=5,
    PS2_DMA_MARK_SKINDATA=6,
    PS2_DMA_MARK_SKINHDR=7,
    PS2_DMA_MARK_SKINMTX=8,
    PS2_DMA_MARK_BEGINSCENE_FB=9,
    PS2_DMA_MARK_BEGINSCENE_FBT=10,
    PS2_DMA_MARK_BEGINSCENE_ZB=11,
    PS2_DMA_MARK_BEGINSCENE_ZBS=12,
    PS2_DMA_MARK_STREAMFLUSHLINK=13,
    PS2_DMA_MARK_TEXTPRINT=14,
    PS2_DMA_MARK_CLEARSCREEN=15,
    PS2_DMA_MARK_GRADCLEARSCREEN=16,
    PS2_DMA_MARK_CLIPTRI3D=17,
    PS2_DMA_MARK_CLIPQUAD3D=18,
    PS2_DMA_MARK_CLIPTRISTRIP3D=19,
    PS2_DMA_MARK_MTXLOAD=20,
    PS2_DMA_MARK_LIGHTLOAD=21,
    PS2_DMA_MARK_FXMTXLOAD=22,
    PS2_DMA_MARK_SPECLOAD=23,
    PS2_DMA_MARK_WAITTEXTURETRANSFER=24,
    PS2_DMA_MARK_ENDTEXTURETRANSFER=25,
    PS2_DMA_MARK_FREE=26
} enum_335;

typedef enum enum_338 {
    CUTSCENE_PLAYED_FIRST_FRAME=1
} enum_338;

typedef enum enum_339 {
    CUTSCENE_FINISHED=2
} enum_339;

typedef enum enum_340 {
    CUTSCENE_RESTART=4
} enum_340;

typedef enum enum_353 {
    NUPLAYVIDEO_OK=1,
    NUPLAYVIDEO_WAIT=2,
    NUPLAYVIDEO_QUIT=3,
    NUPLAYVIDEO_CNT=4
} enum_353;

typedef enum enum_43 {
    NU_IS_RIGHT=1
} enum_43;

typedef enum enum_44 {
    NU_IS_ABOVE=2
} enum_44;

typedef enum enum_45 {
    NU_IS_BEHIND=4
} enum_45;

typedef enum enum_46 {
    NU_IS_LEFT=8
} enum_46;

typedef enum enum_47 {
    NU_IS_BELOW=16
} enum_47;

typedef enum enum_48 {
    NU_IS_IN_FRONT=32
} enum_48;

typedef enum enum_62 {
    TAO_TEX=0,
    TAO_TEXADJ=1,
    TAO_WAIT=2,
    TAO_ON=3,
    TAO_OFF=4,
    TAO_RATE=5,
    TAO_LABEL=6,
    TAO_GOTO=7,
    TAO_GOSUB=8,
    TAO_BTEX=9,
    TAO_RET=10,
    TAO_REPEAT=11,
    TAO_REPEND=12,
    TAO_UNTILTEX=13,
    TAO_END=14,
    TAO_XREF=15,
    TAO_COUNT=16
} enum_62;

typedef enum enum_63 {
    TAO_CC_EQ=0,
    TAO_CC_LT=1,
    TAO_CC_GT=2,
    TAO_CC_LE=3,
    TAO_CC_GE=4,
    TAO_CC_NE=5,
    TAO_CC_CNT=6
} enum_63;

typedef enum enum_7 {
    NUMEM_MALLOC=0,
    NUMEM_DISCARDABLE=1
} enum_7;

typedef enum enum_87 {
    NUMTL_UVANMMODE_OFF=0,
    NUMTL_UVANMMODE_EXT=1,
    NUMTL_UVANMMODE_DS=2,
    NUMTL_UVANMMODE_SIN=3,
    NUMTL_UVANMMODE_COS=4,
    NUMTL_UVANMMODE_CNT=5
} enum_87;

typedef enum enum_95 {
    NUMTL_PRI_CC_LTE=0,
    NUMTL_PRI_CC_LT=1,
    NUMTL_PRI_CC_EQ=2,
    NUMTL_PRI_CC_CNT=3
} enum_95;

typedef struct exception exception, *Pexception;

struct exception {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
    int err;
};

typedef struct __sFILE FILE;

typedef _fpos_t fpos_t;

typedef void **func_ptr;

typedef void *FxBlueOrGreenData;

typedef void *FxSprite2Set;

typedef void *FxSpriteSet;


/* WARNING! conflicting data type names: /haven_demo.h/gobjtype_s - /amod_struct.h/gobjtype_s */

typedef struct instNUTRIGGER_s instNUTRIGGER_s, *PinstNUTRIGGER_s;

typedef struct instNUTRIGGER_s instNUTRIGGER;

struct instNUTRIGGER_s {
    short hitpoints;
    uchar enableflags;
    char flags;
};

typedef struct instNUTRIGGERSYS_s instNUTRIGGERSYS_s, *PinstNUTRIGGERSYS_s;

typedef struct instNUTRIGGERSYS_s instNUTRIGGERSYS;

typedef struct NUTRIGGERSYS_s NUTRIGGERSYS_s, *PNUTRIGGERSYS_s;

typedef struct NUTRIGGERSYS_s NUTRIGGERSYS;

typedef struct NUTRIGGER_s NUTRIGGER_s, *PNUTRIGGER_s;

typedef struct NUTRIGGER_s NUTRIGGER;

typedef enum NUTRIGGERTYPE_s {
    NUTRIGGER_AUTO=0,
    NUTRIGGER_PLAYER_CONTACT=1,
    NUTRIGGER_PLAYER_WEAPON_CONTACT=2
} NUTRIGGERTYPE_s;

typedef enum NUTRIGGERTYPE_s NUTRIGGERTYPE;

typedef struct NUTRIGGERPRIM_s NUTRIGGERPRIM_s, *PNUTRIGGERPRIM_s;

typedef struct NUTRIGGERPRIM_s NUTRIGGERPRIM;

typedef enum NUTRIGGERPRIMTYPES_e {
    NUTRIGGERPRIMTYPE_NONE=0,
    NUTRIGGERPRIMTYPE_SPHERE=1,
    NUTRIGGERPRIMTYPE_CUBE=2,
    NUTRIGGERPRIMTYPE_CYLINDER=3
} NUTRIGGERPRIMTYPES_e;

typedef enum NUTRIGGERPRIMTYPES_e NUTRIGGERPRIMTYPES;

struct NUTRIGGERPRIM_s {
    NUTRIGGERPRIMTYPES type;
    void *data;
};

struct NUTRIGGER_s {
    char *triggername;
    NUTRIGGERTYPE trigger_type;
    short hitpoints;
    char enableflags;
    char pad;
    int scale_transform;
    int display_box;
    int persistant;
    int requires_player_on_ground;
    float radius;
    NUVEC min;
    NUVEC max;
    short numprims;
    short instance_ix;
    NUTRIGGERPRIM *prims;
};

struct NUTRIGGERSYS_s {
    int version;
    int address_offset;
    int ntriggers;
    NUTRIGGER *triggers;
};

struct instNUTRIGGERSYS_s {
    struct instNUTRIGGERSYS_s *next;
    struct instNUTRIGGERSYS_s *prev;
    NUTRIGGERSYS *triggersys;
    instNUTRIGGER *itriggers;
    void *gscene;
    void *scriptset;
    char params[32];
    int is_disabled;
};

typedef void *ldiv_t;

typedef struct lite_s lite_s, *Plite_s;

typedef struct lite_s LITE;

struct lite_s {
    NUVEC dir;
    float pad0;
    NUVEC ldir;
    float pad1;
    float r;
    float g;
    float b;
    float a;
    struct lite_s *succ;
    struct lite_s *prev;
};

typedef struct ccc_int128 long128;

typedef enum machine_mode {
    VOIDmode=0,
    PQImode=1,
    QImode=2,
    PHImode=3,
    HImode=4,
    PSImode=5,
    SImode=6,
    PDImode=7,
    DImode=8,
    TImode=9,
    OImode=10,
    QFmode=11,
    HFmode=12,
    TQFmode=13,
    SFmode=14,
    DFmode=15,
    XFmode=16,
    TFmode=17,
    QCmode=18,
    HCmode=19,
    SCmode=20,
    DCmode=21,
    XCmode=22,
    TCmode=23,
    CQImode=24,
    CHImode=25,
    CSImode=26,
    CDImode=27,
    CTImode=28,
    COImode=29,
    BLKmode=30,
    CCmode=31,
    MAX_MACHINE_MODE=32
} machine_mode;


/* WARNING! conflicting data type names: /haven_demo.h/mask - /amod_struct.h/mask */

typedef enum mips_abicalls_type {
    MIPS_ABICALLS_NO=0,
    MIPS_ABICALLS_YES=1
} mips_abicalls_type;

typedef struct mips_frame_info mips_frame_info, *Pmips_frame_info;

struct mips_frame_info {
    long total_size;
    long var_size;
    long args_size;
    long extra_size;
    int gp_reg_size;
    int fp_reg_size;
    long mask;
    long fmask;
    long gp_save_offset;
    long fp_save_offset;
    long gp_sp_offset;
    long fp_sp_offset;
    int initialized;
    int num_gp;
    int num_fp;
    long insns_len;
};

typedef enum mode_class {
    MODE_RANDOM=0,
    MODE_INT=1,
    MODE_FLOAT=2,
    MODE_PARTIAL_INT=3,
    MODE_CC=4,
    MODE_COMPLEX_INT=5,
    MODE_COMPLEX_FLOAT=6,
    MAX_MODE_CLASS=7
} mode_class;


/* WARNING! conflicting data type names: /haven_demo.h/Nearest_Light_s - /amod_struct.h/Nearest_Light_s */

typedef struct nuanimcurve2_s nuanimcurve2_s, *Pnuanimcurve2_s;

typedef struct nuanimcurve2_s NUANIMCURVE2;

struct nuanimcurve2_s {
    union data data;
};

typedef struct nuanimdata2_s nuanimdata2_s, *Pnuanimdata2_s;

typedef struct nuanimdata2_s NUANIMDATA2;

struct nuanimdata2_s {
    float endframe;
    short nnodes;
    short ncurves;
    short nchunks;
    short pad;
    NUANIMCURVE2 *curves;
    char *curveflags;
    char *curvesetflags;
};

typedef struct nuanimdata__ nuanimdata__, *Pnuanimdata__;

struct nuanimdata__ {
    float time;
    char *node_name;
    int nchunks;
    struct nuanimdatachunk_s **chunks;
};


/* WARNING! conflicting data type names: /haven_demo.h/nuanimdata_s - /amod_struct.h/nuanimdata_s */


/* WARNING! conflicting data type names: /haven_demo.h/NUANIMDATAHDR_s - /amod_struct.h/NUANIMDATAHDR_s */

typedef struct NUANIMKEYBIG_s NUANIMKEYBIG_s, *PNUANIMKEYBIG_s;

typedef struct NUANIMKEYBIG_s NUANIMKEYBIG;

struct NUANIMKEYBIG_s {
    float time;
    float dtime;
    float val;
    float grad;
};

typedef struct NUANIMKEYINTEGER_s NUANIMKEYINTEGER_s, *PNUANIMKEYINTEGER_s;

typedef struct NUANIMKEYINTEGER_s NUANIMKEYINTEGER;

struct NUANIMKEYINTEGER_s {
    float val;
    float time;
};

typedef struct NUANIMKEYSMALL_s NUANIMKEYSMALL_s, *PNUANIMKEYSMALL_s;

typedef struct NUANIMKEYSMALL_s NUANIMKEYSMALL;

struct NUANIMKEYSMALL_s {
    short val;
    char grad;
    uchar time;
};

typedef enum NUANIMKEYTYPES_e {
    NUANIMKEYTYPE_NONE=0,
    NUANIMKEYTYPE_BIG=1,
    NUANIMKEYTYPE_SMALL=2,
    NUANIMKEYTYPE_INTEGER=3,
    NUANIMKEYTYPE_BOOLEAN=4
} NUANIMKEYTYPES_e;

typedef enum NUANIMKEYTYPES_e NUANIMKEYTYPES;


/* WARNING! conflicting data type names: /haven_demo.h/nuanimtime_s - /amod_struct.h/nuanimtime_s */

typedef struct nuapistate_s nuapistate_s, *Pnuapistate_s;

typedef struct nuapistate_s NUAPISTATE;

struct nuapistate_s {
};

typedef struct NUAPPCOMMAND_s NUAPPCOMMAND_s, *PNUAPPCOMMAND_s;

typedef struct NUAPPCOMMAND_s NUAPPCOMMAND;

struct NUAPPCOMMAND_s {
    char *command_name;
    AppScriptFn *fn;
};

typedef struct nubounds_s nubounds_s, *Pnubounds_s;

typedef struct nubounds_s NUBOUNDS;

struct nubounds_s {
    int nspheres;
    int nbounds;
    NUVEC4 *spheres;
    NUVEC4 *boxes;
};

typedef struct nucamera_s nucamera_s, *Pnucamera_s;

typedef struct nucamera_s NUCAMERA;

struct nucamera_s {
    NUMTX mtx;
    float fov;
    float aspect;
    float nearclip;
    float farclip;
    float portalnearclip;
    NUVEC scale;
};

typedef enum nucamfxmode_s {
    NUCAMFX_NONE=0,
    NUCAMFX_REFLECT=1,
    NUCAMFX_REFRACT=2
} nucamfxmode_s;

typedef enum nucamfxmode_s NUCAMFX;


/* WARNING! conflicting data type names: /haven_demo.h/nucolourref_s - /amod_struct.h/nucolourref_s */

typedef struct NUCOMMANDHDR_s NUCOMMANDHDR_s, *PNUCOMMANDHDR_s;

typedef struct NUCOMMANDHDR_s NUCOMMANDHDR;

typedef enum NUCOMMANDTYPES_e {
    NUCOMMAND_STARTCUTSCENEINST=0,
    NUCOMMAND_PLAYCUTSCENEINST=1,
    NUCOMMAND_CHAINCUTSCENEINST=2,
    NUCOMMAND_REPEATCUTSCENEINST=3,
    NUCOMMAND_RESETCUTSCENEINST=4,
    NUCOMMAND_SETTRIGGERFLAG=5,
    NUCOMMAND_RESETTRIGGER=6,
    NUCOMMAND_SETVISIBILITY=7,
    NUCOMMAND_IFPARAM=8,
    NUCOMMAND_SETPARAM=9,
    NUCOMMAND_IFTRIGGERPULLED=10,
    NUCOMMAND_ENABLETRIGGER=11,
    NUCOMMAND_PAUSECUTSCENEINST=12,
    NUCOMMAND_UNPAUSECUTSCENEINST=13,
    NUCOMMAND_APPCOMMAND=14
} NUCOMMANDTYPES_e;

typedef enum NUCOMMANDTYPES_e NUCOMMANDTYPES;

struct NUCOMMANDHDR_s {
    struct NUCOMMANDHDR_s *next;
    NUCOMMANDTYPES type;
};

typedef struct NUCUTSCENE_s NUCUTSCENE_s, *PNUCUTSCENE_s;

typedef struct NUCUTSCENE_s NUCUTSCENE;


/* WARNING! conflicting data type names: /haven_demo.h/NUMTL - /amod_struct.h/NUMTL */

typedef struct NUCUTSCENECAMERA_s NUCUTSCENECAMERA_s, *PNUCUTSCENECAMERA_s;

typedef struct NUCUTSCENECAMERA_s NUCUTSCENECAMERA;


/* WARNING! conflicting data type names: /haven_demo.h/NUGOBJ - /amod_struct.h/NUGOBJ */

typedef struct NUHGOBJ_s NUHGOBJ;

typedef struct NUHINSTANCE_s NUHINSTANCE_s, *PNUHINSTANCE_s;

typedef struct NUHINSTANCE_s NUHINSTANCE;


/* WARNING! conflicting data type names: /haven_demo.h/NUTEXANIM - /amod_struct.h/NUTEXANIM */

struct NUCUTSCENE_s {
    short *tids;
    int numtid;
    NUMTL **mtls;
    int nummtl;
    float length;
    char *string_table;
    NUCUTSCENECAMERA *cameras[10];
    NUANIMDATA *camera_anim;
    float *camera_change_times;
    uchar *camera_changes;
    int numgobj;
    NUGOBJ **gobjs;
    int numinstance;
    NUINSTANCE *instances;
    NUANIMDATA *instance_animdata;
    int numhgobj;
    NUHGOBJ **hgobj;
    int numhinstance;
    NUHINSTANCE *hinstances;
    float current_time;
    int flags;
    int numtexanims;
    NUTEXANIM *texanims;
    uchar num_camera_changes;
    uchar camera_change_ix;
    uchar camera_ix;
    uchar camera_anim_ix;
    char pad[3];
};

struct NUHINSTANCE_s {
    NUMTX mtx;
    NUHGOBJ *hgobj;
    NUANIMDATA *animdata;
    NUANIMDATA *blendweightanimdata;
    char pad[4];
};

struct NUCUTSCENECAMERA_s {
    NUCAMERA *camera;
};


/* WARNING! conflicting data type names: /haven_demo.h/nudathdr_s - /astructs.h/nudathdr_s */

typedef void *NUDEBUGMSGFUNC;

typedef void *NUDEBUGMSGFUNCTTY;

typedef struct nudllhdr_s nudllhdr_s, *Pnudllhdr_s;

typedef struct nudllhdr_s NUDLLHDR;

struct nudllhdr_s {
    uint *indextable;
    void *dll;
    int dllsize;
    char dllname[64];
};

typedef void *NUERRORFUNC;


/* WARNING! conflicting data type names: /haven_demo.h/NUFACEONGEOM - /amod_struct.h/NUFACEONGEOM */


/* WARNING! conflicting data type names: /haven_demo.h/nufaceongeom_s - /amod_struct.h/nufaceongeom_s */

typedef struct nufilemtl_s NUFILEMTL;


/* WARNING! conflicting data type names: /haven_demo.h/nufilemtl_s - /astructs.h/nufilemtl_s */


/* WARNING! conflicting data type names: /haven_demo.h/nufmtlattrib_s - /astructs.h/nufmtlattrib_s */

typedef struct nufmtlattribOLD_s nufmtlattribOLD_s, *PnufmtlattribOLD_s;

struct nufmtlattribOLD_s {
    uint alpha;
    uint filter;
    uint fx;
    uint utc;
    uint vtc;
    uint cull;
    uint zmode;
    uint lighting;
    uint colour;
    uint fill;
    uint atst;
    uint aref;
    uint afail;
    uint uvmode;
};

typedef struct nufndesc_s nufndesc_s, *Pnufndesc_s;

struct nufndesc_s {
    short left;
    short top;
    short right;
    short bottom;
    short width;
    short height;
    uchar ascii[4];
};

typedef struct nufnt_s nufnt_s, *Pnufnt_s;

typedef struct nufnt_s NUFNT;

typedef struct nufntchar_s nufntchar_s, *Pnufntchar_s;

typedef struct nufntchar_s NUFNTCHAR;

struct nufntchar_s {
    float x1;
    float y1;
    float x2;
    float y2;
    uchar w;
    uchar h;
};

struct nufnt_s {
    struct nufnt_s *next;
    struct nufnt_s *last;
    float h;
    int hi;
    float b;
    int bi;
    struct numtl_WoC *mtl;
    int nchars;
    uchar chrix[256];
    NUFNTCHAR chars[1];
};

typedef struct nufndesc_s NUFNTDESC;


/* WARNING! conflicting data type names: /haven_demo.h/nufpar_s - /astructs.h/nufpar_s */


/* WARNING! conflicting data type names: /haven_demo.h/NUFPAR_T - /astructs.h/NUFPAR_T */

typedef struct nufpatch_s nufpatch_s, *Pnufpatch_s;

typedef struct nufpatch_s NUFPATCH;

struct nufpatch_s {
    NUMTX p;
    NUMTX corners;
    NUMTX uv;
    NUMTX nrm;
    int tid_lores;
    int tid_luminance;
    NUMTL *mtl_lores;
    NUMTL *mtl_luminance;
};

typedef void *NUFRUSTRUM;


/* WARNING! conflicting data type names: /haven_demo.h/nufx_u - /amod_struct.h/nufx_u */


/* WARNING! conflicting data type names: /haven_demo.h/NUGEOM - /amod_struct.h/NUGEOM */


/* WARNING! conflicting data type names: /haven_demo.h/nugeom_s - /amod_struct.h/nugeom_s */


/* WARNING! conflicting data type names: /haven_demo.h/nugeomps2_s - /astructs.h/nugeomps2_s */


/* WARNING! conflicting data type names: /haven_demo.h/nugobj_s - /amod_struct.h/nugobj_s */


/* WARNING! conflicting data type names: /haven_demo.h/NUGOBJTYPE - /amod_struct.h/NUGOBJTYPE */


/* WARNING! conflicting data type names: /haven_demo.h/nugscn_s - /amod_struct.h/nugscn_s */

typedef struct nugscn_s NUGSCENE_T;

typedef struct nuheightvert_s nuheightvert_s, *Pnuheightvert_s;

typedef struct nuheightvert_s NUHEIGHTVERT;

struct nuheightvert_s {
    NUVEC4 c;
    NUVEC4 n;
    NUVEC4 u;
};


/* WARNING! conflicting data type names: /haven_demo.h/NUHGOBJ_s - /amod_struct.h/NUHGOBJ_s */


/* WARNING! conflicting data type names: /haven_demo.h/nuhspecial_s - /amod_struct.h/nuhspecial_s */


/* WARNING! conflicting data type names: /haven_demo.h/nuinstance_s - /amod_struct.h/nuinstance_s */


/* WARNING! conflicting data type names: /haven_demo.h/nuinstanim_s - /amod_struct.h/nuinstanim_s */


/* WARNING! conflicting data type names: /haven_demo.h/nuinstflags_s - /amod_struct.h/nuinstflags_s */

typedef void *nuintcbfn;

typedef struct nuinthandler_s nuinthandler_s, *Pnuinthandler_s;

typedef struct nuinthandler_s NUINTHANDLER;

struct nuinthandler_s {
    struct nuinthandler_s *succ;
    struct nuinthandler_s *prev;
    nuintcbfn *func;
    int pri;
};


/* WARNING! conflicting data type names: /haven_demo.h/NULAYERDATA_s - /amod_struct.h/NULAYERDATA_s */

typedef struct nulight_s nulight_s, *Pnulight_s;

typedef struct nulight_s NULIGHT;

typedef enum nulighttype_e NULIGHTTYPE;

struct nulight_s {
    NULIGHTTYPE type;
    int flags;
    NUCOLOUR3 ambient;
    NUCOLOUR3 diffuse;
    NUCOLOUR3 specular;
    float range;
    float falloff;
    float attenuation[3];
    NUMTX mtx;
    float inner;
    float outer;
};


/* WARNING! conflicting data type names: /haven_demo.h/nulistlnk_s - /astructs.h/nulistlnk_s */


/* WARNING! conflicting data type names: /haven_demo.h/numemblk_s - /astructs.h/numemblk_s */


/* WARNING! conflicting data type names: /haven_demo.h/numtl_s - /amod_struct.h/numtl_s */

typedef struct numtl_s *NUMTL_T;

typedef struct numtlattribOLD_s numtlattribOLD_s, *PnumtlattribOLD_s;

typedef struct numtlattribOLD_s NUMTLATTRIBOLD;

struct numtlattribOLD_s {
    uint alpha;
    uint filter;
    uint fx;
    uint utc;
    uint vtc;
    uint cull;
    uint zmode;
    uint lighting;
    uint colour;
    uint fill;
    uint atst;
    uint aref;
    uint afail;
    uint uvmode;
    uint ot;
    uint shade;
    uint date;
    uint datm;
    uint pad;
};

typedef void **NUMTLCALLBACK;

typedef void *NUMTLPRICB;

typedef struct numtlpricbinfo_s numtlpricbinfo_s, *Pnumtlpricbinfo_s;

typedef struct numtlpricbinfo_s NUMTLPRICBINFO;

struct numtlpricbinfo_s {
    struct numtlpricbinfo_s *succ[24];
    struct numtlpricbinfo_s *prev[24];
    NUMTLPRICB *cb;
    short pri;
    short primask;
    short cc;
    short pad;
};

typedef void *NUMTLREADEVENTFN;

typedef struct nunrand_s nunrand_s, *Pnunrand_s;

struct nunrand_s {
    int idum;
};


/* WARNING! conflicting data type names: /haven_demo.h/nuotitem_s - /astructs.h/nuotitem_s */

typedef struct nupad_s nupad_s, *Pnupad_s;

typedef struct nupad_s NUPAD;

struct nupad_s {
    ulonglong dmabuff[80];
    ulonglong dmabuff2[80];
    int port;
    int slot;
    int stage;
    int id;
    int ldx;
    int ldy;
    int rdx;
    int rdy;
    float l_nx;
    float l_ny;
    float l_rx;
    float l_ry;
    float l_dx;
    float l_dy;
    float r_nx;
    float r_ny;
    float r_rx;
    float r_ry;
    float r_dx;
    float r_dy;
    uchar act_direct[6];
    uchar act_align[6];
    u_int paddata;
    u_int paddata_db;
    u_int oldpaddata;
    u_int paddata_dbr;
    int analogue_sticks;
    int analogue_buttons;
    int valid;
    int deadzone;
    u_int padvalue;
    u_char ok;
    u_char read_id;
    u_char buttons_hi;
    u_char buttons_lo;
    u_char r_alg_x;
    u_char r_alg_y;
    u_char l_alg_x;
    u_char l_alg_y;
    u_char l_algpad_r;
    u_char l_algpad_l;
    u_char l_algpad_u;
    u_char l_algpad_d;
    u_char r_algpad_u;
    u_char r_algpad_r;
    u_char r_algpad_d;
    u_char r_algpad_l;
    u_char l1_alg;
    u_char r1_alg;
    u_char l2_alg;
    u_char r2_alg;
    u_char pad[12];
};

typedef void *NUPADREC;

typedef void *nuplayvideohandler;

typedef struct nuvidinfo_s nuvidinfo_s, *Pnuvidinfo_s;

typedef struct nuvidinfo_s NUPLAYVIDEOINFO;

struct nuvidinfo_s {
    int pos;
};

typedef struct nuportal_s nuportal_s, *Pnuportal_s;

typedef struct nuportal_s NUPORTAL;

struct nuportal_s {
    NUVEC4 plane_eqn;
    NUVEC *points;
    short npoints;
    short left_room;
    short right_room;
    char id;
    char pad;
    uint flags;
};

typedef struct nuportalinfo_s nuportalinfo_s, *Pnuportalinfo_s;

typedef struct nuportalinfo_s NUPORTALINFO;

typedef struct nuroom_s nuroom_s, *Pnuroom_s;

typedef struct nuroom_s NUROOM;

struct nuroom_s {
    short *instances;
    NUVEC4 *plane_eqns;
    short *portals;
    short ninstances;
    uchar nplanes;
    uchar nportals;
};

struct nuportalinfo_s {
    int nportals;
    NUPORTAL *portals;
    int nrooms;
    NUROOM *rooms;
    int ninstances;
    short *instances;
    int nplanes;
    NUVEC4 *planes;
    int npoints;
    NUVEC *points;
    int nportal_index;
    short *portal_index;
    NUFRUSTRUM *frustra[16];
    int nfrustra;
    int camera_roomid;
    int max_depth;
    int pad;
};

typedef struct nuprelight_s nuprelight_s, *Pnuprelight_s;

typedef struct nuprelight_s NUPRELIGHT;

struct nuprelight_s {
    NUVEC direction;
    float intensity;
    NUVEC pos;
    NULIGHTTYPE type;
    NUCOLOUR3 colour;
    uchar decay_rate;
    char pad[3];
};

typedef struct prelightinfo_s prelightinfo_s, *Pprelightinfo_s;

typedef struct prelightinfo_s NUPRELIGHTINFO;

typedef struct nuvtx_prelight_s nuvtx_prelight_s, *Pnuvtx_prelight_s;

typedef struct nuvtx_prelight_s NUVTX_PRELIGHT;

typedef struct nuprelightmtl_s nuprelightmtl_s, *Pnuprelightmtl_s;

typedef struct nuprelightmtl_s NUPRELIGHTMTL;

struct nuprelightmtl_s {
    NUCOLOUR3 ambient;
    float diffuse_coeff;
    NUCOLOUR3 diffuse;
    uint flags;
    NUCOLOUR3 specular;
    float specular_power;
    NUCOLOUR3 incandescence;
    float dapple_strength;
    NUCOLOUR3 dapple_colour1;
    float dapple_scale;
    NUCOLOUR3 dapple_colour2;
    float dapple_shade_strength;
    float dapple_shade_scale;
    short dapple_detail;
    short dapple_shade_detail;
    int pad[2];
};

struct prelightinfo_s {
    int ngobjs;
    int nfgeoms;
    int ngeoms;
    int nvtx;
    short *geommtl;
    short *gobjgeom;
    short *fgeommtl;
    short *fgobjgeom;
    uint *gobjvtxindex;
    NUVTX_PRELIGHT *vtx;
    int nface;
    short *findex;
    NUVTX_PRELIGHT *face;
    NUCOLOURREF *indices;
    int nlights[4];
    NUPRELIGHT *lights[4];
    int nmtls;
    NUPRELIGHTMTL *mtls;
    int nlight_sets;
    float gamma;
    float brightness;
    float ambient;
    char pad[4];
};

struct nuvtx_prelight_s {
    NUVEC pnt;
    NUCOLOUR32 diffuse;
    NUVEC nrm;
    short mtl_id;
    short pad;
};

typedef void *NUPRELIGHTSCENE;


/* WARNING! conflicting data type names: /haven_demo.h/NUPRIM - /amod_struct.h/NUPRIM */


/* WARNING! conflicting data type names: /haven_demo.h/nuprim_s - /amod_struct.h/nuprim_s */

typedef struct nuquat_s nuquat_s, *Pnuquat_s;

typedef struct nuquat_s NUQUAT;

struct nuquat_s {
    float x;
    float y;
    float z;
    float w;
};

typedef struct nunrand_s NURAND;

typedef struct nurd_s nurd_s, *Pnurd_s;

struct nurd_s {
    NUMTX *w1;
    NUMTX *w2;
    NUMTX *w3;
    NUMTX *tc1;
    NUMTX *tc2;
};

typedef enum nurecmode_e {
    NUPAD_NORM=0,
    NUPAD_RECORD=1,
    NUPAD_PLAY=2
} nurecmode_e;

typedef enum nurecmode_e NURECMODE;

typedef struct nurect_s nurect_s, *Pnurect_s;

typedef struct nurect_s NURECT;

struct nurect_s {
    float x;
    float y;
    float w;
    float h;
    float depth;
    float uvtl[2];
    float uvbr[2];
    NUMTL *mtl;
};

typedef struct nureflect_s nureflect_s, *Pnureflect_s;

typedef struct nureflect_s NUREFLECT;

struct nureflect_s {
    float distortion;
    NUMTX mtx;
    NUMTX uvmtx;
};

typedef void *NURENDERPLANECB;

typedef struct nurd_s NURMTX;

typedef void *nurndrburst_fn;

typedef struct nurndrpackinf_s nurndrpackinf_s, *Pnurndrpackinf_s;

typedef struct nurndrpackinf_s NURNDRPACKINF;

struct nurndrpackinf_s {
    int cnt;
    u_int *rgba;
    float *pntnormx;
    short *uvnormyz;
};

typedef struct nurpcbinfo_s nurpcbinfo_s, *Pnurpcbinfo_s;

typedef struct nurpcbinfo_s NURPCBINFO;

struct nurpcbinfo_s {
    struct nurpcbinfo_s *succ;
    struct nurpcbinfo_s *prev;
    uchar rpix;
    uchar end;
    short pri;
    NURENDERPLANECB *cb;
};


/* WARNING! conflicting data type names: /haven_demo.h/nuscene_s - /amod_struct.h/nuscene_s */

typedef struct NUSCRIPT_s NUSCRIPT_s, *PNUSCRIPT_s;

typedef struct NUSCRIPT_s NUSCRIPT;

struct NUSCRIPT_s {
    struct NUSCRIPT_s *next;
    char *name;
    NUCOMMANDHDR *commands;
};


/* WARNING! conflicting data type names: /haven_demo.h/NUSKIN - /amod_struct.h/NUSKIN */


/* WARNING! conflicting data type names: /haven_demo.h/nuskin_s - /amod_struct.h/nuskin_s */


/* WARNING! conflicting data type names: /haven_demo.h/nuspecial_s - /amod_struct.h/nuspecial_s */


/* WARNING! conflicting data type names: /haven_demo.h/nuspecialflags - /amod_struct.h/nuspecialflags */


/* WARNING! conflicting data type names: /haven_demo.h/NUSTARFIELD - /amod_struct.h/NUSTARFIELD */


/* WARNING! conflicting data type names: /haven_demo.h/nutex_s - /astructs.h/nutex_s */


/* WARNING! conflicting data type names: /haven_demo.h/nutexanim_s - /amod_struct.h/nutexanim_s */


/* WARNING! conflicting data type names: /haven_demo.h/nutexanimenv_s - /amod_struct.h/nutexanimenv_s */


/* WARNING! conflicting data type names: /haven_demo.h/nutexanimf_s - /astructs.h/nutexanimf_s */


/* WARNING! conflicting data type names: /haven_demo.h/NUTEXANIMPROG - /amod_struct.h/NUTEXANIMPROG */


/* WARNING! conflicting data type names: /haven_demo.h/nutexanimprog_s - /amod_struct.h/nutexanimprog_s */


/* WARNING! conflicting data type names: /haven_demo.h/NUTEXTYPE - /astructs.h/NUTEXTYPE */


/* WARNING! conflicting data type names: /haven_demo.h/nutextype_e - /astructs.h/nutextype_e */

typedef struct NUTRIGGERPRIM_CUBE_s NUTRIGGERPRIM_CUBE_s, *PNUTRIGGERPRIM_CUBE_s;

typedef struct NUTRIGGERPRIM_CUBE_s NUTRIGGERPRIM_CUBE;

struct NUTRIGGERPRIM_CUBE_s {
    NUMTX invmtx;
    NUVEC min;
    NUVEC max;
};

typedef struct NUTRIGGERPRIM_CYLINDER_s NUTRIGGERPRIM_CYLINDER_s, *PNUTRIGGERPRIM_CYLINDER_s;

typedef struct NUTRIGGERPRIM_CYLINDER_s NUTRIGGERPRIM_CYLINDER;

struct NUTRIGGERPRIM_CYLINDER_s {
    NUVEC bottom;
    float height;
    float radius;
};

typedef struct NUTRIGGERPRIM_SPHERE_s NUTRIGGERPRIM_SPHERE_s, *PNUTRIGGERPRIM_SPHERE_s;

typedef struct NUTRIGGERPRIM_SPHERE_s NUTRIGGERPRIM_SPHERE;

struct NUTRIGGERPRIM_SPHERE_s {
    NUVEC centre;
    float radius;
};


/* WARNING! conflicting data type names: /haven_demo.h/NUTRISTREAM - /amod_struct.h/NUTRISTREAM */


/* WARNING! conflicting data type names: /haven_demo.h/nutristream_s - /amod_struct.h/nutristream_s */

typedef struct nutristream_s NUTRISTREAM_T;

typedef struct nuveca_s nuveca_s, *Pnuveca_s;

typedef struct nuveca_s NUVECA;

struct nuveca_s {
    float x;
    float y;
    float z;
};

typedef struct nuviewport_s nuviewport_s, *Pnuviewport_s;

typedef struct nuviewport_s NUVIEWPORT;

struct nuviewport_s {
    DWORD x;
    DWORD y;
    DWORD width;
    DWORD height;
    float zmin;
    float zmax;
    float centre_x;
    float centre_y;
    float clipmin_x;
    float clipmin_y;
    float clipmax_x;
    float clipmax_y;
    float clip_w;
    float clip_h;
    float scis_w;
    float scis_h;
};


/* WARNING! conflicting data type names: /haven_demo.h/nuvutri_s - /amod_struct.h/nuvutri_s */

typedef struct nuvutri_s NUVUTRI_T;

typedef struct nuxformcfg_s nuxformcfg_s, *Pnuxformcfg_s;

typedef struct nuxformcfg_s NUXFORMCFG;

struct nuxformcfg_s {
    NUVEC *d;
    NUVEC *s;
    NUMTX *mtx;
    int n;
    int dstride;
    int sstride;
};


/* WARNING! conflicting data type names: /haven_demo.h/obj_s - /amod_struct.h/obj_s */


/* WARNING! conflicting data type names: /haven_demo.h/obj_s_PS2 - /auto_structs/obj_s_PS2 */

typedef void *PadRecType;

typedef union reg reg, *Preg;

union reg {
    int L;
    uchar b;
    ushort h;
    uint l;
    uchar *bP;
    ushort *hP;
    uint *lP;
};

typedef struct rnchdr_s rnchdr_s, *Prnchdr_s;

struct rnchdr_s {
    uint type_hdr;
    uint ulen;
    uint plen;
};

typedef enum processor_type {
    PROCESSOR_DEFAULT=0,
    PROCESSOR_R3000=1,
    PROCESSOR_R3900=2,
    PROCESSOR_R6000=3,
    PROCESSOR_R4000=4,
    PROCESSOR_R4100=5,
    PROCESSOR_R4300=6,
    PROCESSOR_R4600=7,
    PROCESSOR_R4650=8,
    PROCESSOR_R5000=9,
    PROCESSOR_R5400=10,
    PROCESSOR_R5900=11,
    PROCESSOR_R8000=12
} processor_type;

typedef struct sce_dirent sce_dirent, *Psce_dirent;

typedef struct sce_stat sce_stat, *Psce_stat;

struct sce_stat {
    uint st_mode;
    uint st_attr;
    uint st_size;
    uchar st_ctime[8];
    uchar st_atime[8];
    uchar st_mtime[8];
    uint st_hisize;
    uint st_private[6];
};

struct sce_dirent {
    struct sce_stat d_stat;
    char d_name[256];
    void *d_private;
};

typedef struct SemaParam SemaParam, *PSemaParam;

struct SemaParam {
    int currentCount;
    int maxCount;
    int initCount;
    int numWaitThreads;
    u_int attr;
    u_int option;
};

typedef struct ThreadParam ThreadParam, *PThreadParam;

struct ThreadParam {
    int status;
    void **entry;
    void *stack;
    int stackSize;
    void *gpReg;
    int initPriority;
    int currentPriority;
    u_int attr;
    u_int option;
    int waitType;
    int waitId;
    int wakeupCount;
};

typedef int ptrdiff_t;


/* WARNING! conflicting data type names: /haven_demo.h/Pvariptr_u - /amod_struct.h/Pvariptr_u */

typedef struct vtx_s vtx_s, *Pvtx_s;

typedef void *RGBA;

struct vtx_s {
    NUVEC pos;
    NUVEC nrm;
    NUVEC uvw;
    RGBA col;
};

typedef struct vufaceon_s vufaceon_s, *Pvufaceon_s;

struct vufaceon_s {
    NUVEC pnt;
    float d;
    float uvtl[2];
    float uvbr[2];
    float w;
    float h;
    float rsin;
    float rcos;
    int r;
    int g;
    int b;
    int a;
};

typedef int qword;

typedef union reg REG;

typedef enum reg_class {
    NO_REGS=0,
    M16_NA_REGS=1,
    M16_REGS=2,
    T_REG=3,
    M16_T_REGS=4,
    GR_REGS=5,
    FP_REGS=6,
    HI_REG=7,
    LO_REG=8,
    HILO_REG=9,
    MD_REGS=10,
    HI_AND_GR_REGS=11,
    LO_AND_GR_REGS=12,
    HILO_AND_GR_REGS=13,
    HI1_REG=14,
    LO1_REG=15,
    HILO1_REG=16,
    MD1_REGS=17,
    HI1_AND_GR_REGS=18,
    LO1_AND_GR_REGS=19,
    HILO1_AND_GR_REGS=20,
    HI01_REG=21,
    LO01_REG=22,
    HILO01_REG=23,
    MD01_REGS=24,
    HI01_AND_GR_REGS=25,
    LO01_AND_GR_REGS=26,
    HILO01_AND_GR_REGS=27,
    ST_REGS=28,
    ALL_REGS=29,
    LIM_REG_CLASSES=30
} reg_class;

typedef void *RGBA_C;

typedef struct rnchdr_s RNCHDR;


/* WARNING! conflicting data type names: /haven_demo.h/rndrstream_s - /amod_struct.h/rndrstream_s */

typedef struct rndrstream_s RNDRSTREAM_T;

typedef void *sceCdCLOCK;

typedef void *sceCdlFILE;

typedef void *sceCdlLOCCD;

typedef void *sceCdRMode;

typedef void *sceCdStmInit;

typedef void *sceDevGifCnd;

typedef void *sceDevVif0Cnd;

typedef void *sceDevVif1Cnd;

typedef void *sceDevVu0Cnd;

typedef void *sceDevVu1Cnd;

typedef void *sceDmaChan;

typedef void *sceDmaEnv;


/* WARNING! conflicting data type names: /haven_demo.h/sceDmaTag - /amod_struct.h/sceDmaTag */

typedef void *sceExecData;

typedef struct _sceGifPackAd sceGifPackAd;

typedef void *sceGifPacket;

typedef struct _sceGifPackFog sceGifPackFog;

typedef struct _sceGifPackNop sceGifPackNop;

typedef struct _sceGifPackRgbaq sceGifPackRgbaq;

typedef struct _sceGifPackSt sceGifPackSt;

typedef struct _sceGifPackUv sceGifPackUv;

typedef struct _sceGifPackXyz sceGifPackXyz;

typedef struct _sceGifPackXyzf sceGifPackXyzf;

typedef void *sceGsAlpha;

typedef void *sceGsAlphaEnv;

typedef void *sceGsAlphaEnv2;

typedef void *sceGsBitbltbuf;

typedef void *sceGsClamp;

typedef void *sceGsClear;


/* WARNING! conflicting data type names: /haven_demo.h/sceGsColclamp - /BION~213.ELF.h/sceGsColclamp */

typedef void *sceGsDBuff;

typedef void *sceGsDBuffDc;

typedef void *sceGsDimx;

typedef void *sceGsDispEnv;


/* WARNING! conflicting data type names: /haven_demo.h/sceGsDrawEnv1 - /BION~213.ELF.h/sceGsDrawEnv1 */


/* WARNING! conflicting data type names: /haven_demo.h/sceGsDrawEnv2 - /BION~213.ELF.h/sceGsDrawEnv2 */


/* WARNING! conflicting data type names: /haven_demo.h/sceGsDthe - /BION~213.ELF.h/sceGsDthe */

typedef void *sceGsFba;

typedef void *sceGsFinish;

typedef void *sceGsFog;

typedef void *sceGsFogcol;

typedef void *sceGsGParam;

typedef void *sceGsHwreg;

typedef void *sceGsLabel;

typedef void *sceGsLoadImage;

typedef void *sceGsMiptbp1;

typedef void *sceGsMiptbp2;

typedef void *sceGsPabe;

typedef void *sceGsPrim;


/* WARNING! conflicting data type names: /haven_demo.h/sceGsPrmodecont - /BION~213.ELF.h/sceGsPrmodecont */

typedef void *sceGsRgbaq;

typedef void *sceGsScanmsk;


/* WARNING! conflicting data type names: /haven_demo.h/sceGsScissor - /BION~213.ELF.h/sceGsScissor */

typedef void *sceGsSignal;

typedef void *sceGsSt;

typedef void *sceGsStoreImage;

typedef void *sceGsTex0;

typedef void *sceGsTex1;

typedef void *sceGsTex2;

typedef void *sceGsTexa;

typedef void *sceGsTexclut;

typedef void *sceGsTexEnv;

typedef void *sceGsTexEnv2;

typedef void *sceGsTexflush;

typedef void *sceGsTrxdir;

typedef void *sceGsTrxpos;

typedef void *sceGsTrxreg;

typedef void *sceGsUv;


/* WARNING! conflicting data type names: /haven_demo.h/sceGsXyoffset - /BION~213.ELF.h/sceGsXyoffset */

typedef void *sceGsXyz;

typedef void *sceGsXyzf;

typedef void *sceMcIconSys;

typedef void *sceMcStDateTime;

typedef void *sceMcTblGetDir;

typedef void *sceSifCmdCSData;

typedef void *sceSifCmdData;

typedef void **sceSifCmdHandler;

typedef void *sceSifCmdHdr;

typedef void *sceSifCmdResetData;

typedef void *sceSifCmdSRData;

typedef void *sceSifDmaData;

typedef struct _sif_queue_data sceSifQueueData;

typedef struct _sif_receive_data sceSifReceiveData;

typedef struct _sif_rpc_data sceSifRpcData;

typedef struct _sif_serve_data sceSifServeData;

typedef float sceVu0FMATRIX;

typedef float sceVu0FVECTOR;

typedef int sceVu0IVECTOR;

typedef float SFtype;

typedef uint size_t;

typedef void *tD_ASR0;

typedef void *tD_ASR1;

typedef void *tD_CHCR;

typedef void *tD_CTRL;

typedef void *tD_ENABLER;

typedef void *tD_ENABLEW;

typedef void *tD_MADR;

typedef void *tD_PCR;

typedef void *tD_QWC;

typedef void *tD_RBOR;

typedef void *tD_RBSR;

typedef void *tD_SADR;

typedef void *tD_SQWC;

typedef void *tD_STADR;

typedef void *tD_STAT;

typedef void *tD_TADR;

typedef void *tGIF_CNT;

typedef void *tGIF_CTRL;

typedef void *tGIF_MODE;

typedef void *tGIF_P3CNT;

typedef void *tGIF_P3TAG;

typedef void *tGIF_STAT;

typedef void *tGIF_TAG0;

typedef void *tGIF_TAG1;

typedef void *tGIF_TAG2;

typedef void *tGIF_TAG3;

typedef void *tGS_BGCOLOR;

typedef void *tGS_BUSDIR;

typedef void *tGS_CSR;

typedef void *tGS_DISPFB1;

typedef void *tGS_DISPFB2;

typedef void *tGS_DISPLAY1;

typedef void *tGS_DISPLAY2;

typedef void *tGS_EXTBUF;

typedef void *tGS_EXTDATA;

typedef void *tGS_EXTWRITE;

typedef void *tGS_IMR;

typedef void *tGS_PMODE;

typedef void *tGS_SIGLBLID;

typedef void *tGS_SMODE2;

typedef long time_t;

typedef void *tIPU_BP;

typedef void *tIPU_CMD_read;

typedef void *tIPU_CMD_write;

typedef void *tIPU_CTRL;

typedef void *tIPU_TOP;

typedef void *TRAIL;

typedef void *tT_COMP;

typedef void *tT_COUNT;

typedef void *tT_HOLD;

typedef void *tT_MODE;

typedef void *ttfgetlenfunc;

typedef void *ttfprintfunc;

typedef void *tVIF0_ERR;

typedef void *tVIF0_FBRST;

typedef void *tVIF0_NUM;

typedef void *tVIF0_STAT;

typedef void *tVIF1_BASE;

typedef void *tVIF1_ERR;

typedef void *tVIF1_FBRST;

typedef void *tVIF1_NUM;

typedef void *tVIF1_OFST;

typedef void *tVIF1_STAT;

typedef void *tVIF1_TOP;

typedef void *tVIF1_TOPS;

typedef void *tVIF_C0;

typedef void *tVIF_C1;

typedef void *tVIF_C2;

typedef void *tVIF_C3;

typedef void *tVIF_CODE;

typedef void *tVIF_CYCLE;

typedef void *tVIF_ITOP;

typedef void *tVIF_ITOPS;

typedef void *tVIF_MARK;

typedef void *tVIF_MASK;

typedef void *tVIF_MODE;

typedef void *tVIF_R0;

typedef void *tVIF_R1;

typedef void *tVIF_R2;

typedef void *tVIF_R3;

typedef ulonglong u_long128;

typedef ulong UDItype;

typedef uchar UQItype;

typedef uint USItype;

typedef __gnuc_va_list va_list;

typedef union variptr_u VARIPTR_T;

typedef struct vtx_s VTX;

typedef struct vufaceon_s VUFACEON;

typedef int wchar_t1;

typedef uint wint_t;

typedef long word_type;

typedef struct lconv lconv, *Plconv;

struct lconv {
    char *decimal_point;
    char *thousands_sep;
    char *grouping;
    char *int_curr_symbol;
    char *currency_symbol;
    char *mon_decimal_point;
    char *mon_thousands_sep;
    char *mon_grouping;
    char *positive_sign;
    char *negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    char int_p_cs_precedes;
    char int_p_sep_by_space;
    char int_n_cs_precedes;
    char int_n_sep_by_space;
    char int_p_sign_posn;
    char int_n_sign_posn;
};

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

struct evp_pkey_ctx_st {
};


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/__gnuc_va_list - /haven_demo.h/__gnuc_va_list */

typedef struct __GXData_struct __GXData_struct, *P__GXData_struct;

typedef struct _GXTexRegion _GXTexRegion, *P_GXTexRegion;

typedef struct GXTlutRegion GXTlutRegion, *PGXTlutRegion;

typedef enum _GXAttrType {
    GX_NONE=0,
    GX_DIRECT=1,
    GX_INDEX8=2,
    GX_INDEX16=3
} _GXAttrType;

typedef enum _GXPerf0 {
    GX_PERF0_VERTICES=0,
    GX_PERF0_CLIP_VTX=1,
    GX_PERF0_CLIP_CLKS=2,
    GX_PERF0_XF_WAIT_IN=3,
    GX_PERF0_XF_WAIT_OUT=4,
    GX_PERF0_XF_XFRM_CLKS=5,
    GX_PERF0_XF_LIT_CLKS=6,
    GX_PERF0_XF_BOT_CLKS=7,
    GX_PERF0_XF_REGLD_CLKS=8,
    GX_PERF0_XF_REGRD_CLKS=9,
    GX_PERF0_CLIP_RATIO=10,
    GX_PERF0_TRIANGLES=11,
    GX_PERF0_TRIANGLES_CULLED=12,
    GX_PERF0_TRIANGLES_PASSED=13,
    GX_PERF0_TRIANGLES_SCISSORED=14,
    GX_PERF0_TRIANGLES_0TEX=15,
    GX_PERF0_TRIANGLES_1TEX=16,
    GX_PERF0_TRIANGLES_2TEX=17,
    GX_PERF0_TRIANGLES_3TEX=18,
    GX_PERF0_TRIANGLES_4TEX=19,
    GX_PERF0_TRIANGLES_5TEX=20,
    GX_PERF0_TRIANGLES_6TEX=21,
    GX_PERF0_TRIANGLES_7TEX=22,
    GX_PERF0_TRIANGLES_8TEX=23,
    GX_PERF0_TRIANGLES_0CLR=24,
    GX_PERF0_TRIANGLES_1CLR=25,
    GX_PERF0_TRIANGLES_2CLR=26,
    GX_PERF0_QUAD_0CVG=27,
    GX_PERF0_QUAD_NON0CVG=28,
    GX_PERF0_QUAD_1CVG=29,
    GX_PERF0_QUAD_2CVG=30,
    GX_PERF0_QUAD_3CVG=31,
    GX_PERF0_QUAD_4CVG=32,
    GX_PERF0_AVG_QUAD_CNT=33,
    GX_PERF0_CLOCKS=34,
    GX_PERF0_NONE=35
} _GXPerf0;

typedef enum _GXPerf1 {
    GX_PERF1_TEXELS=0,
    GX_PERF1_TX_IDLE=1,
    GX_PERF1_TX_REGS=2,
    GX_PERF1_TX_MEMSTALL=3,
    GX_PERF1_TC_CHECK1_2=4,
    GX_PERF1_TC_CHECK3_4=5,
    GX_PERF1_TC_CHECK5_6=6,
    GX_PERF1_TC_CHECK7_8=7,
    GX_PERF1_TC_MISS=8,
    GX_PERF1_VC_ELEMQ_FULL=9,
    GX_PERF1_VC_MISSQ_FULL=10,
    GX_PERF1_VC_MEMREQ_FULL=11,
    GX_PERF1_VC_STATUS7=12,
    GX_PERF1_VC_MISSREP_FULL=13,
    GX_PERF1_VC_STREAMBUF_LOW=14,
    GX_PERF1_VC_ALL_STALLS=15,
    GX_PERF1_VERTICES=16,
    GX_PERF1_FIFO_REQ=17,
    GX_PERF1_CALL_REQ=18,
    GX_PERF1_VC_MISS_REQ=19,
    GX_PERF1_CP_ALL_REQ=20,
    GX_PERF1_CLOCKS=21,
    GX_PERF1_NONE=22
} _GXPerf1;

struct GXTlutRegion {
    uint dummy[4];
};

struct _GXTexRegion {
    uint dummy[4];
};

struct __GXData_struct {
    ushort vNumNot;
    ushort bpSentNot;
    ushort vNum;
    ushort vLim;
    ulong cpEnable;
    ulong cpStatus;
    ulong cpClr;
    ulong vcdLo;
    ulong vcdHi;
    ulong vatA[8];
    ulong vatB[8];
    ulong vatC[8];
    ulong lpSize;
    ulong matIdxA;
    ulong matIdxB;
    ulong indexBase[4];
    ulong indexStride[4];
    ulong ambColor[2];
    ulong matColor[2];
    ulong suTs0[8];
    ulong suTs1[8];
    ulong suScis0;
    ulong suScis1;
    ulong tref[8];
    ulong iref;
    ulong bpMask;
    ulong IndTexScale0;
    ulong IndTexScale1;
    ulong tevc[16];
    ulong teva[16];
    ulong tevKsel[8];
    ulong cmode0;
    ulong cmode1;
    ulong zmode;
    ulong peCtrl;
    ulong cpDispSrc;
    ulong cpDispSize;
    ulong cpDispStride;
    ulong cpDisp;
    ulong cpTexSrc;
    ulong cpTexSize;
    ulong cpTexStride;
    ulong cpTex;
    uchar cpTexZ;
    uchar unk_[3];
    ulong genMode;
    struct _GXTexRegion TexRegions[8];
    struct _GXTexRegion TexRegionsCI[4];
    ulong nextTexRgn;
    ulong nextTexRgnCI;
    struct GXTlutRegion TlutRegions[20];
    struct _GXTexRegion *texRegion_Callback;
    struct GXTlutRegion *tlut_reg;
    enum _GXAttrType nrmType;
    uchar hasNrms;
    uchar hasBiNrms;
    uchar unk[2];
    ulong projType;
    float projMtx[6];
    float vpLeft;
    float vpTop;
    float vpWd;
    float vpHt;
    float vpNearz;
    float vpFarz;
    uchar fpRange;
    uchar unk2[3];
    float fgSideX;
    ulong tImage0[8];
    ulong tMode0[8];
    ulong texmapId[16];
    ulong tcsManEnab;
    ulong tevTcEnab;
    enum _GXPerf0 perf0;
    enum _GXPerf1 perf1;
    ulong perfSel;
    uchar inDispList;
    uchar dlSaveContext;
    uchar dirtyVat;
    uchar unk3;
    ulong dirtyState;
};

typedef longlong __quad_t;

typedef __quad_t __off64_t;

typedef long __off_t;

typedef int __ssize_t;

typedef struct _AXPB _AXPB, *P_AXPB;

typedef struct _AXPBMIX _AXPBMIX, *P_AXPBMIX;

typedef struct _AXPBITD _AXPBITD, *P_AXPBITD;

typedef struct _AXPBUPDATE _AXPBUPDATE, *P_AXPBUPDATE;

typedef struct _AXPBDPOP _AXPBDPOP, *P_AXPBDPOP;

typedef struct _AXPBVE _AXPBVE, *P_AXPBVE;

typedef struct _AXPBFIR _AXPBFIR, *P_AXPBFIR;

typedef struct _AXPBADDR _AXPBADDR, *P_AXPBADDR;

typedef struct _AXPBADPCM _AXPBADPCM, *P_AXPBADPCM;

typedef struct _AXPBSRC _AXPBSRC, *P_AXPBSRC;

typedef struct _AXPBADPCMLOOP _AXPBADPCMLOOP, *P_AXPBADPCMLOOP;

struct _AXPBMIX {
    ushort vL;
    ushort vDeltaL;
    ushort vR;
    ushort vDeltaR;
    ushort vAuxAL;
    ushort vDeltaAuxAL;
    ushort vAuxAR;
    ushort vDeltaAuxAR;
    ushort vAuxBL;
    ushort vDeltaAuxBL;
    ushort vAuxBR;
    ushort vDeltaAuxBR;
    ushort vAuxBS;
    ushort vDeltaAuxBS;
    ushort vS;
    ushort vDeltaS;
    ushort vAuxAS;
    ushort vDeltaAuxAS;
};

struct _AXPBADDR {
    ushort loopFlag;
    ushort format;
    ushort loopAddressHi;
    ushort loopAddressLo;
    ushort endAddressHi;
    ushort endAddressLo;
    ushort currentAddressHi;
    ushort currentAddressLo;
};

struct _AXPBITD {
    ushort flag;
    ushort bufferHi;
    ushort bufferLo;
    ushort shiftL;
    ushort shiftR;
    ushort targetShiftL;
    ushort targetShiftR;
};

struct _AXPBUPDATE {
    ushort updNum[5];
    ushort dataHi;
    ushort dataLo;
};

struct _AXPBSRC {
    ushort ratioHi;
    ushort ratioLo;
    ushort currentAddressFrac;
    ushort last_samples[4];
};

struct _AXPBDPOP {
    short aL;
    short aAuxAL;
    short aAuxBL;
    short aR;
    short aAuxAR;
    short aAuxBR;
    short aS;
    short aAuxAS;
    short aAuxBS;
};

struct _AXPBADPCMLOOP {
    ushort loop_pred_scale;
    ushort loop_yn1;
    ushort loop_yn2;
};

struct _AXPBADPCM {
    ushort a[2][8];
    ushort gain;
    ushort pred_scale;
    ushort yn1;
    ushort yn2;
};

struct _AXPBVE {
    ushort currentVolume;
    short currentDelta;
};

struct _AXPBFIR {
    ushort numCoefs;
    ushort coefsHi;
    ushort coefsLo;
};

struct _AXPB {
    ushort nextHi;
    ushort nextLo;
    ushort currHi;
    ushort currLo;
    ushort srcSelect;
    ushort coefSelect;
    ushort mixerCtrl;
    ushort state;
    ushort type;
    struct _AXPBMIX mix;
    struct _AXPBITD itd;
    struct _AXPBUPDATE update;
    struct _AXPBDPOP dpop;
    struct _AXPBVE ve;
    struct _AXPBFIR fir;
    struct _AXPBADDR addr;
    struct _AXPBADPCM adpcm;
    struct _AXPBSRC src;
    struct _AXPBADPCMLOOP adpcmLoop;
    ushort pad[3];
};

typedef struct _AXPBITDBUFFER _AXPBITDBUFFER, *P_AXPBITDBUFFER;

struct _AXPBITDBUFFER {
    short data[32];
};

typedef struct _AXPBU _AXPBU, *P_AXPBU;

struct _AXPBU {
    ushort data[128];
};

typedef struct _AXVPB _AXVPB, *P_AXVPB;

struct _AXVPB {
    void *next;
    void *prev;
    void *next1;
    uint priority;
    void *callback;
    uint userContext;
    uint index;
    uint sync;
    uint depop;
    uint updateMS;
    uint updateCounter;
    uint updateTotal;
    ushort *updateWrite;
    ushort updateData[128];
    void *itdBuffer;
    struct _AXPB pb;
};

typedef struct _D3DCOLORVALUE _D3DCOLORVALUE, *P_D3DCOLORVALUE;

struct _D3DCOLORVALUE {
    float r;
    float g;
    float b;
    float a;
};

typedef struct _D3DLIGHT8 _D3DLIGHT8, *P_D3DLIGHT8;

typedef enum _D3DLIGHTTYPE {
    D3DLIGHT_POINT=1,
    D3DLIGHT_SPOT=2,
    D3DLIGHT_DIRECTIONAL=3,
    _D3DLIGHTTYPE=255
} _D3DLIGHTTYPE;

struct _D3DLIGHT8 {
    enum _D3DLIGHTTYPE Type;
    struct _D3DCOLORVALUE Diffuse;
    struct _D3DCOLORVALUE Specular;
    struct _D3DCOLORVALUE Ambient;
    struct nuvec_s Position;
    struct nuvec_s Direction;
    float range;
    float falloff;
    float attenuation0;
    float attenuation1;
    float attenuation2;
    float Theta;
    float Phi;
};

typedef struct _D3DMATERIAL8 _D3DMATERIAL8, *P_D3DMATERIAL8;

struct _D3DMATERIAL8 {
    struct _D3DCOLORVALUE Diffuse;
    struct _D3DCOLORVALUE Ambient;
    struct _D3DCOLORVALUE Specular;
    struct _D3DCOLORVALUE Emissive;
    float Power;
};

typedef enum _D3DTEXTURESTAGESTATETYPE {
    D3DTSS_ADDRESSU=0,
    D3DTSS_ADDRESSV=1,
    D3DTSS_ADDRESSW=2,
    D3DTSS_MAGFILTER=3,
    D3DTSS_MINFILTER=4,
    D3DTSS_MIPFILTER=5,
    D3DTSS_MIPMAPLODBIAS=6,
    D3DTSS_MAXMIPLEVEL=7,
    D3DTSS_MAXANISOTROPY=8,
    D3DTSS_COLORKEYOP=9,
    D3DTSS_COLORSIGN=10,
    D3DTSS_ALPHAKILL=11,
    D3DTSS_COLOROP=12,
    D3DTSS_DEFERRED_TEXTURE_STATE_MAX=12,
    D3DTSS_COLORARG0=13,
    D3DTSS_COLORARG1=14,
    D3DTSS_COLORARG2=15,
    D3DTSS_ALPHAOP=16,
    D3DTSS_ALPHAARG0=17,
    D3DTSS_ALPHAARG1=18,
    D3DTSS_ALPHAARG2=19,
    D3DTSS_RESULTARG=20,
    D3DTSS_TEXTURETRANSFORMFLAGS=21,
    D3DTSS_BUMPENVMAT00=22,
    D3DTSS_DEFERRED_MAX=22,
    D3DTSS_BUMPENVMAT01=23,
    D3DTSS_BUMPENVMAT11=24,
    D3DTSS_BUMPENVMAT10=25,
    D3DTSS_BUMPENVLSCALE=26,
    D3DTSS_BUMPENVLOFFSET=27,
    D3DTSS_TEXCOORDINDEX=28,
    D3DTSS_BORDERCOLOR=29,
    D3DTSS_COLORKEYCOLOR=30,
    D3DTSS_MAX=31,
    D3DTSS_FORCE_DWORD=2147483647
} _D3DTEXTURESTAGESTATETYPE;

typedef struct _D3DVIEWPORT8 _D3DVIEWPORT8, *P_D3DVIEWPORT8;

struct _D3DVIEWPORT8 {
    uint X;
    uint Y;
    uint Width;
    uint Height;
    float MinZ;
    float MaxZ;
};

typedef struct _GS_TEXTURE _GS_TEXTURE, *P_GS_TEXTURE;

typedef enum gs_texturetype_e {
    GS_TEX_RGB16=0,
    GS_TEX_RGBA16=1,
    GS_TEX_RGB24=2,
    GS_TEX_RGBA32=3,
    GS_TEX_PAL4=4,
    GS_TEX_PAL8=5,
    GS_TEX_PAL4_S=6,
    GS_TEX_PAL8_S=7,
    GS_TEX_DXT1=8,
    GS_TEX_DXT2=9,
    GS_TEX_DXT3=10,
    GS_TEX_DXT4=11,
    GS_TEX_DXT5=12,
    GS_TEX_BB=13,
    GS_TEX_RT8=14,
    GS_TEX_RTT8=15,
    GS_TEX_RT8H=16,
    GS_TEX_RT32=17,
    GS_TEX_RT24=18,
    GS_TEX_RT16=19,
    GS_TEX_RTT32=20,
    GS_TEX_RTT24=21,
    GS_TEX_RTT16=22,
    GS_TEX_RZT32=23,
    GS_TEX_RZT24=24,
    GS_TEX_RZT16=25,
    GS_TEX_NUMTEXTURETYPES=26
} gs_texturetype_e;

typedef struct _GXTexObj _GXTexObj, *P_GXTexObj;

typedef struct _GXTlutObj _GXTlutObj, *P_GXTlutObj;

struct _GXTexObj {
    ulong dummy[8];
};

struct _GXTlutObj {
    ulong dummy[3];
};

struct _GS_TEXTURE {
    int Flags;
    enum gs_texturetype_e Format;
    uint Width;
    uint Height;
    uint TexBits;
    uint PalBits;
    uint NUID;
    uint Pad;
    struct _GXTexObj Tex;
    struct _GXTlutObj Tlut;
};

typedef struct _GS_VECTOR3 _GS_VECTOR3, *P_GS_VECTOR3;

struct _GS_VECTOR3 {
    float x;
    float y;
    float z;
};

typedef struct _GS_VECTOR4 _GS_VECTOR4, *P_GS_VECTOR4;

struct _GS_VECTOR4 {
    float x;
    float y;
    float z;
    float w;
};

typedef struct _GS_VERTEX _GS_VERTEX, *P_GS_VERTEX;

struct _GS_VERTEX {
    float x;
    float y;
    float z;
    float nx;
    float ny;
    float nz;
    uint diffuse;
    float u;
    float v;
};

typedef struct _GS_VERTEXSKIN _GS_VERTEXSKIN, *P_GS_VERTEXSKIN;

struct _GS_VERTEXSKIN {
    float x;
    float y;
    float z;
    float weights[2];
    float indexes[3];
    float nx;
    float ny;
    float nz;
    int diffuse;
    float u;
    float v;
};

typedef struct _GS_VERTEXTL _GS_VERTEXTL, *P_GS_VERTEXTL;

struct _GS_VERTEXTL {
    float x;
    float y;
    float z;
    float rhw;
    uint diffuse;
    float u;
    float v;
};

typedef struct _GS_VIEWPORT _GS_VIEWPORT, *P_GS_VIEWPORT;

struct _GS_VIEWPORT {
    ulong X;
    ulong Y;
    ulong width;
    ulong height;
    float MinZ;
    float MaxZ;
};

typedef struct _GSMATRIX _GSMATRIX, *P_GSMATRIX;

struct _GSMATRIX {
    float _00;
    float _01;
    float _02;
    float _03;
    float _10;
    float _11;
    float _12;
    float _13;
    float _20;
    float _21;
    float _22;
    float _23;
    float _30;
    float _31;
    float _32;
    float _33;
};

typedef struct _GSMATRIX33 _GSMATRIX33, *P_GSMATRIX33;

struct _GSMATRIX33 {
    float _11;
    float _12;
    float _13;
    float _14;
    float _21;
    float _22;
    float _23;
    float _24;
    float _31;
    float _32;
    float _33;
    float _34;
};

typedef enum _GXAlphaOp {
    GX_AOP_AND=0,
    GX_AOP_OR=1,
    GX_AOP_XOR=2,
    GX_AOP_XNOR=3,
    GX_AOP_ALPHAOP=4
} _GXAlphaOp;

typedef enum _GXAttnFn {
    GX_AF_SPEC=0,
    GX_AF_SPOT=1,
    GX_AF_NONE=2
} _GXAttnFn;

typedef enum _GXAttr {
    GX_VA_PNMTXIDX=0,
    GX_VA_TEX0MTXIDX=1,
    GX_VA_TEX1MTXIDX=2,
    GX_VA_TEX2MTXIDX=3,
    GX_VA_TEX3MTXIDX=4,
    GX_VA_TEX4MTXIDX=5,
    GX_VA_TEX5MTXIDX=6,
    GX_VA_TEX6MTXIDX=7,
    GX_VA_TEX7MTXIDX=8,
    GX_VA_POS=9,
    GX_VA_NRM=10,
    GX_VA_CLR0=11,
    GX_VA_CLR1=12,
    GX_VA_TEX0=13,
    GX_VA_TEX1=14,
    GX_VA_TEX2=15,
    GX_VA_TEX3=16,
    GX_VA_TEX4=17,
    GX_VA_TEX5=18,
    GX_VA_TEX6=19,
    GX_VA_TEX7=20,
    GX_POS_MTX_ARRAY=21,
    GX_NRM_MTX_ARRAY=22,
    GX_TEX_MTX_ARRAY=23,
    GX_LIGHT_ARRAY=24,
    GX_VA_NBT=25,
    GX_VA_MAX_ATTR=26,
    GX_VA_NULL=255
} _GXAttr;

typedef enum _GXBlendFactor {
    GX_BL_ZERO=0,
    GX_BL_ONE=1,
    GX_BL_SRCCLR=2,
    GX_BL_INVSRCCLR=3,
    GX_BL_SRCALPHA=4,
    GX_BL_INVSRCALPHA=5,
    GX_BL_DSTALPHA=6,
    GX_BL_INVDSTALPHA=7,
    GX_BL_DSTCLR=8,
    GX_BL_INVDSTCLR=9
} _GXBlendFactor;

typedef enum _GXBlendMode {
    GX_BM_NONE=0,
    GX_BM_BLEND=1,
    GX_BM_LOGIC=2,
    GX_BM_SUBTRACT=3,
    GX_MAX_BLENDMODE=4
} _GXBlendMode;

typedef enum _GXChannelID {
    GX_COLOR0=0,
    GX_COLOR1=1,
    GX_ALPHA0=2,
    GX_ALPHA1=3,
    GX_COLOR0A0=4,
    GX_COLOR1A1=5,
    GX_COLOR_ZERO=6,
    GX_ALPHA_BUMP=7,
    GX_ALPHA_BUMPN=8,
    GX_COLOR_NULL=255
} _GXChannelID;

typedef enum _GXClipMode {
    GX_CLIP_ENABLE=0,
    GX_CLIP_DISABLE=1
} _GXClipMode;

typedef struct _GXColor _GXColor, *P_GXColor;

struct _GXColor {
    uchar r;
    uchar g;
    uchar b;
    uchar a;
};

typedef enum _GXColorSrc {
    GX_SRC_REG=0,
    GX_SRC_VTX=1
} _GXColorSrc;

typedef enum _GXCompare {
    GX_NEVER=0,
    GX_LESS=1,
    GX_EQUAL=2,
    GX_LEQUAL=3,
    GX_GREATER=4,
    GX_NEQUAL=5,
    GX_GEQUAL=6,
    GX_ALWAYS=7
} _GXCompare;

typedef enum _GXCompCnt {
    GX_CLR_RGB=0,
    GX_CLR_RGBA=0,
    GX_NRM_XYZ=0,
    GX_POS_XY=0,
    GX_POS_XYZ=0,
    GX_TEX_S=0,
    GX_NRM_NBT=1,
    GX_TEX_ST=1,
    GX_NRM_NBT3=2
} _GXCompCnt;

typedef enum _GXCompType {
    GX_RGB565=0,
    GX_U8=0,
    GX_RGB8=1,
    GX_S8=1,
    GX_RGBX8=2,
    GX_U16=2,
    GX_RGBA4=3,
    GX_S16=3,
    GX_F32=4,
    GX_RGBA6=4,
    GX_RGBA8=5
} _GXCompType;

typedef enum _GXDiffuseFn {
    GX_DF_NONE=0,
    GX_DF_SIGN=1,
    GX_DF_CLAMP=2
} _GXDiffuseFn;

typedef struct _GXLightObj _GXLightObj, *P_GXLightObj;

struct _GXLightObj {
    uint dummy[16];
};

typedef enum _GXLogicOp {
    GX_LO_CLEAR=0,
    GX_LO_AND=1,
    GX_LO_REVAND=2,
    GX_LO_COPY=3,
    GX_LO_INVAND=4,
    GX_LO_NOOP=5,
    GX_LO_XOR=6,
    GX_LO_OR=7,
    GX_LO_NOR=8,
    GX_LO_EQUIV=9,
    GX_LO_INV=10,
    GX_LO_REVOR=11,
    GX_LO_INVCOPY=12,
    GX_LO_INVOR=13,
    GX_LO_NAND=14,
    GX_LO_SET=15
} _GXLogicOp;

typedef enum _GXPrimitive {
    GX_QUADS=128,
    GX_TRIANGLES=144,
    GX_TRIANGLESTRIP=152,
    GX_TRIANGLEFAN=160,
    GX_LINES=168,
    GX_LINESTRIP=176,
    GX_POINTS=184
} _GXPrimitive;

typedef struct _GXRenderModeObj _GXRenderModeObj, *P_GXRenderModeObj;

typedef enum viTVmode {
    VI_TVMODE_NTSC_INT=0,
    VI_TVMODE_NTSC_DS=1,
    VI_TVMODE_NTSC_PROG=2,
    VI_TVMODE_PAL_INT=3,
    VI_TVMODE_PAL_DS=4,
    VI_TVMODE_EURGB60_INT=5,
    VI_TVMODE_EURGB60_DS=6,
    VI_TVMODE_MPAL_INT=7,
    VI_TVMODE_MPAL_DS=8,
    VI_TVMODE_DEBUG_INT=9,
    VI_TVMODE_DEBUG_PAL_INT=16,
    VI_TVMODE_DEBUG_PAL_DS=17
} viTVmode;

typedef enum xFBmode {
    VI_XFBMODE_SF=0,
    VI_XFBMODE_DF=1
} xFBmode;

struct _GXRenderModeObj {
    enum viTVmode viTVmode;
    ushort fbWidth;
    ushort efbHeight;
    ushort xfbHeight;
    ushort viXOrigin;
    ushort viYOrigin;
    ushort viWidth;
    ushort viHeight;
    uchar unk[2];
    enum xFBmode xFBmode;
    uchar field_rendering;
    uchar aa;
    uchar sample_pattern[2][12];
    uchar vfilter[7];
    uchar unk2[3];
};

typedef enum _GXTevAlphaArg {
    GX_CA_APREV=0,
    GX_CA_A0=1,
    GX_CA_A1=2,
    GX_CA_A2=3,
    GX_CA_TEXA=4,
    GX_CA_RASA=5,
    GX_CA_KONST=6,
    GX_CA_ONE=6,
    GX_CA_ZERO=6
} _GXTevAlphaArg;

typedef enum _GXTevBias {
    GX_TB_ZERO=0,
    GX_TB_ADDHALF=1,
    GX_TB_SUBHALF=2,
    GX_MAX_TEVBIAS=3
} _GXTevBias;

typedef enum _GXTevColorArg {
    GX_CC_CPREV=0,
    GX_CC_APREV=1,
    GX_CC_C0=2,
    GX_CC_A0=3,
    GX_CC_C1=4,
    GX_CC_A1=5,
    GX_CC_C2=6,
    GX_CC_A2=7,
    GX_CC_TEXC=8,
    GX_CC_TEXA=9,
    GX_CC_RASC=10,
    GX_CC_RASA=11,
    GX_CC_ONE=12,
    GX_CC_HALF=13,
    GX_CC_KONST=14,
    GX_CC_QUARTER=14,
    GX_CC_ZERO=15,
    GX_CC_TEXRRR=16,
    GX_CC_TEXGGG=17,
    GX_CC_TEXBBB=18
} _GXTevColorArg;

typedef enum _GXTevMode {
    GX_MODULATE=0,
    GX_DECAL=1,
    GX_BLEND=2,
    GX_REPLACE=3,
    GX_PASSCLR=4
} _GXTevMode;

typedef enum _GXTevRegID {
    GX_TEVPREV=0,
    GX_TEVREG0=1,
    GX_TEVREG1=2,
    GX_TEVREG2=3,
    GX_MAX_TEVREG=4
} _GXTevRegID;

typedef enum _GXTevStageID {
    GX_TEVSTAGE0=0,
    GX_TEVSTAGE1=1,
    GX_TEVSTAGE2=2,
    GX_TEVSTAGE3=3,
    GX_TEVSTAGE4=4,
    GX_TEVSTAGE5=5,
    GX_TEVSTAGE6=6,
    GX_TEVSTAGE7=7,
    GX_TEVSTAGE8=8,
    GX_TEVSTAGE9=9,
    GX_TEVSTAGE10=10,
    GX_TEVSTAGE11=11,
    GX_TEVSTAGE12=12,
    GX_TEVSTAGE13=13,
    GX_TEVSTAGE14=14,
    GX_TEVSTAGE15=15,
    GX_MAX_TEVSTAGE=16
} _GXTevStageID;

typedef enum _GXTevSwapSel {
    GX_TEV_SWAP0=0,
    GX_TEV_SWAP1=1,
    GX_TEV_SWAP2=2,
    GX_TEV_SWAP3=3,
    GX_MAX_TEVSWAP=4
} _GXTevSwapSel;

typedef enum _GXTexCoordID {
    GX_TEXCOORD0=0,
    GX_TEXCOORD1=1,
    GX_TEXCOORD2=2,
    GX_TEXCOORD3=3,
    GX_TEXCOORD4=4,
    GX_TEXCOORD5=5,
    GX_TEXCOORD6=6,
    GX_TEXCOORD7=7,
    GX_MAX_TEXCOORD=8,
    GX_TEXCOORD_NULL=255
} _GXTexCoordID;

typedef enum _GXTexFmt {
    GX_TF_I4=0,
    GX_TF_I8=1,
    GX_TF_IA4=2,
    GX_TF_IA8=3,
    GX_TF_RGB565=4,
    GX_TF_RGB5A3=5,
    GX_TF_RGBA8=6,
    GX_TF_CMPR=14,
    GX_TF_Z8=17,
    GX_TF_Z16=19,
    GX_TF_Z24X8=22,
    GX_CTF_R4=32,
    GX_CTF_RA4=34,
    GX_CTF_RA8=35,
    GX_CTF_YUVA8=38,
    GX_CTF_A8=39,
    GX_TF_A8=39,
    GX_CTF_R8=40,
    GX_CTF_G8=41,
    GX_CTF_B8=42,
    GX_CTF_RG8=43,
    GX_CTF_GB8=44,
    GX_CTF_Z4=48,
    GX_CTF_Z8M=57,
    GX_CTF_Z8L=58,
    GX_CTF_Z16L=60
} _GXTexFmt;

typedef enum _GXTexGenSrc {
    GX_TG_POS=0,
    GX_TG_NRM=1,
    GX_TG_BINRM=2,
    GX_TG_TANGENT=3,
    GX_TG_TEX0=4,
    GX_TG_TEX1=5,
    GX_TG_TEX2=6,
    GX_TG_TEX3=7,
    GX_TG_TEX4=8,
    GX_TG_TEX5=9,
    GX_TG_TEX6=10,
    GX_TG_TEX7=11,
    GX_TG_TEXCOORD0=12,
    GX_TG_TEXCOORD1=13,
    GX_TG_TEXCOORD2=14,
    GX_TG_TEXCOORD3=15,
    GX_TG_TEXCOORD4=16,
    GX_TG_TEXCOORD5=17,
    GX_TG_TEXCOORD6=18,
    GX_TG_COLOR0=19,
    GX_TG_COLOR1=20
} _GXTexGenSrc;

typedef enum _GXTexGenType {
    GX_TG_MTX3x4=0,
    GX_TG_MTX2x4=1,
    GX_TG_BUMP0=2,
    GX_TG_BUMP1=3,
    GX_TG_BUMP2=4,
    GX_TG_BUMP3=5,
    GX_TG_BUMP4=6,
    GX_TG_BUMP5=7,
    GX_TG_BUMP6=8,
    GX_TG_BUMP7=9,
    GX_TG_SRTG=10
} _GXTexGenType;

typedef enum _GXTexMapID {
    GX_TEXMAP0=0,
    GX_TEXMAP1=1,
    GX_TEXMAP2=2,
    GX_TEXMAP3=3,
    GX_TEXMAP4=4,
    GX_TEXMAP5=5,
    GX_TEXMAP6=6,
    GX_TEXMAP7=7,
    GX_MAX_TEXMAP=8,
    GX_TEXMAP_NULL=255,
    GX_TEX_DISABLE=256
} _GXTexMapID;

typedef enum _GXTexMtx {
    GX_TEXMTX0=30,
    GX_TEXMTX1=33,
    GX_TEXMTX2=36,
    GX_TEXMTX3=39,
    GX_TEXMTX4=42,
    GX_TEXMTX5=45,
    GX_TEXMTX6=48,
    GX_TEXMTX7=51,
    GX_TEXMTX8=54,
    GX_TEXMTX9=57,
    GX_IDENTITY=60
} _GXTexMtx;

typedef enum _GXVtxFmt {
    GX_VTXFMT0=0,
    GX_VTXFMT1=1,
    GX_VTXFMT2=2,
    GX_VTXFMT3=3,
    GX_VTXFMT4=4,
    GX_VTXFMT5=5,
    GX_VTXFMT6=6,
    GX_VTXFMT7=7,
    GX_MAX_VTXFMT=8
} _GXVtxFmt;

typedef enum _GXZTexOp {
    GX_ZT_DISABLE=0,
    GX_ZT_ADD=1,
    GX_ZT_REPLACE=2,
    GX_MAX_ZTEXOP=3
} _GXZTexOp;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef void _IO_lock_t;


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/size_t - /haven_demo.h/size_t */

struct _IO_marker {
    struct _IO_marker *_next;
    struct _IO_FILE *_sbuf;
    int _pos;
};

struct _IO_FILE {
    int _flags;
    char *_IO_read_ptr;
    char *_IO_read_end;
    char *_IO_read_base;
    char *_IO_write_base;
    char *_IO_write_ptr;
    char *_IO_write_end;
    char *_IO_buf_base;
    char *_IO_buf_end;
    char *_IO_save_base;
    char *_IO_backup_base;
    char *_IO_save_end;
    struct _IO_marker *_markers;
    struct _IO_FILE *_chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    ushort _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t *_lock;
    __off64_t _offset;
    void *__pad1;
    void *__pad2;
    void *__pad3;
    void *__pad4;
    size_t __pad5;
    int _mode;
    char _unused2[56];
};

typedef struct _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;

struct _LARGE_INTEGER {
    double QuadPart;
};

typedef struct _LIGHTLIST _LIGHTLIST, *P_LIGHTLIST;

struct _LIGHTLIST {
    int EnableLight;
    struct _D3DLIGHT8 Light;
};

typedef struct _PERFTIMER _PERFTIMER, *P_PERFTIMER;

struct _PERFTIMER {
    char *name;
    ulong start;
    ulong stop;
    ulong elapsed;
    ulong average;
};

typedef struct _REMAPTABLE _REMAPTABLE, *P_REMAPTABLE;

struct _REMAPTABLE {
    char *name;
    uchar *remap;
};


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/_sceDmaTag - /amod_struct.h/_sceDmaTag */

typedef struct _XINPUT_FEEDBACK _XINPUT_FEEDBACK, *P_XINPUT_FEEDBACK;

typedef struct _XINPUT_FEEDBACK_HEADER _XINPUT_FEEDBACK_HEADER, *P_XINPUT_FEEDBACK_HEADER;

struct _XINPUT_FEEDBACK_HEADER {
    uint dwStatus;
    void *hEvent;
    uchar Reserved[58];
    char unk[2];
};

struct _XINPUT_FEEDBACK {
    struct _XINPUT_FEEDBACK_HEADER header;
    char unk[4];
};

typedef struct _XINPUT_STATE _XINPUT_STATE, *P_XINPUT_STATE;

struct _XINPUT_STATE {
    uint dwPacketNumber;
    void *field1_0x4;
    void *field2_0x8;
    void *field3_0xc;
    void *field4_0x10;
    void *field5_0x14;
};

typedef enum Actions_ {
    ACT_ATTACK=0,
    ACT_ATTACK2=1,
    ACT_CRAWL=2,
    ACT_CROUCHDOWN=3,
    ACT_CROUCHIDLE=4,
    ACT_CROUCHUP=5,
    ACT_DIE=6,
    ACT_DIE2=7,
    ACT_DOWN=8,
    ACT_DROWN=9,
    ACT_EXPLODE=10,
    ACT_FALL=11,
    ACT_FILL=12,
    ACT_FLY=13,
    ACT_GETUP=14,
    ACT_HANG=15,
    ACT_HOP=16,
    ACT_IDLE=17,
    ACT_IDLE00=18,
    ACT_IDLE01=19,
    ACT_IDLE02=20,
    ACT_IDLE03=21,
    ACT_IDLE04=22,
    ACT_IDLE05=23,
    ACT_IDLE06=24,
    ACT_IDLE07=25,
    ACT_IN=26,
    ACT_JUMP=27,
    ACT_JUMP2=28,
    ACT_LAND=29,
    ACT_LAND2=30,
    ACT_LEFT=31,
    ACT_LOSE=32,
    ACT_OPEN=33,
    ACT_OUT=34,
    ACT_PULL=35,
    ACT_PUSH=36,
    ACT_RIGHT=37,
    ACT_RUN=38,
    ACT_RUN2=39,
    ACT_RUNNINGJUMP=40,
    ACT_SHAKE=41,
    ACT_SIT=42,
    ACT_SKATE=43,
    ACT_SKID=44,
    ACT_SLAM=45,
    ACT_SLEEP=46,
    ACT_SLIDE=47,
    ACT_SOMERSAULT=48,
    ACT_SPENT=49,
    ACT_SPIN=50,
    ACT_SPIN2=51,
    ACT_SPRINT=52,
    ACT_STARJUMP=53,
    ACT_SUPERSLAM=54,
    ACT_SWIM=55,
    ACT_SWING=56,
    ACT_TIPTOE=57,
    ACT_TRAPPED=58,
    ACT_TRAPPEDSHAKE=59,
    ACT_TURN=60,
    ACT_UP=61,
    ACT_WADE=62,
    ACT_WAIT=63,
    ACT_WALK=64,
    ACT_WIN=65,
    ACT_FLYZOFFA=66,
    MAXACTIONS=67
} Actions_;

typedef union adata adata, *Padata;

union adata {
    float constant;
    struct nuanimcurvedata_s *curvedata;
};

typedef struct ADeb ADeb, *PADeb;

struct ADeb {
    short character;
    short action;
    float time;
    float time2;
    uint flags;
    ushort locators;
    uchar gdeb;
    char count;
    uchar random;
    uchar xrot;
    char type;
    char target;
    short sfx;
    uchar rumble;
    uchar buzz;
    char unk[4];
    ulonglong levbits;
    float min;
    float max;
};

typedef struct adpcm adpcm, *Padpcm;

struct adpcm {
    struct _AXPBADPCM adpcm;
    struct _AXPBADPCMLOOP adpcmloop;
};

typedef struct ai_s ai_s, *Pai_s;

struct ai_s {
    char ai_type;
    char status;
    char pad1;
    char pad2;
    char pad3;
    char iRAIL;
    short iALONG;
    float fALONG;
    float time;
    float delay;
    struct nuvec_s pos[8];
    struct nuvec_s origin;
};


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/AI_tmp - /amod_struct.h/AI_tmp */

typedef struct AIType AIType, *PAIType;

struct AIType {
    short character;
    short points;
    struct creatcmd_s *cmd;
    char name[16];
    float delay;
};

typedef struct alpslot alpslot, *Palpslot;

struct alpslot {
    float t;
    float a;
};

typedef ushort angle;

typedef struct anim_parameters_s anim_parameters_s, *Panim_parameters_s;

struct anim_parameters_s {
    int objid;
    int usedpart;
    int usedsound;
    int trigger_type;
    int trigger_id;
    float trigger_var;
    float trigger_wait;
    char particle_name[16][8];
    int particle_type[8];
    int particle_rate[8];
    int particle_switch[8];
    struct nuvec_s particle_offset[8];
    short particle_emitrotz[8];
    short particle_emitroty[8];
    float sound_last_time;
    char sound_name[16][8];
    int sound_id[8];
    int sound_type[8];
    float sound_time[8];
    struct nuvec_s sound_offset[8];
    int terrplatid;
    float playergrav;
    float tension;
    float damping;
};

typedef struct animdatainst_s animdatainst_s, *Panimdatainst_s;

struct animdatainst_s {
    struct nuanimdata_s *ad;
    char name[256];
    int inst_cnt;
};


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/AnimList - /amod_struct.h/AnimList */

typedef void *ARCallback;

typedef struct ATLASSTRUCT ATLASSTRUCT, *PATLASSTRUCT;

typedef struct creature_s creature_s, *Pcreature_s;

typedef struct MYDRAW MYDRAW, *PMYDRAW;

typedef struct Quat Quat, *PQuat;


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/obj_s - /amod_struct.h/obj_s */


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/Nearest_Light_s - /amod_struct.h/Nearest_Light_s */

struct Quat {
    struct nuvec_s v;
    float w;
};

struct MYDRAW {
    struct anim_s Anim;
    struct CharacterModel_PS2 *Model;
    int Character;
    int NumJoints;
    struct NUJOINTANIM_s *JointList;
    struct nuvec_s *Position;
    struct Nearest_Light_s Nearest_Light;
};

struct ATLASSTRUCT {
    struct creature_s *Cre;
    int Whacko;
    int Type;
    int Dead;
    int HitPoints;
    int DestHitPoints;
    int HitPointCounter;
    int DrawCrunch;
    int DrawShell;
    float InhibitControlTimer;
    int NumAttacks;
    int Action;
    int LastAction;
    float ActionTimer;
    float ActionTimer2;
    int BeenHit;
    int CantBeHit;
    float RollSpeed;
    float RollAccTimer;
    struct MYDRAW Shell;
    struct MYDRAW Crunch;
    struct nuvec_s Position;
    struct nuvec_s OldPosition;
    struct nuvec_s LastPosition;
    struct nuvec_s TargetPosition;
    struct nuvec_s Velocity;
    struct nuvec_s OldVelocity;
    struct nuvec_s Resolved;
    struct nuvec_s Force;
    float Radius;
    float AngleX;
    float AngleY;
    float AngleZ;
    float InputAng;
    float InputMag;
    struct Quat Quat;
    struct Quat ThisQuat;
    struct Quat FrameQuat[4];
    struct Quat LastQuat;
    int LastHit;
    int Axis;
    struct nuvec_s LastNormal;
    struct nuvec_s StoreLastNormal;
    float DebugAxisTurn;
    float DebugAngY;
    float D[7];
    int OnGround;
    int PlatformId;
    struct nuvec_s PlatformNormal;
    float ShadowY;
    int SurfaceType;
    int TrailSurfaceType;
    int BigDrop;
    int Embedded;
    int Rock;
    int RockNum;
    float CrunchY;
    float DestCrunchY;
    short *TerrHandle;
    float BoostTimer;
    struct nuvec_s InterestPoint;
};

struct creature_s {
    char used;
    char on;
    char off_wait;
    char i_aitab;
    struct obj_s obj;
    struct AI_tmp ai;
    struct NEWBUGGY *Buggy;
    struct creatcmd_s *cmdtable;
    struct creatcmd_s *cmdcurr;
    struct Moveinfo_s *OnFootMoveInfo;
    struct numtx_s m;
    struct numtx_s mtxLOCATOR[16][2];
    struct nuvec_s momLOCATOR[16][2];
    struct Nearest_Light_s lights;
    struct rumble_s rumble;
    float idle_time;
    float idle_wait;
    short idle_action;
    short old_idle_action;
    char idle_mode;
    char idle_repeat;
    char jump;
    char jump_type;
    char jump_subtype;
    char ok_slam;
    char slam;
    char spin;
    char crawl;
    char crawl_lock;
    char tiptoe;
    char sprint;
    uchar somersault;
    uchar land;
    char pad_type;
    char jump_hack;
    uchar jump_hold;
    uchar allow_jump;
    short jump_frames;
    short jump_frame;
    short slam_wait;
    short spin_frames;
    short spin_frame;
    short spin_wait;
    short slide;
    short crouch_pos;
    ushort slam_frame;
    short fire_action;
    uchar fire;
    uchar tap;
    char target;
    char target_wait;
    char fire_lock;
    char idle_sigh;
    uchar hit_type;
    uchar freeze;
    char anim_processed;
    char pad1;
};

typedef struct Award Award, *PAward;

struct Award {
    float time;
    ushort yrot;
    ushort got;
    char level;
    char wait;
    char pad1;
    char pad2;
    struct nuvec_s oldpos0;
    struct nuvec_s oldpos1;
    struct nuvec_s newpos;
};

typedef struct BATTLESHIPSTRUCT BATTLESHIPSTRUCT, *PBATTLESHIPSTRUCT;

struct BATTLESHIPSTRUCT {
    int Active;
    struct MYDRAW MainDraw;
    struct numtx_s Locator[16];
    struct nuvec_s Position;
    float AngleY;
    float TiltX;
    float TiltZ;
    float DestTiltX;
    float DestTiltZ;
    float DestY;
    float Seek;
    int Seen;
    int HitPoints;
    float FireTimer[2];
    struct nuvec_s GooScale;
    struct nuvec_s DestGooScale;
    struct nuvec_s BaseGooScale;
    float GooSpeed;
    struct nuvec_s GooTimer;
    int KillMeNow;
};

typedef struct BlockInfo BlockInfo, *PBlockInfo;

struct BlockInfo {
    struct nuiffhdr_s hdr;
    int pos;
};

typedef union BMPtmp BMPtmp, *PBMPtmp;

union BMPtmp {
    uint u32;
    uchar u8[4];
};


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/bool - /BION~213.ELF.h/bool */

typedef struct bootInfo bootInfo, *PbootInfo;

struct bootInfo {
    uint x0[8];
    uint boot_magic;
};

typedef struct BridgeType BridgeType, *PBridgeType;


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/nuinstance_s - /amod_struct.h/nuinstance_s */

struct BridgeType {
    struct nuvec_s pos[24][2];
    struct nuvec_s vel[24][2];
    struct numtx_s mtx[24];
    struct nuinstance_s *instance[24];
    struct nuinstance_s *ipost;
    struct nuvec_s center;
    float radius;
    short plat[24];
    char inrange;
    char onscreen;
    char sections;
    char postint;
    int colour;
    short hit;
    short yang;
    float width;
    float tension;
    float gravity;
    float damp;
    float plrweight;
    float postw;
    float posth;
    int unk;
};

typedef struct BugArea_s BugArea_s, *PBugArea_s;

struct BugArea_s {
    char in_pad;
    char in_iRAIL;
    short in_iALONG;
    float in_fALONG;
    char out_pad;
    char out_iRAIL;
    short out_iALONG;
    float out_fALONG;
};

typedef struct BUGSAVE BUGSAVE, *PBUGSAVE;

struct BUGSAVE {
    struct Quat Orientation;
    short x;
    short y;
    short z;
    short FrontWheelAng;
    float WheelLength;
};

typedef struct CamMtx CamMtx, *PCamMtx;

struct CamMtx {
    struct numtx_s m;
    struct numtx_s m0;
    struct nuvec_s vX;
    struct nuvec_s vY;
    struct nuvec_s vZ;
    struct nuvec_s pos;
    struct nuvec_s oldpos;
    struct nuvec_s newpos;
    struct nuvec_s pos2;
    struct nuvec_s seek;
    float distance;
    float ahead;
    float judder;
    float blend_time;
    float blend_duration;
    int xrot;
    int yrot;
    int zrot;
    ushort old_xrot;
    ushort new_xrot;
    ushort old_yrot;
    ushort new_yrot;
    ushort old_zrot;
    ushort new_zrot;
    ushort hdg_to_player;
    short route;
    short i0;
    short i1;
    char mode;
    char iRAIL;
    short iALONG;
    ushort angle;
    char vertical;
    char pad1;
};

typedef struct cdata_s cdata_s, *Pcdata_s;

struct cdata_s {
    char *path;
    char *file;
    char *name;
    struct AnimList *anim;
    float radius;
    struct nuvec_s min;
    struct nuvec_s max;
    float scale;
    float shadow_scale;
};


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/CharacterModel - /amod_struct.h/CharacterModel */

typedef struct chars chars, *Pchars;


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/NUHGOBJ_s - /amod_struct.h/NUHGOBJ_s */

struct chars {
    struct NUHGOBJ_s *obj;
    char *path;
    char *name;
};

typedef struct Chase Chase, *PChase;


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/nuhspecial_s - /amod_struct.h/nuhspecial_s */

typedef struct event event, *Pevent;

struct event {
    struct nugspline_s *spl;
    struct nuhspecial_s obj[24];
};

struct Chase {
    struct nugspline_s *spl_START;
    float time;
    float duration;
    struct nugspline_s *spl_CHASER[6];
    struct nuvec_s pos[6];
    struct RPos_s RPos[6];
    struct anim_s anim[6];
    struct nuhspecial_s obj[6];
    short character[6];
    short action[6];
    ushort xrot[6];
    ushort yrot[6];
    ushort zrot[6];
    struct event event[24][6];
    struct nugspline_s *spl_MISC[4][6];
    struct Nearest_Light_s lights[6];
    float scale[6];
    uchar misc_phase[6];
    char ok[6];
    uchar cuboid;
    char i;
    char i_last;
    char i_next;
    char status;
    char iRAIL;
    short iALONG;
    float fALONG;
};

typedef struct CocoMoveInfo CocoMoveInfo, *PCocoMoveInfo;

struct CocoMoveInfo {
    float IDLESPEED;
    float TIPTOESPEED;
    float WALKSPEED;
    float RUNSPEED;
    float SPRINTSPEED;
    float SLIDESPEED;
    float CRAWLSPEED;
    float DANGLESPEED;
    float WADESPEED;
    float JUMPHEIGHT;
    float DANGLEGAP;
    short JUMPFRAMES0;
    short JUMPFRAMES1;
    short JUMPFRAMES2;
    short STARJUMPFRAMES;
    short SOMERSAULTFRAMES;
    short SPINFRAMES;
    short SPINRESETFRAMES;
    short SUPERSPINFRAMES;
    short SUPERSPINWAITFRAMES;
    short SLAMWAITFRAMES;
    short SLIDEFRAMES;
    short CROUCHINGFRAMES;
    short JUMPLANDFRAMES;
    short spad;
};

typedef struct colslot colslot, *Pcolslot;

struct colslot {
    float t;
    float r;
    float g;
    float b;
};

typedef struct Cradat Cradat, *PCradat;

typedef struct crateA crateA, *PcrateA;

typedef struct crate_s crate_s, *Pcrate_s;

struct crate_s {
    int id;
    char type[4];
    struct nuvec_s pos;
    struct crate_s *linked;
    struct crate_s *trigger;
    ushort orientation;
    short offx;
    short offy;
    short offz;
    short ccindex;
    char draw;
    char cpad1;
};

struct Cradat {
    struct crateA *crate;
    char type1;
    char type2;
    char type3;
    char type4;
};

struct crateA {
    struct crate_s *model;
    struct nuvec_s pos0;
    struct nuvec_s pos;
    float oldy;
    float shadow;
    float mom;
    float timer;
    float duration;
    char on;
    char iRAIL;
    short iALONG;
    float fALONG;
    ushort flags;
    char type1;
    char type2;
    char type3;
    char type4;
    char newtype;
    char subtype;
    char i;
    char metal_count;
    char appeared;
    char in_range;
    short dx;
    short dy;
    short dz;
    short iU;
    short iD;
    short iN;
    short iS;
    short iE;
    short iW;
    short trigger;
    char counter;
    char anim_cycle;
    short index;
    float anim_time;
    float anim_duration;
    float anim_speed;
    ushort xrot0;
    ushort zrot0;
    ushort xrot;
    ushort zrot;
    ushort surface_xrot;
    ushort surface_zrot;
    short character;
    short action;
    struct nuvec_s colbox[2];
};

typedef struct CrashMoveInfo CrashMoveInfo, *PCrashMoveInfo;

struct CrashMoveInfo {
    float IDLESPEED;
    float TIPTOESPEED;
    float WALKSPEED;
    float RUNSPEED;
    float SPRINTSPEED;
    float SLIDESPEED;
    float CRAWLSPEED;
    float DANGLESPEED;
    float WADESPEED;
    float JUMPHEIGHT;
    float DANGLEGAP;
    short JUMPFRAMES0;
    short JUMPFRAMES1;
    short JUMPFRAMES2;
    short STARJUMPFRAMES;
    short SOMERSAULTFRAMES;
    short SPINFRAMES;
    short SPINRESETFRAMES;
    short SUPERSPINFRAMES;
    short SUPERSPINWAITFRAMES;
    short SLAMWAITFRAMES;
    short SLIDEFRAMES;
    short CROUCHINGFRAMES;
    short JUMPLANDFRAMES;
    short spad;
};

typedef struct CrateGroup_s CrateGroup_s, *PCrateGroup_s;

struct CrateGroup_s {
    struct nuvec_s origin;
    float radius;
    short iCrate;
    short nCrates;
    ushort angle;
    char pad1;
    char pad2;
    struct nuvec_s minclip;
    struct nuvec_s maxclip;
};

typedef struct Credit_s Credit_s, *PCredit_s;

struct Credit_s {
    char *txt;
    short colour;
    short size;
};

typedef struct csc_s csc_s, *Pcsc_s;

struct csc_s {
    struct NUHGOBJ_s *obj;
    char *path;
    char *name;
};

typedef union currLst currLst, *PcurrLst;

typedef struct nulnkhdr_s nulnkhdr_s, *Pnulnkhdr_s;

typedef struct nulsthdr_s nulsthdr_s, *Pnulsthdr_s;

union currLst {
    char *s8;
    struct nulnkhdr_s *lhdr;
};

struct nulsthdr_s {
    struct nulnkhdr_s *free;
    struct nulnkhdr_s *head;
    struct nulnkhdr_s *tail;
    short elcnt;
    short elsize;
};

struct nulnkhdr_s {
    struct nulsthdr_s *owner;
    struct nulnkhdr_s *succ;
    struct nulnkhdr_s *prev;
    ushort id;
    ushort used;
};

typedef struct Cursor Cursor, *PCursor;

typedef struct remember remember, *Premember;

struct remember {
    char x;
    char y;
};

struct Cursor {
    struct remember remember[32];
    uint menu_frame;
    uint item_frame;
    char x;
    char y;
    char x_min;
    char y_min;
    char x_max;
    char y_max;
    char menu;
    char new_menu;
    char new_level;
    uchar wait;
    uchar wait_frames;
    char wait_hack;
    char button_lock;
    char pad1;
    char pad2;
    char pad3;
};

typedef struct NUGCUTSCENE_s NUGCUTSCENE_s, *PNUGCUTSCENE_s;

typedef struct NUGCUTSCENE_s **cutscene;

typedef struct NUGCUTCAMSYS_s NUGCUTCAMSYS_s, *PNUGCUTCAMSYS_s;

typedef struct NUGCUTRIGIDSYS_s NUGCUTRIGIDSYS_s, *PNUGCUTRIGIDSYS_s;

typedef struct NUGCUTCHARSYS_s NUGCUTCHARSYS_s, *PNUGCUTCHARSYS_s;

typedef struct NUGCUTLOCATORSYS_s NUGCUTLOCATORSYS_s, *PNUGCUTLOCATORSYS_s;

typedef struct NUGCUTBBOX_s NUGCUTBBOX_s, *PNUGCUTBBOX_s;

typedef struct NUGCUTTRIGGERSYS_S NUGCUTTRIGGERSYS_S, *PNUGCUTTRIGGERSYS_S;

typedef struct NUGCUTCAM_s NUGCUTCAM_s, *PNUGCUTCAM_s;


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/nuanimdata2_s - /haven_demo.h/nuanimdata2_s */

typedef struct NUSTATEANIM_s NUSTATEANIM_s, *PNUSTATEANIM_s;

typedef struct NUGCUTRIGID_s NUGCUTRIGID_s, *PNUGCUTRIGID_s;

typedef struct NUGCUTCHAR_s NUGCUTCHAR_s, *PNUGCUTCHAR_s;

typedef struct NUGCUTLOCATOR_s NUGCUTLOCATOR_s, *PNUGCUTLOCATOR_s;

typedef struct NUGCUTLOCATORTYPE_s NUGCUTLOCATORTYPE_s, *PNUGCUTLOCATORTYPE_s;

typedef struct NUGCUTTRIGGER_s NUGCUTTRIGGER_s, *PNUGCUTTRIGGER_s;

typedef enum locdir {
    LOCATOR_NO_DIRECTION=0,
    LOCATOR_UP=1,
    LOCATOR_DOWN=2,
    LOCATOR_X=3,
    LOCATOR_NEGX=4,
    LOCATOR_Y=5,
    LOCATOR_NEGY=6,
    LOCATOR_Z=7,
    LOCATOR_NEGZ=8
} locdir;

struct NUGCUTTRIGGER_s {
    short ix;
    short pad;
    char *triggername;
    struct NUSTATEANIM_s *enableflag1anim;
};

struct NUGCUTSCENE_s {
    int version;
    int address_offset;
    float nframes;
    char *name_table;
    struct NUGCUTCAMSYS_s *cameras;
    struct NUGCUTRIGIDSYS_s *rigids;
    struct NUGCUTCHARSYS_s *chars;
    struct NUGCUTLOCATORSYS_s *locators;
    struct NUGCUTBBOX_s *bbox;
    struct NUGCUTTRIGGERSYS_S *triggersys;
};

struct NUGCUTBBOX_s {
    struct nuvec_s min;
    struct nuvec_s max;
};

struct NUGCUTTRIGGERSYS_S {
    int ntriggers;
    struct NUGCUTTRIGGER_s *triggers;
};

struct NUGCUTCAMSYS_s {
    uint ncutcams;
    struct NUGCUTCAM_s *cutcams;
    struct nuanimdata2_s *camanim;
    struct NUSTATEANIM_s *camchanges;
    char initial_camid;
    char remap_table[10];
    uchar pad;
};

struct NUGCUTCHAR_s {
    struct numtx_s mtx;
    char *name;
    struct nuanimdata2_s *char_anim;
    struct nuanimdata2_s *joint_anim;
    struct nuanimdata2_s *face_anim;
    void *character;
    struct NUGCUTLOCATOR_s *locators;
    float animrate;
    uchar flags;
    uchar animix;
    uchar nlocators;
    uchar type;
    uchar first_locator;
    uchar blendframes;
    char pad[2];
};

struct NUSTATEANIM_s {
    int nchanges;
    float *frames;
    uchar *states;
};

struct NUGCUTLOCATORTYPE_s {
    char *name;
    uchar flags[2];
    ushort ix;
    char pad[4];
};

struct NUGCUTLOCATORSYS_s {
    struct NUGCUTLOCATOR_s *locators;
    struct NUGCUTLOCATORTYPE_s *locator_types;
    uchar nlocators;
    uchar ntypes;
    char pad[2];
};

struct NUGCUTRIGIDSYS_s {
    struct NUGCUTRIGID_s *rigids;
    ushort nrigids;
    char pad[2];
};

struct NUGCUTCAM_s {
    struct numtx_s mtx;
    uchar flags;
    uchar id;
    uchar anim_ix;
    uchar pad[13];
};

struct NUGCUTLOCATOR_s {
    struct numtx_s mtx;
    struct nuvec_s pivot;
    float rate;
    struct nuanimdata2_s *anim;
    enum locdir direction;
    uchar flags;
    uchar locator_type;
    uchar joint_ix;
    char pad;
    float param1;
    float param2;
};

struct NUGCUTRIGID_s {
    struct numtx_s mtx;
    char *name;
    struct nuhspecial_s special;
    struct nuanimdata2_s *anim;
    struct NUSTATEANIM_s *visibiltyanim;
    struct NUGCUTLOCATOR_s *locators;
    uchar flags;
    uchar nlocators;
    uchar first_locator;
    char pad;
};

struct NUGCUTCHARSYS_s {
    struct NUGCUTCHAR_s *chars;
    ushort nchars;
    char pad[2];
};

typedef struct cutscenedesc_s cutscenedesc_s, *Pcutscenedesc_s;

struct cutscenedesc_s {
    char *gscname;
    char *cutname;
    int sfxid;
    int debgroup;
};

typedef struct D3DBaseTexture D3DBaseTexture, *PD3DBaseTexture;

struct D3DBaseTexture {
    int Common;
    int Data;
    int Lock;
    int Format;
    int Size;
};

typedef struct D3DDevice D3DDevice, *PD3DDevice;

struct D3DDevice {
    undefined field0_0x0;
};

typedef struct D3DSurface D3DSurface, *PD3DSurface;

struct D3DSurface {
    int Common;
    int Data;
    int Lock;
    int Format;
    int Size;
    struct D3DSurface *Parent;
};

typedef struct D3DTexture D3DTexture, *PD3DTexture;

struct D3DTexture {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    undefined field12_0xc;
    undefined field13_0xd;
    undefined field14_0xe;
    undefined field15_0xf;
    undefined field16_0x10;
    undefined field17_0x11;
    undefined field18_0x12;
    undefined field19_0x13;
};

typedef struct D3DXVECTOR2 D3DXVECTOR2, *PD3DXVECTOR2;

struct D3DXVECTOR2 {
    float x;
    float y;
};

typedef struct datasetup_s datasetup_s, *Pdatasetup_s;

struct datasetup_s {
    struct nuvec_s vt[3];
    int colour;
};

typedef struct DatFile DatFile, *PDatFile;

typedef int int32_t;

typedef int32_t filehandle;

struct DatFile {
    int ver;
    int nfiles;
    struct nudatinfo_s *finfo;
    int treecnt;
    struct nudfnode_s *filetree;
    int leafnames;
    int dfhandle;
    filehandle fh;
    short intalloc;
    short openmode;
    int start_lsn;
    void *memdataptr;
    char pad[4];
};

typedef struct deb3_s deb3_s, *Pdeb3_s;

typedef struct deb3info deb3info, *Pdeb3info;

struct deb3info {
    short type;
    short classid;
    short info;
    float timer;
    float size;
    short deb;
    short rate;
    void *impact;
    void *end;
    int data;
};

struct deb3_s {
    struct numtx_s mtx;
    struct numtx_s invWorldInertiaTensor;
    struct nuvec_s velocity;
    struct nuvec_s angularvelocity;
    struct nuvec_s angularMomentum;
    struct nuvec_s impact;
    struct nuvec_s norm;
    struct nuvec_s diff;
    float shadow;
    float grav;
    short status;
    short timer;
    short check;
    short count;
    struct deb3info *info;
    int data;
};

typedef struct debkeydatatype_s debkeydatatype_s, *Pdebkeydatatype_s;

struct debkeydatatype_s {
    struct rdata_s *chunks[128];
    struct numtx_s rotmtx;
    struct numtx_s emitrotmtx;
    short count;
    short type;
    short active;
    short debcount;
    short disposed;
    short pointer;
    short reqcount;
    short reqdebcount;
    float x;
    float y;
    float z;
    float toffx;
    float toffy;
    float toffz;
    struct gensorttab *genptr;
    void *gencode;
    struct debkeydatatype_s *next;
    struct debkeydatatype_s *prev;
    short rotory;
    short rotorz;
    int instances;
    short oncount;
    short delay;
    struct debrissphere_s spheres[8];
    short sphere_next;
    short sphere_next_emit;
    int trigger_type;
    int trigger_id;
    float trigger_var;
    short refrotz;
    short refroty;
    float refoff;
    float refbounce;
    short sound_next[4];
    short group_id;
    char unk[2];
};

typedef enum debris_chunk_control_e {
    DEBRIS_CHUNK_CONTROL_FREE=0,
    DEBRIS_CHUNK_CONTROL_FREE_AND_UNLINK=1,
    DEBRIS_CHUNK_CONTROL_SORT_DMA=2,
    DEBRIS_CHUNK_CONTROL_RETURN_TO_STACK=3,
    DEBRIS_CHUNK_CONTROL_CHANGE_COLOUR=4,
    DEBRIS_CHUNK_CONTROL_DO_BOUNCEY=5,
    DEBRIS_CHUNK_CONTROL_DO_BOUNCEXZ=6
} debris_chunk_control_e;

typedef struct debris_chunk_control_s debris_chunk_control_s, *Pdebris_chunk_control_s;

struct debris_chunk_control_s {
    struct rdata_s *chunk;
    int delay;
    enum debris_chunk_control_e action;
    struct debkeydatatype_s *owner;
    struct debris_chunk_control_s *next;
    int ivariable;
    float fvariable;
    short type;
    short refrotz;
    short refroty;
    float refoff;
    float refbounce;
};

typedef struct debris_s debris_s, *Pdebris_s;

struct debris_s {
    float x;
    float y;
    float z;
    float time;
    float mx;
    float my;
    float mz;
    float etime;
};

typedef struct debtab debtab, *Pdebtab;

typedef struct wslot wslot, *Pwslot;

typedef struct hslot hslot, *Phslot;

typedef struct rotslot rotslot, *Protslot;

typedef struct jibxslot jibxslot, *Pjibxslot;

typedef struct jibyslot jibyslot, *Pjibyslot;


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/PartHeader - /amod_struct.h/PartHeader */

typedef struct sphereslot sphereslot, *Psphereslot;

typedef struct sounds sounds, *Psounds;

struct sphereslot {
    float t;
    float r;
};

struct hslot {
    float t;
    float h;
};

struct jibyslot {
    float t;
    float y;
};

struct sounds {
    int id;
    int type;
    int delay;
};

struct wslot {
    float t;
    float w;
};

struct rotslot {
    float t;
    float r;
};

struct jibxslot {
    float t;
    float x;
};

struct debtab {
    char id[16];
    char listid;
    char pad1_unk;
    short generate;
    short debnum;
    short ival_offset;
    short ival_on;
    short ival_on_ran;
    short ival_off;
    short ival_off_ran;
    char gensort;
    char gencode;
    char mat;
    char efftab;
    float radius;
    float cuton;
    float cutoff;
    float drawcutoff;
    float emitmag;
    struct nuvec_s variable_emit;
    struct nuvec_s variable_emit_ranscale;
    struct nuvec_s variable_start;
    struct nuvec_s variable_start_ranscale;
    float rsx;
    float rsy;
    float rsz;
    float osx;
    float osy;
    float osz;
    float rvx;
    float rvy;
    float rvz;
    float ovx;
    float ovy;
    float ovz;
    float grav;
    float etime;
    short uw;
    char frames;
    char rate;
    float uvanim;
    float jibxfreq;
    float jibxamp;
    float jibyfreq;
    float jibyamp;
    struct colslot colslot[8];
    struct alpslot alpslot[8];
    float minsize;
    float maxsize;
    struct wslot wslot[8];
    struct hslot hslot[8];
    float minrot;
    float maxrot;
    struct rotslot rotslot[8];
    struct jibxslot jibxslot[8];
    struct jibyslot jibyslot[8];
    float u1;
    float v1;
    float u2;
    float v2;
    struct PartHeader *DmaDebTypePointer;
    struct sphereslot sphereslot[8];
    char numspheres;
    char pad2_unk[3];
    int variable_key;
    struct sounds sounds[4];
};

typedef struct DiskInfo DiskInfo, *PDiskInfo;

typedef struct DVDDiskID DVDDiskID, *PDVDDiskID;

typedef uchar uint8_t;

struct DVDDiskID {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    undefined field12_0xc;
    undefined field13_0xd;
    undefined field14_0xe;
    undefined field15_0xf;
    undefined field16_0x10;
    undefined field17_0x11;
    undefined field18_0x12;
    undefined field19_0x13;
    undefined field20_0x14;
    undefined field21_0x15;
    undefined field22_0x16;
    undefined field23_0x17;
    undefined field24_0x18;
    undefined field25_0x19;
    undefined field26_0x1a;
    undefined field27_0x1b;
    undefined field28_0x1c;
    undefined field29_0x1d;
    undefined field30_0x1e;
    undefined field31_0x1f;
};

struct DiskInfo {
    struct DVDDiskID diskID;
    uint8_t filler20[32];
    void *FSTLocationInRam;
    uint FSTMaxLength;
};

typedef struct DmaDebTypePointer DmaDebTypePointer, *PDmaDebTypePointer;

struct DmaDebTypePointer {
    int DmaHeader[4];
    float grav;
    float gtime;
    int DmaBody[4];
    float u0;
    float v0;
    float u1;
    float v1;
    float u2;
    float v2;
    float u3;
    float v3;
    struct datasetup_s data[64];
};

typedef enum DMTexFlt {
    DMTF_POINTSAMPLE=0,
    DMTF_BILERP=1
} DMTexFlt;

typedef struct DVDCommandBlock DVDCommandBlock, *PDVDCommandBlock;

struct DVDCommandBlock {
    struct DVDCommandBlock *next;
    struct DVDCommandBlock *prev;
    uint command;
    int state;
    uint offset;
    uint length;
    void *addr;
    uint currTransferSize;
    uint transferredSize;
    struct DVDDiskID *id;
    struct DVDCommandBlock *DVDCommandBlock;
    void *userData;
};

typedef struct DVDFileInfo DVDFileInfo, *PDVDFileInfo;

struct DVDFileInfo {
    struct DVDCommandBlock cb;
    uint startAddr;
    uint length;
    struct DVDFileInfo *DVDFileInfo;
};

typedef struct DVDQueue_sub DVDQueue_sub, *PDVDQueue_sub;

struct DVDQueue_sub {
    struct DVDQueue_sub *unk0;
    struct DVDQueue_sub *unk4;
};

typedef enum eCrashVehicleType {
    Submarine=32,
    Glider=54,
    Gyro=59,
    Mech=68,
    Atlasphere=83,
    Jeep=99,
    Scooter=107,
    Dropship=129,
    Minecart=137,
    Mosquito=139,
    Offroader=153,
    Snowboard=160,
    Minetub=161,
    FireEngine=178
} eCrashVehicleType;

typedef struct edpp_ptldesc_s edpp_ptldesc_s, *Pedpp_ptldesc_s;

struct edpp_ptldesc_s {
    struct nuvec_s pos;
    int type;
    int handle;
    short rotz;
    short roty;
    short emitrotz;
    short emitroty;
    int offset;
    char name[16];
    int trigger_type;
    int trigger_id;
    float trigger_var;
    short refrotz;
    short refroty;
    float refoff;
    float refbounce;
    short group_id;
    char unk[2];
};


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/Elf32_Ehdr - /ELF/Elf32_Ehdr */


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/Elf32_Phdr - /ELF/Elf32_Phdr */


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/Elf32_Shdr - /ELF/Elf32_Shdr */


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/Elf32_Sym - /ELF/Elf32_Sym */

typedef enum Elf_ProgramHeaderType_PPC {
    PT_NULL=0,
    PT_LOAD=1,
    PT_DYNAMIC=2,
    PT_INTERP=3,
    PT_NOTE=4,
    PT_SHLIB=5,
    PT_PHDR=6,
    PT_TLS=7,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_STACK=1685382481,
    PT_GNU_RELRO=1685382482
} Elf_ProgramHeaderType_PPC;

typedef enum Elf_SectionHeaderType_PPC {
    SHT_NULL=0,
    SHT_PROGBITS=1,
    SHT_SYMTAB=2,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_HASH=5,
    SHT_DYNAMIC=6,
    SHT_NOTE=7,
    SHT_NOBITS=8,
    SHT_REL=9,
    SHT_SHLIB=10,
    SHT_DYNSYM=11,
    SHT_INIT_ARRAY=14,
    SHT_FINI_ARRAY=15,
    SHT_PREINIT_ARRAY=16,
    SHT_GROUP=17,
    SHT_SYMTAB_SHNDX=18,
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_CHECKSUM=1879048184,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_syminfo=1879048188,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191
} Elf_SectionHeaderType_PPC;

typedef struct EnemyJeep EnemyJeep, *PEnemyJeep;

typedef struct SIMWHEEL SIMWHEEL, *PSIMWHEEL;

struct SIMWHEEL {
    struct nuvec_s Position;
    struct nuvec_s OldPosition;
    float TrailWidth;
    float Radius;
    int Platform;
    int SurfaceType;
};

struct EnemyJeep {
    struct nuvec_s Position;
    struct MYDRAW Draw;
    float PlayBackTime;
    int PlayBackMax;
    struct NUJOINTANIM_s Joints[8];
    struct numtx_s Locators[16];
    int LocatorValidFrame;
    struct SIMWHEEL TrailWheel[4];
    float TimeLine;
    char Active;
    char DrawOn;
    char TrailOn;
    char Pad;
};

typedef enum enum_1092 {
    LIO_WAIT=0,
    LIO_NOWAIT=1
} enum_1092;


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/FILE - /haven_demo.h/FILE */

typedef struct filebuff_s filebuff_s, *Pfilebuff_s;

typedef struct fileinfo_s fileinfo_s, *Pfileinfo_s;

struct filebuff_s {
    struct fileinfo_s *info;
    int time;
    char data[1024];
};

struct fileinfo_s {
    int handle;
    int read_pos;
    int file_pos;
    int file_length;
    int buff_start;
    int buff_length;
    int use_buff;
    int start_lsn;
};

typedef struct FIREBOSSSTRUCT FIREBOSSSTRUCT, *PFIREBOSSSTRUCT;

typedef struct MYSPLINE MYSPLINE, *PMYSPLINE;

typedef struct JEEPROCK JEEPROCK, *PJEEPROCK;

struct MYSPLINE {
    struct nugspline_s *Spline;
    float Cur;
    float Nex;
    float Act;
    float Inc;
    struct nuvec_s CurPos;
    struct nuvec_s NexPos;
    float LookaheadDist;
};

struct FIREBOSSSTRUCT {
    struct numtx_s Locator[16];
    int DropSide;
    float FootTime;
    int HitPoints;
    int Pass;
    int Active;
    float AngleY;
    struct nuvec_s Position;
    struct MYDRAW MainDraw;
    struct MYDRAW ExplodeDraw;
    struct MYSPLINE MainSpline;
    int Seen;
    float Speed;
    int Action;
    int LastAction;
    float ActionTimer;
    float ActionTimer2;
    struct nuvec_s Vel;
    int Dead;
    struct numtx_s DrawMtx;
    int BeenHitThisPass;
    float BeenHitThisPassTimer;
    struct JEEPROCK *Rock;
};

struct JEEPROCK {
    struct nuvec_s Pos;
    struct nuvec_s Vel;
    int Active;
    int Seen;
    int Stuck;
    int Explode;
    int SmallDamage;
    float Life;
    struct ATLASSTRUCT Atlas;
    int Grabbed;
    int Mode;
    float FlameTimer;
    struct nuvec_s Scale;
    int FireBlob;
    int SmashMe;
};

typedef struct Font3DAccentTab Font3DAccentTab, *PFont3DAccentTab;

struct Font3DAccentTab {
    struct nuhspecial_s obj;
    char *name;
};

typedef struct Font3DObjTab Font3DObjTab, *PFont3DObjTab;

struct Font3DObjTab {
    short i;
    uchar flags;
    char action;
    float anim_time;
    float scale;
};

typedef struct Font3DTab Font3DTab, *PFont3DTab;

struct Font3DTab {
    char ascii;
    char pad1;
    char pad2;
    char pad3;
    struct nuhspecial_s obj;
    char *name;
};

typedef struct FootData FootData, *PFootData;

struct FootData {
    struct nuvec_s pnts[4];
    short brightness;
    char timer;
    char gfx;
};

typedef struct freedebchunks freedebchunks, *Pfreedebchunks;

struct freedebchunks {
    int dmadata[2];
    int unpackdata[2];
    struct debris_s debris[32];
};

typedef int fxi;

typedef struct Game_s Game_s, *PGame_s;

struct Game_s {
    char name[9];
    uchar vibration;
    uchar surround;
    uchar sfx_volume;
    uchar music_volume;
    char screen_x;
    char screen_y;
    uchar language;
    struct Hub hub[6];
    struct level level[35];
    uchar lives;
    uchar wumpas;
    uchar mask;
    uchar percent;
    uchar crystals;
    uchar relics;
    uchar crate_gems;
    uchar bonus_gems;
    uchar gems;
    uchar gembits;
    uchar powerbits;
    uchar empty;
    uint cutbits;
    uchar year;
    uchar month;
    uchar day;
    uchar hours;
    uchar mins;
    uchar pad_[3];
};

typedef struct GDeb GDeb, *PGDeb;

struct GDeb {
    int i;
    char *name;
    longlong levbits;
};

typedef struct ghg_inst_s ghg_inst_s, *Pghg_inst_s;

struct ghg_inst_s {
    char *name;
    struct NUHGOBJ_s *scene;
};

typedef struct GLIDERSTRUCT GLIDERSTRUCT, *PGLIDERSTRUCT;

struct GLIDERSTRUCT {
    struct creature_s *Cre;
    struct nuvec_s vel;
    int Dead;
    int CocoDead;
    float CocoDeadTimer;
    float CocoDeathSpinX;
    float CocoDeathSpinZ;
    float NextEngRum;
    float FixVelTimer;
    float ImmuneAsteroidsTimer;
    struct nuvec_s Position;
    struct nuvec_s OldPosition;
    struct nuvec_s Velocity;
    struct nuvec_s Resolved;
    struct nuvec_s RailPoint;
    float RailAngle;
    float TiltX;
    float TiltZ;
    float DestTiltX;
    float DestTiltZ;
    float AngleY;
    float CamAngleY;
    float CamTiltX;
    float CamTornRecoverTimer;
    float InputX;
    float InputZ;
    int BarrelRoll;
    float BarrelDelta;
    float BarrelSpeedX;
    int TerminalDive;
    int TerminalDir;
    float FireTimer;
    float HitTimer;
    int AutoPilot;
    int ForceTurn;
    int HitPoints;
    char LocatorList[16];
    float LocatorTime[16];
    int InTornado;
    int LastInTornado;
    float InTornadoTime;
    float TornadoSpin;
    float InTornadoScale;
    struct nuvec_s ApparentPosition;
    struct nuvec_s ApparentVelocity;
    struct nuvec_s PositionStack[30];
    struct nuvec_s VelocityStack[30];
    int StackIndx;
    float Speed;
    float TargetSpeed;
    float NotInFrontTimer;
    float PullUpTimer;
    float OverideTiltZ;
    float TargetTimer;
    struct nuvec_s *MovingTargetPoint;
    struct nuvec_s *MovingTargetVel;
    int TargetOn;
    float TargetedTime;
    int TargetMoving;
    float NextHitSoundTimer;
};

typedef struct GlobalTimer GlobalTimer, *PGlobalTimer;

struct GlobalTimer {
    uint frame;
    uint itime;
    uint isec;
    float ftime;
    float fsec;
};

typedef struct glowlight glowlight, *Pglowlight;

struct glowlight {
    struct nucolour3_s HighColour;
    struct nucolour3_s LowColour;
    struct nucolour3_s CurColour;
    struct nucolour3_s ColDiff;
    ushort Step;
    ushort CurAngle;
};

typedef struct GS_Buffer GS_Buffer, *PGS_Buffer;

struct GS_Buffer {
    uint size;
    uint type;
};

typedef struct GS_FrameBufferCopy GS_FrameBufferCopy, *PGS_FrameBufferCopy;

struct GS_FrameBufferCopy {
    struct _GXTexObj tobj;
    uchar *data;
    int top;
    int left;
    int width;
    int height;
};

typedef enum GXAnisotropy {
    GX_ANISO_1=0,
    GX_ANISO_2=1,
    GX_ANISO_4=2,
    GX_MAX_ANISOTROPY=3
} GXAnisotropy;

typedef uchar GXBool;

typedef struct GXColorOLD GXColorOLD, *PGXColorOLD;

struct GXColorOLD {
    uint8_t r;
    uint8_t g;
    uint8_t b;
    uint8_t a;
};

typedef struct GXFifoObj GXFifoObj, *PGXFifoObj;

struct GXFifoObj {
    uint8_t pad[25];
};

typedef struct GXFogAdjTable GXFogAdjTable, *PGXFogAdjTable;

struct GXFogAdjTable {
    ushort _00[10];
};

typedef enum GXFogType {
    GX_FOG_NONE=0,
    GX_FOG_LINEAR=2,
    GX_FOG_EXPONENT=4,
    GX_FOG_EXPONENT2=5,
    GX_FOG_REVERSEEXP=6,
    GX_FOG_REVERSEXP2=7
} GXFogType;

typedef enum GXIndTexScale {
    GX_IND_TEX_SCALE_0=0
} GXIndTexScale;

typedef enum GXIndTexStageID {
    GX_IND_TEX_STAGE_ID_0=0,
    GX_IND_TEX_STAGE_ID_1=1,
    GX_IND_TEX_STAGE_ID_2=2,
    GX_IND_TEX_STAGE_ID_3=3
} GXIndTexStageID;

typedef struct GXInit GXInit, *PGXInit;

struct GXInit {
    char field0_0x0[128];
};

typedef struct GXLightObj GXLightObj, *PGXLightObj;

struct GXLightObj {
    float z;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    float x;
    float y;
};

typedef enum GXProjectionType {
    GX_PERSPECTIVE=0,
    GX_ORTHOGRAPHIC=1
} GXProjectionType;

typedef enum GXSpotFn {
    GX_SP_OFF=0,
    GX_SP_FLAT=1,
    GX_SP_COS=2,
    GX_SP_COS2=3,
    GX_SP_SHARP=4,
    GX_SP_RING1=5,
    GX_SP_RING2=6
} GXSpotFn;

typedef enum GXTevOp {
    GX_TEV_ADD=0,
    GX_TEV_SUB=1,
    GX_TEV_COMP_R8_GT=8,
    GX_TEV_COMP_R8_EQ=9,
    GX_TEV_COMP_GR16_GT=10,
    GX_TEV_COMP_GR16_EQ=11,
    GX_TEV_COMP_BGR24_GT=12,
    GX_TEV_COMP_BGR24_EQ=13,
    GX_TEV_COMP_A8_GT=14,
    GX_TEV_COMP_RGB8_GT=14,
    GX_TEV_COMP_A8_EQ=15,
    GX_TEV_COMP_RGB8_EQ=15
} GXTevOp;

typedef enum GXTevScale {
    GX_CS_SCALE_1=0,
    GX_CS_SCALE_2=1,
    GX_CS_SCALE_4=2,
    GX_CS_DIVIDE_2=3,
    GX_MAX_TEVSCALE=4
} GXTevScale;

typedef enum GXTexCacheSize {
    GX_TEXCACHE_32K=1,
    GX_TEXCACHE_128K=2,
    GX_TEXCACHE_512K=3,
    GX_TEXCACHE_NONE=4
} GXTexCacheSize;

typedef enum GXTexFilter {
    GX_NEAR=0,
    GX_LINEAR=1,
    GX_NEAR_MIP_NEAR=2,
    GX_LIN_MIP_NEAR=3,
    GX_NEAR_MIP_LIN=4,
    GX_LIN_MIP_LIN=5
} GXTexFilter;

typedef enum GXTexFmt {
    GX_TF_I4=0,
    GX_TF_I8=1,
    GX_TF_A8=2,
    GX_TF_IA4=3,
    GX_TF_IA8=4,
    GX_TF_RGB565=5,
    GX_TF_RGB5A3=6,
    GX_TF_RGBA8=7,
    GX_TF_CMPR=8,
    GX_TF_Z8=9,
    GX_TF_Z16=10,
    GX_TF_Z24X8=11,
    GX_CTF_R4=12,
    GX_CTF_RA4=13,
    GX_CTF_RA8=14,
    GX_CTF_A8=15,
    GX_CTF_R8=16,
    GX_CTF_G8=17,
    GX_CTF_B8=18,
    GX_CTF_RG8=19,
    GX_CTF_GB8=20,
    GX_CTF_Z4=21,
    GX_CTF_Z8M=22,
    GX_CTF_Z8L=23,
    GX_CTF_Z16L=24
} GXTexFmt;

typedef enum GXTexMtxType {
    GX_MTX3x4=0,
    GX_MTX2x4=1
} GXTexMtxType;

typedef struct GXTexObj GXTexObj, *PGXTexObj;

struct GXTexObj {
    uint field0_0x0;
    uint field1_0x4;
    uint field2_0x8;
    uint field3_0xc;
    undefined field4_0x10;
    undefined field5_0x11;
    undefined field6_0x12;
    undefined field7_0x13;
    uint field8_0x14;
    undefined field9_0x18;
    undefined field10_0x19;
    undefined field11_0x1a;
    undefined field12_0x1b;
    ushort field13_0x1c;
    undefined field14_0x1e;
    byte field15_0x1f;
};

typedef struct GXTexRegion GXTexRegion, *PGXTexRegion;

struct GXTexRegion {
    char padding[14];
};

typedef enum GXTexWrapMode {
    GX_CLAMP=0,
    GX_REPEAT=1,
    GX_MIRROR=2,
    GX_MAX_TEXWRAPMODE=3
} GXTexWrapMode;

typedef enum GXTlutSize {
    GX_TLUT_16=0,
    GX_TLUT_32=1,
    GX_TLUT_64=2,
    GX_TLUT_128=3,
    GX_TLUT_256=4,
    GX_TLUT_512=5,
    GX_TLUT_1K=6,
    GX_TLUT_2K=7,
    GX_TLUT_4K=8,
    GX_TLUT_8K=9,
    GX_TLUT_16K=10
} GXTlutSize;

typedef struct H2OElec H2OElec, *PH2OElec;

struct H2OElec {
    struct nuvec_s start;
    struct nuvec_s end;
    int time;
    int ang;
};

typedef struct Heap Heap, *PHeap;

typedef struct HeapCell HeapCell, *PHeapCell;

struct Heap {
    int size;
    struct HeapCell *free;
    struct HeapCell *allocated;
};

struct HeapCell {
    struct HeapCell *prev;
    struct HeapCell *next;
    uint size;
};

typedef struct hitdata hitdata, *Phitdata;

struct hitdata {
    float minx;
    float maxx;
    float miny;
    float maxy;
    float minz;
    float maxz;
    struct nuvec_s pnts[4];
    struct nuvec_s norm[2];
    uchar info[4];
};

typedef struct HWND__ HWND__, *PHWND__;

struct HWND__ {
};

typedef struct instNUGCUTCAM_s instNUGCUTCAM_s, *PinstNUGCUTCAM_s;

struct instNUGCUTCAM_s {
    uchar flags;
    uchar tgt_ix;
    char pad[2];
};

typedef struct instNUGCUTCAMSYS_s instNUGCUTCAMSYS_s, *PinstNUGCUTCAMSYS_s;

typedef struct NUGCUTCAMTGT_s NUGCUTCAMTGT_s, *PNUGCUTCAMTGT_s;

struct instNUGCUTCAMSYS_s {
    struct NUGCUTCAMTGT_s *tgts;
    struct instNUGCUTCAM_s *icutcams;
    uchar next_switch;
    char current_camera;
    uchar next_tgt_ix;
    uchar tgtarraysize;
    uchar ntgts;
    char pad[3];
};

struct NUGCUTCAMTGT_s {
    struct nuvec_s *tgt;
    float frame;
    float nframes;
    char camid;
    char pad[3];
};

typedef struct instNUGCUTCHAR_s instNUGCUTCHAR_s, *PinstNUGCUTCHAR_s;

struct instNUGCUTCHAR_s {
    void *character;
    float blend;
    float mtxblend;
    float frame1;
    float frame2;
    char flags;
    uchar prev_animix;
    uchar current_animix;
    uchar blendto_animix;
};

typedef struct instNUGCUTCHARSYS_s instNUGCUTCHARSYS_s, *PinstNUGCUTCHARSYS_s;

struct instNUGCUTCHARSYS_s {
    struct instNUGCUTCHAR_s *ichars;
};

typedef struct instNUGCUTLOCATOR_s instNUGCUTLOCATOR_s, *PinstNUGCUTLOCATOR_s;

struct instNUGCUTLOCATOR_s {
    float timer;
    void *data;
};

typedef struct instNUGCUTLOCATORSYS_s instNUGCUTLOCATORSYS_s, *PinstNUGCUTLOCATORSYS_s;

struct instNUGCUTLOCATORSYS_s {
    struct instNUGCUTLOCATOR_s *ilocators;
};

typedef struct instNUGCUTRIGID_s instNUGCUTRIGID_s, *PinstNUGCUTRIGID_s;

struct instNUGCUTRIGID_s {
    struct nuhspecial_s special;
    char visibleframeix;
    char pad[3];
};

typedef struct instNUGCUTRIGIDSYS_s instNUGCUTRIGIDSYS_s, *PinstNUGCUTRIGIDSYS_s;

struct instNUGCUTRIGIDSYS_s {
    struct instNUGCUTRIGID_s *irigids;
};

typedef struct instNUGCUTSCENE_s instNUGCUTSCENE_s, *PinstNUGCUTSCENE_s;

typedef struct instNUGCUTTRIGGERSYS_s instNUGCUTTRIGGERSYS_s, *PinstNUGCUTTRIGGERSYS_s;

typedef struct inugcutFN inugcutFN, *PinugcutFN;

typedef struct instNUGCUTTRIGGER_s instNUGCUTTRIGGER_s, *PinstNUGCUTTRIGGER_s;

struct instNUGCUTTRIGGER_s {
    char next_ix;
    char pad[3];
};

struct inugcutFN {
    void *endfn;
};

struct instNUGCUTSCENE_s {
    struct instNUGCUTSCENE_s *next;
    struct instNUGCUTSCENE_s *prev;
    char name[16];
    struct numtx_s mtx;
    struct NUGCUTSCENE_s *cutscene;
    struct nuvec_s centre;
    float maxdistsqr;
    int is_visible:1;
    int checkmaxdist:1;
    int checkbboxclip:1;
    int has_mtx:1;
    int autostart:1;
    int looping:1;
    uint is_playing:1;
    int played_first_frame:1;
    int is_disabled:16;
    int been_updated_this_frame:1;
    float cframe;
    float rate;
    struct instNUGCUTCAMSYS_s *icameras;
    struct instNUGCUTRIGIDSYS_s *irigids;
    struct instNUGCUTCHARSYS_s *ichars;
    struct instNUGCUTLOCATORSYS_s *ilocators;
    struct instNUGCUTTRIGGERSYS_s *itriggersys;
    struct instNUGCUTSCENE_s *next_to_play;
    struct inugcutFN *endfn;
};

struct instNUGCUTTRIGGERSYS_s {
    struct instNUTRIGGERSYS_s *itriggersys;
    struct instNUGCUTTRIGGER_s *itriggers;
};


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/instNUTRIGGERSYS_s - /haven_demo.h/instNUTRIGGERSYS_s */

typedef short int16_t;

typedef int int3;

typedef longlong int64_t;

typedef char int8_t;

typedef int intptr_t;

typedef struct JEEPBALLOON JEEPBALLOON, *PJEEPBALLOON;

struct JEEPBALLOON {
    struct nuvec_s Pos;
    struct nuvec_s Vel;
    int Active;
    int Seen;
    int Explode;
    int SmallDamage;
    float Life;
    short AngY;
    short unk;
};

typedef struct JEEPSTRUCT JEEPSTRUCT, *PJEEPSTRUCT;

typedef struct POINTANG POINTANG, *PPOINTANG;

typedef struct VEHICLE VEHICLE, *PVEHICLE;

struct POINTANG {
    float x;
    float y;
    float z;
    int Ang;
};

struct VEHICLE {
    struct nuvec_s ActualWheelPosition[4];
    struct nuvec_s OldWheelPosition[4];
    int BigSpin[4];
    struct nuvec_s ActualPosition;
    struct nuvec_s Resolved;
    struct nuvec_s Velocity;
    struct nuvec_s WheelAxis[3];
    float FrontWheelSpeedAdj;
    short aTargetAngle;
    short aTarSurfRotX;
    short aTarSurfRotZ;
    short aActualAngle;
    short aActSurfRotX;
    short aActSurfRotZ;
    short ActFrontRotX;
    short ActRearRotX;
    short TarFrontRotX;
    short TarRearRotX;
    int AnyOnGroundBits;
    int AllOnGroundBits;
    int AllTouchingGroundBits;
    int AnyTouchingGroundBits;
    struct nuvec_s AirNormal;
    struct nuvec_s SurfaceNormal;
    short *TerrHandle;
    int FrontWheelGroundBits;
};

struct JEEPSTRUCT {
    struct creature_s *Cre;
    struct MYDRAW ChassisDraw;
    struct numtx_s ChassisLocators[16];
    struct numtx_s DrawMtx;
    struct NUJOINTANIM_s Joints[8];
    struct SIMWHEEL TrailWheel[4];
    struct POINTANG RestartPoint;
    float DownHoleTimer;
    int DownHole;
    int Dropped;
    struct nuvec_s RestartCamPos;
    struct nuvec_s RestartCamObj;
    float FireBossTurnTimer;
    float WheelHeight[4];
    float TimeLine;
    int FireBossDir;
    int CantMove;
    int Quick;
    float MaxSpeed;
    float MySpeed;
    float DefaultSpeed;
    float StartSpeed;
    float StartSpeedTimer;
    int Active;
    short aWRot[4];
    short aFrontWheelAng;
    short aOldFrontWheelAng;
    struct nuvec_s Pos;
    short aAngleY;
    short aMovementAng;
    short aSurfRotX;
    short aSurfRotZ;
    float TiltSeekTime;
    short aTiltX;
    short aTiltZ;
    short aDestTiltX;
    short aDestTiltZ;
    short aInputAng;
    char unk1[2];
    float InputSpeed;
    int WheelSpin;
    short aDeltaAng;
    short aLastDeltaAng;
    short aLastDeltaAngA;
    short aOldChassisAngleY;
    short aChassisAngleY;
    short aChassisTargetAngleY;
    int aChassisAngMom;
    float Accelerator;
    float AccelerationForce;
    float CentrefugalForce;
    float Traction;
    float GroundTractionAcc;
    float TurnSin;
    short aBaseMoveAng;
    char unk2[2];
    float CentRailDist;
    float BoostOnTimer;
    float BoostTimer;
    int Finished;
    float CarryOnRecordTime;
    float FloorHeight;
    int TerrainType;
    struct MYSPLINE Spline;
    float FireTimer;
    struct VEHICLE Move;
};

typedef struct JeepTrail JeepTrail, *PJeepTrail;

struct JeepTrail {
    struct nuvec_s pos1;
    struct nuvec_s pos2;
    int intensity;
    int RealIntensity;
};

typedef struct Kaboom Kaboom, *PKaboom;

struct Kaboom {
    ushort type;
    short i;
    struct nuvec_s pos;
    float radius0;
    float radius1;
    float time;
    float duration;
    ushort yrot;
    char pad2;
    char pad3;
};

typedef struct LDATA_s LDATA_s, *PLDATA_s;

typedef struct pCHASE pCHASE, *PpCHASE;

typedef struct pSFX pSFX, *PpSFX;

struct pSFX {
    char name[16];
    ushort pitch;
    ushort volume;
    uchar buzz;
    uchar rumble;
    uchar delay;
    uchar wait;
    char *path;
    ushort frequency;
    ushort stream;
    char type;
    char pad1;
    ushort id;
    struct nuvec_s Pos;
};

struct pCHASE {
    char i;
    char i_last;
    char i_next;
    uchar cuboid;
    short character[6];
    short action[6];
    float scale[6];
    float duration;
};

struct LDATA_s {
    char *filepath;
    uchar *cList;
    struct pCHASE *pChase;
    uint time[3];
    short music[2];
    struct pSFX *pSFX;
    short nSFX;
    char pad1;
    char hub;
    ushort flags;
    short character;
    short vehicle;
    ushort farclip;
    struct nuvec_s vSTART;
    struct nuvec_s vBONUS;
    float fognear;
    float fogfar;
    uchar fogr;
    uchar fogg;
    uchar fogb;
    uchar foga;
    uchar hazer;
    uchar hazeg;
    uchar hazeb;
    uchar hazea;
};

typedef struct LgtLaserData LgtLaserData, *PLgtLaserData;

struct LgtLaserData {
    struct nuvec_s start;
    struct nuvec_s target;
    struct nuvec_s lasdir;
    float sizew;
    float sizel;
    float sizewob;
    float arcsize;
    uchar type;
    uchar p1;
    uchar p2;
    uchar p3;
    int col;
    int seed;
};

typedef struct Lights Lights, *PLights;

struct Lights {
    int type;
    struct nuvec_s pos;
    struct nuvec_s radius_pos;
    float radius;
    uchar r;
    uchar g;
    uchar b;
    uchar glow;
    struct nucolour3_s colour;
    struct nuvec_s direction;
    uchar globalflag;
    uchar blendtype;
    uchar brightness;
    uchar pad1;
    struct glowlight *glowlight;
    char pad2[4];
};

typedef struct locdataFN locdataFN, *PlocdataFN;

struct locdataFN {
    struct instNUGCUTSCENE_s *field0_0x0;
    struct NUGCUTLOCATORSYS_s *field1_0x4;
    struct instNUGCUTLOCATOR_s *field2_0x8;
    struct NUGCUTLOCATOR_s *field3_0xc;
    float field4_0x10;
    struct numtx_s *field5_0x14;
};

typedef union Lst Lst, *PLst;

union Lst {
    char *s8;
    struct nulnkhdr_s *lhdr;
};


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/mask - /amod_struct.h/mask */

typedef struct MaskFeathers MaskFeathers, *PMaskFeathers;

struct MaskFeathers {
    struct numtx_s mM;
    struct numtx_s mS;
    float time;
    float duration;
    float shadow;
    char pad1;
    char pad2;
    char pad3;
    char pad4;
};

typedef struct matchingslot_s matchingslot_s, *Pmatchingslot_s;

struct matchingslot_s {
    int batch;
    int slot;
};

typedef struct memexternal_s memexternal_s, *Pmemexternal_s;


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/variptr_u - /astructs.h/variptr_u */

struct memexternal_s {
    union variptr_u *ptr;
    union variptr_u *end;
};

typedef struct MemFile MemFile, *PMemFile;


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/nufilemode_e - /astructs.h/nufilemode_e */

struct MemFile {
    char *start;
    char *end;
    char *currpos;
    enum nufilemode_e mode;
    int used;
};

typedef struct NewWumpa NewWumpa, *PNewWumpa;

struct NewWumpa {
    struct nuvec_s world_pos;
    struct nuvec_s screen_pos;
    float screen_scale;
    uchar count;
    uchar delay;
    char transformed;
    char bonus;
    char active;
    char pad1;
    char pad2;
    char pad3;
};


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/nuangvec_s - /amod_struct.h/nuangvec_s */


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/nuanimcurve2_s - /haven_demo.h/nuanimcurve2_s */


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/nuanimcurve_s - /amod_struct.h/nuanimcurve_s */


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/nuanimcurveset_s - /amod_struct.h/nuanimcurveset_s */


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/nuanimdata_s - /amod_struct.h/nuanimdata_s */


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/NUANIMDATACHUNK - /amod_struct.h/NUANIMDATACHUNK */


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/NUANIMDATAHDR_s - /amod_struct.h/NUANIMDATAHDR_s */


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/NUBLENDGEOM_s - /amod_struct.h/NUBLENDGEOM_s */


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/nucamera_s - /haven_demo.h/nucamera_s */


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/nucamfxmode_s - /haven_demo.h/nucamfxmode_s */


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/NUCOLLISIONDATA_s - /amod_struct.h/NUCOLLISIONDATA_s */


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/NUCOLLISIONHDR_s - /amod_struct.h/NUCOLLISIONHDR_s */

typedef enum NUCOLLISIONTYPES {
    NUCOLLISIONSPHERETYPE=1
} NUCOLLISIONTYPES;


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/NUCUTSCENE_s - /haven_demo.h/NUCUTSCENE_s */

typedef struct NUCUTSCENEAUDIO_s NUCUTSCENEAUDIO_s, *PNUCUTSCENEAUDIO_s;

struct NUCUTSCENEAUDIO_s {
    float start_time;
    char *wav_time;
};


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/NUCUTSCENECAMERA_s - /haven_demo.h/NUCUTSCENECAMERA_s */

typedef struct NuCutSceneCharacterCreateData NuCutSceneCharacterCreateData, *PNuCutSceneCharacterCreateData;

struct NuCutSceneCharacterCreateData {
    struct NUGCUTCHAR_s *field0_0x0;
    struct instNUGCUTCHAR_s *field1_0x4;
    union variptr_u *field2_0x8;
};

typedef struct NUCYLINDERS_s NUCYLINDERS_s, *PNUCYLINDERS_s;

struct NUCYLINDERS_s {
    struct nuvec_s centre;
    struct nuvec_s y_axis;
    struct nuvec4_s x_axis;
    struct nuvec4_s z_axis;
    char pad[8];
};

typedef struct nudatfile_s nudatfile_s, *Pnudatfile_s;


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/nudathdr_s - /astructs.h/nudathdr_s */

struct nudatfile_s {
    struct nudathdr_s *ndh;
    int start;
    int len;
    int fix;
    int used;
};


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/NUELLIPSOID_s - /amod_struct.h/NUELLIPSOID_s */


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/nufaceon_s - /amod_struct.h/nufaceon_s */


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/nufaceongeom_s - /amod_struct.h/nufaceongeom_s */

typedef struct nufaceonitem_s nufaceonitem_s, *Pnufaceonitem_s;

typedef struct nurndritem_s nurndritem_s, *Pnurndritem_s;

typedef struct nusysmtl_s nusysmtl_s, *Pnusysmtl_s;

typedef enum nurndritemtype_s {
    NURNDRITEM_GEOM3D=0,
    NURNDRITEM_GEOM2D=1,
    NURNDRITEM_SKIN3D2=2,
    NURNDRITEM_GEOMFACE=3
} nurndritemtype_s;


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/numtl_s - /amod_struct.h/numtl_s */

typedef struct nugeomitem_s nugeomitem_s, *Pnugeomitem_s;

struct nurndritem_s {
    struct nurndritem_s *next;
    enum nurndritemtype_s type;
    int flags;
    short lights_index;
};

struct nugeomitem_s {
    struct nurndritem_s hdr;
    struct numtx_s *mtx;
    struct nugeom_s *geom;
    float **blendvals;
    short instancelights_index[3];
    short hShader;
};

struct nufaceonitem_s {
    struct nufaceonitem_s *next;
    struct nurndritem_s *hdr;
    struct nusysmtl_s *mtl;
};

struct nusysmtl_s {
    struct numtl_s mtl;
    struct nurndritem_s *rndrlist;
    struct nugeomitem_s *geom2d;
    struct nugeomitem_s *geom3d;
    struct nusysmtl_s *next;
    struct nusysmtl_s *last;
    int hShader;
};


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/nufpar_s - /astructs.h/nufpar_s */


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/nufpcomjmp_s - /astructs.h/nufpcomjmp_s */


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/nufspecial_s - /amod_struct.h/nufspecial_s */

typedef struct NUGCUTLOCFNDATA_s NUGCUTLOCFNDATA_s, *PNUGCUTLOCFNDATA_s;

struct NUGCUTLOCFNDATA_s {
    char *name;
    struct locdataFN *void_fn;
};

typedef struct NUGCUTSCENE_s **NUGCUTSCENE;


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/nugeom_s - /amod_struct.h/nugeom_s */


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/nugobj_s - /amod_struct.h/nugobj_s */

typedef struct nugscn_s_PS2 nugscn_s_PS2, *Pnugscn_s_PS2;

struct nugscn_s_PS2 {
    int *tids;
    int numtid;
    struct numtl_WoC **mtls;
    int nummtl;
    int numgobj;
    struct nugobj_s **gobjs;
    int numinstance;
    struct nuinstance_s *instances;
    int numspecial;
    struct nuspecial_s *specials;
    void *splinedata;
    int numsplines;
    struct nugspline_s *splines;
    char *nametable;
    int numexspecials;
    struct nuspecial_s *exspecials;
    int exallocix;
    struct nuinstanim_s *instanimblock;
    struct nuanimdata__ **instanimdata;
    int numinstanceixs;
    short *instanceixs;
    short crossfade;
    short crossfaderate;
    int crossfadegobj;
    short *texanim_tids;
    int numtexanims;
    struct nutexanim_s *texanims;
    short *instancelightix;
};


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/NUHINSTANCE_s - /haven_demo.h/NUHINSTANCE_s */


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/NUJOINTDATA_s - /amod_struct.h/NUJOINTDATA_s */


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/NULAYERDATA_s - /amod_struct.h/NULAYERDATA_s */


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/nulight_s - /haven_demo.h/nulight_s */

typedef struct nulights_s nulights_s, *Pnulights_s;

struct nulights_s {
    struct nulight_s light[3];
};


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/numtlattrib_s - /amod_struct.h/numtlattrib_s */


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/NUNODE_s - /amod_struct.h/NUNODE_s */


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/nunrand_s - /haven_demo.h/nunrand_s */


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/nuotitem_s - /astructs.h/nuotitem_s */


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/nupad_s - /haven_demo.h/nupad_s */


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/NUPOINTOFINTEREST_s - /amod_struct.h/NUPOINTOFINTEREST_s */


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/nuprim_s - /amod_struct.h/nuprim_s */


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/nuprimtype_e - /amod_struct.h/nuprimtype_e */


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/nureflect_s - /haven_demo.h/nureflect_s */

typedef struct NuScene_old NuScene_old, *PNuScene_old;

struct NuScene_old {
    char __padding_0[4];
    char __padding_4[4];
    uint unsnum_8;
    char __padding_C[4];
    int word_10;
    struct nugobj_s **gobj_ptr;
    int word_18;
    int word_1C;
    int word_20;
    int word_24;
    int word_28;
    int word_2C;
    int word_30;
    int word_34;
    struct NuScene_old *nextmaybe;
    char __padding_3C[8];
    char __padding_44[4];
    struct nuanimdata_ **AnimData;
    int numAnim;
    char __padding_50[20];
    int word_64;
    int word_68;
    int word_6C;
    char __padding_70[16];
};


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/nuscene_s - /amod_struct.h/nuscene_s */


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/NUSHADOWMESH_s - /amod_struct.h/NUSHADOWMESH_s */


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/nuskin_s - /amod_struct.h/nuskin_s */

typedef struct nusound_filename_info_s nusound_filename_info_s, *Pnusound_filename_info_s;

struct nusound_filename_info_s {
    char Filename[32];
    int Pitch;
    int LoopInfo;
    int Type;
    int ID;
};


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/nuspecial_s - /amod_struct.h/nuspecial_s */


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/nuspline_s - /amod_struct.h/nuspline_s */

typedef enum nustencilmode_e {
    NUSTENCIL_NOSTENCIL=0,
    NUSTENCIL_REPLACE_NODRAW=1
} nustencilmode_e;

typedef struct nustenitem_s nustenitem_s, *Pnustenitem_s;

struct nustenitem_s {
    struct nustenitem_s *next;
    struct nurndritem_s *hdr;
    struct nusysmtl_s *mtl;
    int type;
};

typedef struct nusyslight_s nusyslight_s, *Pnusyslight_s;

struct nusyslight_s {
    struct nulight_s light;
    int index;
    int next;
    int last;
};

typedef struct nusystex_s nusystex_s, *Pnusystex_s;

struct nusystex_s {
    struct nutex_s tex;
    struct D3DTexture *dds;
    int ref;
    int rtid;
};


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/nutexanim_s - /amod_struct.h/nutexanim_s */


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/nutexanimenv_s - /amod_struct.h/nutexanimenv_s */


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/nutexanimf_s - /astructs.h/nutexanimf_s */

typedef struct nutexanimlist_s nutexanimlist_s, *Pnutexanimlist_s;

struct nutexanimlist_s {
    struct nutexanim_s *nta;
    struct nutexanimlist_s *succ;
    struct nutexanimlist_s *prev;
};


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/nutexanimprog_s - /amod_struct.h/nutexanimprog_s */

typedef struct NuTexData_OLD NuTexData_OLD, *PNuTexData_OLD;

typedef uint uint32_t;

typedef ushort uint16_t;

struct NuTexData_OLD {
    uint format;
    uint32_t width;
    uint32_t height;
    uint32_t mode;
    uint pixel_data;
    uint palette;
    uint16_t decal;
    short unk_1;
};


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/nutextype_e - /astructs.h/nutextype_e */


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/NUTRIGGERSYS_s - /haven_demo.h/NUTRIGGERSYS_s */


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/nuviewport_s - /haven_demo.h/nuviewport_s */

typedef struct nuvtx_lc1_s nuvtx_lc1_s, *Pnuvtx_lc1_s;

struct nuvtx_lc1_s {
    struct nuvec_s pnt;
    int diffuse;
    float tc[2];
};

typedef struct nuvtx_ps_s nuvtx_ps_s, *Pnuvtx_ps_s;

struct nuvtx_ps_s {
    struct nuvec_s pnt;
    int diffuse;
};

typedef struct nuvtx_sk3tc1_s nuvtx_sk3tc1_s, *Pnuvtx_sk3tc1_s;

struct nuvtx_sk3tc1_s {
    struct nuvec_s pnt;
    float weights[2];
    float indexes[3];
    struct nuvec_s nrm;
    int diffuse;
    float tc[2];
};


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/nuvtx_tc1_s - /amod_struct.h/nuvtx_tc1_s */


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/nuvtx_tltc1_s - /astructs.h/nuvtx_tltc1_s */

typedef struct nuvtx_ts_s nuvtx_ts_s, *Pnuvtx_ts_s;

struct nuvtx_ts_s {
    struct nuvec_s vTangent;
    struct nuvec_s vNormal;
};


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/nuvtxtype_e - /amod_struct.h/nuvtxtype_e */

typedef struct nuwateritem_s nuwateritem_s, *Pnuwateritem_s;

struct nuwateritem_s {
    struct nuwateritem_s *next;
    struct nurndritem_s *hdr;
    struct nusysmtl_s *mtl;
};

typedef struct object_path_s object_path_s, *Pobject_path_s;

struct object_path_s {
    int objid;
    float speed;
    int oscillate;
    int repeat;
    float pause;
    float usedway;
    float usedtime;
    float usedpart;
    float usedsound;
    float start_offset;
    float terrplatid;
    struct nuvec_s waypoint[8];
    float waypoint_speed[8];
    struct nuvec_s waypoint_rot[8];
    int waypoint_time[8];
    int trigger_type;
    int trigger_id;
    float trigger_var;
    float trigger_wait;
    char particle_name[16][8];
    int particle_type[8];
    int particle_rate[8];
    int particle_switch[8];
    struct nuvec_s particle_offset[8];
    short particle_emitrotz[8];
    short particle_emitroty[8];
    float sound_last_time;
    char sound_name[16][8];
    int sound_id[8];
    int sound_type[8];
    float sound_time[8];
    struct nuvec_s sound_offset[8];
    float playergrav;
    float tension;
    float damping;
};

typedef struct ObjTab ObjTab, *PObjTab;

struct ObjTab {
    struct nuhspecial_s obj;
    struct nugscn_s_PS2 **scene;
    char visible;
    char font3d_letter;
    char pad1;
    char pad2;
    char *name;
    char unk[4];
    ulonglong levbits;
};

typedef struct offlist offlist, *Pofflist;

typedef struct TERRAINFLAGS_s TERRAINFLAGS_s, *PTERRAINFLAGS_s;

struct TERRAINFLAGS_s {
    uint rot;
};

struct offlist {
    int offset;
    struct nuvec_s translation;
    short type;
    short info;
    short rx;
    short ry;
    short rz;
    short pad;
    struct nuvec_s rotation;
    struct TERRAINFLAGS_s flags;
    short prim;
    short id;
    int datapos;
};

typedef struct OppTub OppTub, *POppTub;

struct OppTub {
    struct creature_s *c;
    char track;
    char count;
    uchar wait;
    char laps;
    float time;
    float duration;
    float lap_position;
    char place;
    uchar finished;
    uchar finishframes;
    uchar stall;
    ushort old_xrot;
    ushort old_yrot;
    ushort old_zrot;
    uchar boost;
    char spark;
};

typedef int OSHeapHandle;

typedef struct PadRecData PadRecData, *PPadRecData;

struct PadRecData {
    uchar ok;
    uchar read_id;
    uchar buttons_hi;
    uchar buttons_lo;
    uchar r_alg_x;
    uchar r_alg_y;
    uchar l_alg_x;
    uchar l_alg_y;
    uchar l_algpad_r;
    uchar l_algpad_l;
    uchar l_algpad_u;
    uchar l_algpad_d;
    uchar r_algpad_u;
    uchar r_algpad_r;
    uchar r_algpad_d;
    uchar r_algpad_l;
    uchar l1_alg;
    uchar r1_alg;
    uchar l2_alg;
    uchar r2_alg;
};

typedef struct PadRecInfo PadRecInfo, *PPadRecInfo;

struct PadRecInfo {
    int padpointer;
    int padmode;
    int padend;
    int padsize;
    struct PadRecData recdata[48000];
};

typedef struct PADStatus PADStatus, *PPADStatus;

struct PADStatus {
    uint button;
    short stickX;
    short stickY;
    short substickX;
    short substickY;
    uint triggerLeft;
    uint triggerRight;
    uint analogA;
    uint analogB;
    short err;
};

typedef struct ParticleChunkRenderStack ParticleChunkRenderStack, *PParticleChunkRenderStack;

struct ParticleChunkRenderStack {
    struct uv1deb_s *chunk;
    struct debtab *debinfo;
    struct debkeydatatype_s *debdata;
    struct numtx_s rotmtx;
    float x;
    float y;
    float z;
};

typedef struct BridgeType *Pbridge;

typedef struct pCutAnim_s pCutAnim_s, *PpCutAnim_s;

struct pCutAnim_s {
    short character;
    short action;
    short sfx;
    char i;
    char pad1;
};

typedef struct PData PData, *PPData;

struct PData {
    uchar character;
    uchar font3d_letter;
    char pad1;
    char pad2;
    char *name;
    int *description;
};

typedef struct PDeb PDeb, *PPDeb;

typedef struct PDebInfo PDebInfo, *PPDebInfo;

struct PDeb {
    struct PDebInfo *info;
    struct nuvec_s oldpos;
    struct nuvec_s pos;
    struct nuvec_s mom;
    float time;
    float oldscale;
    float scale;
    ushort locators;
    ushort xrot;
    ushort yrot;
    ushort zrot;
    char type;
    char active;
    char pad1;
    char pad2;
};

struct PDebInfo {
    int i_objtab;
    float duration;
    float gravity;
};

typedef struct PLANESTRUCT PLANESTRUCT, *PPLANESTRUCT;

struct PLANESTRUCT {
    struct nuvec_s Pos;
    struct nuvec_s Vel;
    float ActionTimer;
    int ActionStatus;
    int Active;
    struct MYDRAW MainDraw;
};

typedef struct platattrib platattrib, *Pplatattrib;

struct platattrib {
    uint hit:1;
    uint rotate:1;
};

typedef struct platdata platdata, *Pplatdata;

struct platdata {
    struct numtx_s oldmtx;
    struct numtx_s *curmtx;
    short terrno;
    short instance;
    struct platattrib status;
    short hitcnt;
    short pad;
    float plrgrav;
    float ypos;
    float yvel;
    float tension;
    float damp;
};

typedef struct plr_bonus_wumpas plr_bonus_wumpas, *Pplr_bonus_wumpas;

struct plr_bonus_wumpas {
    short count;
    short draw;
    char frame;
    char wait;
    uchar delay;
    uchar item;
};

typedef struct plr_item plr_item, *Pplr_item;

struct plr_item {
    short count;
    short draw;
    char frame;
    char wait;
    uchar delay;
    uchar item;
};

typedef struct PlrEvent PlrEvent, *PPlrEvent;

struct PlrEvent {
    struct nugspline_s *spl;
    struct nuhspecial_s obj[16];
    struct nuvec_s pos;
    char played;
    char iRAIL;
    short iALONG;
    float fALONG;
};


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/Pnuanimdata_s - /amod_struct.h/Pnuanimdata_s */

typedef struct pollist pollist, *Ppollist;

struct pollist {
    float x;
    float y;
    float z;
    float x2;
    float y2;
    float z2;
    short timer;
    short pad;
    struct hitdata *hitDat[512];
};

typedef struct Poly Poly, *PPoly;

struct Poly {
    float minx;
    float maxx;
    float miny;
    float maxy;
    float minz;
    float maxz;
    struct nuvec_s pnts[4];
    struct nuvec_s norm[2];
    uchar info[4];
};

typedef union Lst *PprevLst;

typedef struct primdef_PS2_s primdef_PS2_s, *Pprimdef_PS2_s;

typedef struct primdef_PS2_s *Pprimdef_s;

struct primdef_PS2_s {
    struct nuvtx_tc1_s vrts[3];
    int vid[3];
    float weights[15][3];
    int mtxid[15];
    int nummtx;
    int sorted;
    int baseid;
    char field7_0x174;
    char field8_0x175;
    char field9_0x176;
    char field10_0x177;
    char field11_0x178;
    char field12_0x179;
    char field13_0x17a;
    char field14_0x17b;
    char field15_0x17c;
    char field16_0x17d;
    char field17_0x17e;
    char field18_0x17f;
    char field19_0x180;
    char field20_0x181;
    char field21_0x182;
    char field22_0x183;
    char field23_0x184;
    char field24_0x185;
    char field25_0x186;
    char field26_0x187;
    char field27_0x188;
    char field28_0x189;
    char field29_0x18a;
    char field30_0x18b;
};

typedef struct Projectile Projectile, *PProjectile;

struct Projectile {
    struct obj_s obj;
    struct nuvec_s srcpos;
    struct nuvec_s dstpos;
    float time;
    float duration;
    char type;
    char active;
    short i_objtab;
    char kill;
    uchar owner_safety;
    char pad1;
    char pad2;
};

typedef struct pVTog pVTog, *PpVTog;

struct pVTog {
    struct nugspline_s *pTRIGGER;
    struct nugspline_s *pCAM;
    struct nugspline_s *pLOOK;
    struct numtx_s m;
    struct nuvec_s pos;
    struct anim_s anim;
    char type;
    char iRAIL;
    short iALONG;
    float fALONG;
    ushort xrot;
    ushort yrot;
    ushort zrot;
    char pad1;
    char pad2;
};

typedef struct Rail Rail, *PRail;

struct Rail {
    struct nugspline_s *pINPLAT;
    struct nugspline_s *pINCAM;
    struct nugspline_s *pLEFT;
    struct nugspline_s *pCAM;
    struct nugspline_s *pRIGHT;
    struct nugspline_s *pOUTCAM;
    struct nugspline_s *pOUTPLAT;
    float in_distance;
    float out_distance;
    short edges;
    char type;
    char circuit;
};

typedef struct rendertargetlist_s rendertargetlist_s, *Prendertargetlist_s;

struct rendertargetlist_s {
    int next;
    int last;
    uint width;
    uint height;
    struct D3DSurface *pddsRenderTarget;
    struct D3DSurface *pddsZBuffer;
    struct D3DSurface *pddsStencilBuffer;
};

typedef struct scegiftag scegiftag, *Pscegiftag;

struct scegiftag {
    longlong NREG:4;
    longlong FLG:2;
    longlong PRIM:11;
    longlong PRE:1;
    longlong id:14;
    longlong pad16:16;
    longlong EOP:1;
    longlong NLOOP:15;
    longlong REGS15:4;
    longlong REGS14:4;
    longlong REGS13:4;
    longlong REGS12:4;
    longlong REGS11:4;
    longlong REGS10:4;
    longlong REGS9:4;
    longlong REGS8:4;
    longlong REGS7:4;
    longlong REGS6:4;
    longlong REGS5:4;
    longlong REGS4:4;
    longlong REGS3:4;
    longlong REGS2:4;
    longlong REGS1:4;
    longlong REGS0:4;
};

typedef struct scene_inst_s scene_inst_s, *Pscene_inst_s;

struct scene_inst_s {
    char *name;
    struct nugscn_s_PS2 *scene;
};

typedef struct sceneinst_s sceneinst_s, *Psceneinst_s;

struct sceneinst_s {
    struct nuscene_s *nus;
    char name[256];
    int inst_cnt;
};

typedef struct sceneptr sceneptr, *Psceneptr;

struct sceneptr {
    int count;
    struct offlist offlist[512];
};

typedef struct PartHeader *Psetup_s;

typedef struct ShadPolDat ShadPolDat, *PShadPolDat;

struct ShadPolDat {
    struct nuvec_s pos;
    float size;
    short shade;
    short xrot;
    short yrot;
    short zrot;
};

typedef struct sp_entry sp_entry, *Psp_entry;

struct sp_entry {
    uint type;
    uint sampleRate;
    uint loopAddr;
    uint loopEndAddr;
    uint endAddr;
    uint currentAddr;
    struct adpcm *adpcm;
};

typedef struct space space, *Pspace;

struct space {
    int character;
    char unk[4];
    struct AnimList animlist[5];
};

typedef struct SphereData SphereData, *PSphereData;

struct SphereData {
    struct nuvec_s pos;
    float radius;
};

typedef struct SplTab SplTab, *PSplTab;

struct SplTab {
    struct nugspline_s *spl;
    char *name;
    short min;
    short max;
    char unk[4];
    ulonglong levbits;
};

typedef struct SS_Voices SS_Voices, *PSS_Voices;

struct SS_Voices {
    struct _AXVPB *ax_voice;
    struct adpcm *sp_entry;
    int sfxid;
};

typedef struct tagBITMAPFILEHEADER tagBITMAPFILEHEADER, *PtagBITMAPFILEHEADER;

struct tagBITMAPFILEHEADER {
    ushort pad;
    ushort bfType;
    uint bfSize;
    ushort bfReserved1;
    ushort bfReserved2;
    uint bfOffBits;
};

typedef struct tagBITMAPINFOHEADER tagBITMAPINFOHEADER, *PtagBITMAPINFOHEADER;

struct tagBITMAPINFOHEADER {
    uint biSize;
    uint biWidth;
    uint biHeight;
    ushort biPlanes;
    ushort biBitCount;
    uint biCompression;
    uint biSizeImage;
    uint biXPelsPerMeter;
    uint biYPelsPerMeter;
    uint biClrUsed;
    uint biClrImportant;
};

typedef struct tagRECT tagRECT, *PtagRECT;

struct tagRECT {
    int left;
    int top;
    int right;
    int bottom;
};

typedef struct TempTerr TempTerr, *PTempTerr;

typedef struct terr terr, *Pterr;

typedef struct TrackInfo TrackInfo, *PTrackInfo;

typedef struct terrgroup terrgroup, *Pterrgroup;

typedef enum terr_type {
    TERR_TYPE_NORMAL=0,
    TERR_TYPE_PLATFORM=1,
    TERR_TYPE_WALLSPL=2,
    TERR_TYPE_CRASHDATA=3,
    TERR_TYPE_EMPTY=255
} terr_type;

struct terr {
    struct nuvec_s Location;
    short *model;
    struct nuvec_s min;
    struct nuvec_s max;
    struct TERRAINFLAGS_s flags;
    enum terr_type type;
    short info;
    short id;
    float radius;
};

struct terrgroup {
    short tabindex;
    short count;
    float minx;
    float minz;
    float maxx;
    float maxz;
};

struct TrackInfo {
    void *ptrid;
    short platid;
    short platinf;
    short timer;
    short pad;
};

struct TempTerr {
    struct terr *terr;
    struct platdata platdat[128];
    void *wallinfo;
    struct TrackInfo Trackinfo[4];
    struct terrgroup group[257];
    int terrainlow;
    int terrgcnt;
    short terrlist[4096];
    struct pollist polllist[9];
};

typedef struct TerrI TerrI, *PTerrI;

struct TerrI {
    struct nuvec_s origpos;
    struct nuvec_s origvel;
    struct nuvec_s curpos;
    struct nuvec_s curvel;
    short id;
    short scanmode;
    float stopflag;
    float vellen;
    uchar *flags;
    float ax;
    float ay;
    float len;
    float size;
    float sizesq;
    float sizediv;
    float yscale;
    float yscalesq;
    float inyscale;
    float inyscalesq;
    short hitcnt;
    short hitterrno;
    float csx;
    float csy;
    float csz;
    float cex;
    float cey;
    float cez;
    short hittype;
    short plathit;
    short *platScanStart;
    struct hitdata *hitter;
    float hittime;
    float timeadj;
    float impactadj;
    struct nuvec_s hitnorm;
    struct nuvec_s uhitnorm;
    struct nuvec_s tempvec[2];
    struct hitdata rotter;
    struct hitdata *hitdat[512];
};

typedef struct TerrShape TerrShape, *PTerrShape;

struct TerrShape {
    struct nuvec_s offset;
    float ang;
    float size;
};

typedef struct TerSurface TerSurface, *PTerSurface;

struct TerSurface {
    float friction;
    short gdeb;
    ushort flags;
};

typedef struct Text3DOBJ Text3DOBJ, *PText3DOBJ;

struct Text3DOBJ {
    short i;
    uchar flags;
    char action;
    float anim_time;
    float scale;
};

typedef struct trail trail, *Ptrail;

struct trail {
    struct nuvec_s pos1;
    struct nuvec_s pos2;
    int intensity;
    int RealIntensity;
};

typedef struct txanimscripts txanimscripts, *Ptxanimscripts;

struct txanimscripts {
    char *path;
    int pad1;
    ulonglong levbits;
};


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/Pvariptr_u - /amod_struct.h/Pvariptr_u */

typedef struct VEHMASK VEHMASK, *PVEHMASK;

struct VEHMASK {
    int Active;
    int id;
    int KillAtEnd;
    struct nuvec_s Position;
    struct MYDRAW MainDraw;
    float DrawAngY;
    int Action;
    int LastAction;
    int EffectType;
    float Tween;
    float TweenInc;
    float Ang;
    struct nuvec_s Store[2];
    struct nuvec_s *Point[2];
    struct nuvec_s Offset[2];
    float AngInc[2];
    float Rad[2];
    float Scale[2];
    float TiltX[2];
    float DrawScale;
    int Seen;
};

typedef struct Vert_s8 Vert_s8, *PVert_s8;

struct Vert_s8 {
    char field0_0x0[18];
};

typedef struct visidat_s visidat_s, *Pvisidat_s;

struct visidat_s {
    struct nugspline_s *sp;
    int numinstances;
    struct nuinstance_s *i[1];
};

typedef struct visidata_s visidata_s, *Pvisidata_s;

struct visidata_s {
    struct nugscn_s_PS2 *sc;
    void ***vspline;
    int binfosize;
    int curspline;
    int curknot;
};

typedef struct WallSpl WallSpl, *PWallSpl;

struct WallSpl {
    ushort count;
    ushort val;
    struct nuvec_s spl[4096];
};

typedef struct WaterDat WaterDat, *PWaterDat;

struct WaterDat {
    struct nuvec_s pos;
    float size;
    float endsize;
    float cursize;
    uint shade;
    uint curshade;
    short timer;
    short otimer;
};

typedef struct WBBOLT WBBOLT, *PWBBOLT;

struct WBBOLT {
    int Mode;
    int Owner;
    struct nuvec_s Position;
    struct nuvec_s Velocity;
    float Life;
    int Type;
    float SeekSpeed;
    float Scale;
};

typedef struct WindGroup WindGroup, *PWindGroup;

struct WindGroup {
    struct nuinstance_s *instance;
    struct numtx_s *mtx;
    struct nuvec_s center;
    char onscreen;
    char inrange;
    short objcount;
    int collide;
    float wind;
    float height;
    float radius;
};

typedef struct WInfo WInfo, *PWInfo;

struct WInfo {
    struct numtx_s m;
    float scale;
    float dy;
    ushort angle;
    ushort spin;
    char pad1;
    char pad2;
    char pad3;
    char pad4;
};

typedef struct WScr WScr, *PWScr;

struct WScr {
    struct nuvec_s pos;
    float timer;
    float xs;
    float ys;
    float scale;
    char bonus;
    char pad1;
    char pad2;
    char pad3;
};

typedef struct Wumpa Wumpa, *PWumpa;

struct Wumpa {
    struct nuvec_s pos0;
    struct nuvec_s pos1;
    struct nuvec_s pos;
    struct nuvec_s mom;
    float shadow;
    ushort surface_xrot;
    ushort surface_zrot;
    float time;
    float duration;
    char active;
    char iRAIL;
    short iALONG;
    float fALONG;
    char destroy;
    char fired;
    char in_range;
    char surface_type;
};

typedef struct ZOFFASTART ZOFFASTART, *PZOFFASTART;

struct ZOFFASTART {
    float x;
    float y;
    float z;
    float angle;
};


/* WARNING! conflicting data type names: /SLUS_202.38 v1.00.h/qword - /haven_demo.h/qword */

typedef enum shadertypes_e {
    NO_SHADER=0,
    WATER=1,
    HEATHAZE=2,
    GLASS=3,
    WATERCAUSTICS=4,
    SNOWCLOUD=5,
    DEPTHBLEND=6,
    SPECULAR=7,
    LIGHTHAZE=8,
    PROJTEX=9,
    BRDFGOLD=10,
    LIGHTS=11,
    VOLUMESHADOW=12,
    VOLUMESHADOW_BLENDSKIN=13,
    VOLUMESHADOW_BLENDSKIN2=14,
    BLENDSKIN=15,
    BLENDSKIN2=16,
    BLENDSKINGLASS=17,
    BLENDSKINGLASS2=18,
    BLENDSKINFUR=19,
    BLENDSKINFUR2=20,
    BUMPMAP=21,
    BUMPMAPPOINTLIGHT=22,
    ENVIRONMAP=23,
    POINTLIGHT=24,
    BLENDSKINPOINTLIGHT=25,
    BLENDSKIN2POINTLIGHT=26,
    DYNAMICWATER=27,
    CALCNEIGHBOURFORCE=28,
    CALCNEIGHBOURFORCE2=29,
    APPLYFORCEORVELOCITY=30,
    BLURFILTER=31,
    CREATENORMALMAP=32,
    XRAYGLASS=33,
    DUMMY=34,
    NUM_SHADER_TYPES=35,
    RESET_SHADER=255
} shadertypes_e;

typedef __ssize_t ssize_t;

typedef ulonglong uint64_t;

typedef uchar uint_fast8_t;

typedef ulonglong undefined5;

typedef ulonglong undefined7;

typedef struct VTog VTog, *PVTog;

struct VTog {
    struct nugspline_s *pTRIGGER;
    struct nugspline_s *pCAM;
    struct nugspline_s *pLOOK;
    struct numtx_s m;
    struct nuvec_s pos;
    struct anim_s anim;
    char type;
    char iRAIL;
    short iALONG;
    float fALONG;
    ushort xrot;
    ushort yrot;
    ushort zrot;
    char pad1;
    char pad2;
};

typedef ushort wchar16;

typedef struct stat stat, *Pstat;

typedef ulonglong __u_quad_t;

typedef __u_quad_t __dev_t;

typedef ulong __ino_t;

typedef uint __mode_t;

typedef uint __nlink_t;

typedef uint __uid_t;

typedef uint __gid_t;

typedef long __blksize_t;

typedef long __blkcnt_t;

typedef struct timespec timespec, *Ptimespec;

typedef long __time_t;

struct timespec {
    __time_t tv_sec;
    long tv_nsec;
};

struct stat {
    __dev_t st_dev;
    ushort __pad1;
    __ino_t st_ino;
    __mode_t st_mode;
    __nlink_t st_nlink;
    __uid_t st_uid;
    __gid_t st_gid;
    __dev_t st_rdev;
    ushort __pad2;
    __off_t st_size;
    __blksize_t st_blksize;
    __blkcnt_t st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    ulong __unused4;
    ulong __unused5;
};


/* WARNING! conflicting data type names: /stddef.h/size_t - /haven_demo.h/size_t */

typedef int __pid_t;


/* WARNING! conflicting data type names: /__dmath - /haven_demo.h/__dmath */

typedef union __dmath.conflict __dmath.conflict, *P__dmath.conflict;

union __dmath.conflict {
    uint i[2];
    long d;
};

typedef union __dmath.conflict1 __dmath.conflict1, *P__dmath.conflict1;

union __dmath.conflict1 {
    uint i[2];
    long d;
};

typedef union __dmath.conflict2 __dmath.conflict2, *P__dmath.conflict2;

typedef long double.conflict;

union __dmath.conflict2 {
    unsigned int i[2];
    double.conflict d;
};

typedef union __ieee_double_shape_type __ieee_double_shape_type, *P__ieee_double_shape_type;

typedef struct __ieee_double_shape_type__number __ieee_double_shape_type__number, *P__ieee_double_shape_type__number;

typedef struct __ieee_double_shape_type__nan __ieee_double_shape_type__nan, *P__ieee_double_shape_type__nan;

typedef struct __ieee_double_shape_type__parts __ieee_double_shape_type__parts, *P__ieee_double_shape_type__parts;

struct __ieee_double_shape_type__nan {
    uint function1;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
};

struct __ieee_double_shape_type__parts {
    ulong lsw;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    ulong msw;
    undefined field6_0xc;
    undefined field7_0xd;
    undefined field8_0xe;
    undefined field9_0xf;
};

struct __ieee_double_shape_type__number {
    uint fraction1;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
};

union __ieee_double_shape_type {
    long value;
    struct __ieee_double_shape_type__number number;
    struct __ieee_double_shape_type__nan nan;
    struct __ieee_double_shape_type__parts parts;
    long aslong[2];
};

typedef union __ieee_double_shape_type.conflict __ieee_double_shape_type.conflict, *P__ieee_double_shape_type.conflict;

union __ieee_double_shape_type.conflict {
    long value;
    struct __ieee_double_shape_type__number number;
    struct __ieee_double_shape_type__nan nan;
    struct __ieee_double_shape_type__parts parts;
    long aslong[2];
};

typedef union __ieee_double_shape_type.conflict1 __ieee_double_shape_type.conflict1, *P__ieee_double_shape_type.conflict1;

union __ieee_double_shape_type.conflict1 {
    long value;
    struct __ieee_double_shape_type__number number;
    struct __ieee_double_shape_type__nan nan;
    struct __ieee_double_shape_type__parts parts;
    long aslong[2];
};

typedef union __ieee_double_shape_type.conflict2 __ieee_double_shape_type.conflict2, *P__ieee_double_shape_type.conflict2;

typedef struct __ieee_double_shape_type__number.conflict __ieee_double_shape_type__number.conflict, *P__ieee_double_shape_type__number.conflict;

typedef struct __ieee_double_shape_type__nan.conflict __ieee_double_shape_type__nan.conflict, *P__ieee_double_shape_type__nan.conflict;

typedef struct __ieee_double_shape_type__parts.conflict __ieee_double_shape_type__parts.conflict, *P__ieee_double_shape_type__parts.conflict;

typedef long long int;

struct __ieee_double_shape_type__number.conflict {
    unsigned int fraction1;
    unsigned int fraction0:20;
    unsigned int exponent:11;
    unsigned int sign:1;
};

struct __ieee_double_shape_type__parts.conflict {
    long unsigned int lsw;
    long unsigned int msw;
};

struct __ieee_double_shape_type__nan.conflict {
    unsigned int function1;
    unsigned int function0:19;
    unsigned int quiet:1;
    unsigned int exponent:11;
    unsigned int sign:1;
};

union __ieee_double_shape_type.conflict2 {
    double.conflict value;
    struct __ieee_double_shape_type__number.conflict number;
    struct __ieee_double_shape_type__nan.conflict nan;
    struct __ieee_double_shape_type__parts.conflict parts;
    long int aslong[2];
};

typedef union __ieee_float_shape_type __ieee_float_shape_type, *P__ieee_float_shape_type;

typedef struct __ieee_float_shape_type__number __ieee_float_shape_type__number, *P__ieee_float_shape_type__number;

typedef struct __ieee_float_shape_type__nan __ieee_float_shape_type__nan, *P__ieee_float_shape_type__nan;

struct __ieee_float_shape_type__nan {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

struct __ieee_float_shape_type__number {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
};

union __ieee_float_shape_type {
    float value;
    struct __ieee_float_shape_type__number number;
    struct __ieee_float_shape_type__nan nan;
    long p1;
};

typedef union __ieee_float_shape_type.conflict __ieee_float_shape_type.conflict, *P__ieee_float_shape_type.conflict;

union __ieee_float_shape_type.conflict {
    float value;
    struct __ieee_float_shape_type__number number;
    struct __ieee_float_shape_type__nan nan;
    long p1;
};

typedef union __ieee_float_shape_type.conflict1 __ieee_float_shape_type.conflict1, *P__ieee_float_shape_type.conflict1;

union __ieee_float_shape_type.conflict1 {
    float value;
    struct __ieee_float_shape_type__number number;
    struct __ieee_float_shape_type__nan nan;
    long p1;
};

typedef union __ieee_float_shape_type.conflict2 __ieee_float_shape_type.conflict2, *P__ieee_float_shape_type.conflict2;

typedef struct __ieee_float_shape_type__number.conflict __ieee_float_shape_type__number.conflict, *P__ieee_float_shape_type__number.conflict;

typedef struct __ieee_float_shape_type__nan.conflict __ieee_float_shape_type__nan.conflict, *P__ieee_float_shape_type__nan.conflict;

struct __ieee_float_shape_type__number.conflict {
    unsigned int fraction0:7;
    unsigned int fraction1:16;
    unsigned int exponent:8;
    unsigned int sign:1;
};

struct __ieee_float_shape_type__nan.conflict {
    unsigned int function1:16;
    unsigned int function0:6;
    unsigned int quiet:1;
    unsigned int exponent:8;
    unsigned int sign:1;
};

union __ieee_float_shape_type.conflict2 {
    float value;
    struct __ieee_float_shape_type__number.conflict number;
    struct __ieee_float_shape_type__nan.conflict nan;
    long int p1;
};


/* WARNING! conflicting data type names: /__sbuf - /haven_demo.h/__sbuf */

typedef struct __sbuf.conflict __sbuf.conflict, *P__sbuf.conflict;

struct __sbuf.conflict {
    uchar *_base;
    int _size;
};

typedef struct __sbuf.conflict1 __sbuf.conflict1, *P__sbuf.conflict1;

struct __sbuf.conflict1 {
    uchar *_base;
    int _size;
};

typedef struct __sbuf.conflict2 __sbuf.conflict2, *P__sbuf.conflict2;

struct __sbuf.conflict2 {
    unsigned char *_base;
    int _size;
};


/* WARNING! conflicting data type names: /__sFILE - /haven_demo.h/__sFILE */

typedef struct __sFILE.conflict __sFILE.conflict, *P__sFILE.conflict;

typedef struct _reent.conflict _reent.conflict, *P_reent.conflict;

typedef struct _Bigint.conflict _Bigint.conflict, *P_Bigint.conflict;


/* WARNING! conflicting data type names: /_Bigint - /haven_demo.h/_Bigint */

typedef union _reent___new.conflict _reent___new.conflict, *P_reent___new.conflict;

typedef struct _atexit.conflict _atexit.conflict, *P_atexit.conflict;

typedef struct _glue.conflict _glue.conflict, *P_glue.conflict;

typedef struct _reent___new___reent.conflict _reent___new___reent.conflict, *P_reent___new___reent.conflict;

typedef struct _reent___new___unused _reent___new___unused, *P_reent___new___unused;

typedef struct tm.conflict tm.conflict, *Ptm.conflict;

struct _glue.conflict {
    struct _glue.conflict *_next;
    int _niobs;
    struct __sFILE.conflict *_iobs;
};

struct __sFILE.conflict {
    uchar *_p;
    int _r;
    int _w;
    ushort _flags;
    ushort _file;
    struct __sbuf.conflict _bf;
    int _lbfsize;
    void *_cookie;
    undefined1 *_read;
    undefined1 *_write;
    undefined1 *_seek;
    undefined1 *_close;
    struct __sbuf.conflict _ub;
    uchar *_up;
    int _ur;
    uchar _ubuf[3];
    uchar _nbuf[1];
    struct __sbuf.conflict _lb;
    int _blksize;
    int _offset;
    struct _reent.conflict *_data;
};

struct tm.conflict {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
};

struct _reent___new___reent.conflict {
    uint _rand_next;
    char *_strtok_last;
    char _asctime_buf[26];
    undefined field3_0x22;
    undefined field4_0x23;
    struct tm.conflict _localtime_buf;
    int _gamma_signgam;
};

struct _reent___new___unused {
    uchar *_nextf[30];
    uint _nmalloc[30];
};

union _reent___new.conflict {
    struct _reent___new___reent.conflict _reent;
    struct _reent___new___unused _unused;
};

struct _Bigint.conflict {
    struct _Bigint.conflict *_next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    uint _x[1];
};

struct _atexit.conflict {
    struct _atexit.conflict *_next;
    int _ind;
    undefined1 *_fns[32];
};

struct _reent.conflict {
    int _errno;
    struct __sFILE.conflict *_stdin;
    struct __sFILE.conflict *_stdout;
    struct __sFILE.conflict *_stderr;
    int _inc;
    char _emergency[25];
    undefined field6_0x2d;
    undefined field7_0x2e;
    undefined field8_0x2f;
    int _current_category;
    char *_current_locale;
    int __sdidinit;
    undefined1 *__cleanup;
    struct _Bigint.conflict *_result;
    int _result_k;
    struct _Bigint.conflict *_p5s;
    struct _Bigint **_freelist;
    int _cvtlen;
    char *_cvtbuf;
    union _reent___new.conflict _new;
    struct _atexit.conflict *_atexit;
    struct _atexit.conflict _atexit0;
    undefined1 **_sig_func;
    struct _glue.conflict __sglue;
    struct __sFILE.conflict __sf[3];
};

typedef struct __sFILE.conflict1 __sFILE.conflict1, *P__sFILE.conflict1;

typedef struct _reent.conflict1 _reent.conflict1, *P_reent.conflict1;

typedef struct _Bigint.conflict1 _Bigint.conflict1, *P_Bigint.conflict1;

typedef union _reent___new.conflict1 _reent___new.conflict1, *P_reent___new.conflict1;

typedef struct _atexit.conflict1 _atexit.conflict1, *P_atexit.conflict1;

typedef struct _glue.conflict1 _glue.conflict1, *P_glue.conflict1;

typedef struct _reent___new___reent.conflict1 _reent___new___reent.conflict1, *P_reent___new___reent.conflict1;

typedef struct tm.conflict1 tm.conflict1, *Ptm.conflict1;

struct _glue.conflict1 {
    struct _glue.conflict1 *_next;
    int _niobs;
    struct __sFILE.conflict1 *_iobs;
};

struct __sFILE.conflict1 {
    uchar *_p;
    int _r;
    int _w;
    ushort _flags;
    ushort _file;
    struct __sbuf.conflict1 _bf;
    int _lbfsize;
    void *_cookie;
    undefined1 *_read;
    undefined1 *_write;
    undefined1 *_seek;
    undefined1 *_close;
    struct __sbuf.conflict1 _ub;
    uchar *_up;
    int _ur;
    uchar _ubuf[3];
    uchar _nbuf[1];
    struct __sbuf.conflict1 _lb;
    int _blksize;
    int _offset;
    struct _reent.conflict1 *_data;
};

struct tm.conflict1 {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
};

struct _reent___new___reent.conflict1 {
    uint _rand_next;
    char *_strtok_last;
    char _asctime_buf[26];
    undefined field3_0x22;
    undefined field4_0x23;
    struct tm.conflict1 _localtime_buf;
    int _gamma_signgam;
};

struct _Bigint.conflict1 {
    struct _Bigint.conflict1 *_next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    uint _x[1];
};

struct _atexit.conflict1 {
    struct _atexit.conflict1 *_next;
    int _ind;
    undefined1 *_fns[32];
};

union _reent___new.conflict1 {
    struct _reent___new___reent.conflict1 _reent;
    struct _reent___new___unused _unused;
};

struct _reent.conflict1 {
    int _errno;
    struct __sFILE.conflict1 *_stdin;
    struct __sFILE.conflict1 *_stdout;
    struct __sFILE.conflict1 *_stderr;
    int _inc;
    char _emergency[25];
    undefined field6_0x2d;
    undefined field7_0x2e;
    undefined field8_0x2f;
    int _current_category;
    char *_current_locale;
    int __sdidinit;
    undefined1 *__cleanup;
    struct _Bigint.conflict1 *_result;
    int _result_k;
    struct _Bigint.conflict1 *_p5s;
    struct _Bigint **_freelist;
    int _cvtlen;
    char *_cvtbuf;
    union _reent___new.conflict1 _new;
    struct _atexit.conflict1 *_atexit;
    struct _atexit.conflict1 _atexit0;
    undefined1 **_sig_func;
    struct _glue.conflict1 __sglue;
    struct __sFILE.conflict1 __sf[3];
};

typedef struct __sFILE.conflict2 __sFILE.conflict2, *P__sFILE.conflict2;

typedef ushort short int;

typedef struct _reent.conflict2 _reent.conflict2, *P_reent.conflict2;

typedef struct _Bigint.conflict2 _Bigint.conflict2, *P_Bigint.conflict2;

typedef union _reent___new.conflict2 _reent___new.conflict2, *P_reent___new.conflict2;

typedef struct _atexit.conflict2 _atexit.conflict2, *P_atexit.conflict2;

typedef struct _glue.conflict2 _glue.conflict2, *P_glue.conflict2;

typedef struct _reent___new___reent.conflict2 _reent___new___reent.conflict2, *P_reent___new___reent.conflict2;

typedef struct _reent___new___unused.conflict _reent___new___unused.conflict, *P_reent___new___unused.conflict;

typedef struct tm.conflict2 tm.conflict2, *Ptm.conflict2;

struct _glue.conflict2 {
    struct _glue.conflict2 *_next;
    int _niobs;
    struct __sFILE.conflict2 *_iobs;
};

struct __sFILE.conflict2 {
    unsigned char *_p;
    int _r;
    int _w;
    short int _flags;
    short int _file;
    struct __sbuf.conflict2 _bf;
    int _lbfsize;
    void *_cookie;
    undefined1 *_read;
    undefined1 *_write;
    undefined1 *_seek;
    undefined1 *_close;
    struct __sbuf.conflict2 _ub;
    unsigned char *_up;
    int _ur;
    unsigned char _ubuf[3];
    unsigned char _nbuf[1];
    struct __sbuf.conflict2 _lb;
    int _blksize;
    int _offset;
    struct _reent.conflict2 *_data;
};

struct tm.conflict2 {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
};

struct _reent___new___reent.conflict2 {
    unsigned int _rand_next;
    char *_strtok_last;
    char _asctime_buf[26];
    undefined field3_0x22;
    undefined field4_0x23;
    struct tm.conflict2 _localtime_buf;
    int _gamma_signgam;
};

struct _reent___new___unused.conflict {
    unsigned char *_nextf[30];
    unsigned int _nmalloc[30];
};

struct _Bigint.conflict2 {
    struct _Bigint.conflict2 *_next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    unsigned int _x[1];
};

struct _atexit.conflict2 {
    struct _atexit.conflict2 *_next;
    int _ind;
    undefined1 *_fns[32];
};

union _reent___new.conflict2 {
    struct _reent___new___reent.conflict2 _reent;
    struct _reent___new___unused.conflict _unused;
};

struct _reent.conflict2 {
    int _errno;
    struct __sFILE.conflict2 *_stdin;
    struct __sFILE.conflict2 *_stdout;
    struct __sFILE.conflict2 *_stderr;
    int _inc;
    char _emergency[25];
    undefined field6_0x2d;
    undefined field7_0x2e;
    undefined field8_0x2f;
    int _current_category;
    char *_current_locale;
    int __sdidinit;
    undefined1 *__cleanup;
    struct _Bigint.conflict2 *_result;
    int _result_k;
    struct _Bigint.conflict2 *_p5s;
    struct _Bigint.conflict2 **_freelist;
    int _cvtlen;
    char *_cvtbuf;
    union _reent___new.conflict2 _new;
    struct _atexit.conflict2 *_atexit;
    struct _atexit.conflict2 _atexit0;
    undefined1 **_sig_func;
    struct _glue.conflict2 __sglue;
    struct __sFILE.conflict2 __sf[3];
};

typedef struct __siov __siov, *P__siov;

struct __siov {
    void *iov_base;
    uint iov_len;
};

typedef struct __siov.conflict __siov.conflict, *P__siov.conflict;

struct __siov.conflict {
    void *iov_base;
    uint iov_len;
};

typedef struct __siov.conflict1 __siov.conflict1, *P__siov.conflict1;

struct __siov.conflict1 {
    void *iov_base;
    uint iov_len;
};

typedef struct __siov.conflict2 __siov.conflict2, *P__siov.conflict2;

struct __siov.conflict2 {
    void *iov_base;
    unsigned int iov_len;
};

typedef struct __suio __suio, *P__suio;

struct __suio {
    struct __siov *uio_iov;
    int uio_iovcnt;
    int uio_resid;
};

typedef struct __suio.conflict __suio.conflict, *P__suio.conflict;

struct __suio.conflict {
    struct __siov.conflict *uio_iov;
    int uio_iovcnt;
    int uio_resid;
};

typedef struct __suio.conflict1 __suio.conflict1, *P__suio.conflict1;

struct __suio.conflict1 {
    struct __siov.conflict *uio_iov;
    int uio_iovcnt;
    int uio_resid;
};

typedef struct __suio.conflict2 __suio.conflict2, *P__suio.conflict2;

struct __suio.conflict2 {
    struct __siov.conflict2 *uio_iov;
    int uio_iovcnt;
    int uio_resid;
};

typedef enum __unnamed_-1__201_74 {
    __no_type_class=-1,
    __void_type_class=0,
    __integer_type_class=1,
    __char_type_class=2,
    __enumeral_type_class=3,
    __boolean_type_class=4,
    __pointer_type_class=5,
    __reference_type_class=6,
    __offset_type_class=7,
    __real_type_class=8,
    __complex_type_class=9,
    __function_type_class=10,
    __method_type_class=11,
    __record_type_class=12,
    __union_type_class=13,
    __array_type_class=14,
    __string_type_class=15,
    __set_type_class=16,
    __file_type_class=17,
    __lang_type_class=18
} __unnamed_-1__201_74;

typedef enum __unnamed_-1__221_133 {
    OCT=0,
    DEC=1,
    HEX=2
} __unnamed_-1__221_133;


/* WARNING! conflicting data type names: /_atexit - /haven_demo.h/_atexit */


/* WARNING! conflicting data type names: /_glue - /haven_demo.h/_glue */


/* WARNING! conflicting data type names: /_reent - /haven_demo.h/_reent */

typedef union _reent___new _reent___new, *P_reent___new;

typedef struct _reent___new___reent _reent___new___reent, *P_reent___new___reent;


/* WARNING! conflicting data type names: /tm - /haven_demo.h/tm */

struct _reent___new___reent {
    uint _rand_next;
    char *_strtok_last;
    char _asctime_buf[26];
    undefined field3_0x22;
    undefined field4_0x23;
    struct tm _localtime_buf;
    int _gamma_signgam;
};

union _reent___new {
    struct _reent___new___reent _reent;
    struct _reent___new___unused _unused;
};

typedef struct _types_fd_set _types_fd_set, *P_types_fd_set;

struct _types_fd_set {
    long fds_bits[1];
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
};

typedef struct _types_fd_set.conflict _types_fd_set.conflict, *P_types_fd_set.conflict;

struct _types_fd_set.conflict {
    long fds_bits[1];
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
};

typedef struct _types_fd_set.conflict1 _types_fd_set.conflict1, *P_types_fd_set.conflict1;

struct _types_fd_set.conflict1 {
    long fds_bits[1];
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
};

typedef struct _types_fd_set.conflict2 _types_fd_set.conflict2, *P_types_fd_set.conflict2;

struct _types_fd_set.conflict2 {
    long int fds_bits[1];
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
};

typedef long complex double;

typedef float complex float;

typedef struct complex int complex int, *Pcomplex int;

struct complex int {
    int real;
    int imag;
};

typedef long complex long double;

typedef struct complex int.conflict complex int.conflict, *Pcomplex int.conflict;

struct complex int.conflict {
    int real;
    int imag;
};

typedef struct complex int.conflict1 complex int.conflict1, *Pcomplex int.conflict1;

struct complex int.conflict1 {
    int real;
    int imag;
};

typedef struct complex int.conflict2 complex int.conflict2, *Pcomplex int.conflict2;

struct complex int.conflict2 {
    int real;
    int imag;
};


/* WARNING! conflicting data type names: /DIstruct - /haven_demo.h/DIstruct */

typedef struct DIstruct.conflict DIstruct.conflict, *PDIstruct.conflict;

struct DIstruct.conflict {
    int low;
    int high;
};

typedef struct DIstruct.conflict1 DIstruct.conflict1, *PDIstruct.conflict1;

struct DIstruct.conflict1 {
    int low;
    int high;
};

typedef struct DIstruct.conflict2 DIstruct.conflict2, *PDIstruct.conflict2;

struct DIstruct.conflict2 {
    int low;
    int high;
};


/* WARNING! conflicting data type names: /DIunion - /haven_demo.h/DIunion */

typedef union DIunion.conflict DIunion.conflict, *PDIunion.conflict;

union DIunion.conflict {
    struct DIstruct.conflict s;
    long ll;
};

typedef union DIunion.conflict1 DIunion.conflict1, *PDIunion.conflict1;

union DIunion.conflict1 {
    struct DIstruct.conflict1 s;
    long ll;
};

typedef union DIunion.conflict2 DIunion.conflict2, *PDIunion.conflict2;

union DIunion.conflict2 {
    struct DIstruct.conflict2 s;
    long int ll;
};


/* WARNING! conflicting data type names: /div_t - /haven_demo.h/div_t */

typedef struct div_t.conflict div_t.conflict, *Pdiv_t.conflict;

struct div_t.conflict {
    int quot;
    int rem;
};

typedef struct div_t.conflict1 div_t.conflict1, *Pdiv_t.conflict1;

struct div_t.conflict1 {
    int quot;
    int rem;
};

typedef struct div_t.conflict2 div_t.conflict2, *Pdiv_t.conflict2;

struct div_t.conflict2 {
    int quot;
    int rem;
};

typedef union double_union double_union, *Pdouble_union;

union double_union {
    long d;
    uint i[2];
};

typedef union double_union.conflict double_union.conflict, *Pdouble_union.conflict;

union double_union.conflict {
    long d;
    uint i[2];
};

typedef union double_union.conflict1 double_union.conflict1, *Pdouble_union.conflict1;

union double_union.conflict1 {
    long d;
    uint i[2];
};

typedef union double_union.conflict2 double_union.conflict2, *Pdouble_union.conflict2;

union double_union.conflict2 {
    double.conflict d;
    unsigned int i[2];
};

typedef struct eflock eflock, *Peflock;

struct eflock {
    ushort l_type;
    ushort l_whence;
    undefined field2_0x4;
    undefined field3_0x5;
    undefined field4_0x6;
    undefined field5_0x7;
    long l_start;
    undefined field7_0xc;
    undefined field8_0xd;
    undefined field9_0xe;
    undefined field10_0xf;
    long l_len;
    undefined field12_0x14;
    undefined field13_0x15;
    undefined field14_0x16;
    undefined field15_0x17;
    ushort l_pid;
    ushort l_xxx;
    undefined field18_0x1c;
    undefined field19_0x1d;
    undefined field20_0x1e;
    undefined field21_0x1f;
    long l_rpid;
    undefined field23_0x24;
    undefined field24_0x25;
    undefined field25_0x26;
    undefined field26_0x27;
    long l_rsys;
    undefined field28_0x2c;
    undefined field29_0x2d;
    undefined field30_0x2e;
    undefined field31_0x2f;
};

typedef struct eflock.conflict eflock.conflict, *Peflock.conflict;

struct eflock.conflict {
    ushort l_type;
    ushort l_whence;
    undefined field2_0x4;
    undefined field3_0x5;
    undefined field4_0x6;
    undefined field5_0x7;
    long l_start;
    undefined field7_0xc;
    undefined field8_0xd;
    undefined field9_0xe;
    undefined field10_0xf;
    long l_len;
    undefined field12_0x14;
    undefined field13_0x15;
    undefined field14_0x16;
    undefined field15_0x17;
    ushort l_pid;
    ushort l_xxx;
    undefined field18_0x1c;
    undefined field19_0x1d;
    undefined field20_0x1e;
    undefined field21_0x1f;
    long l_rpid;
    undefined field23_0x24;
    undefined field24_0x25;
    undefined field25_0x26;
    undefined field26_0x27;
    long l_rsys;
    undefined field28_0x2c;
    undefined field29_0x2d;
    undefined field30_0x2e;
    undefined field31_0x2f;
};

typedef struct eflock.conflict1 eflock.conflict1, *Peflock.conflict1;

struct eflock.conflict1 {
    ushort l_type;
    ushort l_whence;
    undefined field2_0x4;
    undefined field3_0x5;
    undefined field4_0x6;
    undefined field5_0x7;
    long l_start;
    undefined field7_0xc;
    undefined field8_0xd;
    undefined field9_0xe;
    undefined field10_0xf;
    long l_len;
    undefined field12_0x14;
    undefined field13_0x15;
    undefined field14_0x16;
    undefined field15_0x17;
    ushort l_pid;
    ushort l_xxx;
    undefined field18_0x1c;
    undefined field19_0x1d;
    undefined field20_0x1e;
    undefined field21_0x1f;
    long l_rpid;
    undefined field23_0x24;
    undefined field24_0x25;
    undefined field25_0x26;
    undefined field26_0x27;
    long l_rsys;
    undefined field28_0x2c;
    undefined field29_0x2d;
    undefined field30_0x2e;
    undefined field31_0x2f;
};

typedef struct eflock.conflict2 eflock.conflict2, *Peflock.conflict2;

struct eflock.conflict2 {
    short int l_type;
    short int l_whence;
    undefined field2_0x4;
    undefined field3_0x5;
    undefined field4_0x6;
    undefined field5_0x7;
    long int l_start;
    long int l_len;
    short int l_pid;
    short int l_xxx;
    undefined field10_0x1c;
    undefined field11_0x1d;
    undefined field12_0x1e;
    undefined field13_0x1f;
    long int l_rpid;
    long int l_rsys;
};


/* WARNING! conflicting data type names: /exception - /haven_demo.h/exception */

typedef struct exception.conflict exception.conflict, *Pexception.conflict;

struct exception.conflict {
    int type;
    char *name;
    long arg1;
    undefined field3_0xc;
    undefined field4_0xd;
    undefined field5_0xe;
    undefined field6_0xf;
    long arg2;
    undefined field8_0x14;
    undefined field9_0x15;
    undefined field10_0x16;
    undefined field11_0x17;
    long retval;
    undefined field13_0x1c;
    undefined field14_0x1d;
    undefined field15_0x1e;
    undefined field16_0x1f;
    int err;
    undefined field18_0x24;
    undefined field19_0x25;
    undefined field20_0x26;
    undefined field21_0x27;
};

typedef struct exception.conflict1 exception.conflict1, *Pexception.conflict1;

struct exception.conflict1 {
    int type;
    char *name;
    long arg1;
    undefined field3_0xc;
    undefined field4_0xd;
    undefined field5_0xe;
    undefined field6_0xf;
    long arg2;
    undefined field8_0x14;
    undefined field9_0x15;
    undefined field10_0x16;
    undefined field11_0x17;
    long retval;
    undefined field13_0x1c;
    undefined field14_0x1d;
    undefined field15_0x1e;
    undefined field16_0x1f;
    int err;
    undefined field18_0x24;
    undefined field19_0x25;
    undefined field20_0x26;
    undefined field21_0x27;
};

typedef struct exception.conflict2 exception.conflict2, *Pexception.conflict2;

struct exception.conflict2 {
    int type;
    char *name;
    double.conflict arg1;
    double.conflict arg2;
    double.conflict retval;
    int err;
    undefined field6_0x24;
    undefined field7_0x25;
    undefined field8_0x26;
    undefined field9_0x27;
};

typedef union FLO_union_type__188_38 FLO_union_type__188_38, *PFLO_union_type__188_38;

typedef struct FLO_union_type__bits__188_38 FLO_union_type__bits__188_38, *PFLO_union_type__bits__188_38;

struct FLO_union_type__bits__188_38 {
    ulong fraction;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
};

union FLO_union_type__188_38 {
    long value;
    ulong value_raw;
    uint words[2];
    struct FLO_union_type__bits__188_38 bits;
};

typedef union FLO_union_type__188_38.conflict FLO_union_type__188_38.conflict, *PFLO_union_type__188_38.conflict;

union FLO_union_type__188_38.conflict {
    long value;
    ulong value_raw;
    uint words[2];
    struct FLO_union_type__bits__188_38 bits;
};

typedef union FLO_union_type__188_38.conflict1 FLO_union_type__188_38.conflict1, *PFLO_union_type__188_38.conflict1;

union FLO_union_type__188_38.conflict1 {
    long value;
    ulong value_raw;
    uint words[2];
    struct FLO_union_type__bits__188_38 bits;
};

typedef union FLO_union_type__188_38.conflict2 FLO_union_type__188_38.conflict2, *PFLO_union_type__188_38.conflict2;

typedef struct FLO_union_type__bits__188_38.conflict FLO_union_type__bits__188_38.conflict, *PFLO_union_type__bits__188_38.conflict;

struct FLO_union_type__bits__188_38.conflict {
    long unsigned int fraction:52;
    unsigned int exp:11;
    unsigned int sign:1;
};

union FLO_union_type__188_38.conflict2 {
    double.conflict value;
    long unsigned int value_raw;
    unsigned int words[2];
    struct FLO_union_type__bits__188_38.conflict bits;
};

typedef union FLO_union_type__189_38 FLO_union_type__189_38, *PFLO_union_type__189_38;

typedef struct FLO_union_type__bits__189_38 FLO_union_type__bits__189_38, *PFLO_union_type__bits__189_38;

struct FLO_union_type__bits__189_38 {
    uint fraction;
};

union FLO_union_type__189_38 {
    float value;
    uint value_raw;
    struct FLO_union_type__bits__189_38 bits;
};

typedef union FLO_union_type__189_38.conflict FLO_union_type__189_38.conflict, *PFLO_union_type__189_38.conflict;

union FLO_union_type__189_38.conflict {
    float value;
    uint value_raw;
    struct FLO_union_type__bits__189_38 bits;
};

typedef union FLO_union_type__189_38.conflict1 FLO_union_type__189_38.conflict1, *PFLO_union_type__189_38.conflict1;

union FLO_union_type__189_38.conflict1 {
    float value;
    uint value_raw;
    struct FLO_union_type__bits__189_38 bits;
};

typedef union FLO_union_type__189_38.conflict2 FLO_union_type__189_38.conflict2, *PFLO_union_type__189_38.conflict2;

typedef struct FLO_union_type__bits__189_38.conflict FLO_union_type__bits__189_38.conflict, *PFLO_union_type__bits__189_38.conflict;

struct FLO_union_type__bits__189_38.conflict {
    unsigned int fraction:23;
    unsigned int exp:8;
    unsigned int sign:1;
};

union FLO_union_type__189_38.conflict2 {
    float value;
    unsigned int value_raw;
    struct FLO_union_type__bits__189_38.conflict bits;
};

typedef struct flock flock, *Pflock;

struct flock {
    ushort l_type;
    ushort l_whence;
    undefined field2_0x4;
    undefined field3_0x5;
    undefined field4_0x6;
    undefined field5_0x7;
    long l_start;
    undefined field7_0xc;
    undefined field8_0xd;
    undefined field9_0xe;
    undefined field10_0xf;
    long l_len;
    undefined field12_0x14;
    undefined field13_0x15;
    undefined field14_0x16;
    undefined field15_0x17;
    ushort l_pid;
    ushort l_xxx;
    undefined field18_0x1c;
    undefined field19_0x1d;
    undefined field20_0x1e;
    undefined field21_0x1f;
};

typedef struct flock.conflict flock.conflict, *Pflock.conflict;

struct flock.conflict {
    ushort l_type;
    ushort l_whence;
    undefined field2_0x4;
    undefined field3_0x5;
    undefined field4_0x6;
    undefined field5_0x7;
    long l_start;
    undefined field7_0xc;
    undefined field8_0xd;
    undefined field9_0xe;
    undefined field10_0xf;
    long l_len;
    undefined field12_0x14;
    undefined field13_0x15;
    undefined field14_0x16;
    undefined field15_0x17;
    ushort l_pid;
    ushort l_xxx;
    undefined field18_0x1c;
    undefined field19_0x1d;
    undefined field20_0x1e;
    undefined field21_0x1f;
};

typedef struct flock.conflict1 flock.conflict1, *Pflock.conflict1;

struct flock.conflict1 {
    ushort l_type;
    ushort l_whence;
    undefined field2_0x4;
    undefined field3_0x5;
    undefined field4_0x6;
    undefined field5_0x7;
    long l_start;
    undefined field7_0xc;
    undefined field8_0xd;
    undefined field9_0xe;
    undefined field10_0xf;
    long l_len;
    undefined field12_0x14;
    undefined field13_0x15;
    undefined field14_0x16;
    undefined field15_0x17;
    ushort l_pid;
    ushort l_xxx;
    undefined field18_0x1c;
    undefined field19_0x1d;
    undefined field20_0x1e;
    undefined field21_0x1f;
};

typedef struct flock.conflict2 flock.conflict2, *Pflock.conflict2;

struct flock.conflict2 {
    short int l_type;
    short int l_whence;
    undefined field2_0x4;
    undefined field3_0x5;
    undefined field4_0x6;
    undefined field5_0x7;
    long int l_start;
    long int l_len;
    short int l_pid;
    short int l_xxx;
    undefined field10_0x1c;
    undefined field11_0x1d;
    undefined field12_0x1e;
    undefined field13_0x1f;
};

typedef enum fp_class_type {
    CLASS_SNAN=0,
    CLASS_QNAN=1,
    CLASS_ZERO=2,
    CLASS_NUMBER=3,
    CLASS_INFINITY=4
} fp_class_type;

typedef struct fp_number_type__188_34 fp_number_type__188_34, *Pfp_number_type__188_34;

typedef union fp_number_type__fraction__188_34 fp_number_type__fraction__188_34, *Pfp_number_type__fraction__188_34;

union fp_number_type__fraction__188_34 {
    ulong ll;
    uint l[2];
};

struct fp_number_type__188_34 {
    enum fp_class_type class;
    uint sign;
    int normal_exp;
    undefined field3_0xc;
    undefined field4_0xd;
    undefined field5_0xe;
    undefined field6_0xf;
    union fp_number_type__fraction__188_34 fraction;
};

typedef struct fp_number_type__188_34.conflict fp_number_type__188_34.conflict, *Pfp_number_type__188_34.conflict;

struct fp_number_type__188_34.conflict {
    enum fp_class_type class;
    uint sign;
    int normal_exp;
    undefined field3_0xc;
    undefined field4_0xd;
    undefined field5_0xe;
    undefined field6_0xf;
    union fp_number_type__fraction__188_34 fraction;
};

typedef struct fp_number_type__188_34.conflict1 fp_number_type__188_34.conflict1, *Pfp_number_type__188_34.conflict1;

struct fp_number_type__188_34.conflict1 {
    enum fp_class_type class;
    uint sign;
    int normal_exp;
    undefined field3_0xc;
    undefined field4_0xd;
    undefined field5_0xe;
    undefined field6_0xf;
    union fp_number_type__fraction__188_34 fraction;
};

typedef struct fp_number_type__188_34.conflict2 fp_number_type__188_34.conflict2, *Pfp_number_type__188_34.conflict2;

typedef union fp_number_type__fraction__188_34.conflict fp_number_type__fraction__188_34.conflict, *Pfp_number_type__fraction__188_34.conflict;

union fp_number_type__fraction__188_34.conflict {
    long unsigned int ll;
    unsigned int l[2];
};

struct fp_number_type__188_34.conflict2 {
    enum fp_class_type class;
    unsigned int sign;
    int normal_exp;
    undefined field3_0xc;
    undefined field4_0xd;
    undefined field5_0xe;
    undefined field6_0xf;
    union fp_number_type__fraction__188_34.conflict fraction;
};

typedef struct fp_number_type__189_34 fp_number_type__189_34, *Pfp_number_type__189_34;

typedef union fp_number_type__fraction__189_34 fp_number_type__fraction__189_34, *Pfp_number_type__fraction__189_34;

union fp_number_type__fraction__189_34 {
    uint ll;
    short l[2];
};

struct fp_number_type__189_34 {
    enum fp_class_type class;
    uint sign;
    int normal_exp;
    union fp_number_type__fraction__189_34 fraction;
};

typedef struct fp_number_type__189_34.conflict fp_number_type__189_34.conflict, *Pfp_number_type__189_34.conflict;

struct fp_number_type__189_34.conflict {
    enum fp_class_type class;
    uint sign;
    int normal_exp;
    union fp_number_type__fraction__189_34 fraction;
};

typedef struct fp_number_type__189_34.conflict1 fp_number_type__189_34.conflict1, *Pfp_number_type__189_34.conflict1;

struct fp_number_type__189_34.conflict1 {
    enum fp_class_type class;
    uint sign;
    int normal_exp;
    union fp_number_type__fraction__189_34 fraction;
};

typedef struct fp_number_type__189_34.conflict2 fp_number_type__189_34.conflict2, *Pfp_number_type__189_34.conflict2;

typedef union fp_number_type__fraction__189_34.conflict fp_number_type__fraction__189_34.conflict, *Pfp_number_type__fraction__189_34.conflict;

union fp_number_type__fraction__189_34.conflict {
    unsigned int ll;
    short unsigned int l[2];
};

struct fp_number_type__189_34.conflict2 {
    enum fp_class_type class;
    unsigned int sign;
    int normal_exp;
    union fp_number_type__fraction__189_34.conflict fraction;
};

typedef union ieee_double_shape_type ieee_double_shape_type, *Pieee_double_shape_type;

typedef struct ieee_double_shape_type__parts ieee_double_shape_type__parts, *Pieee_double_shape_type__parts;

struct ieee_double_shape_type__parts {
    uint lsw;
    uint msw;
};

union ieee_double_shape_type {
    long value;
    struct ieee_double_shape_type__parts parts;
};

typedef union ieee_double_shape_type.conflict ieee_double_shape_type.conflict, *Pieee_double_shape_type.conflict;

union ieee_double_shape_type.conflict {
    long value;
    struct ieee_double_shape_type__parts parts;
};

typedef union ieee_double_shape_type.conflict1 ieee_double_shape_type.conflict1, *Pieee_double_shape_type.conflict1;

union ieee_double_shape_type.conflict1 {
    long value;
    struct ieee_double_shape_type__parts parts;
};

typedef union ieee_double_shape_type.conflict2 ieee_double_shape_type.conflict2, *Pieee_double_shape_type.conflict2;

typedef struct ieee_double_shape_type__parts.conflict ieee_double_shape_type__parts.conflict, *Pieee_double_shape_type__parts.conflict;

struct ieee_double_shape_type__parts.conflict {
    unsigned int lsw;
    unsigned int msw;
};

union ieee_double_shape_type.conflict2 {
    double.conflict value;
    struct ieee_double_shape_type__parts.conflict parts;
};

typedef union ieee_float_shape_type ieee_float_shape_type, *Pieee_float_shape_type;

union ieee_float_shape_type {
    float value;
    uint word;
};

typedef union ieee_float_shape_type.conflict ieee_float_shape_type.conflict, *Pieee_float_shape_type.conflict;

union ieee_float_shape_type.conflict {
    float value;
    uint word;
};

typedef union ieee_float_shape_type.conflict1 ieee_float_shape_type.conflict1, *Pieee_float_shape_type.conflict1;

union ieee_float_shape_type.conflict1 {
    float value;
    uint word;
};

typedef union ieee_float_shape_type.conflict2 ieee_float_shape_type.conflict2, *Pieee_float_shape_type.conflict2;

union ieee_float_shape_type.conflict2 {
    float value;
    unsigned int word;
};


/* WARNING! conflicting data type names: /lconv - /locale.h/lconv */

typedef struct lconv.conflict lconv.conflict, *Plconv.conflict;

struct lconv.conflict {
    char *decimal_point;
    char *thousands_sep;
    char *grouping;
    char *int_curr_symbol;
    char *currency_symbol;
    char *mon_decimal_point;
    char *mon_thousands_sep;
    char *mon_grouping;
    char *positive_sign;
    char *negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
};

typedef struct lconv.conflict1 lconv.conflict1, *Plconv.conflict1;

struct lconv.conflict1 {
    char *decimal_point;
    char *thousands_sep;
    char *grouping;
    char *int_curr_symbol;
    char *currency_symbol;
    char *mon_decimal_point;
    char *mon_thousands_sep;
    char *mon_grouping;
    char *positive_sign;
    char *negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
};

typedef struct lconv.conflict2 lconv.conflict2, *Plconv.conflict2;

struct lconv.conflict2 {
    char *decimal_point;
    char *thousands_sep;
    char *grouping;
    char *int_curr_symbol;
    char *currency_symbol;
    char *mon_decimal_point;
    char *mon_thousands_sep;
    char *mon_grouping;
    char *positive_sign;
    char *negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
};


/* WARNING! conflicting data type names: /ldiv_t - /haven_demo.h/ldiv_t */

typedef struct ldiv_t.conflict ldiv_t.conflict, *Pldiv_t.conflict;

struct ldiv_t.conflict {
    long quot;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    long rem;
    undefined field6_0xc;
    undefined field7_0xd;
    undefined field8_0xe;
    undefined field9_0xf;
};

typedef struct ldiv_t.conflict1 ldiv_t.conflict1, *Pldiv_t.conflict1;

struct ldiv_t.conflict1 {
    long quot;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    long rem;
    undefined field6_0xc;
    undefined field7_0xd;
    undefined field8_0xe;
    undefined field9_0xf;
};

typedef struct ldiv_t.conflict2 ldiv_t.conflict2, *Pldiv_t.conflict2;

struct ldiv_t.conflict2 {
    long int quot;
    long int rem;
};

typedef long long long int;

typedef struct mallinfo mallinfo, *Pmallinfo;

struct mallinfo {
    int arena;
    int ordblks;
    int smblks;
    int hblks;
    int hblkhd;
    int usmblks;
    int fsmblks;
    int uordblks;
    int fordblks;
    int keepcost;
};

typedef struct mallinfo.conflict mallinfo.conflict, *Pmallinfo.conflict;

struct mallinfo.conflict {
    int arena;
    int ordblks;
    int smblks;
    int hblks;
    int hblkhd;
    int usmblks;
    int fsmblks;
    int uordblks;
    int fordblks;
    int keepcost;
};

typedef struct mallinfo.conflict1 mallinfo.conflict1, *Pmallinfo.conflict1;

struct mallinfo.conflict1 {
    int arena;
    int ordblks;
    int smblks;
    int hblks;
    int hblkhd;
    int usmblks;
    int fsmblks;
    int uordblks;
    int fordblks;
    int keepcost;
};

typedef struct mallinfo.conflict2 mallinfo.conflict2, *Pmallinfo.conflict2;

struct mallinfo.conflict2 {
    int arena;
    int ordblks;
    int smblks;
    int hblks;
    int hblkhd;
    int usmblks;
    int fsmblks;
    int uordblks;
    int fordblks;
    int keepcost;
};

typedef struct malloc_chunk malloc_chunk, *Pmalloc_chunk;

struct malloc_chunk {
    uint prev_size;
    uint size;
    struct malloc_chunk *fd;
    struct malloc_chunk *bk;
};

typedef struct malloc_chunk.conflict malloc_chunk.conflict, *Pmalloc_chunk.conflict;

struct malloc_chunk.conflict {
    uint prev_size;
    uint size;
    struct malloc_chunk.conflict *fd;
    struct malloc_chunk.conflict *bk;
};

typedef struct malloc_chunk.conflict1 malloc_chunk.conflict1, *Pmalloc_chunk.conflict1;

struct malloc_chunk.conflict1 {
    uint prev_size;
    uint size;
    struct malloc_chunk.conflict1 *fd;
    struct malloc_chunk.conflict1 *bk;
};

typedef struct malloc_chunk.conflict2 malloc_chunk.conflict2, *Pmalloc_chunk.conflict2;

struct malloc_chunk.conflict2 {
    unsigned int prev_size;
    unsigned int size;
    struct malloc_chunk.conflict2 *fd;
    struct malloc_chunk.conflict2 *bk;
};


/* WARNING! conflicting data type names: /mips_args - /haven_demo.h/mips_args */

typedef struct mips_args.conflict mips_args.conflict, *Pmips_args.conflict;

struct mips_args.conflict {
    int gp_reg_found;
    int arg_number;
    int arg_words;
    int fp_arg_words;
    int last_arg_fp;
    int fp_code;
    int num_adjusts;
    undefined field7_0x1c;
    undefined field8_0x1d;
    undefined field9_0x1e;
    undefined field10_0x1f;
    undefined field11_0x20;
    undefined field12_0x21;
    undefined field13_0x22;
    undefined field14_0x23;
    undefined field15_0x24;
    undefined field16_0x25;
    undefined field17_0x26;
    undefined field18_0x27;
    undefined field19_0x28;
    undefined field20_0x29;
    undefined field21_0x2a;
    undefined field22_0x2b;
    undefined field23_0x2c;
    undefined field24_0x2d;
    undefined field25_0x2e;
    undefined field26_0x2f;
    undefined field27_0x30;
    undefined field28_0x31;
    undefined field29_0x32;
    undefined field30_0x33;
    undefined field31_0x34;
    undefined field32_0x35;
    undefined field33_0x36;
    undefined field34_0x37;
    undefined field35_0x38;
    undefined field36_0x39;
    undefined field37_0x3a;
    undefined field38_0x3b;
};

typedef struct mips_args.conflict1 mips_args.conflict1, *Pmips_args.conflict1;

typedef struct rtx_def rtx_def, *Prtx_def;

struct mips_args.conflict1 {
    int gp_reg_found;
    int arg_number;
    int arg_words;
    int fp_arg_words;
    int last_arg_fp;
    int fp_code;
    int num_adjusts;
    struct rtx_def *adjust[8];
};

struct rtx_def { /* Probably forward declared, but not defined, in a translation unit with symbols. */
    undefined field0_0x0;
};

typedef struct mips_args.conflict2 mips_args.conflict2, *Pmips_args.conflict2;

struct mips_args.conflict2 {
    int gp_reg_found;
    int arg_number;
    int arg_words;
    int fp_arg_words;
    int last_arg_fp;
    int fp_code;
    int num_adjusts;
    struct rtx_def *adjust[8];
};


/* WARNING! conflicting data type names: /mips_frame_info - /haven_demo.h/mips_frame_info */

typedef struct mips_frame_info.conflict mips_frame_info.conflict, *Pmips_frame_info.conflict;

struct mips_frame_info.conflict {
    long total_size;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    long var_size;
    undefined field6_0xc;
    undefined field7_0xd;
    undefined field8_0xe;
    undefined field9_0xf;
    long args_size;
    undefined field11_0x14;
    undefined field12_0x15;
    undefined field13_0x16;
    undefined field14_0x17;
    long extra_size;
    undefined field16_0x1c;
    undefined field17_0x1d;
    undefined field18_0x1e;
    undefined field19_0x1f;
    int gp_reg_size;
    int fp_reg_size;
    long mask;
    undefined field23_0x2c;
    undefined field24_0x2d;
    undefined field25_0x2e;
    undefined field26_0x2f;
    long fmask;
    undefined field28_0x34;
    undefined field29_0x35;
    undefined field30_0x36;
    undefined field31_0x37;
    long gp_save_offset;
    undefined field33_0x3c;
    undefined field34_0x3d;
    undefined field35_0x3e;
    undefined field36_0x3f;
    long fp_save_offset;
    undefined field38_0x44;
    undefined field39_0x45;
    undefined field40_0x46;
    undefined field41_0x47;
    long gp_sp_offset;
    undefined field43_0x4c;
    undefined field44_0x4d;
    undefined field45_0x4e;
    undefined field46_0x4f;
    long fp_sp_offset;
    undefined field48_0x54;
    undefined field49_0x55;
    undefined field50_0x56;
    undefined field51_0x57;
    int initialized;
    int num_gp;
    int num_fp;
    undefined field55_0x64;
    undefined field56_0x65;
    undefined field57_0x66;
    undefined field58_0x67;
    long insns_len;
    undefined field60_0x6c;
    undefined field61_0x6d;
    undefined field62_0x6e;
    undefined field63_0x6f;
};

typedef struct mips_frame_info.conflict1 mips_frame_info.conflict1, *Pmips_frame_info.conflict1;

struct mips_frame_info.conflict1 {
    long total_size;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    long var_size;
    undefined field6_0xc;
    undefined field7_0xd;
    undefined field8_0xe;
    undefined field9_0xf;
    long args_size;
    undefined field11_0x14;
    undefined field12_0x15;
    undefined field13_0x16;
    undefined field14_0x17;
    long extra_size;
    undefined field16_0x1c;
    undefined field17_0x1d;
    undefined field18_0x1e;
    undefined field19_0x1f;
    int gp_reg_size;
    int fp_reg_size;
    long mask;
    undefined field23_0x2c;
    undefined field24_0x2d;
    undefined field25_0x2e;
    undefined field26_0x2f;
    long fmask;
    undefined field28_0x34;
    undefined field29_0x35;
    undefined field30_0x36;
    undefined field31_0x37;
    long gp_save_offset;
    undefined field33_0x3c;
    undefined field34_0x3d;
    undefined field35_0x3e;
    undefined field36_0x3f;
    long fp_save_offset;
    undefined field38_0x44;
    undefined field39_0x45;
    undefined field40_0x46;
    undefined field41_0x47;
    long gp_sp_offset;
    undefined field43_0x4c;
    undefined field44_0x4d;
    undefined field45_0x4e;
    undefined field46_0x4f;
    long fp_sp_offset;
    undefined field48_0x54;
    undefined field49_0x55;
    undefined field50_0x56;
    undefined field51_0x57;
    int initialized;
    int num_gp;
    int num_fp;
    undefined field55_0x64;
    undefined field56_0x65;
    undefined field57_0x66;
    undefined field58_0x67;
    long insns_len;
    undefined field60_0x6c;
    undefined field61_0x6d;
    undefined field62_0x6e;
    undefined field63_0x6f;
};

typedef struct mips_frame_info.conflict2 mips_frame_info.conflict2, *Pmips_frame_info.conflict2;

struct mips_frame_info.conflict2 {
    long int total_size;
    long int var_size;
    long int args_size;
    long int extra_size;
    int gp_reg_size;
    int fp_reg_size;
    long int mask;
    long int fmask;
    long int gp_save_offset;
    long int fp_save_offset;
    long int gp_sp_offset;
    long int fp_sp_offset;
    int initialized;
    int num_gp;
    int num_fp;
    undefined field15_0x64;
    undefined field16_0x65;
    undefined field17_0x66;
    undefined field18_0x67;
    long int insns_len;
};

typedef void (*NUDEBUGMSGFUNC_)(char *, ...);

typedef void (*NUERRORFUNC_)(char *, ...);

typedef int *pvvar;


/* WARNING! conflicting data type names: /stat - /stat.h/stat */

typedef struct stat.conflict stat.conflict, *Pstat.conflict;

struct stat.conflict {
    ushort st_dev;
    short st_ino;
    uint st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    ushort st_rdev;
    long st_size;
    undefined field8_0x14;
    undefined field9_0x15;
    undefined field10_0x16;
    undefined field11_0x17;
    long st_atime;
    undefined field13_0x1c;
    undefined field14_0x1d;
    undefined field15_0x1e;
    undefined field16_0x1f;
    long st_spare1;
    undefined field18_0x24;
    undefined field19_0x25;
    undefined field20_0x26;
    undefined field21_0x27;
    long st_mtime;
    undefined field23_0x2c;
    undefined field24_0x2d;
    undefined field25_0x2e;
    undefined field26_0x2f;
    long st_spare2;
    undefined field28_0x34;
    undefined field29_0x35;
    undefined field30_0x36;
    undefined field31_0x37;
    long st_ctime;
    undefined field33_0x3c;
    undefined field34_0x3d;
    undefined field35_0x3e;
    undefined field36_0x3f;
    long st_spare3;
    undefined field38_0x44;
    undefined field39_0x45;
    undefined field40_0x46;
    undefined field41_0x47;
    long st_blksize;
    undefined field43_0x4c;
    undefined field44_0x4d;
    undefined field45_0x4e;
    undefined field46_0x4f;
    long st_blocks;
    undefined field48_0x54;
    undefined field49_0x55;
    undefined field50_0x56;
    undefined field51_0x57;
    long st_spare4[2];
    undefined field53_0x60;
    undefined field54_0x61;
    undefined field55_0x62;
    undefined field56_0x63;
    undefined field57_0x64;
    undefined field58_0x65;
    undefined field59_0x66;
    undefined field60_0x67;
};

typedef struct stat.conflict1 stat.conflict1, *Pstat.conflict1;

struct stat.conflict1 {
    ushort st_dev;
    short st_ino;
    uint st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    ushort st_rdev;
    long st_size;
    undefined field8_0x14;
    undefined field9_0x15;
    undefined field10_0x16;
    undefined field11_0x17;
    long st_atime;
    undefined field13_0x1c;
    undefined field14_0x1d;
    undefined field15_0x1e;
    undefined field16_0x1f;
    long st_spare1;
    undefined field18_0x24;
    undefined field19_0x25;
    undefined field20_0x26;
    undefined field21_0x27;
    long st_mtime;
    undefined field23_0x2c;
    undefined field24_0x2d;
    undefined field25_0x2e;
    undefined field26_0x2f;
    long st_spare2;
    undefined field28_0x34;
    undefined field29_0x35;
    undefined field30_0x36;
    undefined field31_0x37;
    long st_ctime;
    undefined field33_0x3c;
    undefined field34_0x3d;
    undefined field35_0x3e;
    undefined field36_0x3f;
    long st_spare3;
    undefined field38_0x44;
    undefined field39_0x45;
    undefined field40_0x46;
    undefined field41_0x47;
    long st_blksize;
    undefined field43_0x4c;
    undefined field44_0x4d;
    undefined field45_0x4e;
    undefined field46_0x4f;
    long st_blocks;
    undefined field48_0x54;
    undefined field49_0x55;
    undefined field50_0x56;
    undefined field51_0x57;
    long st_spare4[2];
    undefined field53_0x60;
    undefined field54_0x61;
    undefined field55_0x62;
    undefined field56_0x63;
    undefined field57_0x64;
    undefined field58_0x65;
    undefined field59_0x66;
    undefined field60_0x67;
};

typedef struct stat.conflict2 stat.conflict2, *Pstat.conflict2;

struct stat.conflict2 {
    short int st_dev;
    short unsigned int st_ino;
    unsigned int st_mode;
    short unsigned int st_nlink;
    short unsigned int st_uid;
    short unsigned int st_gid;
    short int st_rdev;
    long int st_size;
    long int st_atime;
    long int st_spare1;
    long int st_mtime;
    long int st_spare2;
    long int st_ctime;
    long int st_spare3;
    long int st_blksize;
    long int st_blocks;
    long int st_spare4[2];
    undefined field17_0x60;
    undefined field18_0x61;
    undefined field19_0x62;
    undefined field20_0x63;
    undefined field21_0x64;
    undefined field22_0x65;
    undefined field23_0x66;
    undefined field24_0x67;
};

typedef enum unnamed_-1__201_74 {
    __no_type_class=-1,
    __void_type_class=0,
    __integer_type_class=1,
    __char_type_class=2,
    __enumeral_type_class=3,
    __boolean_type_class=4,
    __pointer_type_class=5,
    __reference_type_class=6,
    __offset_type_class=7,
    __real_type_class=8,
    __complex_type_class=9,
    __function_type_class=10,
    __method_type_class=11,
    __record_type_class=12,
    __union_type_class=13,
    __array_type_class=14,
    __string_type_class=15,
    __set_type_class=16,
    __file_type_class=17,
    __lang_type_class=18
} unnamed_-1__201_74;

typedef enum unnamed_-1__221_133 {
    OCT=0,
    DEC=1,
    HEX=2
} unnamed_-1__221_133;

