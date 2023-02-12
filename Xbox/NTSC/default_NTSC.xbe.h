typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined5;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef short    wchar_t;
#define unkbyte9   unsigned long long
#define unkbyte10   unsigned long long
#define unkbyte11   unsigned long long
#define unkbyte12   unsigned long long
#define unkbyte13   unsigned long long
#define unkbyte14   unsigned long long
#define unkbyte15   unsigned long long
#define unkbyte16   unsigned long long

#define unkuint9   unsigned long long
#define unkuint10   unsigned long long
#define unkuint11   unsigned long long
#define unkuint12   unsigned long long
#define unkuint13   unsigned long long
#define unkuint14   unsigned long long
#define unkuint15   unsigned long long
#define unkuint16   unsigned long long

#define unkint9   long long
#define unkint10   long long
#define unkint11   long long
#define unkint12   long long
#define unkint13   long long
#define unkint14   long long
#define unkint15   long long
#define unkint16   long long

#define unkfloat1   float
#define unkfloat2   float
#define unkfloat3   float
#define unkfloat5   double
#define unkfloat6   double
#define unkfloat7   double
#define unkfloat9   long double
#define unkfloat11   long double
#define unkfloat12   long double
#define unkfloat13   long double
#define unkfloat14   long double
#define unkfloat15   long double
#define unkfloat16   long double

#define BADSPACEBASE   void
#define code   void

typedef unsigned short    wchar16;
typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef long __off_t;

typedef longlong __quad_t;

typedef __quad_t __off64_t;

typedef ulong size_t;

struct _IO_FILE {
    int _flags;
    char * _IO_read_ptr;
    char * _IO_read_end;
    char * _IO_read_base;
    char * _IO_write_base;
    char * _IO_write_ptr;
    char * _IO_write_end;
    char * _IO_buf_base;
    char * _IO_buf_end;
    char * _IO_save_base;
    char * _IO_backup_base;
    char * _IO_save_end;
    struct _IO_marker * _markers;
    struct _IO_FILE * _chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    ushort _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t * _lock;
    __off64_t _offset;
    void * __pad1;
    void * __pad2;
    void * __pad3;
    void * __pad4;
    size_t __pad5;
    int _mode;
    char _unused2[15];
};

struct _IO_marker {
    struct _IO_marker * _next;
    struct _IO_FILE * _sbuf;
    int _pos;
};

typedef struct _IO_FILE FILE;

typedef struct __jmp_buf_tag __jmp_buf_tag, *P__jmp_buf_tag;

typedef int __jmp_buf[6];

typedef struct __sigset_t __sigset_t, *P__sigset_t;

struct __sigset_t {
    ulong __val[128];
};

struct __jmp_buf_tag {
    __jmp_buf __jmpbuf;
    int __mask_was_saved;
    struct __sigset_t __saved_mask;
};

typedef struct _LAUNCH_DATA_HEADER _LAUNCH_DATA_HEADER, *P_LAUNCH_DATA_HEADER;

typedef ulong DWORD;

typedef char CHAR;

struct _LAUNCH_DATA_HEADER {
    DWORD dwLaunchDataType;
    DWORD dwTitleId;
    CHAR szLaunchPath[520];
    DWORD dwFlags;
};

typedef struct _FILE_TRACKING_INFORMATION _FILE_TRACKING_INFORMATION, *P_FILE_TRACKING_INFORMATION;

typedef struct _FILE_TRACKING_INFORMATION * PFILE_TRACKING_INFORMATION;

typedef void * PVOID;

typedef PVOID HANDLE;

typedef ulong ULONG;

struct _FILE_TRACKING_INFORMATION {
    HANDLE DestinationFile;
    ULONG ObjectInformationLength;
    CHAR ObjectInformation[1];
};

typedef struct _FILE_INTERNAL_INFORMATION _FILE_INTERNAL_INFORMATION, *P_FILE_INTERNAL_INFORMATION;

typedef union _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;

typedef union _LARGE_INTEGER LARGE_INTEGER;

typedef struct _struct_3 _struct_3, *P_struct_3;

typedef struct _struct_4 _struct_4, *P_struct_4;

typedef longlong LONGLONG;

typedef long LONG;

struct _struct_4 {
    ULONG LowPart;
    LONG HighPart;
};

struct _struct_3 {
    ULONG LowPart;
    LONG HighPart;
};

union _LARGE_INTEGER {
    struct _struct_3 field0;
    struct _struct_4 u;
    LONGLONG QuadPart;
};

struct _FILE_INTERNAL_INFORMATION {
    LARGE_INTEGER IndexNumber;
};

typedef struct _LAUNCH_DATA_PAGE _LAUNCH_DATA_PAGE, *P_LAUNCH_DATA_PAGE;

typedef struct _LAUNCH_DATA_HEADER LAUNCH_DATA_HEADER;

typedef uchar UCHAR;

struct _LAUNCH_DATA_PAGE {
    LAUNCH_DATA_HEADER Header;
    UCHAR Pad[492];
    UCHAR LaunchData[3072];
};

typedef struct _FILE_FULL_EA_INFORMATION _FILE_FULL_EA_INFORMATION, *P_FILE_FULL_EA_INFORMATION;

typedef struct _FILE_FULL_EA_INFORMATION FILE_FULL_EA_INFORMATION;

typedef ushort USHORT;

struct _FILE_FULL_EA_INFORMATION {
    ULONG NextEntryOffset;
    UCHAR Flags;
    UCHAR EaNameLength;
    USHORT EaValueLength;
    CHAR EaName[1];
};

typedef struct _MEMORY_BASIC_INFORMATION _MEMORY_BASIC_INFORMATION, *P_MEMORY_BASIC_INFORMATION;

typedef struct _MEMORY_BASIC_INFORMATION MEMORY_BASIC_INFORMATION;

struct _MEMORY_BASIC_INFORMATION {
    PVOID BaseAddress;
    PVOID AllocationBase;
    DWORD AllocationProtect;
    DWORD RegionSize;
    DWORD State;
    DWORD Protect;
    DWORD Type;
};

typedef struct _FILE_END_OF_FILE_INFORMATION _FILE_END_OF_FILE_INFORMATION, *P_FILE_END_OF_FILE_INFORMATION;

typedef struct _FILE_END_OF_FILE_INFORMATION FILE_END_OF_FILE_INFORMATION;

struct _FILE_END_OF_FILE_INFORMATION {
    LARGE_INTEGER EndOfFile;
};

typedef struct _FILE_RENAME_INFORMATION _FILE_RENAME_INFORMATION, *P_FILE_RENAME_INFORMATION;

typedef struct _FILE_RENAME_INFORMATION FILE_RENAME_INFORMATION;

typedef uchar BOOLEAN;

typedef struct _STRING _STRING, *P_STRING;

typedef struct _STRING STRING;

typedef STRING OBJECT_STRING;

typedef char * PCHAR;

struct _STRING {
    USHORT Length;
    USHORT MaximumLength;
    PCHAR Buffer;
};

struct _FILE_RENAME_INFORMATION {
    BOOLEAN ReplaceIfExists;
    HANDLE RootDirectory;
    OBJECT_STRING FileName;
};

typedef enum _KINTERRUPT_MODE {
    LevelSensitive=0,
    Latched=1
} _KINTERRUPT_MODE;

typedef enum _KINTERRUPT_MODE KINTERRUPT_MODE;

typedef struct _FILE_PIPE_INFORMATION _FILE_PIPE_INFORMATION, *P_FILE_PIPE_INFORMATION;

typedef struct _FILE_PIPE_INFORMATION FILE_PIPE_INFORMATION;

struct _FILE_PIPE_INFORMATION {
    ULONG ReadMode;
    ULONG CompletionMode;
};

typedef struct _IO_STATUS_LOCATION _IO_STATUS_LOCATION, *P_IO_STATUS_LOCATION;

struct _IO_STATUS_LOCATION {
};

typedef union _union_120 _union_120, *P_union_120;

union _union_120 {
    struct _IO_STATUS_LOCATION * CurrentStackLocation;
    ULONG PacketType;
};

typedef struct _EVENT_BASIC_INFORMATION _EVENT_BASIC_INFORMATION, *P_EVENT_BASIC_INFORMATION;

typedef enum _EVENT_TYPE {
    NotificationEvent=0,
    SynchronizationEvent=1
} _EVENT_TYPE;

typedef enum _EVENT_TYPE EVENT_TYPE;

struct _EVENT_BASIC_INFORMATION {
    EVENT_TYPE EventType;
    LONG EventState;
};

typedef struct _HAL_SHUTDOWN_REGISTRATION _HAL_SHUTDOWN_REGISTRATION, *P_HAL_SHUTDOWN_REGISTRATION;

typedef void (* PHAL_SHUTDOWN_NOTIFICATION)(struct _HAL_SHUTDOWN_REGISTRATION *);

typedef struct _LIST_ENTRY _LIST_ENTRY, *P_LIST_ENTRY;

typedef struct _LIST_ENTRY LIST_ENTRY;

struct _LIST_ENTRY {
    struct _LIST_ENTRY * Flink;
    struct _LIST_ENTRY * Blink;
};

struct _HAL_SHUTDOWN_REGISTRATION {
    PHAL_SHUTDOWN_NOTIFICATION NotificationRoutine;
    LONG Priority;
    LIST_ENTRY ListEntry;
};

typedef struct _IO_COMPLETION_BASIC_INFORMATION _IO_COMPLETION_BASIC_INFORMATION, *P_IO_COMPLETION_BASIC_INFORMATION;

typedef struct _IO_COMPLETION_BASIC_INFORMATION * PIO_COMPLETION_BASIC_INFORMATION;

struct _IO_COMPLETION_BASIC_INFORMATION {
    LONG Depth;
};

typedef struct _FILE_OBJECT _FILE_OBJECT, *P_FILE_OBJECT;

typedef struct _FILE_OBJECT FILE_OBJECT;

typedef short CSHORT;

typedef struct _DEVICE_OBJECT _DEVICE_OBJECT, *P_DEVICE_OBJECT;

typedef LONG NTSTATUS;

typedef struct _IO_COMPLETION_CONTEXT _IO_COMPLETION_CONTEXT, *P_IO_COMPLETION_CONTEXT;

typedef struct _IO_COMPLETION_CONTEXT * PIO_COMPLETION_CONTEXT;

typedef struct _KEVENT _KEVENT, *P_KEVENT;

typedef struct _KEVENT KEVENT;

typedef struct _DRIVER_OBJECT _DRIVER_OBJECT, *P_DRIVER_OBJECT;

typedef struct _DRIVER_OBJECT * PDRIVER_OBJECT;

typedef struct _IRP _IRP, *P_IRP;

typedef struct _IRP * PIRP;

typedef char CCHAR;

typedef struct _KDEVICE_QUEUE _KDEVICE_QUEUE, *P_KDEVICE_QUEUE;

typedef struct _KDEVICE_QUEUE KDEVICE_QUEUE;

typedef struct _DISPATCHER_HEADER _DISPATCHER_HEADER, *P_DISPATCHER_HEADER;

typedef struct _DISPATCHER_HEADER DISPATCHER_HEADER;

typedef void (* PDRIVER_STARTIO)(struct _DEVICE_OBJECT *, struct _IRP *);

typedef void (* PDRIVER_DELETEDEVICE)(struct _DEVICE_OBJECT *);

typedef NTSTATUS (* PDRIVER_DISMOUNTVOLUME)(struct _DEVICE_OBJECT *);

typedef NTSTATUS (* PDRIVER_DISPATCH)(struct _DEVICE_OBJECT *, struct _IRP *);

typedef struct _IO_STATUS_BLOCK _IO_STATUS_BLOCK, *P_IO_STATUS_BLOCK;

typedef struct _IO_STATUS_BLOCK IO_STATUS_BLOCK;

typedef struct _IO_STATUS_BLOCK * PIO_STATUS_BLOCK;

typedef struct _KEVENT * PKEVENT;

typedef union _union_113 _union_113, *P_union_113;

typedef union _FILE_SEGMENT_ELEMENT _FILE_SEGMENT_ELEMENT, *P_FILE_SEGMENT_ELEMENT;

typedef union _FILE_SEGMENT_ELEMENT * PFILE_SEGMENT_ELEMENT;

typedef union _union_115 _union_115, *P_union_115;

typedef short SHORT;

typedef union _union_17 _union_17, *P_union_17;

typedef ULONG ULONG_PTR;

typedef struct _struct_114 _struct_114, *P_struct_114;

typedef struct _struct_116 _struct_116, *P_struct_116;

typedef struct _KAPC _KAPC, *P_KAPC;

typedef struct _KAPC KAPC;

typedef void (* PIO_APC_ROUTINE)(PVOID, PIO_STATUS_BLOCK, ULONG);

typedef union _union_117 _union_117, *P_union_117;

typedef struct _ETHREAD _ETHREAD, *P_ETHREAD;

typedef struct _ETHREAD * PETHREAD;

typedef struct _struct_119 _struct_119, *P_struct_119;

typedef struct _FILE_OBJECT * PFILE_OBJECT;

typedef struct _KTHREAD _KTHREAD, *P_KTHREAD;

typedef struct _KDEVICE_QUEUE_ENTRY _KDEVICE_QUEUE_ENTRY, *P_KDEVICE_QUEUE_ENTRY;

typedef struct _KDEVICE_QUEUE_ENTRY KDEVICE_QUEUE_ENTRY;

typedef struct _struct_118 _struct_118, *P_struct_118;

typedef struct _KTHREAD KTHREAD;

typedef union _union_95 _union_95, *P_union_95;

typedef union _union_96 _union_96, *P_union_96;

typedef char SCHAR;

typedef struct _KAPC_STATE _KAPC_STATE, *P_KAPC_STATE;

typedef struct _KAPC_STATE KAPC_STATE;

typedef struct _KWAIT_BLOCK _KWAIT_BLOCK, *P_KWAIT_BLOCK;

typedef struct _KWAIT_BLOCK * PKWAIT_BLOCK;

typedef struct _KQUEUE _KQUEUE, *P_KQUEUE;

typedef struct _KQUEUE * PKQUEUE;

typedef struct _KTIMER _KTIMER, *P_KTIMER;

typedef struct _KTIMER KTIMER;

typedef struct _KWAIT_BLOCK KWAIT_BLOCK;

typedef struct _KSEMAPHORE _KSEMAPHORE, *P_KSEMAPHORE;

typedef struct _KSEMAPHORE KSEMAPHORE;

typedef struct _KPROCESS _KPROCESS, *P_KPROCESS;

typedef struct _KPROCESS * PKPROCESS;

typedef union _ULARGE_INTEGER _ULARGE_INTEGER, *P_ULARGE_INTEGER;

typedef union _ULARGE_INTEGER ULARGE_INTEGER;

typedef struct _KDPC _KDPC, *P_KDPC;

typedef struct _KDPC * PKDPC;

typedef struct _struct_6 _struct_6, *P_struct_6;

typedef struct _struct_7 _struct_7, *P_struct_7;

typedef ulonglong ULONGLONG;

struct _DISPATCHER_HEADER {
    UCHAR Type;
    UCHAR Absolute;
    UCHAR Size;
    UCHAR Inserted;
    LONG SignalState;
    LIST_ENTRY WaitListHead;
};

struct _KSEMAPHORE {
    DISPATCHER_HEADER Header;
    LONG Limit;
};

struct _KWAIT_BLOCK {
    LIST_ENTRY WaitListEntry;
    struct _KTHREAD * Thread;
    PVOID Object;
    struct _KWAIT_BLOCK * NextWaitBlock;
    SHORT WaitKey;
    SHORT WaitType;
};

struct _struct_7 {
    ULONG LowPart;
    ULONG HighPart;
};

struct _struct_6 {
    ULONG LowPart;
    ULONG HighPart;
};

union _ULARGE_INTEGER {
    struct _struct_6 field0;
    struct _struct_7 u;
    ULONGLONG QuadPart;
};

struct _KTIMER {
    DISPATCHER_HEADER Header;
    ULARGE_INTEGER DueTime;
    LIST_ENTRY TimerListEntry;
    PKDPC Dpc;
    LONG Period;
};

struct _KAPC_STATE {
    LIST_ENTRY ApcListHead[2];
    PKPROCESS Process;
    UCHAR KernelApcInProgress;
    UCHAR KernelApcPending;
    UCHAR UserApcPending;
    UCHAR ApcQueueable;
};

struct _KAPC {
    SHORT Type;
    CHAR ApcMode;
    UCHAR Inserted;
    struct _KTHREAD * Thread;
    LIST_ENTRY ApcListEntry;
    PVOID KernelRoutine;
    PVOID RundownRoutine;
    PVOID NormalRoutine;
    PVOID NormalContext;
    PVOID SystemArgument1;
    PVOID SystemArgument2;
};

struct _KTHREAD {
    DISPATCHER_HEADER Header;
    LIST_ENTRY MutantListHead;
    ULONG KernelTime;
    PVOID StackBase;
    PVOID StackLimit;
    PVOID KernelStack;
    PVOID TlsData;
    UCHAR State;
    UCHAR Alerted[2];
    UCHAR Alertable;
    UCHAR NpxState;
    CHAR Saturation;
    SCHAR Priority;
    UCHAR Padding;
    KAPC_STATE ApcState;
    ULONG ContextSwitches;
    LONG WaitStatus;
    UCHAR WaitIrql;
    CHAR WaitMode;
    UCHAR WaitNext;
    UCHAR WaitReason;
    PKWAIT_BLOCK WaitBlockList;
    LIST_ENTRY WaitListEntry;
    ULONG WaitTime;
    ULONG KernelApcDisable;
    LONG Quantum;
    SCHAR BasePriority;
    UCHAR DecrementCount;
    SCHAR PriorityDecrement;
    UCHAR DisableBoost;
    UCHAR NpxIrql;
    CHAR SuspendCount;
    UCHAR Preempted;
    UCHAR HasTerminated;
    PKQUEUE Queue;
    LIST_ENTRY QueueListEntry;
    KTIMER Timer;
    KWAIT_BLOCK TimerWaitBlock;
    KAPC SuspendApc;
    KSEMAPHORE SuspendSemaphore;
    LIST_ENTRY ThreadListEntry;
};

union _union_96 {
    LIST_ENTRY ReaperListEntry;
    LIST_ENTRY ActiveTimerListHead;
};

union _union_95 {
    NTSTATUS ExitStatus;
    PVOID OfsChain;
};

struct _ETHREAD {
    KTHREAD Tcb;
    LARGE_INTEGER CreateTime;
    LARGE_INTEGER ExitTime;
    union _union_95 field_0x118;
    union _union_96 field_0x11c;
    HANDLE UniqueThread;
    PVOID StartAddress;
    LIST_ENTRY IrpList;
    PVOID DebugData;
};

struct _KDEVICE_QUEUE_ENTRY {
    LIST_ENTRY DeviceListEntry;
    ULONG SortKey;
    BOOLEAN Inserted;
};

struct _DRIVER_OBJECT {
    PDRIVER_STARTIO DriverStartIo;
    PDRIVER_DELETEDEVICE DriverDeleteDevice;
    PDRIVER_DISMOUNTVOLUME DriverDismountVolume;
    PDRIVER_DISPATCH MajorFunction[14];
};

union _union_17 {
    NTSTATUS Status;
    PVOID Pointer;
};

struct _KEVENT {
    DISPATCHER_HEADER Header;
};

struct _FILE_OBJECT {
    CSHORT Type;
    BOOLEAN DeletePending:1;
    BOOLEAN ReadAccess:1;
    BOOLEAN WriteAccess:1;
    BOOLEAN DeleteAccess:1;
    BOOLEAN SharedRead:1;
    BOOLEAN SharedWrite:1;
    BOOLEAN SharedDelete:1;
    BOOLEAN Reserved:1;
    UCHAR Flags;
    struct _DEVICE_OBJECT * DeviceObject;
    PVOID FsContext;
    PVOID FsContext2;
    NTSTATUS FinalStatus;
    LARGE_INTEGER CurrentByteOffset;
    struct _FILE_OBJECT * RelatedFileObject;
    PIO_COMPLETION_CONTEXT CompletionContext;
    LONG LockCount;
    KEVENT Lock;
    KEVENT Event;
};

struct _struct_118 {
    PVOID DriverContext[5];
};

union _union_117 {
    KDEVICE_QUEUE_ENTRY DeviceQueueEntry;
    struct _struct_118 field1;
};

struct _struct_119 {
    LIST_ENTRY ListEntry;
    union _union_120 field_0x8;
};

struct _struct_116 {
    union _union_117 field_0x0;
    PETHREAD Thread;
    struct _struct_119 field_0x18;
    PFILE_OBJECT OriginalFileObject;
};

struct _IO_STATUS_BLOCK {
    union _union_17 field_0x0;
    ULONG_PTR Information;
};

struct _IO_COMPLETION_CONTEXT {
    PVOID Port;
    PVOID Key;
};

struct _struct_114 {
    PIO_APC_ROUTINE UserApcRoutine;
    PVOID UserApcContext;
};

union _union_113 {
    struct _struct_114 AsynchronousParameters;
    LARGE_INTEGER AllocationSize;
};

union _union_115 {
    struct _struct_116 Overlay;
    KAPC Apc;
    PVOID CompletionKey;
};

struct _IRP {
    CSHORT Type;
    USHORT Size;
    ULONG Flags;
    LIST_ENTRY ThreadListEntry;
    IO_STATUS_BLOCK IoStatus;
    CHAR StackCount;
    CHAR CurrentLocation;
    BOOLEAN PendingReturned;
    BOOLEAN Cancel;
    PIO_STATUS_BLOCK UserIosb;
    PKEVENT UserEvent;
    union _union_113 Overlay;
    PVOID UserBuffer;
    PFILE_SEGMENT_ELEMENT SegmentArray;
    ULONG LockedBufferLength;
    union _union_115 Tail;
};

struct _KDEVICE_QUEUE {
    SHORT Type;
    UCHAR Size;
    UCHAR Busy;
    LIST_ENTRY DeviceListHead;
};

struct _DEVICE_OBJECT {
    CSHORT Type;
    USHORT Size;
    LONG ReferenceCount;
    PDRIVER_OBJECT DriverObject;
    struct _DEVICE_OBJECT * MountedOrSelfDevice;
    PIRP CurrentIrp;
    ULONG Flags;
    PVOID DeviceExtension;
    UCHAR DeviceType;
    UCHAR StartIoFlags;
    CCHAR StackSize;
    BOOLEAN DeletePending;
    ULONG SectorSize;
    ULONG AlignmentRequirement;
    KDEVICE_QUEUE DeviceQueue;
    KEVENT DeviceLock;
    ULONG StartIoKey;
};

struct _KQUEUE {
    DISPATCHER_HEADER Header;
    LIST_ENTRY EntryListHead;
    ULONG CurrentCount;
    ULONG MaximumCount;
    LIST_ENTRY ThreadListHead;
};

struct _KPROCESS {
    LIST_ENTRY ReadListHead;
    LIST_ENTRY ThreadListHead;
    ULONG StackCount;
    LONG ThreadQuantum;
    SCHAR BasePriority;
    UCHAR DisableBoost;
    UCHAR DisableQuantum;
};

union _FILE_SEGMENT_ELEMENT {
    PVOID Buffer;
    DWORD Alignment;
};

struct _KDPC {
    CSHORT Type;
    BOOLEAN Inserted;
    UCHAR Padding;
    LIST_ENTRY DpcListEntry;
    PVOID DeferredRoutine;
    PVOID DeferredContext;
    PVOID SystemArgument1;
    PVOID SystemArgument2;
};

typedef struct _FILE_PIPE_INFORMATION * PFILE_PIPE_INFORMATION;

typedef struct _EVENT_BASIC_INFORMATION EVENT_BASIC_INFORMATION;

typedef struct _TIMER_BASIC_INFORMATION _TIMER_BASIC_INFORMATION, *P_TIMER_BASIC_INFORMATION;

typedef struct _TIMER_BASIC_INFORMATION * PTIMER_BASIC_INFORMATION;

struct _TIMER_BASIC_INFORMATION {
    LARGE_INTEGER RemainingTime;
    BOOLEAN TimerState;
};

typedef struct _LAUNCH_DATA_PAGE * PLAUNCH_DATA_PAGE;

typedef struct _FILE_FS_OBJECTID_INFORMATION _FILE_FS_OBJECTID_INFORMATION, *P_FILE_FS_OBJECTID_INFORMATION;

struct _FILE_FS_OBJECTID_INFORMATION {
    UCHAR ObjectId[16];
    UCHAR ExtendedInfo[48];
};

typedef struct CRYPTO_VECTOR CRYPTO_VECTOR, *PCRYPTO_VECTOR;

typedef uchar * PUCHAR;

typedef void (* pfXcSHAInit)(PUCHAR);

typedef void (* pfXcSHAUpdate)(PUCHAR, PUCHAR, ULONG);

typedef void (* pfXcSHAFinal)(PUCHAR, PUCHAR);

typedef void (* pfXcRC4Key)(PUCHAR, ULONG, PUCHAR);

typedef void (* pfXcRC4Crypt)(PUCHAR, ULONG, PUCHAR);

typedef void (* pfXcHMAC)(PUCHAR, ULONG, PUCHAR, ULONG, PUCHAR, ULONG, PUCHAR);

typedef ULONG (* pfXcPKEncPublic)(PUCHAR, PUCHAR, PUCHAR);

typedef ULONG (* pfXcPKDecPrivate)(PUCHAR, PUCHAR, PUCHAR);

typedef ULONG (* pfXcPKGetKeyLen)(PUCHAR);

typedef BOOLEAN (* pfXcVerifyPKCS1Signature)(PUCHAR, PUCHAR, PUCHAR);

typedef ulong * PULONG;

typedef ULONG (* pfXcModExp)(PULONG, PULONG, PULONG, PULONG, ULONG);

typedef void (* pfXcDESKeyParity)(PUCHAR, ULONG);

typedef void (* pfXcKeyTable)(ULONG, PUCHAR, PUCHAR);

typedef void (* pfXcBlockCrypt)(ULONG, PUCHAR, PUCHAR, PUCHAR, ULONG);

typedef void (* pfXcBlockCryptCBC)(ULONG, ULONG, PUCHAR, PUCHAR, PUCHAR, ULONG, PUCHAR);

typedef ULONG (* pfXcCryptService)(ULONG, PVOID);

struct CRYPTO_VECTOR {
    pfXcSHAInit pXcSHAInit;
    pfXcSHAUpdate pXcSHAUpdate;
    pfXcSHAFinal pXcSHAFinal;
    pfXcRC4Key pXcRC4Key;
    pfXcRC4Crypt pXcRC4Crypt;
    pfXcHMAC pXcHMAC;
    pfXcPKEncPublic pXcPKEncPublic;
    pfXcPKDecPrivate pXcPKDecPrivate;
    pfXcPKGetKeyLen pXcPKGetKeyLen;
    pfXcVerifyPKCS1Signature pXcVerifyPKCS1Signature;
    pfXcModExp pXcModExp;
    pfXcDESKeyParity pXcDESKeyParity;
    pfXcKeyTable pXcKeyTable;
    pfXcBlockCrypt pXcBlockCrypt;
    pfXcBlockCryptCBC pXcBlockCryptCBC;
    pfXcCryptService pXcCryptService;
};

typedef enum _FILE_INFORMATION_CLASS {
    FileMailslotQueryInformation=26,
    FileNameInformation=9,
    FileCompressionInformation=28,
    FileNetworkOpenInformation=34,
    FileDirectoryInformation=1,
    FileEaInformation=7,
    FileMoveClusterInformation=31,
    FileAlignmentInformation=17,
    FileDispositionInformation=13,
    FileReparsePointInformation=33,
    FileRenameInformation=10,
    FileBasicInformation=4,
    FileStandardInformation=5,
    FileTrackingInformation=36,
    FileLinkInformation=11,
    FileInternalInformation=6,
    FileAccessInformation=8,
    FileModeInformation=16,
    FileStreamInformation=22,
    FileObjectIdInformation=29,
    FileFullEaInformation=15,
    FileMailslotSetInformation=27,
    FilePipeLocalInformation=24,
    FileQuotaInformation=32,
    FilePipeRemoteInformation=25,
    FileEndOfFileInformation=20,
    FileCompletionInformation=30,
    FileBothDirectoryInformation=3,
    FilePositionInformation=14,
    FileFullDirectoryInformation=2,
    FileAllInformation=18,
    FileNamesInformation=12,
    FileAllocationInformation=19,
    FileMaximumInformation=37,
    FilePipeInformation=23,
    FileAttributeTagInformation=35,
    FileAlternateNameInformation=21
} _FILE_INFORMATION_CLASS;

typedef enum _FILE_INFORMATION_CLASS FILE_INFORMATION_CLASS;

typedef struct _KDEVICE_QUEUE * PKDEVICE_QUEUE;

typedef struct _FILE_EA_INFORMATION _FILE_EA_INFORMATION, *P_FILE_EA_INFORMATION;

typedef struct _FILE_EA_INFORMATION * PFILE_EA_INFORMATION;

struct _FILE_EA_INFORMATION {
    ULONG EaSize;
};

typedef struct _MMADDRESS_NODE _MMADDRESS_NODE, *P_MMADDRESS_NODE;

typedef struct _MMADDRESS_NODE * PMMADDRESS_NODE;

struct _MMADDRESS_NODE {
    ULONG_PTR StartingVpn;
    ULONG_PTR EndingVpn;
    struct _MMADDRESS_NODE * Parent;
    struct _MMADDRESS_NODE * LeftChild;
    struct _MMADDRESS_NODE * RightChild;
};

typedef enum _FSINFOCLASS {
    FileFsObjectIdInformation=8,
    FileFsMaximumInformation=9,
    FileFsAttributeInformation=5,
    FileFsFullSizeInformation=7,
    FileFsLabelInformation=2,
    FileFsDeviceInformation=4,
    FileFsSizeInformation=3,
    FileFsVolumeInformation=1,
    FileFsControlInformation=6
} _FSINFOCLASS;

typedef struct _FILE_BASIC_INFORMATION _FILE_BASIC_INFORMATION, *P_FILE_BASIC_INFORMATION;

typedef struct _FILE_BASIC_INFORMATION FILE_BASIC_INFORMATION;

struct _FILE_BASIC_INFORMATION {
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    ULONG FileAttributes;
};

typedef struct _FILE_PIPE_REMOTE_INFORMATION _FILE_PIPE_REMOTE_INFORMATION, *P_FILE_PIPE_REMOTE_INFORMATION;

typedef struct _FILE_PIPE_REMOTE_INFORMATION * PFILE_PIPE_REMOTE_INFORMATION;

struct _FILE_PIPE_REMOTE_INFORMATION {
    LARGE_INTEGER CollectDataTime;
    ULONG MaximumCollectionCount;
};

typedef struct _FILE_OBJECTID_INFORMATION _FILE_OBJECTID_INFORMATION, *P_FILE_OBJECTID_INFORMATION;

typedef union _union_56 _union_56, *P_union_56;

typedef struct _struct_57 _struct_57, *P_struct_57;

struct _struct_57 {
    UCHAR BirthVolumeId[16];
    UCHAR BirthObjectId[16];
    UCHAR DomainId[16];
};

union _union_56 {
    struct _struct_57 field0;
    UCHAR ExtendedInfo[48];
};

struct _FILE_OBJECTID_INFORMATION {
    LONGLONG FileReference;
    UCHAR ObjectId[16];
    union _union_56 field_0x18;
};

typedef struct _UNICODE_STRING _UNICODE_STRING, *P_UNICODE_STRING;

typedef ushort * PWSTR;

struct _UNICODE_STRING {
    USHORT Length;
    USHORT MaximumLength;
    PWSTR Buffer;
};

typedef struct _FILE_FS_SIZE_INFORMATION _FILE_FS_SIZE_INFORMATION, *P_FILE_FS_SIZE_INFORMATION;

struct _FILE_FS_SIZE_INFORMATION {
    LARGE_INTEGER TotalAllocationUnits;
    LARGE_INTEGER AvailableAllocationUnits;
    ULONG SectorsPerAllocationUnit;
    ULONG BytesPerSector;
};

typedef struct _FILE_FS_VOLUME_INFORMATION _FILE_FS_VOLUME_INFORMATION, *P_FILE_FS_VOLUME_INFORMATION;

typedef char OCHAR;

struct _FILE_FS_VOLUME_INFORMATION {
    LARGE_INTEGER VolumeCreationTime;
    ULONG VolumeSerialNumber;
    ULONG VolumeLabelLength;
    BOOLEAN SupportsObjects;
    OCHAR VolumeLabel[1];
};

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _FLOATING_SAVE_AREA _FLOATING_SAVE_AREA, *P_FLOATING_SAVE_AREA;

typedef struct _FLOATING_SAVE_AREA FLOATING_SAVE_AREA;

typedef ushort WORD;

typedef uchar BYTE;

struct _FLOATING_SAVE_AREA {
    WORD ControlWord;
    WORD StatusWord;
    WORD TagWord;
    WORD ErrorOpcode;
    DWORD ErrorOffset;
    DWORD ErrorSelector;
    DWORD DataOffset;
    DWORD DataSelector;
    DWORD MXCsr;
    DWORD Reserved2;
    BYTE RegisterArea[128];
    BYTE XmmRegisterArea[128];
    BYTE Reserved4[224];
    DWORD Cr0NpxState;
};

struct _CONTEXT {
    DWORD ContextFlags;
    FLOATING_SAVE_AREA FloatSave;
    DWORD Edi;
    DWORD Esi;
    DWORD Ebx;
    DWORD Edx;
    DWORD Ecx;
    DWORD Eax;
    DWORD Ebp;
    DWORD Eip;
    DWORD SegCs;
    DWORD EFlags;
    DWORD Esp;
    DWORD SegSs;
};

typedef struct _FILE_FS_SIZE_INFORMATION * PFILE_FS_SIZE_INFORMATION;

typedef struct _IRP IRP;

typedef struct _FILE_ACCESS_INFORMATION _FILE_ACCESS_INFORMATION, *P_FILE_ACCESS_INFORMATION;

typedef ULONG ACCESS_MASK;

struct _FILE_ACCESS_INFORMATION {
    ACCESS_MASK AccessFlags;
};

typedef struct _OBJECT_HANDLE_TABLE _OBJECT_HANDLE_TABLE, *P_OBJECT_HANDLE_TABLE;

typedef LONG LONG_PTR;

struct _OBJECT_HANDLE_TABLE {
    LONG HandleCount;
    LONG_PTR FirstFreeTableEntry;
    HANDLE NextHandleNeedingPool;
    PVOID * * RootTable;
    PVOID * BuiltinRootTable[8];
};

typedef struct _FILE_BOTH_DIR_INFORMATION _FILE_BOTH_DIR_INFORMATION, *P_FILE_BOTH_DIR_INFORMATION;

typedef struct _FILE_BOTH_DIR_INFORMATION * PFILE_BOTH_DIR_INFORMATION;

typedef ushort WCHAR;

struct _FILE_BOTH_DIR_INFORMATION {
    ULONG NextEntryOffset;
    ULONG FileIndex;
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER EndOfFile;
    LARGE_INTEGER AllocationSize;
    ULONG FileAttributes;
    ULONG FileNameLength;
    ULONG EaSize;
    CCHAR ShortNameLength;
    WCHAR ShortName[12];
    WCHAR FileName[1];
};

typedef struct _SINGLE_LIST_ENTRY _SINGLE_LIST_ENTRY, *P_SINGLE_LIST_ENTRY;

struct _SINGLE_LIST_ENTRY {
    struct _SINGLE_LIST_ENTRY * Next;
};

typedef struct _FILE_FS_LABEL_INFORMATION _FILE_FS_LABEL_INFORMATION, *P_FILE_FS_LABEL_INFORMATION;

struct _FILE_FS_LABEL_INFORMATION {
    ULONG VolumeLabelLength;
    OCHAR VolumeLabel[1];
};

typedef struct _FILE_FS_VOLUME_INFORMATION * PFILE_FS_VOLUME_INFORMATION;

typedef struct _FILE_STANDARD_INFORMATION _FILE_STANDARD_INFORMATION, *P_FILE_STANDARD_INFORMATION;

typedef struct _FILE_STANDARD_INFORMATION FILE_STANDARD_INFORMATION;

struct _FILE_STANDARD_INFORMATION {
    LARGE_INTEGER AllocationSize;
    LARGE_INTEGER EndOfFile;
    ULONG NumberOfLinks;
    BOOLEAN DeletePending;
    BOOLEAN Directory;
};

typedef struct _MMGLOBALDATA _MMGLOBALDATA, *P_MMGLOBALDATA;

typedef struct _MMGLOBALDATA * PMMGLOBALDATA;

typedef struct _MMPFNREGION _MMPFNREGION, *P_MMPFNREGION;

typedef struct _MMPFNREGION * PMMPFNREGION;

typedef struct _MMPTERANGE _MMPTERANGE, *P_MMPTERANGE;

typedef struct _MMPTERANGE * PMMPTERANGE;

typedef ULONG PFN_COUNT;

typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION * PRTL_CRITICAL_SECTION;

typedef struct _MMPFNFREE _MMPFNFREE, *P_MMPFNFREE;

typedef struct _MMPFNFREE MMPFNFREE;

typedef struct _MMPTE _MMPTE, *P_MMPTE;

typedef struct _MMPTE MMPTE;

typedef struct _MMPTE * PMMPTE;

typedef ULONG PFN_NUMBER;

typedef enum _MMPFN_BUSY_TYPE {
    MmMaximumUsage=11,
    MmImageUsage=7,
    MmDebuggerUsage=10,
    MmPoolUsage=4,
    MmFsCacheUsage=8,
    MmSystemPageTableUsage=3,
    MmSystemMemoryUsage=6,
    MmContiguousUsage=9,
    MmStackUsage=1,
    MmVirtualMemoryUsage=5,
    MmUnknownUsage=0,
    MmVirtualPageTableUsage=2
} _MMPFN_BUSY_TYPE;

typedef enum _MMPFN_BUSY_TYPE MMPFN_BUSY_TYPE;

typedef PFN_NUMBER (* PMMREMOVE_PAGE_ROUTINE)(MMPFN_BUSY_TYPE, PMMPTE);

typedef union _union_12 _union_12, *P_union_12;

typedef union _union_150 _union_150, *P_union_150;

typedef struct _struct_13 _struct_13, *P_struct_13;

typedef struct _HARDWARE_PTE _HARDWARE_PTE, *P_HARDWARE_PTE;

typedef struct _HARDWARE_PTE HARDWARE_PTE;

typedef struct _struct_151 _struct_151, *P_struct_151;

struct _HARDWARE_PTE {
    ULONG Valid:1;
    ULONG Write:1;
    ULONG Owner:1;
    ULONG WriteThrough:1;
    ULONG CacheDisable:1;
    ULONG Accessed:1;
    ULONG Dirty:1;
    ULONG LargePage:1;
    ULONG Global:1;
    ULONG GuardOrEndOfAllocation:1;
    ULONG PersistAllocation:1;
    ULONG reserved:1;
    ULONG PageFrameNumber:20;
};

struct _struct_151 {
    ULONG Valid:1;
    ULONG OneEntry:1;
    ULONG NextEntry:30;
};

union _union_150 {
    ULONG Long;
    HARDWARE_PTE Hard;
    struct _struct_151 List;
};

struct _MMPFNFREE {
    USHORT PackedPfnFlink;
    USHORT PackedPfnBlink;
};

struct _struct_13 {
    UCHAR Type;
    UCHAR Absolute;
    UCHAR Size;
    UCHAR Inserted;
    LONG SignalState;
    LIST_ENTRY WaitListHead;
};

union _union_12 {
    struct _struct_13 Event;
    ULONG RawEvent[4];
};

struct _RTL_CRITICAL_SECTION {
    union _union_12 Synchronization;
    LONG LockCount;
    LONG RecursionCount;
    PVOID OwningThread;
};

struct _MMGLOBALDATA {
    PMMPFNREGION RetailPfnRegion;
    PMMPTERANGE SystemPteRange;
    PULONG AvailablePages;
    PFN_COUNT * AllocatedPagesByUsage;
    PRTL_CRITICAL_SECTION AddressSpaceLock;
    PMMADDRESS_NODE * VadRoot;
    PMMADDRESS_NODE * VadHint;
    PMMADDRESS_NODE * VadFreeHint;
};

struct _MMPTE {
    union _union_150 field_0x0;
};

struct _MMPFNREGION {
    MMPFNFREE FreePagesByColor[32];
    PFN_COUNT AvailablePages;
};

struct _MMPTERANGE {
    MMPTE HeadPte;
    PMMPTE FirstCommittedPte;
    PMMPTE LastCommittedPte;
    PMMPTE LastReservedPte;
    PFN_COUNT * AvailablePages;
    PMMREMOVE_PAGE_ROUTINE RemovePageRoutine;
};

typedef struct _FILE_NETWORK_OPEN_INFORMATION _FILE_NETWORK_OPEN_INFORMATION, *P_FILE_NETWORK_OPEN_INFORMATION;

struct _FILE_NETWORK_OPEN_INFORMATION {
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER AllocationSize;
    LARGE_INTEGER EndOfFile;
    ULONG FileAttributes;
};

typedef struct _DEVICE_OBJECT DEVICE_OBJECT;

typedef struct _OBJECT_ATTRIBUTES _OBJECT_ATTRIBUTES, *P_OBJECT_ATTRIBUTES;

typedef struct _OBJECT_ATTRIBUTES * POBJECT_ATTRIBUTES;

typedef STRING * PANSI_STRING;

struct _OBJECT_ATTRIBUTES {
    HANDLE RootDirectory;
    PANSI_STRING ObjectName;
    ULONG Attributes;
};

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

struct _EXCEPTION_RECORD {
    NTSTATUS ExceptionCode;
    ULONG ExceptionFlags;
    struct _EXCEPTION_RECORD * ExceptionRecord;
    PVOID ExceptionAddress;
    ULONG NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

typedef struct _FILE_ATTRIBUTE_TAG_INFORMATION _FILE_ATTRIBUTE_TAG_INFORMATION, *P_FILE_ATTRIBUTE_TAG_INFORMATION;

typedef struct _FILE_ATTRIBUTE_TAG_INFORMATION FILE_ATTRIBUTE_TAG_INFORMATION;

struct _FILE_ATTRIBUTE_TAG_INFORMATION {
    ULONG FileAttributes;
    ULONG ReparseTag;
};

typedef struct _MM_STATISTICS _MM_STATISTICS, *P_MM_STATISTICS;

struct _MM_STATISTICS {
    ULONG Length;
    ULONG TotalPhysicalPages;
    ULONG AvailablePages;
    ULONG VirtualMemoryBytesCommitted;
    ULONG VirtualMemoryBytesReserved;
    ULONG CachePagesCommitted;
    ULONG PoolPagesCommitted;
    ULONG StackPagesCommitted;
    ULONG ImagePagesCommitted;
};

typedef BOOLEAN (* PKSYNCHRONIZE_ROUTINE)(PVOID);

typedef struct _FILE_LINK_INFORMATION _FILE_LINK_INFORMATION, *P_FILE_LINK_INFORMATION;

struct _FILE_LINK_INFORMATION {
    BOOLEAN ReplaceIfExists;
    HANDLE RootDirectory;
    ULONG FileNameLength;
    OCHAR FileName[1];
};

typedef struct _FILE_MOVE_CLUSTER_INFORMATION _FILE_MOVE_CLUSTER_INFORMATION, *P_FILE_MOVE_CLUSTER_INFORMATION;

struct _FILE_MOVE_CLUSTER_INFORMATION {
    ULONG ClusterCount;
    HANDLE RootDirectory;
    ULONG FileNameLength;
    OCHAR FileName[1];
};

typedef struct _TIME_FIELDS _TIME_FIELDS, *P_TIME_FIELDS;

struct _TIME_FIELDS {
    SHORT Year;
    SHORT Month;
    SHORT Day;
    SHORT Hour;
    SHORT Minute;
    SHORT Second;
    SHORT Millisecond;
    SHORT Weekday;
};

typedef struct _FILE_ALIGNMENT_INFORMATION _FILE_ALIGNMENT_INFORMATION, *P_FILE_ALIGNMENT_INFORMATION;

typedef struct _FILE_ALIGNMENT_INFORMATION * PFILE_ALIGNMENT_INFORMATION;

struct _FILE_ALIGNMENT_INFORMATION {
    ULONG AlignmentRequirement;
};

typedef struct _FILE_STREAM_INFORMATION _FILE_STREAM_INFORMATION, *P_FILE_STREAM_INFORMATION;

struct _FILE_STREAM_INFORMATION {
    ULONG NextEntryOffset;
    ULONG StreamNameLength;
    LARGE_INTEGER StreamSize;
    LARGE_INTEGER StreamAllocationSize;
    OCHAR StreamName[1];
};

typedef struct _FILE_MODE_INFORMATION _FILE_MODE_INFORMATION, *P_FILE_MODE_INFORMATION;

struct _FILE_MODE_INFORMATION {
    ULONG Mode;
};

typedef struct _OBJECT_TYPE _OBJECT_TYPE, *P_OBJECT_TYPE;

typedef struct _OBJECT_TYPE * POBJECT_TYPE;

struct _OBJECT_TYPE {
    PVOID AllocateProcedure;
    PVOID FreeProcedure;
    PVOID CloseProcedure;
    PVOID DeleteProcedure;
    PVOID ParseProcedure;
    PVOID DefaultObject;
    ULONG PoolTag;
};

typedef struct _OBJECT_ATTRIBUTES OBJECT_ATTRIBUTES;

typedef struct _FILE_MODE_INFORMATION * PFILE_MODE_INFORMATION;

typedef struct _DEVICE_OBJECT * PDEVICE_OBJECT;

typedef struct _KTHREAD * PRKTHREAD;

typedef struct _SID _SID, *P_SID;

typedef struct _SID * PISID;

typedef struct _SID_IDENTIFIER_AUTHORITY _SID_IDENTIFIER_AUTHORITY, *P_SID_IDENTIFIER_AUTHORITY;

typedef struct _SID_IDENTIFIER_AUTHORITY SID_IDENTIFIER_AUTHORITY;

struct _SID_IDENTIFIER_AUTHORITY {
    BYTE Value[6];
};

struct _SID {
    BYTE Revision;
    BYTE SubAuthorityCount;
    SID_IDENTIFIER_AUTHORITY IdentifierAuthority;
    DWORD SubAuthority[1];
};

typedef struct _FILE_MODE_INFORMATION FILE_MODE_INFORMATION;

typedef struct _SLIST_HEADER _SLIST_HEADER, *P_SLIST_HEADER;

typedef struct _SLIST_HEADER SLIST_HEADER;

typedef struct _struct_104 _struct_104, *P_struct_104;

typedef struct _SINGLE_LIST_ENTRY SINGLE_LIST_ENTRY;

struct _struct_104 {
    SINGLE_LIST_ENTRY Next;
    USHORT Depth;
    USHORT Sequence;
};

struct _SLIST_HEADER {
    ULONGLONG Alignment;
    struct _struct_104 field_0x8;
};

typedef void (* PIDE_INTERRUPT_ROUTINE)(void);

typedef struct _KDEVICE_QUEUE_ENTRY * PKDEVICE_QUEUE_ENTRY;

typedef struct _FILE_FS_ATTRIBUTE_INFORMATION _FILE_FS_ATTRIBUTE_INFORMATION, *P_FILE_FS_ATTRIBUTE_INFORMATION;

typedef struct _FILE_FS_ATTRIBUTE_INFORMATION * PFILE_FS_ATTRIBUTE_INFORMATION;

struct _FILE_FS_ATTRIBUTE_INFORMATION {
    ULONG FileSystemAttributes;
    LONG MaximumComponentNameLength;
    ULONG FileSystemNameLength;
    OCHAR FileSystemName[1];
};

typedef struct _FILE_COMPLETION_INFORMATION _FILE_COMPLETION_INFORMATION, *P_FILE_COMPLETION_INFORMATION;

typedef struct _FILE_COMPLETION_INFORMATION FILE_COMPLETION_INFORMATION;

struct _FILE_COMPLETION_INFORMATION {
    HANDLE Port;
    PVOID Key;
};

typedef enum _FSINFOCLASS * PFS_INFORMATION_CLASS;

typedef struct _SID SID;

typedef struct _XBOX_HARDWARE_INFO _XBOX_HARDWARE_INFO, *P_XBOX_HARDWARE_INFO;

struct _XBOX_HARDWARE_INFO {
    ULONG Flags;
    UCHAR GpuRevision;
    UCHAR McpRevision;
    UCHAR reserved[2];
};

typedef struct _FILE_FS_DEVICE_INFORMATION _FILE_FS_DEVICE_INFORMATION, *P_FILE_FS_DEVICE_INFORMATION;

typedef struct _FILE_FS_DEVICE_INFORMATION * PFILE_FS_DEVICE_INFORMATION;

typedef ULONG DEVICE_TYPE;

struct _FILE_FS_DEVICE_INFORMATION {
    DEVICE_TYPE DeviceType;
    ULONG Characteristics;
};

typedef struct _KQUEUE * PRKQUEUE;

typedef void (* PIDE_START_NEXT_PACKET_ROUTINE)(void);

typedef struct _FILE_PIPE_LOCAL_INFORMATION _FILE_PIPE_LOCAL_INFORMATION, *P_FILE_PIPE_LOCAL_INFORMATION;

struct _FILE_PIPE_LOCAL_INFORMATION {
    ULONG NamedPipeType;
    ULONG NamedPipeConfiguration;
    ULONG MaximumInstances;
    ULONG CurrentInstances;
    ULONG InboundQuota;
    ULONG ReadDataAvailable;
    ULONG OutboundQuota;
    ULONG WriteQuotaAvailable;
    ULONG NamedPipeState;
    ULONG NamedPipeEnd;
};

typedef void (* PKNORMAL_ROUTINE)(PVOID, PVOID, PVOID);

typedef struct _FILE_FS_LABEL_INFORMATION * PFILE_FS_LABEL_INFORMATION;

typedef struct _XBOX_KRNL_VERSION _XBOX_KRNL_VERSION, *P_XBOX_KRNL_VERSION;

struct _XBOX_KRNL_VERSION {
    USHORT Major;
    USHORT Minor;
    USHORT Build;
    USHORT Qfe;
};

typedef CCHAR KPROCESSOR_MODE;

typedef struct _FILE_NAMES_INFORMATION _FILE_NAMES_INFORMATION, *P_FILE_NAMES_INFORMATION;

struct _FILE_NAMES_INFORMATION {
    ULONG NextEntryOffset;
    ULONG FileIndex;
    ULONG FileNameLength;
    OCHAR FileName[1];
};

typedef struct _IDE_CHANNEL_OBJECT _IDE_CHANNEL_OBJECT, *P_IDE_CHANNEL_OBJECT;

typedef struct _IDE_CHANNEL_OBJECT * PIDE_CHANNEL_OBJECT;

typedef void (* PIDE_FINISHIO_ROUTINE)(void);

typedef BOOLEAN (* PIDE_POLL_RESET_COMPLETE_ROUTINE)(void);

typedef void (* PIDE_TIMEOUT_EXPIRED_ROUTINE)(void);

typedef void (* PIDE_START_PACKET_ROUTINE)(PDEVICE_OBJECT, PIRP);

typedef UCHAR KIRQL;

typedef struct _KDPC KDPC;

typedef struct _KINTERRUPT _KINTERRUPT, *P_KINTERRUPT;

typedef struct _KINTERRUPT KINTERRUPT;

struct _KINTERRUPT {
    PVOID ServiceRoutine;
    PVOID ServiceContext;
    ULONG BusInterruptLevel;
    ULONG Irql;
    UCHAR Connected;
    UCHAR ShareVector;
    UCHAR Mode;
    UCHAR Padding7;
    ULONG ServiceCount;
    ULONG DispatchCode[22];
};

struct _IDE_CHANNEL_OBJECT {
    PIDE_INTERRUPT_ROUTINE InterruptRoutine;
    PIDE_FINISHIO_ROUTINE FinishIoRoutine;
    PIDE_POLL_RESET_COMPLETE_ROUTINE PollResetCompleteRoutine;
    PIDE_TIMEOUT_EXPIRED_ROUTINE TimeoutExpiredRoutine;
    PIDE_START_PACKET_ROUTINE StartPacketRoutine;
    PIDE_START_NEXT_PACKET_ROUTINE StartNextPacketRoutine;
    KIRQL InterruptIrql;
    BOOLEAN ExpectingBusMasterInterrupt;
    BOOLEAN StartPacketBusy;
    BOOLEAN StartPacketRequested;
    UCHAR Timeout;
    UCHAR IoRetries;
    UCHAR MaximumIoRetries;
    PIRP CurrentIrp;
    KDEVICE_QUEUE DeviceQueue;
    ULONG PhysicalRegionDescriptorTablePhysical;
    KDPC TimerDpc;
    KDPC FinishDpc;
    KTIMER Timer;
    KINTERRUPT InterruptObject;
};

typedef ULONG LOGICAL;

typedef struct _MM_STATISTICS MM_STATISTICS;

typedef struct _OBJECT_HANDLE_TABLE * POBJECT_HANDLE_TABLE;

typedef struct _FILE_END_OF_FILE_INFORMATION * PFILE_END_OF_FILE_INFORMATION;

typedef struct _SEMAPHORE_BASIC_INFORMATION _SEMAPHORE_BASIC_INFORMATION, *P_SEMAPHORE_BASIC_INFORMATION;

struct _SEMAPHORE_BASIC_INFORMATION {
    LONG CurrentCount;
    LONG MaximumCount;
};

typedef enum _FSINFOCLASS FS_INFORMATION_CLASS;

typedef struct _FILE_PIPE_LOCAL_INFORMATION FILE_PIPE_LOCAL_INFORMATION;

typedef struct _FILE_FS_DEVICE_INFORMATION FILE_FS_DEVICE_INFORMATION;

typedef struct _FILE_ACCESS_INFORMATION FILE_ACCESS_INFORMATION;

typedef struct _FILE_MOVE_CLUSTER_INFORMATION FILE_MOVE_CLUSTER_INFORMATION;

typedef struct _IO_COMPLETION_CONTEXT IO_COMPLETION_CONTEXT;

typedef struct _KPROCESS KPROCESS;

typedef struct _FILE_QUOTA_INFORMATION _FILE_QUOTA_INFORMATION, *P_FILE_QUOTA_INFORMATION;

struct _FILE_QUOTA_INFORMATION {
    ULONG NextEntryOffset;
    ULONG SidLength;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER QuotaUsed;
    LARGE_INTEGER QuotaThreshold;
    LARGE_INTEGER QuotaLimit;
    SID Sid;
};

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD * PEXCEPTION_RECORD;

typedef struct _KMUTANT _KMUTANT, *P_KMUTANT;

typedef struct _KMUTANT KMUTANT;

struct _KMUTANT {
    DISPATCHER_HEADER Header;
    LIST_ENTRY MutantListEntry;
    PRKTHREAD OwnerThread;
    BOOLEAN Abandoned;
};

typedef struct _FILE_FS_LABEL_INFORMATION FILE_FS_LABEL_INFORMATION;

typedef struct _OBJECT_HANDLE_TABLE OBJECT_HANDLE_TABLE;

typedef struct _FILE_NAME_INFORMATION _FILE_NAME_INFORMATION, *P_FILE_NAME_INFORMATION;

typedef struct _FILE_NAME_INFORMATION * PFILE_NAME_INFORMATION;

struct _FILE_NAME_INFORMATION {
    ULONG FileNameLength;
    OCHAR FileName[1];
};

typedef struct _SEMAPHORE_BASIC_INFORMATION SEMAPHORE_BASIC_INFORMATION;

typedef struct _FILE_NAME_INFORMATION FILE_NAME_INFORMATION;

typedef struct _KSEMAPHORE * PKSEMAPHORE;

typedef ULONG PHYSICAL_ADDRESS;

typedef struct _TIME_FIELDS TIME_FIELDS;

typedef struct _UNICODE_STRING UNICODE_STRING;

typedef struct _UNICODE_STRING * PUNICODE_STRING;

typedef struct _FILE_COMPRESSION_INFORMATION _FILE_COMPRESSION_INFORMATION, *P_FILE_COMPRESSION_INFORMATION;

struct _FILE_COMPRESSION_INFORMATION {
    LARGE_INTEGER CompressedFileSize;
    USHORT CompressionFormat;
    UCHAR CompressionUnitShift;
    UCHAR ChunkShift;
    UCHAR ClusterShift;
    UCHAR Reserved[3];
};

typedef struct _FILE_DISPOSITION_INFORMATION _FILE_DISPOSITION_INFORMATION, *P_FILE_DISPOSITION_INFORMATION;

typedef struct _FILE_DISPOSITION_INFORMATION FILE_DISPOSITION_INFORMATION;

struct _FILE_DISPOSITION_INFORMATION {
    BOOLEAN DeleteFile;
};

typedef struct _FILE_INTERNAL_INFORMATION * PFILE_INTERNAL_INFORMATION;

typedef struct _MUTANT_BASIC_INFORMATION _MUTANT_BASIC_INFORMATION, *P_MUTANT_BASIC_INFORMATION;

typedef struct _MUTANT_BASIC_INFORMATION * PMUTANT_BASIC_INFORMATION;

struct _MUTANT_BASIC_INFORMATION {
    LONG CurrentCount;
    UCHAR OwnedByCaller;
    UCHAR AbandonedState;
};

typedef struct _FILE_REPARSE_POINT_INFORMATION _FILE_REPARSE_POINT_INFORMATION, *P_FILE_REPARSE_POINT_INFORMATION;

typedef struct _FILE_REPARSE_POINT_INFORMATION * PFILE_REPARSE_POINT_INFORMATION;

struct _FILE_REPARSE_POINT_INFORMATION {
    LONGLONG FileReference;
    ULONG Tag;
};

typedef struct _FILE_ALL_INFORMATION _FILE_ALL_INFORMATION, *P_FILE_ALL_INFORMATION;

typedef struct _FILE_ALL_INFORMATION * PFILE_ALL_INFORMATION;

typedef struct _FILE_INTERNAL_INFORMATION FILE_INTERNAL_INFORMATION;

typedef struct _FILE_EA_INFORMATION FILE_EA_INFORMATION;

typedef struct _FILE_POSITION_INFORMATION _FILE_POSITION_INFORMATION, *P_FILE_POSITION_INFORMATION;

typedef struct _FILE_POSITION_INFORMATION FILE_POSITION_INFORMATION;

typedef struct _FILE_ALIGNMENT_INFORMATION FILE_ALIGNMENT_INFORMATION;

struct _FILE_POSITION_INFORMATION {
    LARGE_INTEGER CurrentByteOffset;
};

struct _FILE_ALL_INFORMATION {
    FILE_BASIC_INFORMATION BasicInformation;
    FILE_STANDARD_INFORMATION StandardInformation;
    FILE_INTERNAL_INFORMATION InternalInformation;
    FILE_EA_INFORMATION EaInformation;
    FILE_ACCESS_INFORMATION AccessInformation;
    FILE_POSITION_INFORMATION PositionInformation;
    FILE_MODE_INFORMATION ModeInformation;
    FILE_ALIGNMENT_INFORMATION AlignmentInformation;
    FILE_NAME_INFORMATION NameInformation;
};

typedef struct _KFLOATING_SAVE _KFLOATING_SAVE, *P_KFLOATING_SAVE;

struct _KFLOATING_SAVE {
    ULONG ControlWord;
    ULONG StatusWord;
    ULONG ErrorOffset;
    ULONG ErrorSelector;
    ULONG DataOffset;
    ULONG DataSelector;
    ULONG Cr0NpxState;
    ULONG Spare1;
};

typedef struct _FILE_LINK_INFORMATION * PFILE_LINK_INFORMATION;

typedef struct _FILE_REPARSE_POINT_INFORMATION FILE_REPARSE_POINT_INFORMATION;

typedef struct _FILE_ALLOCATION_INFORMATION _FILE_ALLOCATION_INFORMATION, *P_FILE_ALLOCATION_INFORMATION;

typedef struct _FILE_ALLOCATION_INFORMATION * PFILE_ALLOCATION_INFORMATION;

struct _FILE_ALLOCATION_INFORMATION {
    LARGE_INTEGER AllocationSize;
};

typedef struct _KMUTANT * PRKMUTANT;

typedef struct _FILE_STREAM_INFORMATION FILE_STREAM_INFORMATION;

typedef struct _XBEIMAGE_SECTION _XBEIMAGE_SECTION, *P_XBEIMAGE_SECTION;

typedef struct _XBEIMAGE_SECTION * PXBEIMAGE_SECTION;

typedef short * PSHORT;

struct _XBEIMAGE_SECTION {
    ULONG SectionFlags;
    ULONG virtualAddress;
    ULONG VirtuaSize;
    ULONG PointerToRawData;
    ULONG SizeOfRawData;
    PUCHAR SectionName;
    ULONG SectionReferenceCount;
    PSHORT HeadSharedPageReferenceCount;
    PSHORT TailSharedPageReferenceCount;
    UCHAR SectionDigest[20];
};

typedef struct _KSEMAPHORE * PRKSEMAPHORE;

typedef struct _FILE_PIPE_REMOTE_INFORMATION FILE_PIPE_REMOTE_INFORMATION;

typedef struct _FILE_FS_ATTRIBUTE_INFORMATION FILE_FS_ATTRIBUTE_INFORMATION;

typedef struct _GENERIC_MAPPING _GENERIC_MAPPING, *P_GENERIC_MAPPING;

struct _GENERIC_MAPPING {
    ACCESS_MASK GenericRead;
    ACCESS_MASK GenericWrite;
    ACCESS_MASK GenericExecute;
    ACCESS_MASK GenericAll;
};

typedef struct _MMPFNFREE * PMMPFNFREE;

typedef enum _MODE {
    KernelMode=0,
    UserMode=1,
    MaximumMode=2
} _MODE;

typedef enum _MODE MODE;

typedef enum _FIRMWARE_REENTRY {
    HalMaximumRoutine=5,
    HalKdRebootRoutine=3,
    HalFatalErrorRebootRoutine=4,
    HalHaltRoutine=0,
    HalQuickRebootRoutine=2,
    HalRebootRoutine=1
} _FIRMWARE_REENTRY;

typedef struct _XBOX_KRNL_VERSION * PXBOX_KRNL_VERSION;

typedef struct _XBOX_REFURB_INFO _XBOX_REFURB_INFO, *P_XBOX_REFURB_INFO;

typedef struct _XBOX_REFURB_INFO XBOX_REFURB_INFO;

struct _XBOX_REFURB_INFO {
    ULONG Signature;
    ULONG PowerCycleCount;
    LARGE_INTEGER FirstSetTime;
};

typedef struct _KAPC * PKAPC;

typedef void (* PKKERNEL_ROUTINE)(PKAPC, PKNORMAL_ROUTINE *, PVOID *, PVOID *, PVOID *);

typedef struct _MMADDRESS_NODE MMADDRESS_NODE;

typedef struct _MMGLOBALDATA MMGLOBALDATA;

typedef struct _MM_STATISTICS * PMM_STATISTICS;

typedef void (* PTIMER_APC_ROUTINE)(PVOID, ULONG, LONG);

typedef struct _KEVENT * PRKEVENT;

typedef struct _FILE_NAMES_INFORMATION FILE_NAMES_INFORMATION;

typedef enum _TIMER_TYPE {
    SynchronizationTimer=1,
    NotificationTimer=0
} _TIMER_TYPE;

typedef enum _TIMER_TYPE TIMER_TYPE;

typedef struct _PS_STATISTICS _PS_STATISTICS, *P_PS_STATISTICS;

struct _PS_STATISTICS {
    ULONG Length;
    ULONG ThreadCount;
    ULONG HandleCount;
};

typedef struct _FILE_ALLOCATION_INFORMATION FILE_ALLOCATION_INFORMATION;

typedef struct _FILE_NAMES_INFORMATION * PFILE_NAMES_INFORMATION;

typedef struct _MUTANT_BASIC_INFORMATION MUTANT_BASIC_INFORMATION;

typedef struct _GENERIC_MAPPING * PGENERIC_MAPPING;

typedef struct _HAL_SHUTDOWN_REGISTRATION * PHAL_SHUTDOWN_REGISTRATION;

typedef UCHAR * PKIRQL;

typedef struct _MMPFNREGION MMPFNREGION;

typedef struct _FILE_FULL_DIR_INFORMATION _FILE_FULL_DIR_INFORMATION, *P_FILE_FULL_DIR_INFORMATION;

typedef struct _FILE_FULL_DIR_INFORMATION * PFILE_FULL_DIR_INFORMATION;

struct _FILE_FULL_DIR_INFORMATION {
    ULONG NextEntryOffset;
    ULONG FileIndex;
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER EndOfFile;
    LARGE_INTEGER AllocationSize;
    ULONG FileAttributes;
    ULONG FileNameLength;
    ULONG EaSize;
    WCHAR FileName[1];
};

typedef struct _FILE_OBJECTID_INFORMATION * PFILE_OBJECTID_INFORMATION;

typedef struct _FILE_COMPLETION_INFORMATION * PFILE_COMPLETION_INFORMATION;

typedef struct _FILE_FS_VOLUME_INFORMATION FILE_FS_VOLUME_INFORMATION;

typedef struct _OBJECT_TYPE OBJECT_TYPE;

typedef struct _FILE_PIPE_LOCAL_INFORMATION * PFILE_PIPE_LOCAL_INFORMATION;

typedef struct _KSYSTEM_TIME _KSYSTEM_TIME, *P_KSYSTEM_TIME;

struct _KSYSTEM_TIME {
    ULONG LowPart;
    LONG High1Time;
    LONG High2Time;
};

typedef struct _FILE_COMPRESSION_INFORMATION * PFILE_COMPRESSION_INFORMATION;

typedef struct _FILE_NETWORK_OPEN_INFORMATION FILE_NETWORK_OPEN_INFORMATION;

typedef struct _EVENT_BASIC_INFORMATION * PEVENT_BASIC_INFORMATION;

typedef struct _FILE_LINK_INFORMATION FILE_LINK_INFORMATION;

typedef void (* PKSTART_ROUTINE)(PVOID);

typedef void (* PKSYSTEM_ROUTINE)(PKSTART_ROUTINE, PVOID);

typedef struct _FILE_BOTH_DIR_INFORMATION FILE_BOTH_DIR_INFORMATION;

typedef enum _WAIT_TYPE {
    WaitAny=1,
    WaitAll=0
} _WAIT_TYPE;

typedef enum _WAIT_TYPE WAIT_TYPE;

typedef struct _FILE_FS_OBJECTID_INFORMATION * PFILE_FS_OBJECTID_INFORMATION;

typedef struct _FILE_MAILSLOT_QUERY_INFORMATION _FILE_MAILSLOT_QUERY_INFORMATION, *P_FILE_MAILSLOT_QUERY_INFORMATION;

struct _FILE_MAILSLOT_QUERY_INFORMATION {
    ULONG MaximumMessageSize;
    ULONG MailslotQuota;
    ULONG NextMessageSize;
    ULONG MessagesAvailable;
    LARGE_INTEGER ReadTimeout;
};

typedef struct _CONTEXT CONTEXT;

typedef struct _KSYSTEM_TIME KSYSTEM_TIME;

typedef struct _SID_IDENTIFIER_AUTHORITY * PSID_IDENTIFIER_AUTHORITY;

typedef struct _SHARE_ACCESS _SHARE_ACCESS, *P_SHARE_ACCESS;

struct _SHARE_ACCESS {
    UCHAR OpenCount;
    UCHAR Readers;
    UCHAR Writers;
    UCHAR Deleters;
    UCHAR SharedRead;
    UCHAR SharedWrite;
    UCHAR SharedDelete;
};

typedef struct _FILE_STANDARD_INFORMATION * PFILE_STANDARD_INFORMATION;

typedef enum _FIRMWARE_REENTRY FIRMWARE_REENTRY;

typedef struct _FILE_DIRECTORY_INFORMATION _FILE_DIRECTORY_INFORMATION, *P_FILE_DIRECTORY_INFORMATION;

typedef struct _FILE_DIRECTORY_INFORMATION * PFILE_DIRECTORY_INFORMATION;

struct _FILE_DIRECTORY_INFORMATION {
    ULONG NextEntryOffset;
    ULONG FileIndex;
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER EndOfFile;
    LARGE_INTEGER AllocationSize;
    ULONG FileAttributes;
    ULONG FileNameLength;
    OCHAR FileName[1];
};

typedef struct _FILE_TRACKING_INFORMATION FILE_TRACKING_INFORMATION;

typedef UCHAR XBOX_KEY_DATA[16];

typedef struct _HAL_SHUTDOWN_REGISTRATION HAL_SHUTDOWN_REGISTRATION;

typedef struct _KMUTANT * PKMUTANT;

typedef struct _ERWLOCK _ERWLOCK, *P_ERWLOCK;

typedef struct _ERWLOCK * PERWLOCK;

struct _ERWLOCK {
    LONG LockCount;
    ULONG WritersWaitingCount;
    ULONG ReadersWaitingCount;
    ULONG ReadersEntryCount;
    KEVENT WriterEvent;
    KSEMAPHORE ReaderSemaphore;
};

typedef struct _FILE_NETWORK_OPEN_INFORMATION * PFILE_NETWORK_OPEN_INFORMATION;

typedef struct _MMPTERANGE MMPTERANGE;

typedef struct _FILE_QUOTA_INFORMATION FILE_QUOTA_INFORMATION;

typedef struct _PS_STATISTICS * PPS_STATISTICS;

typedef struct _FILE_DISPOSITION_INFORMATION * PFILE_DISPOSITION_INFORMATION;

typedef void (* PKDEFERRED_ROUTINE)(PKDPC, PVOID, PVOID, PVOID);

typedef struct _SHARE_ACCESS * PSHARE_ACCESS;

typedef struct _KTHREAD * PKTHREAD;

typedef struct _FILE_FS_FULL_SIZE_INFORMATION _FILE_FS_FULL_SIZE_INFORMATION, *P_FILE_FS_FULL_SIZE_INFORMATION;

struct _FILE_FS_FULL_SIZE_INFORMATION {
    LARGE_INTEGER TotalAllocationUnits;
    LARGE_INTEGER CallerAvailableAllocationUnits;
    LARGE_INTEGER ActualAvailableAllocationUnits;
    ULONG SectorsPerAllocationUnit;
    ULONG BytesPerSector;
};

typedef struct _FILE_FS_SIZE_INFORMATION FILE_FS_SIZE_INFORMATION;

typedef WCHAR * PCWSTR;

typedef struct _FILE_ALL_INFORMATION FILE_ALL_INFORMATION;

typedef ULONG * PACCESS_MASK;

typedef union _FILE_SEGMENT_ELEMENT FILE_SEGMENT_ELEMENT;

typedef struct _IDE_CHANNEL_OBJECT IDE_CHANNEL_OBJECT;

typedef struct _XBOX_KRNL_VERSION XBOX_KRNL_VERSION;

typedef WCHAR * LPCWSTR;

typedef struct _FILE_FS_FULL_SIZE_INFORMATION FILE_FS_FULL_SIZE_INFORMATION;

typedef struct _SHARE_ACCESS SHARE_ACCESS;

typedef struct _HARDWARE_PTE * PHARDWARE_PTE;

typedef char * PSZ;

typedef struct _KTIMER * PKTIMER;

typedef struct _FILE_QUOTA_INFORMATION * PFILE_QUOTA_INFORMATION;

typedef struct _FILE_MAILSLOT_SET_INFORMATION _FILE_MAILSLOT_SET_INFORMATION, *P_FILE_MAILSLOT_SET_INFORMATION;

typedef union _LARGE_INTEGER * PLARGE_INTEGER;

struct _FILE_MAILSLOT_SET_INFORMATION {
    PLARGE_INTEGER ReadTimeout;
};

typedef struct _FILE_FS_FULL_SIZE_INFORMATION * PFILE_FS_FULL_SIZE_INFORMATION;

typedef struct _TIME_FIELDS * PTIME_FIELDS;

typedef struct _IO_COMPLETION_BASIC_INFORMATION IO_COMPLETION_BASIC_INFORMATION;

typedef ULONG * PPHYSICAL_ADDRESS;

typedef struct _CONTEXT * PCONTEXT;

typedef UNICODE_STRING * PCUNICODE_STRING;

typedef struct _GENERIC_MAPPING GENERIC_MAPPING;

typedef struct _FILE_OBJECTID_INFORMATION FILE_OBJECTID_INFORMATION;

typedef struct _ETHREAD ETHREAD;

typedef struct _XBOX_HARDWARE_INFO XBOX_HARDWARE_INFO;

typedef struct _TIMER_BASIC_INFORMATION TIMER_BASIC_INFORMATION;

typedef struct _FILE_MAILSLOT_QUERY_INFORMATION FILE_MAILSLOT_QUERY_INFORMATION;

typedef struct _DRIVER_OBJECT DRIVER_OBJECT;

typedef struct _FILE_DIRECTORY_INFORMATION FILE_DIRECTORY_INFORMATION;

typedef struct _KQUEUE KQUEUE;

typedef struct _KDPC * PRKDPC;

typedef struct _FILE_MOVE_CLUSTER_INFORMATION * PFILE_MOVE_CLUSTER_INFORMATION;

typedef struct _FILE_COMPRESSION_INFORMATION FILE_COMPRESSION_INFORMATION;

typedef enum _KWAIT_REASON {
    WrLpcReply=17,
    WrVirtualMemory=18,
    PoolAllocation=3,
    WrFsCacheIn=21,
    WrPoolAllocation=10,
    WrUserRequest=13,
    WrKernel=26,
    WrLpcReceive=16,
    FreePage=1,
    Suspended=5,
    UserRequest=6,
    WrPageOut=19,
    WrFreePage=8,
    Executive=0,
    DelayExecution=4,
    WrQueue=15,
    Spare5=24,
    WrEventPair=14,
    WrRendezvous=20,
    Spare6=25,
    Spare4=23,
    WrDelayExecution=11,
    WrSuspended=12,
    WrExecutive=7,
    WrPageIn=9,
    WrFsCacheOut=22,
    MaximumWaitReason=27,
    PageIn=2
} _KWAIT_REASON;

typedef enum _KWAIT_REASON KWAIT_REASON;

typedef struct _FILE_ACCESS_INFORMATION * PFILE_ACCESS_INFORMATION;

typedef struct _MEMORY_BASIC_INFORMATION * PMEMORY_BASIC_INFORMATION;

typedef void (* PPS_APC_ROUTINE)(PVOID, PVOID, PVOID);

typedef struct _SINGLE_LIST_ENTRY * PSINGLE_LIST_ENTRY;

typedef struct _FILE_BASIC_INFORMATION * PFILE_BASIC_INFORMATION;

typedef struct _FILE_ATTRIBUTE_TAG_INFORMATION * PFILE_ATTRIBUTE_TAG_INFORMATION;

typedef struct _KFLOATING_SAVE * PKFLOATING_SAVE;

typedef struct _FLOATING_SAVE_AREA * PFLOATING_SAVE_AREA;

typedef struct _FILE_RENAME_INFORMATION * PFILE_RENAME_INFORMATION;

typedef struct _PS_STATISTICS PS_STATISTICS;

typedef enum _FILE_INFORMATION_CLASS * PFILE_INFORMATION_CLASS;

typedef struct _LAUNCH_DATA_HEADER * PLAUNCH_DATA_HEADER;

typedef struct _FILE_STREAM_INFORMATION * PFILE_STREAM_INFORMATION;

typedef struct _FILE_MAILSLOT_QUERY_INFORMATION * PFILE_MAILSLOT_QUERY_INFORMATION;

typedef struct _FILE_FULL_DIR_INFORMATION FILE_FULL_DIR_INFORMATION;

typedef struct _FILE_MAILSLOT_SET_INFORMATION * PFILE_MAILSLOT_SET_INFORMATION;

typedef struct _ERWLOCK ERWLOCK;

typedef struct _KINTERRUPT * PKINTERRUPT;

typedef BOOLEAN (* PKSERVICE_ROUTINE)(PKINTERRUPT, PVOID);

typedef struct _LAUNCH_DATA_PAGE LAUNCH_DATA_PAGE;

typedef struct _KFLOATING_SAVE KFLOATING_SAVE;

typedef ULONG * PPFN_NUMBER;

typedef void (* PKRUNDOWN_ROUTINE)(PKAPC);

typedef struct _SLIST_HEADER * PSLIST_HEADER;

typedef struct _FILE_FULL_EA_INFORMATION * PFILE_FULL_EA_INFORMATION;

typedef STRING * POBJECT_STRING;

typedef LONG KPRIORITY;

typedef struct _FILE_POSITION_INFORMATION * PFILE_POSITION_INFORMATION;

typedef struct _SEMAPHORE_BASIC_INFORMATION * PSEMAPHORE_BASIC_INFORMATION;

typedef struct _KAPC * PRKAPC;

typedef char * PSTR;

typedef struct _FILE_FS_OBJECTID_INFORMATION FILE_FS_OBJECTID_INFORMATION;

typedef struct _FILE_MAILSLOT_SET_INFORMATION FILE_MAILSLOT_SET_INFORMATION;

typedef void (* PCREATE_THREAD_NOTIFY_ROUTINE)(PETHREAD, HANDLE, BOOLEAN);

typedef struct _XBEIMAGE_SECTION XBEIMAGE_SECTION;

#define AV_PACK_HDTV 4

#define MEM_DECOMMIT 16384

#define STATUS_INVALID_PARAMETER_10 3221225720

#define SYNCHRONIZE 1048576

#define STATUS_INVALID_PARAMETER_11 3221225721

#define STATUS_INVALID_PARAMETER_12 3221225722

#define STATUS_TIMEOUT 258

#define TRUE 1

#define STATUS_GUARD_PAGE_VIOLATION 2147483649

#define MEM_LARGE_PAGES 536870912

#define FILE_VALID_MAILSLOT_OPTION_FLAGS 50

#define AV_PACK_SCART 3

#define IRP_DEFER_IO_COMPLETION 128

#define FILE_SUPERSEDE 0

#define SPECIFIC_RIGHTS_ALL 65535

#define XBOX_HW_FLAG_ARCADE 8

#define STANDARD_RIGHTS_READ 131072

#define MEM_COMMIT 4096

#define FILE_VALID_OPTION_FLAGS 16777215

#define FILE_DELETE_ON_CLOSE 4096

#define LDT_NONE 4294967295

#define STATUS_ALERTED 257

#define STATUS_INVALID_HANDLE 3221225480

#define NULL 0

#define FILE_APPEND_DATA 4

#define MEM_RESET 524288

#define STATUS_INVALID_PARAMETER_7 3221225717

#define PAGE_READWRITE 4

#define STATUS_INVALID_PARAMETER_8 3221225718

#define STATUS_INVALID_PARAMETER_9 3221225719

#define FILE_WRITE_DATA 2

#define STATUS_INVALID_PARAMETER_3 3221225713

#define STATUS_INVALID_PARAMETER_4 3221225714

#define STATUS_INVALID_PARAMETER_5 3221225715

#define STATUS_INVALID_PARAMETER_6 3221225716

#define FILE_SHARE_WRITE 2

#define STATUS_INVALID_PARAMETER_1 3221225711

#define FILE_NO_INTERMEDIATE_BUFFERING 8

#define STATUS_INVALID_PARAMETER_2 3221225712

#define FILE_CREATE_TREE_CONNECTION 128

#define FILE_OPEN_REPARSE_POINT 2097152

#define STATUS_DATATYPE_MISALIGNMENT 2147483650

#define STATUS_FILE_IS_A_DIRECTORY 3221225658

#define STATUS_IMAGE_GAME_REGION_VIOLATION 3221553153

#define PAGE_NOACCESS 1

#define FILE_READ_ATTRIBUTES 128

#define FILE_ADD_FILE 2

#define FILE_VALID_PIPE_OPTION_FLAGS 50

#define STANDARD_RIGHTS_EXECUTE 131072

#define MEM_RELEASE 32768

#define STATUS_OBJECT_TYPE_MISMATCH 3221225508

#define GENERIC_WRITE 1073741824

#define STATUS_OBJECT_NAME_NOT_FOUND 3221225524

#define FILE_ATTRIBUTE_DIRECTORY 16

#define MEM_NOZERO 8388608

#define STATUS_SUCCESS 0

#define STATUS_IN_PAGE_ERROR 3221225478

#define AV_PACK_VGA 5

#define FILE_OVERWRITE_IF 5

#define FILE_ATTRIBUTE_DEVICE 64

#define LDT_LAUNCH_DASHBOARD 1

#define STANDARD_RIGHTS_REQUIRED 983040

#define FILE_OPEN 1

#define FILE_CREATE 2

#define PAGE_EXECUTE_READ 32

#define STATUS_SINGLE_STEP 2147483652

#define ACCESS_SYSTEM_SECURITY 16777216

#define EXCEPTION_EXIT_UNWIND 4

#define STANDARD_RIGHTS_WRITE 131072

#define FILE_ATTRIBUTE_HIDDEN 2

#define FILE_VALID_SET_FLAGS 54

#define DELETE 65536

#define STATUS_ILLEGAL_INSTRUCTION 3221225501

#define LOW_PRIORITY 0

#define GENERIC_ALL 268435456

#define FILE_OVERWRITTEN 3

#define OBJ_EXCLUSIVE 32

#define FILE_SEQUENTIAL_ONLY 4

#define IRP_CLOSE_OPERATION 64

#define FILE_GENERIC_READ 1179785

#define MEM_PRIVATE 131072

#define MEM_4MB_PAGES 2147483648

#define PAGE_EXECUTE_READWRITE 64

#define FILE_MAXIMUM_DISPOSITION 5

#define FILE_OPEN_FOR_FREE_SPACE_QUERY 8388608

#define EXCEPTION_UNWIND 102

#define STATUS_INVALID_IMAGE_FORMAT 3221225595

#define STATUS_NONCONTINUABLE_EXCEPTION 3221225509

#define PAGE_EXECUTE 16

#define STATUS_OBJECT_NAME_COLLISION 3221225525

#define STATUS_INTEGER_DIVIDE_BY_ZERO 3221225620

#define STATUS_INTEGER_OVERFLOW 3221225621

#define EXCEPTION_UNWINDING 2

#define FILE_SHARE_DELETE 4

#define FILE_SUPERSEDED 0

#define MEM_FREE 65536

#define FILE_ADD_SUBDIRECTORY 4

#define STATUS_OBJECT_NAME_EXISTS 1073741824

#define STATUS_ABANDONED_WAIT_0 128

#define MEM_TOP_DOWN 1048576

#define FILE_RANDOM_ACCESS 2048

#define EXCEPTION_NONCONTINUABLE 1

#define STATUS_FLOAT_DIVIDE_BY_ZERO 3221225614

#define FILE_COMPLETE_IF_OPLOCKED 256

#define IRP_WRITE_OPERATION 32

#define STATUS_NO_MORE_FILES 2147483654

#define IRP_UNMAP_SEGMENT_ARRAY 2048

#define OBJ_OPENIF 128

#define IRP_OB_QUERY_NAME 256

#define FILE_STRUCTURED_STORAGE 1089

#define FILE_ATTRIBUTE_SYSTEM 4

#define EXCEPTION_STACK_INVALID 8

#define READ_CONTROL 131072

#define FILE_CREATE_PIPE_INSTANCE 4

#define PAGE_VIDEO 0

#define STATUS_FLOAT_OVERFLOW 3221225617

#define FILE_OVERWRITE 4

#define ObWin32NamedObjectsDirectory -4

#define STATUS_END_OF_FILE 3221225489

#define FILE_WRITE_ATTRIBUTES 256

#define STATUS_FLOAT_INEXACT_RESULT 3221225615

#define FILE_WRITE_EA 16

#define STATUS_FLOAT_STACK_CHECK 3221225618

#define PAGE_EXECUTE_WRITECOPY 128

#define FILE_DOES_NOT_EXIST 5

#define STATUS_FLOAT_DENORMAL_OPERAND 3221225613

#define STATUS_ALREADY_COMMITTED 3221225505

#define GENERIC_READ 2147483648

#define PAGE_READONLY 2

#define EXCEPTION_COLLIDED_UNWIND 64

#define ObDosDevicesDirectory -3

#define IRP_UNLOCK_USER_BUFFER 512

#define STATUS_HANDLE_NOT_CLOSABLE 3221226037

#define PAGE_NOCACHE 512

#define FILE_COPY_STRUCTURED_STORAGE 65

#define IRP_NO_CANCELIO 4096

#define STATUS_INVALID_PARAMETER 3221225485

#define FILE_ATTRIBUTE_NORMAL 128

#define STANDARD_RIGHTS_ALL 2031616

#define XBOX_HW_FLAG_INTERNAL_USB_HUB 1

#define FILE_NON_DIRECTORY_FILE 64

#define PAGE_WRITECOMBINE 1024

#define IRP_SYNCHRONOUS_API 4

#define STATUS_WAIT_0 0

#define OBJ_VALID_ATTRIBUTES 498

#define FILE_OPENED 1

#define STATUS_INVALID_DISPOSITION 3221225510

#define STATUS_OBJECT_NAME_INVALID 3221225523

#define LOW_REALTIME_PRIORITY 16

#define IRP_READ_OPERATION 16

#define GENERIC_EXECUTE 536870912

#define MAXIMUM_ALLOWED 33554432

#define FILE_EXECUTE 32

#define FILE_OPEN_IF 3

#define OBJ_INHERIT 2

#define FILE_EXISTS 4

#define PAGE_OLD_VIDEO 2048

#define PAGE_GUARD 256

#define FILE_DELETE_CHILD 64

#define PAGE_WRITECOPY 8

#define FILE_ATTRIBUTE_READONLY 1

#define STATUS_CONTROL_C_EXIT 3221225786

#define MEM_MAPPED 262144

#define STATUS_ACCESS_DENIED 3221225506

#define FILE_GENERIC_EXECUTE 1179808

#define AV_PACK_RFU 2

#define EXCEPTION_MAXIMUM_PARAMETERS 15

#define EXCEPTION_NESTED_CALL 16

#define OBJ_CASE_INSENSITIVE 64

#define STATUS_DATA_OVERRUN 3221225532

#define FILE_RESERVE_OPFILTER 1048576

#define STATUS_INSUFFICIENT_RESOURCES 3221225626

#define STATUS_NO_MEMORY 3221225495

#define FILE_WRITE_THROUGH 2

#define STATUS_BUFFER_TOO_SMALL 3221225507

#define IRP_SCATTER_GATHER_OPERATION 1024

#define FILE_LIST_DIRECTORY 1

#define AV_PACK_NONE 0

#define STATUS_TOO_MANY_SECRETS 3221225814

#define MEM_RESERVE 8192

#define FILE_ATTRIBUTE_ARCHIVE 32

#define MAXIMUM_PRIORITY 32

#define FILE_SYNCHRONOUS_IO_NONALERT 32

#define STATUS_ARRAY_BOUNDS_EXCEEDED 3221225612

#define FILE_OPEN_BY_FILE_ID 8192

#define FILE_TRAVERSE 32

#define STATUS_USER_APC 192

#define STATUS_NO_YIELD_PERFORMED 1073741860

#define IRP_CREATE_OPERATION 8

#define AV_PACK_STANDARD 1

#define XBOX_480P_MACROVISION_ENABLED 4

#define FILE_GENERIC_WRITE 1179926

#define FILE_ALL_ACCESS 2032127

#define STATUS_BUFFER_OVERFLOW 2147483653

#define FILE_SYNCHRONOUS_IO_ALERT 16

#define AV_PACK_SVIDEO 6

#define FILE_CREATED 2

#define IRP_MOUNT_COMPLETION 2

#define FILE_NO_EA_KNOWLEDGE 512

#define WRITE_DAC 262144

#define STATUS_STACK_OVERFLOW 3221225725

#define OBJ_OPENLINK 256

#define STATUS_PENDING 259

#define IRP_NOCACHE 1

#define STATUS_ACCESS_VIOLATION 3221225477

#define EXCEPTION_TARGET_UNWIND 32

#define STATUS_FLOAT_UNDERFLOW 3221225619

#define FILE_OPEN_NO_RECALL 4194304

#define STATUS_SEGMENT_NOTIFICATION 1073741829

#define WRITE_OWNER 524288

#define FILE_READ_DATA 1

#define FILE_NO_COMPRESSION 32768

#define FILE_DIRECTORY_FILE 1

#define STATUS_FLOAT_INVALID_OPERATION 3221225616

#define STATUS_IMAGE_MEDIA_TYPE_VIOLATION 3221553154

#define FILE_OPEN_FOR_RECOVERY 1024

#define STATUS_BREAKPOINT 2147483651

#define XBOX_KEY_LENGTH 16

#define FALSE 0

#define FILE_OPEN_FOR_BACKUP_INTENT 16384

#define STATUS_PRIVILEGED_INSTRUCTION 3221225622

#define HIGH_PRIORITY 31

#define FILE_SHARE_READ 1

#define XBOX_HW_FLAG_DEVKIT_KERNEL 2

#define OBJ_PERMANENT 16

#define FILE_ATTRIBUTE_TEMPORARY 256

#define FILE_READ_EA 8

typedef ULONG_PTR SIZE_T;

typedef STRING ANSI_STRING;

typedef uint * PUINT;

typedef ULONG_PTR * PSIZE_T;

typedef longlong * PLONGLONG;

typedef void * LPVOID;

typedef char * POCHAR;

typedef long * LPLONG;

typedef struct _STRING * PSTRING;

typedef char * LPCSTR;

typedef long * PLONG;

typedef union _ULARGE_INTEGER * PULARGE_INTEGER;

typedef int * PINT;

typedef struct _RTL_CRITICAL_SECTION RTL_CRITICAL_SECTION;

typedef uint UINT;

typedef ulong * LPDWORD;

typedef ulong * PDWORD;

typedef WCHAR * LPWSTR;

typedef int * LPINT;

typedef struct _LIST_ENTRY * PLIST_ENTRY;

typedef char * PCH;

typedef char * PCSTR;

typedef uchar * PBOOLEAN;

typedef int * PBOOL;

typedef char * PCSZ;

typedef ULONG_PTR DWORD_PTR;

typedef ushort * PUSHORT;

typedef char * LPCH;

typedef int INT;

typedef uint * LPUINT;

typedef void * LPCVOID;

typedef char * PSCHAR;

typedef int BOOL;

typedef PVOID * PHANDLE;

#define MAXDWORD 4294967295

#define __WORDSIZE 32




int FUN_00011000(void);
undefined4 FUN_00011050(void);
undefined FUN_00011060(void);
void FUN_00011070(char *param_1,undefined4 param_2);
int FUN_00011120(byte *param_1,int param_2);
void FUN_00011190(void);
void FUN_000113c0(void);
float10 FUN_00011dd0(float param_1,float param_2,float *param_3,float *param_4);
int FUN_00011e30(int *param_1,int param_2);
void FUN_00011e70(float *param_1,int *param_2);
undefined4 FUN_00011f40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,float param_5);
undefined4 FUN_00011fa0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,float param_5);
float10 FUN_00012000(undefined4 *param_1,int param_2,undefined4 *param_3);
void FUN_00015640(void);
void FUN_000156a0(void);
int FUN_00015910(void);
void FUN_00016490(void);
int FUN_00016560(int param_1,undefined4 param_2,undefined4 param_3);
void __fastcall FUN_00016600(undefined4 param_1);
void FUN_000166b0(int param_1);
void FUN_00016e20(void);
void FUN_00016e90(void);
void FUN_00016ef0(int param_1,int param_2);
void FUN_00016f30(int param_1,float param_2,int param_3);
void FUN_00016fa0(int param_1,undefined4 param_2);
void FUN_00017010(void);
void FUN_00017280(float *param_1,undefined4 *param_2,float param_3,int param_4);
void FUN_00017450(char *param_1,float *param_2,undefined2 *param_3,short *param_4,char *param_5);
float10 FUN_00017840(int param_1,undefined4 param_2,byte param_3);
undefined4 FUN_000179c0(float *param_1,short *param_2);
void FUN_00017a50(undefined4 *param_1,char **param_2);
undefined4 FUN_0001a740(int param_1,int param_2,float param_3,int param_4,int param_5,float param_6);
undefined4 FUN_0001a7a0(int param_1,int param_2,float param_3,int param_4,int param_5,float param_6);
void FUN_0001a800(void);
float10 FUN_0001a950(float *param_1,char *param_2,int param_3,int param_4);
void FUN_0001ae60(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 *param_4,int param_5);
void FUN_0001b050(undefined4 param_1,undefined *param_2,undefined4 param_3,undefined4 param_4);
int FUN_0001b090(int param_1,char *param_2,undefined4 param_3);
void FUN_0001b100(void);
void FUN_0001b630(void);
void FUN_0001bae0(void);
void FUN_0001bbe0(int param_1);
float10 FUN_0001beb0(int param_1,int param_2);
void FUN_0001bf60(int param_1,int param_2);
int FUN_0001cb80(void);
void FUN_0001cba0(void);
void FUN_0001cc50(int param_1);
void FUN_0001d010(int param_1,undefined4 param_2);
void FUN_0001d2c0(undefined4 param_1,undefined4 param_2);
void FUN_0001d390(undefined4 param_1,undefined4 param_2);
void FUN_0001d450(void);
void FUN_0001d480(int param_1);
void FUN_0001d6d0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5,uint param_6);
void FUN_0001d8b0(float *param_1);
undefined * FUN_0001dac0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined *FUN_0001daf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_0001dba0(void);
undefined4 FUN_0001dbc0(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_0001dc10(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_0001dc50(undefined4 param_1,undefined4 param_2);
void FUN_0001ddd0(void);
undefined4 FUN_0001dea0(void);
void FUN_0001df10(int param_1);
void FUN_0001e1c0(void);
void FUN_0001e290(void);
undefined4 FUN_0001e2b0(int param_1,int param_2,int param_3,int param_4);
void FUN_0001e3f0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_0001e540(void);
undefined4 FUN_0001eab0(void);
int FUN_0001ed00(int param_1,uint param_2);
void FUN_0001edb0(undefined4 param_1,int param_2);
void FUN_0001ee20(int param_1,undefined *param_2,undefined4 param_3);
undefined4 FUN_0001eea0(int param_1,int param_2,undefined *param_3);
undefined4 FUN_0001efc0(int param_1,int param_2,undefined *param_3);
undefined4 FUN_0001f0e0(int param_1,undefined *param_2);
undefined4 FUN_0001f150(int param_1,undefined *param_2);
undefined4 FUN_0001f1d0(undefined4 param_1,int param_2,undefined *param_3,int param_4,int param_5,int param_6);
undefined4 FUN_0001f240(int param_1,undefined *param_2);
void FUN_0001f330(int param_1);
void FUN_0001f380(void);
void FUN_0001f3d0(float *param_1,undefined4 param_2);
undefined * FUN_0001f480(int param_1,int param_2,int param_3,int param_4);
void FUN_0001f4e0(void);
void FUN_0001f510(float *param_1,undefined2 param_2,int param_3,undefined4 *param_4);
void FUN_0001f830(void);
void FUN_0001fa30(void);
float10 FUN_0001fd60(float *param_1);
float10 FUN_0001ff40(float *param_1);
undefined * FUN_00020110(float param_1,float param_2,float param_3,float param_4,float param_5);
undefined * FUN_00020370(undefined4 param_1,float param_2);
undefined4 FUN_00020500(float *param_1,float *param_2,float *param_3,float *param_4);
undefined4 FUN_00020760(float *param_1,float *param_2);
void FUN_00020a10(int param_1,undefined *param_2,int param_3);
undefined4 FUN_00020bd0(undefined4 param_1,int param_2);
void FUN_00020dc0(void);
void FUN_00021430(void);
undefined4 FUN_00021730(int param_1,int *param_2,uint param_3,int param_4);
void FUN_00021c50(undefined4 param_1,int param_2);
undefined4 FUN_00021da0(int param_1,undefined4 param_2,int param_3);
undefined4 FUN_00021ee0(undefined4 param_1,int param_2,int param_3,int param_4);
void FUN_000221f0(undefined4 param_1,int param_2,int param_3,uint param_4);
undefined4 FUN_000222d0(int param_1,int param_2);
undefined4 FUN_00022370(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,int param_7);
void FUN_000224f0(void);
void FUN_00023180(void);
void FUN_00023a90(void);
float10 FUN_00023af0(int param_1,int param_2,float param_3,float param_4);
undefined4 FUN_00023c00(int param_1,int param_2,int *param_3,int param_4,int *param_5);
void FUN_00024010(void);
void FUN_00024060(void);
void FUN_00024300(int param_1,undefined4 *param_2);
undefined4 FUN_00024430(int param_1,int param_2,int param_3);
void FUN_00024730(int param_1);
undefined4 FUN_00024780(int param_1,int param_2);
void FUN_00024a20(int param_1,int param_2);
void FUN_00024ba0(int param_1,int param_2);
void FUN_00024be0(byte *param_1,int param_2);
void FUN_00024c00(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5,int param_6);
void FUN_00024e10(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5);
int FUN_00024ef0(undefined4 *param_1,uint *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,undefined4 param_8,int param_9);
void FUN_00025450(char *param_1,int param_2,int param_3,int param_4);
void FUN_00026b20(undefined4 *param_1,undefined2 param_2);
void FUN_00026b50(int param_1,float *param_2,float param_3,float param_4);
void FUN_00026e90(int param_1);
void FUN_00026fb0(int param_1);
void FUN_00027380(void);
void FUN_00027b70(int param_1,int param_2);
void FUN_0002b2d0(void);
void FUN_0002b650(void);
undefined4 FUN_0002b7e0(undefined4 param_1);
void FUN_0002b850(undefined4 *param_1);
void FUN_0002bbd0(void);
undefined4 FUN_0002bd00(undefined4 param_1,undefined4 param_2);
int FUN_0002bd80(undefined4 param_1);
bool FUN_0002bf30(void);
bool FUN_0002c020(int param_1);
void FUN_0002c2c0(void);
void FUN_0002c330(void);
void thunk_FUN_0007acc0(void);
void FUN_0002c3c0(int param_1);
void FUN_0002c480(void);
void FUN_0002c5c0(void);
void FUN_0002c6f0(void);
void FUN_0002c770(void);
void FUN_0002c9e0(void);
void FUN_0002cc10(undefined4 param_1);
void FUN_0002cc30(int param_1,int param_2);
void FUN_0002d0f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_0002d130(void);
void FUN_0002d950(int param_1);
void FUN_0002de20(float param_1,float param_2,float param_3,float param_4,undefined4 param_5,undefined4 param_6);
void FUN_0002dec0(void);
void FUN_0002dfb0(undefined4 *param_1,float param_2);
void FUN_0002e1a0(int param_1,undefined4 param_2,float *param_3);
void FUN_0002e360(void);
undefined *FUN_0002e520(float *param_1,int param_2,int param_3,undefined4 *param_4,undefined4 param_5,undefined4 param_6);
undefined * FUN_0002ea00(float *param_1,int param_2,int param_3,undefined4 *param_4);
void FUN_0002eef0(void);
void FUN_0002f290(void);
void FUN_00031420(void);
void FUN_00031a50(void);
undefined4 FUN_00031d30(float param_1,float param_2,float param_3,float *param_4,float *param_5);
int FUN_00032c00(int param_1,int param_2,uint param_3,uint param_4,uint param_5);
void FUN_00032cc0(void);
int FUN_00032fc0(void);
void FUN_00033010(int param_1,int *param_2);
void FUN_00033040(int param_1,int *param_2);
void FUN_00033080(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_000330b0(int param_1,short param_2,short param_3);
void FUN_00033100(int param_1,short param_2,short param_3);
void FUN_00033150(int param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4,undefined4 param_5);
void FUN_00033190(int param_1,int param_2);
void FUN_00033250(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_00033280(int param_1,undefined2 param_2);
undefined * FUN_000332a0(int param_1);
void FUN_000332e0(int param_1,int *param_2);
void FUN_00033330(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void thunk_FUN_00032cc0(void);
void FUN_000335d0(undefined4 param_1);
void FUN_000335e0(int param_1,int param_2);
int FUN_00033670(byte *param_1);
void FUN_000336e0(undefined4 param_1);
int FUN_000336f0(int param_1,int param_2,int param_3,int param_4,int param_5);
int FUN_000338f0(undefined4 param_1,float param_2);
void FUN_00034220(int *param_1);
void FUN_00034670(int param_1,int param_2);
void FUN_000346b0(int *param_1);
void FUN_000347d0(int *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4);
void FUN_00034820(int param_1,undefined4 *param_2,int param_3,undefined4 *param_4,undefined4 *param_5);
void FUN_00034c40(undefined4 param_1,undefined4 param_2,undefined4 param_3,short param_4,short param_5,undefined4 param_6);
void FUN_00034ca0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_00034cd0(void);
void FUN_00035010(int *param_1);
void FUN_00035280(undefined *param_1);
void FUN_000352c0(int param_1);
void thunk_FUN_000a4030(void);
int FUN_00035ee0(int param_1,undefined4 param_2);
undefined4 FUN_00035f30(int param_1,int *param_2,undefined4 param_3);
void FUN_00035f80(undefined4 param_1,undefined4 param_2);
void FUN_00035fa0(undefined4 param_1,undefined4 param_2);
void FUN_00035fc0(int param_1);
void FUN_00035ff0(void);
void thunk_FUN_000a0a10(void);
void FUN_00036010(int param_1,int *param_2);
int FUN_000360b0(int param_1,int *param_2);
undefined4 * FUN_00036120(int param_1);
void FUN_000361b0(int param_1,uint param_2);
void FUN_00036200(int param_1,uint param_2);
undefined * thunk_FUN_000eb270(void);
int FUN_00036290(int param_1);
void FUN_000362f0(int *param_1,short param_2,short param_3);
undefined4 FUN_00036330(int **param_1);
undefined4 FUN_000369f0(int *param_1);
int * FUN_00036e90(int param_1,undefined4 param_2,int param_3,undefined4 param_4);
int FUN_00036fd0(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,undefined4 param_6,float param_7);
int FUN_000371f0(int param_1,int param_2,int param_3,undefined4 param_4);
void FUN_00037330(void);
void FUN_00037340(int param_1,float param_2);
void FUN_00037520(void);
int FUN_00037540(void);
void FUN_000375f0(void);
float10 FUN_00037630(void);
void FUN_00037650(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6);
void FUN_00037a60(int *param_1,undefined4 param_2,int param_3,float param_4,int param_5);
void FUN_00037b20(int *param_1,undefined4 param_2,int param_3,float param_4,int param_5);
void FUN_00037be0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6);
void FUN_00037d40(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6);
void FUN_00037e50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);
void FUN_00037f60(int param_1,int param_2,int param_3,int param_4,float param_5,float param_6,float param_7,float param_8,undefined4 param_9,int param_10);
void FUN_000381d0(float *param_1,float *param_2);
float * FUN_00038250(undefined4 param_1,int param_2,int param_3,int param_4,float param_5,int param_6);
void FUN_00038600(int param_1);
void FUN_00038c20(undefined4 param_1,int param_2,int param_3);
void FUN_00038d70(int *param_1,undefined4 param_2);
void FUN_00038da0(undefined4 param_1);
void FUN_00038dd0(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_00038e00(void);
void FUN_00038e30(int param_1,int param_2,int param_3,undefined4 *param_4);
undefined4 FUN_00038ec0(void);
void FUN_00038ed0(int param_1);
void FUN_00038f30(void);
int FUN_00038fb0(int param_1,undefined4 param_2,int param_3,undefined4 param_4);
int FUN_00039190(int param_1,undefined4 param_2,int param_3,undefined4 param_4);
void FUN_00039230(int param_1);
undefined4 FUN_00039340(void);
void FUN_00039350(void);
void FUN_00039360(void);
void FUN_00039370(void);
void FUN_000393a0(void);
void FUN_000393d0(int param_1);
void FUN_000394a0(undefined2 *param_1,undefined2 *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_00039580(void);
undefined4 FUN_000395d0(void);
void FUN_000395e0(undefined4 param_1);
void FUN_000395f0(void);
void FUN_00039670(void);
undefined4 FUN_00039760(int param_1);
void FUN_00039780(void);
byte FUN_000397a0(int param_1);
undefined4 FUN_00039800(void);
undefined4 FUN_00039810(void);
undefined4 FUN_00039820(void);
undefined4 FUN_00039830(void);
void FUN_00039840(void);
void FUN_00039870(void);
void FUN_000398a0(undefined4 param_1);
void FUN_000398c0(undefined4 param_1);
void FUN_000398d0(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
void FUN_00039920(void);
void FUN_00039970(int param_1);
undefined4 FUN_000399f0(void);
undefined4 FUN_00039a80(void);
undefined4 FUN_00039ba0(void);
undefined4 FUN_00039cc0(int param_1);
undefined4 FUN_00039d40(undefined4 param_1,undefined4 param_2);
undefined4 FUN_00039d60(void);
undefined4 FUN_00039e00(void);
undefined4 FUN_00039ea0(undefined4 param_1);
undefined4 FUN_00039eb0(undefined4 param_1);
int FUN_00039ed0(void);
int FUN_00039f08(undefined4 param_1,undefined4 param_2,int param_3,int param_4);
undefined4 FUN_00039fe0(int param_1);
int FUN_0003a140(void);
undefined4 FUN_0003a220(int param_1);
undefined4 FUN_0003a310(int param_1);
undefined4 FUN_0003a360(int param_1,undefined4 param_2);
undefined4 FUN_0003a3c0(undefined4 param_1);
undefined4 FUN_0003a400(void);
undefined4 FUN_0003a430(void);
void FUN_0003a450(int param_1);
undefined4 FUN_0003a4f0(void);
undefined4 FUN_0003a530(void);
undefined4 FUN_0003a550(int *param_1,int **param_2,int *param_3);
void FUN_0003a6a0(int param_1,int param_2,undefined4 param_3);
undefined4 FUN_0003a6e0(undefined4 param_1);
void FUN_0003a700(undefined4 param_1,undefined4 param_2);
void FUN_0003a710(undefined4 param_1,undefined4 param_2);
undefined4 FUN_0003a720(void);
undefined4 FUN_0003a740(void);
undefined4 FUN_0003a760(void);
undefined4 FUN_0003a780(void);
undefined4 FUN_0003a7a0(undefined4 param_1);
undefined4 FUN_0003a7c0(void);
undefined4 FUN_0003a7f0(void);
undefined4 FUN_0003a830(int param_1,undefined4 param_2);
undefined4 FUN_0003aae0(int param_1,int param_2);
undefined4 FUN_0003ac40(undefined4 param_1,undefined4 param_2);
undefined4 FUN_0003ac60(int param_1,int param_2,uint param_3);
undefined4 FUN_0003ad30(int param_1,undefined4 param_2);
void FUN_0003ad50(int param_1,undefined4 param_2,uint param_3);
void FUN_0003ad90(int param_1,undefined4 param_2,uint param_3);
void FUN_0003add0(undefined4 param_1);
void FUN_0003adf0(void);
void FUN_0003ae20(undefined4 param_1);
void D3D8::D3DDevice_End(void);
void FUN_0003ae40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_0003ae60(undefined4 param_1,undefined4 param_2,undefined4 param_3);
int FUN_0003ae80(void);
undefined4 FUN_0003af90(int param_1,undefined4 param_2,undefined4 param_3,uint param_4);
undefined4 FUN_0003b010(int param_1);
int FUN_0003b0c0(void);
int FUN_0003b180(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_0003b240(int param_1);
int FUN_0003b2e0(int param_1);
int FUN_0003b322(undefined4 param_1,int param_2,int param_3);
void FUN_0003b6d0(int param_1);
void __fastcall FUN_0003b8e0(int param_1_00,int param_2_00,int param_1,int param_2,int param_3,undefined4 param_4);
void __fastcall FUN_0003bb20(int param_1_00,int param_2_00,int param_1,int param_2,int param_3,undefined4 param_4);
void FUN_0003bc90(int param_1);
void FUN_0003c2e0(undefined4 param_1,ushort *param_2,uint param_3);
void FUN_0003c510(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_0003c570(int param_1,int param_2,int param_3,int param_4,float param_5,int param_6);
char __fastcall FUN_0003ca30(undefined4 param_1,int param_2);
void FUN_0003cb40(void);
void FUN_0003cbc0(void);
void FUN_0003cd00(undefined4 param_1,undefined4 param_2,uint param_3);
void FUN_0003cdc0(void);
void FUN_0003cde0(uint *param_1);
undefined4 FUN_0003ce90(undefined4 param_1);
undefined4 FUN_0003cec0(undefined4 param_1);
undefined4 FUN_0003cee0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5);
undefined4 FUN_0003cf70(undefined4 param_1,undefined4 param_2);
void FUN_0003cf90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
undefined4 FUN_0003cfb0(undefined4 param_1,undefined4 param_2);
uint * FUN_0003cfe0(int *param_1,int param_2);
float10 FUN_0003f860(int param_1);
void FUN_0003f8b0(float param_1);
void FUN_0003fb70(float param_1);
void FUN_0003fce0(int param_1);
void FUN_0003fd10(int param_1,undefined4 param_2);
void FUN_0003fd50(undefined4 param_1);
void FUN_0003fe00(int param_1,int param_2);
void FUN_0003feb0(int param_1,undefined4 param_2);
void FUN_0003ff20(undefined4 param_1);
void FUN_0003ffd0(int param_1,int param_2);
int FUN_000407a0(int param_1);
void FUN_000407f0(undefined4 param_1);
void FUN_00040fb0(void);
int FUN_000425e0(char *param_1);
void FUN_00042640(void);
int FUN_00042d90(undefined4 param_1);
undefined4 FUN_000433f0(undefined4 param_1);
void FUN_00043b20(void);
void FUN_00043b40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_00043b70(undefined4 param_1);
int FUN_00044110(char *param_1);
void FUN_000441c0(undefined4 param_1);
void FUN_000441d0(undefined4 param_1,int param_2);
int FUN_000442a0(int param_1);
int FUN_000443b0(char *param_1);
void FUN_00044600(undefined4 *param_1);
void FUN_00044650(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_00044750(undefined4 param_1);
bool FUN_00044760(undefined4 param_1,int param_2);
undefined4 FUN_000447d0(void);
void FUN_00044840(undefined4 param_1,undefined4 param_2);
float10 FUN_00044860(void);
undefined4 FUN_00044880(void);
uint FUN_000448a0(void);
uint FUN_000448c0(void);
void FUN_000448e0(void);
void FUN_00044e30(void);
void FUN_00044e90(float param_1);
undefined4 FUN_000457c0(undefined4 param_1);
void FUN_00048cd0(undefined4 param_1);
undefined4 FUN_00048ce0(void);
undefined4 FUN_00048cf0(undefined4 param_1,undefined4 param_2);
void FUN_00048d70(void);
float10 FUN_0004a050(int param_1);
undefined4 FUN_0004a090(float *param_1);
void FUN_0004a0f0(int param_1);
void FUN_0004a1f0(void);
int FUN_0004a260(int param_1);
void FUN_0004a2b0(undefined4 param_1);
void FUN_0004a2c0(float param_1);
void FUN_0004a750(int param_1);
void FUN_0004ba80(int param_1,int param_2);
void FUN_0004bc20(int param_1,int param_2);
void FUN_0004bed0(int param_1,undefined4 param_2);
int FUN_0004bf40(undefined4 param_1,int param_2);
void FUN_0004c0d0(int param_1);
void FUN_0004dc60(int param_1);
void FUN_0004de20(int param_1);
void FUN_0004f1d0(void);
int FUN_0004f6d0(char *param_1);
void FUN_0004f730(float param_1);
undefined4 FUN_0004ffb0(undefined4 param_1);
void thunk_FUN_00048cd0(undefined4 param_1);
void FUN_00050d40(void);
void FUN_00050d70(void);
void FUN_00051720(float param_1);
void FUN_00051a40(void);
void FUN_000523a0(void);
void FUN_00056b40(int param_1,int param_2,undefined param_3);
void FUN_00056ec0(void);
undefined4 FUN_00056fa0(undefined4 param_1,undefined4 param_2);
undefined4 FUN_00056fe4(void);
void FUN_000577e0(void);
undefined4 FUN_00057e60(undefined4 param_1,undefined4 param_2);
void FUN_000591a0(int *param_1);
undefined4 *FUN_000591d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,int param_7);
void FUN_00059330(undefined4 *param_1,undefined4 *param_2);
undefined4 FUN_00059360(int param_1,int param_2);
undefined4 FUN_000593a0(int param_1);
void FUN_000593e0(undefined4 *param_1,undefined4 *param_2);
undefined4 FUN_00059430(int param_1,undefined4 param_2);
void FUN_0005b140(int param_1,undefined4 param_2);
void FUN_0005b940(int **param_1);
undefined4 FUN_0005bcb0(undefined4 *param_1,undefined4 param_2,int param_3);
undefined4 *FUN_0005c400(undefined4 param_1,undefined4 *param_2,undefined param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void FUN_0005c490(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void FUN_0005c4d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
undefined4 *FUN_0005cd60(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,float param_7,undefined4 param_8);
int FUN_0005ce40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,int param_6,int param_7,undefined4 param_8);
void FUN_0005ceb0(int param_1,undefined4 param_2,int param_3);
void __fastcall FUN_0005d420(int **param_1);
void __fastcall FUN_0005d4a0(int param_1);
undefined4 __fastcall FUN_0005d4b0(int param_1);
void __thiscall FUN_0005d500(int param_1_00,undefined4 param_1,undefined4 param_2);
void __thiscall FUN_0005d520(int param_1_00,undefined4 param_1);
int __thiscall FUN_0005d540(int **param_1_00,uint param_1);
undefined4 __fastcall FUN_0005d650(undefined4 param_1);
void __thiscall FUN_0005d7f0(int param_1_00,char param_1);
undefined4 FUN_0005db40(undefined *param_1);
void FUN_0005dd30(void);
void FUN_0005dd90(int param_1);
undefined4 FUN_0005dea0(char param_1,char param_2);
undefined4 FUN_0005dee0(char param_1,char param_2);
void FUN_0005df20(char *param_1,float param_2,float param_3,undefined4 param_4,float param_5,float param_6,float param_7,uint param_8,int param_9);
void FUN_0005e810(char *param_1,float param_2,float param_3,undefined4 param_4,float param_5,float param_6,float param_7,uint param_8,int param_9);
void FUN_0005f140(undefined4 param_1,undefined4 param_2);
void FUN_0005f170(undefined4 param_1,undefined4 param_2);
void FUN_0005f1a0(void);
void FUN_0005f360(int param_1);
void FUN_0005f4e0(int param_1);
int FUN_0005f5f0(int param_1);
void FUN_0005f640(void);
undefined4 FUN_0005f670(int param_1,int param_2,ushort param_3);
undefined4 FUN_0005f7a0(void);
void FUN_0005f7e0(int param_1,int param_2);
undefined4 FUN_0005ff70(int param_1);
undefined4 FUN_0005ffa0(int param_1);
undefined4 FUN_0005ffe0(int param_1);
void FUN_00060030(void);
void FUN_00060220(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_000603f0(int param_1);
void FUN_00060c50(undefined4 param_1);
void FUN_00060ed0(void);
void FUN_00060ef0(float param_1,undefined4 *param_2,float param_3);
void FUN_00061090(void);
void FUN_00061250(void);
void FUN_00061320(void);
undefined * FUN_00061360(void);
void FUN_000613a0(void);
int FUN_000613c0(ushort param_1,ushort param_2);
int FUN_000613f0(ushort param_1,ushort param_2,byte param_3);
uint FUN_00061430(ushort param_1,ushort param_2,int param_3);
void FUN_00061490(void);
void FUN_00061550(int param_1);
undefined4 FUN_000615c0(int param_1,int param_2);
undefined4 FUN_000616e0(char *param_1);
void FUN_00061760(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_00061800(void);
void FUN_000619e0(void);
void FUN_00061d20(float param_1,undefined4 param_2,float param_3,int param_4,int param_5);
void FUN_00061ea0(int param_1);
void FUN_00061f10(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_00061fd0(int param_1,undefined4 *param_2);
void FUN_00062090(int param_1,int param_2,int param_3,int param_4,float param_5);
void FUN_00062240(int param_1,int *param_2);
void FUN_00062ba0(void);
void FUN_00062bc0(undefined4 *param_1);
void FUN_00062c50(int param_1);
void FUN_00062cb0(void);
void FUN_00062db0(void);
void FUN_00062e70(int param_1,int param_2,int *param_3,int param_4);
void FUN_00062ef0(char *param_1);
undefined * FUN_00062f20(char *param_1);
void FUN_00062fd0(float param_1,float param_2,float param_3);
void FUN_00063270(int param_1);
void FUN_000633a0(void);
void FUN_00063430(int param_1,undefined4 param_2,undefined4 *param_3,float *param_4,int *param_5);
void FUN_00063530(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,float *param_5,int *param_6);
void FUN_00063650(void);
void FUN_00063690(int param_1,int param_2);
void FUN_00065ba0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
undefined4 FUN_00065d60(int param_1,int param_2,float param_3);
void FUN_00065dd0(int param_1,int param_2,int param_3);
void FUN_00065ea0(int param_1,undefined4 param_2);
void FUN_00065ef0(undefined4 *param_1);
void FUN_00065f10(int *param_1);
void FUN_00065f80(int param_1);
void FUN_00066080(undefined4 param_1,int param_2);
void FUN_00066150(void);
void FUN_000661a0(void);
void FUN_000661d0(int param_1);
void FUN_00066260(void);
void FUN_00066340(int param_1);
void FUN_00066530(int param_1,undefined4 *param_2);
void FUN_000665d0(int param_1,int param_2);
void FUN_00066640(void);
void FUN_00066650(void);
void FUN_00066680(int param_1);
void FUN_00066840(void);
void FUN_000668b0(void);
void FUN_00066960(void);
void FUN_00066990(void);
void FUN_000669a0(void);
void FUN_00066a40(short *param_1,int param_2);
void FUN_00066af0(short *param_1,float param_2);
int FUN_00066b80(undefined4 param_1,short *param_2);
void FUN_00066be0(short *param_1,undefined4 param_2,float *param_3,short *param_4,short *param_5);
float10 FUN_00066db0(short *param_1);
void FUN_00066e40(void);
undefined4 FUN_00066f20(int param_1,int param_2,float param_3);
void FUN_00066fe0(float *param_1,float *param_2,float *param_3);
float10 FUN_00067050(float *param_1,float *param_2,float *param_3);
float10 FUN_00067100(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
undefined4 FUN_00067140(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,float param_7,float param_8);
undefined4 FUN_00067230(undefined4 param_1,undefined4 param_2,short param_3,short param_4,short param_5,float param_6,float param_7,float param_8,int param_9,int param_10,int param_11);
undefined4 FUN_00067380(undefined4 param_1,short param_2,short param_3,short param_4,float param_5,undefined4 *param_6,int param_7,undefined4 param_8,int param_9);
void FUN_000674e0(void);
undefined4 FUN_00067590(float *param_1,float *param_2,float *param_3,float param_4);
undefined4 FUN_000677c0(float *param_1,float *param_2,float param_3);
void FUN_00067a70(float *param_1,float *param_2,float param_3,float *param_4);
void FUN_00067ca0(void);
void FUN_00067e80(int param_1);
void FUN_00068040(void);
undefined4 FUN_000681b0(int param_1);
void FUN_00068ad0(void);
void FUN_00068c70(void);
void FUN_00068ed0(int param_1,int param_2,int param_3,float *param_4);
void FUN_00069140(float param_1);
void FUN_000698e0(void);
void FUN_0006a020(void);
void FUN_0006a110(void);
void FUN_0006a6c0(float *param_1,undefined2 param_2);
void FUN_0006a930(void);
void FUN_0006ab40(void);
void FUN_0006af20(int param_1,int param_2,int param_3,undefined param_4);
void FUN_0006b0e0(void);
void FUN_0006b490(void);
void FUN_0006b6e0(int param_1);
void FUN_0006bdf0(int param_1);
void FUN_0006c290(int param_1);
void FUN_0006c730(void);
void FUN_0006ca20(void);
void FUN_0006d280(void);
void FUN_0006d440(void);
void FUN_0006d470(int param_1);
void FUN_0006e0c0(void);
void FUN_00070f90(void);
void FUN_00070ff0(int param_1,undefined4 param_2);
void FUN_00071040(int param_1);
void FUN_00071080(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_000710f0(int param_1,int param_2,int param_3,float param_4,int *param_5);
void FUN_00071c90(int param_1);
void FUN_00071cf0(undefined4 param_1,undefined4 param_2);
void FUN_00071e50(void);
undefined4 FUN_00071e70(undefined4 *param_1,undefined4 param_2);
void FUN_00071f90(int param_1);
float10 FUN_00071fe0(int *param_1);
undefined4 FUN_00072040(undefined4 param_1,float param_2,int param_3,undefined4 param_4);
undefined4 FUN_00072400(float *param_1,float param_2,float *param_3,float param_4);
uint FUN_00072450(int param_1,int param_2,int param_3,float param_4);
undefined4 FUN_00072890(int param_1,int param_2,int param_3);
void FUN_00072a30(int param_1,undefined2 param_2);
void FUN_00072a80(int param_1);
void FUN_00072bd0(int param_1);
void FUN_00072c00(int param_1);
undefined4 FUN_00072c20(int param_1);
void FUN_00072d90(int param_1,ushort *param_2);
void FUN_00072f30(int param_1);
void FUN_00072f80(int param_1,int param_2,float param_3);
void FUN_00073340(uint param_1,int param_2,int param_3);
void FUN_00073a10(int *param_1);
void FUN_00073a30(void);
void FUN_00073a70(void);
void FUN_00073ab0(ushort param_1);
void FUN_00073b00(undefined4 param_1);
void FUN_00073be0(int *param_1);
undefined4 FUN_00073d70(undefined4 param_1);
int FUN_00073de0(int param_1,int param_2);
undefined4 FUN_00073e50(float param_1,int param_2);
undefined4 FUN_000748e0(int param_1);
void FUN_00074960(float *param_1,float param_2,float param_3,float param_4);
void FUN_000749f0(void);
void FUN_00074a40(float *param_1,float *param_2,float *param_3,undefined param_4,ushort param_5,int param_6);
void FUN_00075500(void);
float10 FUN_00075a20(float *param_1,uint param_2);
undefined4 FUN_00075b80(undefined4 param_1,undefined4 param_2);
void FUN_00075e30(int *param_1);
void FUN_00076a80(int *param_1);
undefined4 FUN_00077bf0(undefined4 param_1,int param_2,undefined param_3);
undefined4 FUN_00077cc0(char *param_1);
void FUN_00077e10(void);
void FUN_00078a70(undefined4 param_1);
void FUN_00078a90(int param_1);
void FUN_00078ab0(int param_1,undefined4 param_2);
void FUN_00078ac0(void);
undefined4 * __fastcall FUN_00078b30(uint *param_1);
void __fastcall FUN_00078ba0(undefined4 param_1,int param_2);
void FUN_00078be0(int param_1,int param_2);
void FUN_00078ca0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4);
uint FUN_00078df0(int param_1,undefined4 param_2,undefined4 param_3,float *param_4);
int FUN_00078e70(void);
uint * __fastcall FUN_00078eb0(uint **param_1);
void FUN_00078f20(uint param_1);
void FUN_00078f80(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
void __thiscall FUN_00079060(int param_1_00,float *param_1,undefined4 param_2,int param_3);
void FUN_00079290(int param_1);
int ** __thiscall FUN_00079310(int **param_1_00,int param_1);
void FUN_00079430(undefined4 *param_1,undefined4 param_2);
void FUN_00079600(int param_1);
int ** FUN_000796b0(int **param_1);
void FUN_000797a0(int param_1,undefined4 param_2);
void FUN_00079820(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,uint *param_4,uint *param_5,float *param_6,float *param_7);
void FUN_00079af0(undefined4 param_1);
void FUN_00079b00(undefined4 param_1);
void FUN_00079b10(int param_1);
undefined4 * __thiscall FUN_00079bb0(int param_1_00,undefined4 param_1);
undefined4 __thiscall FUN_00079c00(byte *param_1_00,float param_1);
void FUN_00079cb0(int param_1,undefined4 param_2,int param_3);
undefined4 * FUN_00079d20(int param_1,undefined4 param_2,int param_3,int param_4,int *param_5);
void FUN_00079e60(int *param_1);
void FUN_00079eb0(int param_1);
void __fastcall FUN_00079f70(int param_1);
void FUN_00079ff0(int param_1,float param_2);
void FUN_0007a310(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,undefined4 param_6);
void FUN_0007a380(int param_1);
void FUN_0007a440(int param_1,undefined4 param_2);
void FUN_0007a5f0(int param_1,undefined4 param_2);
void __fastcall FUN_0007a790(int param_1);
void FUN_0007a820(undefined4 param_1);
uint FUN_0007a8d0(undefined4 param_1,uint *param_2,int *param_3);
void FUN_0007a9a0(int param_1);
void FUN_0007ab90(void);
void FUN_0007ac00(undefined4 param_1);
void FUN_0007ac40(void);
void FUN_0007acc0(void);
int FUN_0007acf0(undefined4 param_1,int param_2,uint param_3,undefined2 param_4,uint param_5);
int FUN_0007ae00(undefined4 param_1,int param_2,uint param_3,undefined2 param_4);
void FUN_0007af00(void);
int FUN_0007af40(void);
int FUN_0007af50(undefined4 param_1);
void FUN_0007aff0(int param_1);
int FUN_0007b050(char *param_1);
void FUN_0007b110(void);
void FUN_0007b150(void);
void FUN_0007b240(undefined4 *param_1,int param_2);
void FUN_0007b270(undefined4 param_1,short param_2,short param_3,short param_4,short param_5,short param_6,int param_7);
void FUN_0007b2d0(int param_1);
void FUN_0007b400(float param_1,undefined4 param_2);
void FUN_0007b520(int param_1);
void FUN_0007b5c0(int param_1);
void FUN_0007b660(float *param_1,float param_2);
void FUN_0007b6d0(float param_1);
void FUN_0007bc80(int param_1);
void FUN_0007bd00(int param_1);
uint FUN_0007c070(int param_1);
void FUN_0007c0a0(undefined4 param_1,undefined4 *param_2,float param_3,float param_4);
void FUN_0007c150(int param_1,undefined4 param_2,undefined4 *param_3);
void FUN_0007c280(int param_1,int param_2);
void FUN_0007c970(undefined4 param_1);
void FUN_0007cb40(int param_1);
void FUN_0007d170(undefined4 *param_1,undefined4 param_2);
void FUN_0007d200(void);
void FUN_0007d250(undefined4 *param_1);
void FUN_0007d6b0(void);
void FUN_0007d6e0(int param_1);
int FUN_0007d870(int param_1,int param_2);
void FUN_0007d9b0(void);
int FUN_0007dab0(void);
void FUN_0007dc00(void);
void FUN_0007dc50(int param_1,int param_2,int param_3);
void FUN_0007dd90(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 *param_5,undefined4 param_6,int param_7,undefined4 param_8);
void FUN_0007df90(float *param_1,int param_2);
void FUN_0007e3c0(void);
void FUN_0007e490(undefined4 *param_1);
void FUN_0007e600(int param_1);
void FUN_0007e7b0(int param_1);
void FUN_0007e810(int param_1);
void FUN_0007e860(float param_1);
void FUN_0007fe80(void);
void FUN_0007fef0(void);
undefined4 FUN_0007ffe0(undefined4 *param_1,float *param_2);
void FUN_00080090(int param_1);
void FUN_00080340(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4);
void FUN_000803b0(int param_1);
void FUN_000809c0(int param_1);
void FUN_00080c30(undefined *param_1);
void FUN_00080d30(void);
void FUN_00080d60(void);
void FUN_000816a0(void);
void FUN_00081a20(int param_1);
void FUN_00081ac0(undefined4 *param_1);
void FUN_00081b90(float *param_1,byte param_2,byte param_3,byte param_4,char param_5);
void FUN_00081c30(int param_1);
undefined4 FUN_00081c90(undefined4 param_1,uint *param_2,int param_3);
void FUN_000824e0(undefined4 param_1,int *param_2,int param_3);
float10 FUN_00082890(undefined4 param_1,int *param_2);
void FUN_00082cb0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_00082ce0(void);
void FUN_00082f10(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_00082f40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);
void FUN_00082f80(void);
void FUN_00083380(int param_1);
void FUN_00083630(int param_1);
void FUN_00083680(int param_1,int param_2);
void thunk_FUN_000f4f49(void);
int FUN_00083700(int *param_1);
void FUN_00083740(int param_1);
int FUN_00083790(int param_1,int param_2);
void FUN_000837c0(void);
void FUN_000837e0(undefined4 param_1);
void FUN_000839f0(int param_1,float param_2,float param_3,undefined4 param_4,undefined4 param_5);
void FUN_00083dd0(int param_1);
void FUN_00084340(int param_1,int param_2);
void FUN_000859f0(int param_1);
void FUN_00085a10(int param_1,int param_2);
void FUN_00085b20(void);
void FUN_00085bb0(void);
void FUN_00085cc0(void);
undefined4 FUN_00085d00(void);
void FUN_00085d10(void);
void FUN_00085d40(void);
void FUN_00085dd0(void);
void FUN_00085e10(void);
void FUN_00085ed0(void);
void FUN_00086600(void);
void FUN_00086a60(undefined4 param_1);
void FUN_00086bb0(void);
void FUN_00086c40(void);
void FUN_00086cd0(void);
void thunk_FUN_000ec710(void);
void FUN_00086d30(void);
void FUN_000870e0(void);
void FUN_00087280(void);
bool FUN_00087400(int param_1);
void FUN_00087410(void);
void FUN_00087490(undefined4 param_1,int param_2);
undefined4 FUN_00087530(void);
void FUN_000875a0(void);
void FUN_00087830(void);
void FUN_00087870(void);
void FUN_00089990(void);
void FUN_00089b50(void);
void FUN_00089c00(int param_1);
void FUN_00089ce0(int param_1);
void FUN_00089e20(int param_1,int param_2);
void FUN_0008ae00(int param_1);
void FUN_0008b3a0(int param_1,int param_2);
void FUN_0008b560(int param_1);
void FUN_0008b630(int param_1,int param_2);
void FUN_0008bd60(int param_1);
void FUN_0008c040(int param_1,int param_2);
void FUN_0008c280(int param_1);
void FUN_0008c330(int param_1,int param_2);
void FUN_0008c590(int param_1);
void FUN_0008c710(int param_1,int param_2);
void FUN_0008cb90(int param_1);
void FUN_0008cc70(int param_1,uint param_2);
void FUN_0008d210(int param_1);
void FUN_0008d400(int param_1,int param_2);
void FUN_0008d650(int param_1);
void FUN_0008d760(int param_1,uint param_2);
void FUN_0008e100(int param_1,int param_2);
void FUN_0008e260(void);
void FUN_0008e340(int param_1,int param_2);
void FUN_0008e510(int param_1);
void FUN_0008e550(undefined4 *param_1,int param_2);
void FUN_0008e9a0(int param_1);
void FUN_0008ea10(void);
void FUN_0008ec10(int *param_1,int param_2,int param_3);
void FUN_0008f4f0(int param_1);
void FUN_0008fb20(int param_1);
void FUN_0008fd90(int param_1);
void FUN_0008fe50(int param_1);
void FUN_0008fea0(int param_1);
void FUN_0008ff40(int param_1);
void FUN_0008ff80(int param_1);
void FUN_0008ffd0(void);
void FUN_000900a0(int param_1);
void FUN_00090210(undefined4 param_1,undefined4 param_2);
void FUN_000902c0(void);
void FUN_00090330(void);
void FUN_00090460(int param_1,int *param_2);
void FUN_00090850(void);
void FUN_00090910(int param_1,float param_2);
undefined4 thunk_FUN_000a3850(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void thunk_FUN_000a1270(float *param_1,uint *param_2);
void thunk_FUN_000a0d00(float *param_1,float *param_2);
void thunk_FUN_000a1780(undefined4 *param_1,float *param_2,float *param_3);
float10 FUN_00090980(float param_1);
float10 FUN_00090990(float param_1,float param_2);
void thunk_FUN_000aca80(float *param_1,float *param_2,float param_3);
void thunk_FUN_000a0e10(float *param_1,float *param_2);
void FUN_000909f0(float *param_1,float *param_2,float *param_3);
void thunk_FUN_000a1380(undefined4 *param_1,float *param_2,float *param_3);
void FUN_00090aa0(void);
uint * FUN_00090b20(uint param_1);
undefined4 * FUN_00090b80(uint param_1);
void FUN_00090be0(float *param_1,float param_2,float *param_3);
void FUN_00090cb0(float *param_1,float param_2,float *param_3);
undefined4 * FUN_00090d80(int param_1);
void FUN_00090dd0(int param_1);
float10 FUN_00090df0(byte *param_1,float *param_2);
undefined4 * FUN_00090ef0(uint param_1);
void FUN_00090f60(int param_1,int param_2);
void FUN_00090fc0(uint *param_1,undefined4 param_2,int param_3,float *param_4,float *param_5,int param_6,float *param_7);
void FUN_00091470(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,undefined4 *param_5,int param_6,float *param_7);
void FUN_000916e0(uint *param_1,undefined4 param_2,uint *param_3,undefined4 param_4,float param_5,int param_6,float *param_7,float *param_8,int param_9,int param_10);
void FUN_00091dc0(byte *param_1,undefined4 param_2,int param_3);
int FUN_00091fb0(int param_1,int param_2);
void FUN_00092120(undefined4 param_1,uint *param_2,int *param_3);
float10 FUN_00092170(int **param_1,float *param_2,uint param_3);
int FUN_00092300(int param_1,int param_2);
void FUN_000923d0(int param_1,char *param_2,byte param_3,undefined4 param_4,int param_5);
float * FUN_00092540(undefined4 param_1);
void FUN_00092790(int *param_1);
void FUN_000927e0(int param_1,char *param_2,byte param_3,undefined4 param_4,int param_5,float *param_6,float *param_7,int param_8,float *param_9);
void FUN_00092c20(undefined4 *param_1,int param_2,byte param_3,undefined4 param_4,undefined4 param_5,undefined4 *param_6,undefined4 *param_7,int param_8,int param_9);
void FUN_00092e70(int param_1);
void FUN_00092eb0(undefined4 param_1);
void FUN_00092ec0(void);
void FUN_00092ed0(undefined4 param_1);
undefined *FUN_00092ee0(int param_1,undefined4 param_2,float *param_3,float *param_4,float param_5,undefined2 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,int param_11,undefined4 param_12,undefined4 param_13,undefined param_14,undefined4 param_15);
void FUN_00093230(float *param_1);
void FUN_00093cf0(undefined4 param_1,float *param_2,int param_3,undefined4 param_4);
void FUN_00094380(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int *param_5,undefined4 param_6);
void FUN_000943f0(int param_1,undefined4 param_2);
int FUN_00094680(void);
void FUN_000947b0(void);
undefined * FUN_00094c90(void);
undefined * FUN_00094ca0(void);
undefined4 FUN_00094cb0(void);
undefined * FUN_00094cc0(void);
void FUN_00094cd0(int param_1,uint param_2,int param_3,int param_4);
void FUN_00094d40(int param_1,uint param_2,int param_3,int param_4);
void FUN_00094db0(int param_1,uint param_2,int param_3,int param_4);
char FUN_00094e20(int param_1,int param_2,undefined4 param_3);
undefined4 FUN_00095360(float *param_1,float *param_2,int param_3);
uint FUN_00095410(int param_1,int param_2,int param_3);
void FUN_00095500(undefined4 param_1);
void FUN_00095520(void);
void FUN_000955b0(float param_1,float param_2,float param_3,float param_4);
void FUN_00095630(undefined4 param_1);
void FUN_00095640(int param_1,uint param_2,int param_3,int param_4);
void FUN_000956b0(undefined4 *param_1);
void FUN_000958d0(void);
void FUN_00095900(void);
void FUN_00095930(int param_1,int param_2,int param_3);
int __fastcall FUN_00095da0(int param_1_00,int param_2,int param_1);
int FUN_00095e50(undefined4 param_1,int *param_2);
void __fastcall FUN_00096660(int param_1_00,int param_2_00,int param_1,int param_2);
void __fastcall FUN_00096740(undefined4 param_1_00,int param_2_00,int param_1,int param_2);
void FUN_000967f0(int param_1);
void FUN_00096af0(int param_1);
void FUN_00096dc0(int param_1);
undefined4 * FUN_00096e00(void);
undefined4 * FUN_00096ee0(undefined4 param_1,int param_2,undefined4 param_3);
void FUN_00096f30(undefined4 *param_1);
int * FUN_00096f70(int **param_1,int param_2);
void FUN_00096ff0(char *param_1);
undefined * FUN_00097030(void);
int FUN_00097040(undefined4 param_1);
int FUN_00097090(undefined4 param_1);
size_t FUN_000970d0(int param_1,void *param_2,uint param_3);
int FUN_00097150(int param_1,int param_2,int param_3);
void FUN_000971d0(undefined4 *param_1);
int FUN_00097310(int param_1,int param_2,int param_3);
void FUN_00097380(int param_1,undefined4 *param_2,uint param_3);
int FUN_000974a0(int param_1);
undefined4 FUN_00097560(undefined4 param_1);
void FUN_00097570(int param_1);
int FUN_000975b0(int param_1);
void FUN_00097620(int param_1,undefined4 *param_2,uint param_3);
int FUN_000976a0(int param_1,int param_2,int param_3);
int FUN_00097720(int param_1);
void FUN_000977d0(uint param_1);
void FUN_00097800(void);
void FUN_00097820(int param_1,void *param_2,size_t param_3);
undefined4 FUN_00097890(void);
undefined4 FUN_000978a0(undefined4 *param_1);
void FUN_00097950(int param_1);
void FUN_00097a10(int param_1);
undefined4 FUN_00097a60(int param_1,long param_2,int param_3);
size_t FUN_00097b00(int param_1,void *param_2,size_t param_3);
float10 FUN_00097bc0(undefined4 param_1);
undefined4 FUN_00097bf0(undefined4 param_1);
uint FUN_00097c10(undefined4 param_1);
uint FUN_00097c30(undefined4 param_1);
undefined4 FUN_00097c50(undefined4 param_1);
void FUN_00097ce0(undefined4 param_1);
undefined4 FUN_00097d30(int param_1);
int FUN_00097d90(int param_1,undefined4 param_2,int param_3);
int FUN_00097e80(undefined4 *param_1,int param_2);
int __thiscall FUN_00098030(int param_1_00,undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4);
undefined4 * FUN_00098120(undefined4 param_1,int *param_2,int *param_3,short param_4);
void FUN_000982a0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
int * FUN_000982c0(undefined4 param_1,int **param_2,int *param_3);
undefined4 FUN_00098430(char *param_1);
int FUN_000984a0(undefined4 param_1);
int FUN_00098510(undefined4 param_1,undefined4 param_2,int param_3);
void FUN_000985e0(void);
void FUN_00098620(undefined4 param_1,undefined4 param_2);
void FUN_000986b0(int param_1);
float10 FUN_000988f0(uint param_1);
float10 FUN_00098910(int param_1);
float10 FUN_00098930(float param_1,float param_2);
void FUN_00098960(uint param_1);
void FUN_000989a0(int param_1);
int FUN_000989e0(undefined4 param_1);
void FUN_00098b30(void);
void FUN_00098b80(undefined4 param_1,undefined4 param_2);
undefined4 __fastcall FUN_00098bd0(uint param_1);
undefined4 FUN_00098ca0(undefined4 param_1,undefined4 param_2);
int FUN_00098e10(undefined4 param_1,undefined4 param_2);
void FUN_00098f20(int param_1,int param_2,int param_3,undefined4 param_4);
void FUN_00098f80(void);
void FUN_00098fc0(void);
uint FUN_00099010(undefined4 *param_1);
uint FUN_000990a0(int param_1);
void FUN_00099180(int param_1);
int FUN_00099230(int param_1);
undefined4 FUN_00099260(int param_1,undefined4 param_2);
undefined4 FUN_00099290(int param_1);
undefined4 * FUN_00099310(undefined4 param_1);
void FUN_00099380(undefined4 *param_1);
int FUN_000993a0(undefined4 param_1);
void FUN_000993d0(void);
undefined4 FUN_00099430(void);
void FUN_000995b0(void);
void FUN_000997d0(undefined4 param_1,int param_2,undefined4 param_3);
void FUN_00099810(void);
void FUN_00099830(void);
void FUN_000998a0(int param_1);
void FUN_00099a40(undefined4 param_1);
void FUN_00099ac0(void);
int * FUN_00099b70(void);
void FUN_00099bc0(undefined4 param_1);
void FUN_00099bd0(int param_1,int param_2);
void FUN_00099c00(int param_1,int param_2);
void FUN_00099c30(float param_1);
undefined4 * FUN_00099eb0(void);
void FUN_00099ed0(int param_1,int param_2);
void FUN_00099f10(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
void FUN_0009a150(int param_1);
void FUN_0009a1a0(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_0009a1e0(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_0009a220(int param_1,int param_2,undefined4 param_3);
int FUN_0009a270(int param_1);
void FUN_0009a2a0(int param_1);
undefined4 FUN_0009a2d0(int param_1,int param_2);
void FUN_0009a300(int param_1,undefined4 *param_2);
void FUN_0009a360(int param_1);
void FUN_0009a400(int param_1,int param_2);
void FUN_0009a430(int param_1,int param_2);
undefined4 * FUN_0009a460(int param_1,int param_2);
void FUN_0009a4e0(int param_1);
undefined4 FUN_0009a510(undefined4 param_1);
void FUN_0009a670(void);
void FUN_0009a6c0(int param_1);
void FUN_0009a710(int param_1);
int FUN_0009a7a0(int param_1,int param_2);
void FUN_0009a7f0(int param_1,int param_2);
void FUN_0009a860(int param_1,undefined4 *param_2);
void FUN_0009b110(int param_1,int *param_2);
void FUN_0009b220(int *param_1);
void FUN_0009b290(int param_1);
void FUN_0009b4f0(int param_1);
void FUN_0009b5d0(void);
void FUN_0009b600(int param_1);
void FUN_0009b630(void);
void FUN_0009b7c0(void);
void FUN_0009baa0(void);
void FUN_0009bb00(void);
void FUN_0009bfb0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_0009bff0(undefined4 param_1,float param_2,float param_3);
void FUN_0009c190(void);
void FUN_0009c2d0(void);
void FUN_0009c330(int param_1);
void FUN_0009c360(void);
void FUN_0009c3d0(undefined4 param_1);
void FUN_0009ca60(int param_1,byte param_2,undefined4 param_3,int param_4,undefined4 param_5);
int FUN_0009cab0(int param_1,byte param_2);
void __fastcall FUN_0009cae0(undefined4 param_1);
undefined4 * FUN_0009cc80(undefined4 param_1);
undefined4 FUN_0009cd00(int param_1,undefined4 param_2);
undefined4 * FUN_0009cd40(void);
void FUN_0009cdf0(int *param_1);
undefined * FUN_0009cf60(int param_1);
void FUN_0009cf80(undefined4 *param_1);
void FUN_0009d010(undefined4 param_1,float *param_2,undefined4 param_3,float *param_4,undefined4 param_5,float *param_6);
int FUN_0009d2b0(void);
void FUN_0009d330(int param_1);
void FUN_0009d3e0(void);
void FUN_0009d3f0(float param_1,float param_2,uint param_3,int param_4,uint param_5);
void FUN_0009d490(undefined4 param_1);
void FUN_0009d4a0(undefined4 *param_1);
void FUN_0009d6f0(undefined param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,uint param_9);
void FUN_0009d830(int param_1);
void FUN_0009e160(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
undefined4 FUN_0009e1a0(undefined4 param_1);
undefined4 FUN_0009e1b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void FUN_0009e1e0(void);
void FUN_0009e2c0(int param_1,undefined4 param_2);
undefined4 FUN_0009e2f0(void);
undefined4 * FUN_0009e300(uint param_1);
void thunk_FUN_000f4f49(void);
void * __cdecl _malloc(size_t __size);
void thunk_FUN_000f4f49(void);
undefined4 FUN_0009e400(void);
int FUN_0009e420(int param_1);
void __fastcall FUN_0009e450(int param_1);
void FUN_0009e4c0(undefined4 param_1);
void FUN_0009e4d0(int param_1,undefined4 param_2);
void FUN_0009e540(int param_1,int param_2,int *param_3,undefined4 *param_4,undefined4 param_5,undefined4 param_6);
void FUN_0009e620(int param_1,int param_2,int *param_3,undefined4 *param_4,undefined4 param_5,undefined4 param_6);
void __fastcall FUN_0009e6f0(int param_1);
void FUN_0009e860(int param_1);
void FUN_0009eba0(float param_1);
void FUN_0009ec00(float param_1);
void FUN_0009ed70(void);
undefined4 * FUN_0009ed90(undefined4 *param_1);
void FUN_0009ee00(int param_1);
undefined4 FUN_0009eeb0(undefined4 param_1);
void FUN_0009eed0(int param_1);
void FUN_0009ef10(undefined *param_1,undefined4 *param_2);
void FUN_0009f110(void);
void FUN_0009f190(void);
void FUN_0009f2c0(void);
void FUN_0009f370(int param_1);
void FUN_0009f480(void);
void FUN_0009f870(void);
void FUN_0009fcb0(void);
void FUN_0009fd40(void);
void FUN_0009ff60(void);
void FUN_0009ffd0(void);
void FUN_000a01a0(void);
void FUN_000a0950(void);
void FUN_000a0990(void);
void FUN_000a0a10(void);
void FUN_000a0a60(undefined4 *param_1);
void FUN_000a0a80(undefined4 *param_1,undefined4 *param_2);
void FUN_000a0ad0(undefined4 *param_1,undefined4 *param_2);
void FUN_000a0b20(undefined4 *param_1,uint param_2);
void FUN_000a0b90(undefined4 *param_1,uint param_2);
void FUN_000a0c00(undefined4 *param_1,uint param_2);
void FUN_000a0c70(int param_1,float *param_2);
void FUN_000a0ca0(float *param_1,float *param_2);
void FUN_000a0d00(float *param_1,float *param_2);
void FUN_000a0d70(float *param_1,float *param_2);
void FUN_000a0e10(float *param_1,float *param_2);
void FUN_000a0e70(int param_1,uint param_2);
void FUN_000a0f30(int param_1,uint param_2);
void FUN_000a0fd0(float *param_1,uint param_2);
void FUN_000a1090(float *param_1,uint param_2);
void FUN_000a1120(float *param_1,uint param_2);
void FUN_000a11e0(float *param_1,uint param_2);
void FUN_000a1270(float *param_1,uint *param_2);
void FUN_000a1380(undefined4 *param_1,float *param_2,float *param_3);
void FUN_000a1520(undefined4 *param_1,float *param_2,float *param_3);
void FUN_000a1780(undefined4 *param_1,float *param_2,float *param_3);
void FUN_000a18e0(undefined4 *param_1,undefined4 *param_2);
void FUN_000a1950(float *param_1,float *param_2);
void FUN_000a19f0(undefined4 *param_1,undefined4 *param_2);
void FUN_000a1a50(float *param_1,float *param_2);
void FUN_000a1b60(float *param_1,float *param_2);
void FUN_000a1f70(float *param_1,float *param_2);
void FUN_000a21d0(int param_1,float *param_2);
void FUN_000a2220(float *param_1,float *param_2,float *param_3);
void FUN_000a22a0(undefined4 *param_1,float *param_2);
void FUN_000a2300(int param_1,undefined4 *param_2);
void FUN_000a2320(int param_1,undefined4 *param_2);
void FUN_000a2340(int param_1,undefined4 *param_2);
void FUN_000a2360(float *param_1);
void FUN_000a2450(undefined4 *param_1,undefined4 *param_2);
void FUN_000a2560(float *param_1,float *param_2);
void FUN_000a25e0(float *param_1);
void FUN_000a2640(undefined4 param_1,undefined4 param_2);
void FUN_000a2650(undefined4 param_1,int param_2);
void FUN_000a2670(undefined4 param_1);
void FUN_000a2680(undefined4 param_1,undefined4 param_2);
char * FUN_000a2690(char *param_1,char *param_2);
undefined4 FUN_000a26e0(char *param_1,char *param_2);
undefined4 * FUN_000a2730(void);
int FUN_000a2770(int param_1,int param_2);
void FUN_000a27b0(undefined4 param_1,int param_2);
void FUN_000a2810(int param_1,int param_2);
undefined4 * FUN_000a2860(undefined4 *param_1);
undefined4 * FUN_000a28c0(undefined4 *param_1);
undefined4 * FUN_000a2950(int param_1);
void FUN_000a29d0(int param_1);
undefined4 * FUN_000a2a00(undefined4 param_1);
undefined4 * FUN_000a2a50(int param_1);
void FUN_000a2ac0(int param_1);
void FUN_000a2af0(int param_1,undefined4 *param_2);
void FUN_000a2b90(int *param_1);
void FUN_000a2c00(int param_1);
void FUN_000a2c50(undefined4 param_1);
void FUN_000a2c80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_000a2d20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_000a2dc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_000a3010(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_000a31b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_000a3350(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5);
void FUN_000a3510(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_000a35f0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5);
void FUN_000a36b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_000a3790(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5);
undefined4 FUN_000a3850(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_000a3900(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_000a3a40(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_000a3b30(float *param_1,float *param_2);
void FUN_000a3c70(float *param_1,float *param_2);
void FUN_000a3d60(float *param_1,float *param_2,float *param_3);
void FUN_000a3df0(float *param_1,float *param_2);
void FUN_000a3e70(float *param_1,float *param_2,float *param_3,float param_4);
void FUN_000a3fa0(uint *param_1);
void FUN_000a3ff0(undefined4 param_1);
float10 FUN_000a4000(void);
void FUN_000a4030(void);
bool FUN_000a40e0(undefined4 param_1);
void FUN_000a4180(undefined4 param_1);
void FUN_000a4190(void);
undefined4 FUN_000a41d0(byte param_1,undefined4 param_2);
void FUN_000a4200(undefined4 param_1);
void FUN_000a4270(undefined4 param_1);
void FUN_000a4280(undefined4 param_1);
void FUN_000a42a0(int param_1);
int FUN_000a42f0(int param_1,undefined4 *param_2,undefined4 param_3);
int FUN_000a4600(int param_1,undefined4 *param_2,undefined4 param_3);
int FUN_000a4830(int param_1,int param_2,int param_3);
int FUN_000a4990(int param_1,int param_2,int param_3,undefined4 param_4);
undefined4 FUN_000a4b00(undefined4 *param_1,undefined4 param_2,int param_3);
undefined4 FUN_000a4c30(undefined4 *param_1,undefined4 param_2);
undefined4 FUN_000a4cf0(undefined4 *param_1,undefined4 param_2,int param_3);
undefined4 FUN_000a4e00(int *param_1,undefined4 param_2,int param_3,undefined4 *param_4);
undefined4 FUN_000a4fd0(undefined4 *param_1,undefined4 param_2,int param_3);
undefined4 FUN_000a5120(int param_1,int param_2,int param_3);
void FUN_000a52c0(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6);
void FUN_000a5480(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6);
void FUN_000a56b0(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,undefined4 param_6,int param_7,int param_8,int param_9);
float10 FUN_000a58b0(int param_1);
void FUN_000a5910(void);
void __fastcall FUN_000a5d40(undefined4 param_1);
void FUN_000a5f50(void);
uint FUN_000a6160(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,undefined4 param_6);
void FUN_000a63a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_000a63d0(int param_1,int param_2,int param_3,int param_4);
void FUN_000a6550(int param_1,float *param_2);
void FUN_000a65b0(uint param_1,float param_2,float param_3,undefined2 param_4,float *param_5,undefined4 param_6,char param_7);
void FUN_000a6860(undefined4 param_1,int param_2,int param_3);
int FUN_000a7630(int param_1);
int FUN_000a7650(int param_1);
void FUN_000a7680(void);
void FUN_000a76a0(undefined4 param_1);
void FUN_000a76b0(undefined4 param_1);
void FUN_000a76c0(int *param_1,int param_2,undefined4 *param_3);
void FUN_000a7b90(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,undefined4 param_5);
void FUN_000a7c20(undefined4 param_1);
void FUN_000a7e30(short param_1);
void FUN_000a7ef0(undefined4 *param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5,undefined2 param_6);
void FUN_000a7f90(undefined4 param_1);
undefined4 FUN_000a8140(void);
void FUN_000a8240(int param_1);
void FUN_000a82d0(undefined4 param_1);
void FUN_000a8350(void);
void FUN_000a83c0(undefined4 param_1,int param_2);
void FUN_000a8520(undefined4 param_1,int param_2);
void FUN_000a85c0(int param_1);
void FUN_000a8630(undefined4 param_1);
void FUN_000a86b0(undefined4 param_1,int param_2);
void FUN_000a8740(void);
void FUN_000a87a0(undefined4 param_1);
void FUN_000a8850(int param_1);
void FUN_000a8940(void);
int FUN_000a8f10(void);
undefined4 FUN_000a8f70(void);
int FUN_000a8fe0(int param_1);
int FUN_000a9050(int param_1);
undefined4 * __thiscall FUN_000a90b0(undefined4 *param_1_00,undefined4 param_1,int param_2);
void FUN_000a91d0(void);
void FUN_000a91e0(int *param_1);
void FUN_000a9280(int param_1);
int FUN_000a9340(undefined4 param_1,int *param_2,int *param_3);
void FUN_000a93d0(void);
void FUN_000a9490(void);
undefined4 FUN_000a9650(undefined4 param_1);
void FUN_000a9680(undefined4 param_1);
void FUN_000a9750(undefined4 param_1);
int FUN_000a9960(undefined4 param_1,int param_2);
void FUN_000a9bf0(undefined4 param_1,int param_2);
void FUN_000a9c70(undefined4 param_1,int param_2);
void FUN_000a9d40(undefined4 param_1);
undefined4 * FUN_000a9f60(undefined4 param_1);
void FUN_000aa1f0(undefined4 param_1);
void FUN_000aa220(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_000aa240(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_000aa260(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_000aa280(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_000aa2a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_000aa2c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
undefined4 FUN_000aa2e0(undefined4 param_1);
void thunk_FUN_000ec470(void);
void FUN_000aa310(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_000aa330(void);
void thunk_FUN_000ec6e0(void);
void thunk_FUN_000ec6f0(void);
void thunk_FUN_000ec710(void);
void thunk_FUN_000ec8a0(void);
void FUN_000aa570(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
undefined thunk_FUN_000ec770(int param_1);
void FUN_000aa5a0(int *param_1);
int FUN_000aa630(int param_1);
int FUN_000aa640(int param_1);
void FUN_000aa650(undefined4 *param_1,undefined4 param_2);
void FUN_000aa690(int param_1);
int FUN_000aa700(int param_1);
undefined4 FUN_000aa730(undefined4 param_1);
int FUN_000aa780(undefined4 param_1,int param_2,int param_3);
undefined4 FUN_000aa840(int param_1);
undefined4 FUN_000aa860(int param_1);
void FUN_000aa870(undefined4 param_1,int param_2);
undefined4 FUN_000aa8c0(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
void FUN_000aabd0(undefined4 param_1,undefined4 param_2);
undefined4 FUN_000aabf0(undefined4 param_1);
uint FUN_000aac20(undefined4 *param_1);
uint FUN_000aacb0(undefined4 *param_1);
void FUN_000aad40(void);
void FUN_000aade0(int param_1);
void FUN_000aaef0(void);
void FUN_000aaf90(void);
int * FUN_000aafe0(undefined4 param_1);
void FUN_000ab010(int param_1);
void FUN_000ab070(int param_1);
void FUN_000ab130(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 __fastcall FUN_000ab1d0(int param_1,undefined4 param_2);
int __fastcall FUN_000ab230(int param_1);
int FUN_000ab2d0(void);
void FUN_000ab770(undefined4 param_1);
int * FUN_000ab9e0(int *param_1,undefined4 param_2);
void FUN_000abb10(int param_1,int *param_2);
void FUN_000abbb0(int *param_1);
void FUN_000abfa0(uint param_1);
void FUN_000abfd0(undefined4 param_1);
void FUN_000ac020(int param_1);
void FUN_000ac090(void);
void FUN_000ac0d0(void);
uint __fastcall FUN_000ac110(int param_1);
uint FUN_000ac140(int param_1,int param_2);
unkbyte10 FUN_000ac1c0(float param_1,float param_2);
uint FUN_000ac1d0(float param_1,float param_2);
uint FUN_000ac230(float param_1,float param_2);
uint FUN_000ac320(int param_1,int param_2);
void FUN_000ac340(int param_1);
void FUN_000ac360(float *param_1,float *param_2,float *param_3);
void FUN_000ac3c0(float *param_1,float *param_2,float *param_3);
void FUN_000ac470(float *param_1,float *param_2,float *param_3);
void FUN_000ac4d0(float *param_1,float *param_2,float *param_3);
void FUN_000ac530(float *param_1,float *param_2,float *param_3);
void FUN_000ac590(undefined4 *param_1,undefined4 *param_2,uint param_3);
void FUN_000ac5f0(float *param_1,float *param_2,uint param_3);
void FUN_000ac650(float *param_1,float *param_2,uint param_3);
void FUN_000ac6b0(float *param_1,float *param_2,float *param_3);
void FUN_000ac6e0(float *param_1,float *param_2,float *param_3);
void FUN_000ac710(float *param_1,float *param_2,float param_3);
void FUN_000ac740(float *param_1,float *param_2,float param_3);
void FUN_000ac770(float *param_1,float *param_2,float *param_3);
float10 FUN_000ac7b0(float *param_1);
void FUN_000ac7e0(void);
void FUN_000ac810(float *param_1,float *param_2);
float10 FUN_000ac890(float *param_1,float *param_2,float *param_3);
void FUN_000ac910(float *param_1,float *param_2,float *param_3);
float10 FUN_000ac990(float *param_1,float *param_2,float *param_3);
float10 FUN_000ac9f0(float *param_1,float *param_2,float *param_3);
void FUN_000aca50(float *param_1,float *param_2,float *param_3);
void FUN_000aca80(float *param_1,float *param_2,float param_3);
void FUN_000acab0(float *param_1,float *param_2,float param_3);
void FUN_000acaf0(float *param_1,float *param_2,float *param_3);
void FUN_000acb80(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_000acbb0(void);
void FUN_000acbe0(void);
void FUN_000acc10(float *param_1,float *param_2);
void FUN_000acc50(undefined4 *param_1,undefined4 *param_2);
void FUN_000acc70(undefined4 *param_1);
void FUN_000acc90(undefined4 *param_1);
undefined * FUN_000acdd0(void);
void FUN_000acde0(void);
void FUN_000ace10(void);
void FUN_000acf10(void);
undefined4 FUN_000acf60(void);
void FUN_000acf70(int param_1,int param_2);
void FUN_000ad060(int param_1,int param_2,float param_3);
void FUN_000ad230(void);
void FUN_000ad2b0(void);
void FUN_000ad320(void);
void FUN_000ad520(int param_1);
void FUN_000adad0(void);
void FUN_000adb30(void);
void FUN_000adca0(int param_1);
void FUN_000adcc0(void);
void FUN_000adce0(float param_1);
void FUN_000ade70(float param_1);
void FUN_000ade90(void);
void FUN_000adf70(void);
void FUN_000ae3d0(void);
void FUN_000ae4f0(void);
undefined4 *FUN_000ae510(undefined4 param_1,int param_2,short param_3,float param_4,undefined4 param_5,undefined4 param_6);
void FUN_000ae760(float *param_1);
void FUN_000aedc0(int param_1);
void FUN_000aee70(undefined4 param_1,int param_2);
int FUN_000af0a0(int param_1);
void FUN_000af1b0(int param_1);
void FUN_000af330(undefined4 param_1,int param_2);
void FUN_000af390(void);
void FUN_000af3b0(void);
void FUN_000af490(short *param_1,int param_2,int param_3);
undefined4 FUN_000af580(undefined4 param_1,float param_2,float param_3,undefined4 param_4,float param_5,float param_6,float param_7,short param_8,short param_9,short param_10,int param_11,int param_12,int param_13);
undefined4 FUN_000af710(int param_1,float param_2,float param_3,undefined4 param_4,float param_5,float param_6,float param_7,short param_8,short param_9,short param_10,int param_11,undefined4 param_12,int param_13);
undefined4 FUN_000af8f0(float param_1,float param_2,undefined4 param_3,undefined4 param_4,short param_5,short param_6,short param_7,int param_8);
void FUN_000afa90(void);
uint FUN_000b00a0(undefined2 *param_1,float param_2,undefined4 param_3);
void FUN_000b02c0(int param_1,float param_2,float param_3,float param_4);
void FUN_000b0570(float param_1,float param_2,float param_3,undefined4 param_4,undefined4 param_5);
void FUN_000b06d0(void);
void FUN_000b0870(void);
void FUN_000b0890(float param_1,float param_2,int param_3,undefined4 param_4,int param_5);
void FUN_000b0a90(void);
void FUN_000b0e10(void);
void FUN_000b4690(int param_1);
void FUN_000b4890(int param_1);
undefined4 * FUN_000b48b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
void FUN_000b4900(int param_1,int param_2);
void FUN_000b4960(void);
void FUN_000b4c60(void);
void FUN_000b4d20(int param_1,int param_2);
void FUN_000b4e90(void);
void FUN_000b4f00(void);
void FUN_000b4f90(int param_1,int param_2);
void thunk_FUN_000ec6f0(void);
void thunk_FUN_000ec710(void);
void FUN_000b50a0(int param_1,undefined4 *param_2);
void FUN_000b52c0(int param_1,int param_2);
void FUN_000b5650(undefined4 param_1,short *param_2);
void FUN_000b5750(int *param_1);
undefined4 FUN_000b57a0(short *param_1,int param_2);
undefined4 FUN_000b57b2(undefined4 param_1,short *param_2);
void FUN_000b57f0(int param_1,undefined4 param_2,undefined4 *param_3);
void __thiscall FUN_000b5a70(int param_1_00,int param_1,undefined4 param_2);
void FUN_000b5bb0(undefined4 param_1,undefined4 param_2);
void FUN_000b5bd0(int param_1);
void FUN_000b5c80(int param_1);
void FUN_000b5ec8(void);
void FUN_000b6160(undefined4 param_1);
void FUN_000b6170(undefined4 param_1);
void FUN_000b6250(int param_1,int param_2);
void FUN_000b6310(int param_1);
void FUN_000b63e0(undefined4 param_1);
uint FUN_000b63f0(int param_1);
void FUN_000b6770(undefined4 param_1);
void __thiscall FUN_000b6780(int param_1_00,int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void __fastcall FUN_000b6800(int param_1);
void FUN_000b6850(void);
undefined4 FUN_000b7030(int param_1);
void FUN_000b7040(int param_1);
void FUN_000b8680(void);
void FUN_000b8730(int param_1);
void FUN_000b8780(void);
void __fastcall FUN_000b8800(int *param_1);
undefined4 __fastcall FUN_000b8850(int *param_1);
undefined4 __fastcall FUN_000b8880(void **param_1);
undefined4 __fastcall FUN_000b89e0(int *param_1);
int __thiscall FUN_000b8a80(int param_1_00,int param_1,undefined4 param_2,undefined4 param_3);
void __fastcall FUN_000b8ae0(undefined4 *param_1);
void __fastcall FUN_000b8b20(int *param_1);
uint __fastcall FUN_000b8b40(int param_1);
int __fastcall FUN_000b8b60(int param_1);
uint __thiscall FUN_000b8b70(int *param_1_00,undefined4 param_1);
int __thiscall FUN_000b8c40(int param_1_00,int param_1,uint param_2);
undefined4 __thiscall FUN_000b8ca0(int param_1_00,int param_1,undefined4 param_2,int param_3,int *param_4);
void __fastcall FUN_000b8d00(int *param_1);
int __thiscall FUN_000b8d20(undefined4 *param_1_00,int param_1,uint param_2);
undefined4 __thiscall FUN_000b8da0(int *param_1_00,undefined4 *param_1);
undefined4 __thiscall FUN_000b8e00(int *param_1_00,undefined4 param_1,int param_2);
int __fastcall FUN_000b8e80(int *param_1);
undefined4 __thiscall FUN_000b8ec0(int *param_1_00,char param_1);
uint __fastcall FUN_000b8f40(int *param_1);
undefined4 __thiscall FUN_000b8f70(int *param_1_00,int *param_1);
undefined4 __thiscall FUN_000b8fd0(int *param_1_00,int param_1);
undefined4 __thiscall FUN_000b9020(int *param_1_00,int param_1);
void __thiscall FUN_000b9090(int *param_1_00,undefined4 *param_1);
int FUN_000b9140(void);
void FUN_000b9180(void);
void FUN_000b9260(void);
void FUN_000b92e0(int param_1);
uint FUN_000b9370(uint param_1,int param_2);
undefined4 FUN_000b93d0(void);
undefined4 FUN_000b9400(void);
undefined4 FUN_000b9430(void);
void __thiscall FUN_000b9460(undefined4 *param_1_00,undefined param_1);
int __fastcall FUN_000b9480(int param_1);
void __thiscall FUN_000b94c0(int param_1_00,int param_1,undefined4 *param_2);
undefined4 __thiscall FUN_000b9500(int param_1_00,int param_1);
uint __thiscall FUN_000b9550(int param_1_00,uint param_1,float *param_2);
uint __thiscall FUN_000b9680(int param_1_00,int param_1);
void __thiscall FUN_000b96b0(undefined4 *param_1_00,undefined4 param_1,undefined4 param_2,undefined4 param_3);
void __thiscall FUN_000b96d0(undefined4 *param_1_00,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void __thiscall FUN_000b9700(undefined4 *param_1_00,int param_1);
void __fastcall FUN_000b9890(undefined4 *param_1);
void __fastcall FUN_000b98a0(int param_1);
void FUN_000b9910(void);
int __thiscall FUN_000b9920(int param_1_00,int param_1,int param_2,undefined4 param_3);
void __fastcall FUN_000b9ba0(int param_1);
void __fastcall FUN_000b9bf0(int param_1);
int __thiscall FUN_000b9c30(int param_1_00,int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,char param_5,int param_6);
int __thiscall FUN_000b9d50(int param_1_00,int param_1,undefined4 param_2,undefined4 param_3,char param_4);
void __thiscall FUN_000b9e00(int param_1_00,int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4);
undefined4 * __fastcall FUN_000b9f90(undefined4 *param_1);
void __fastcall FUN_000ba070(int *param_1);
int FUN_000ba150(char *param_1,int param_2,int **param_3,int *param_4);
void FUN_000ba628(void);
float * FUN_000ba64b(undefined4 param_1,float **param_2);
int FUN_000bba01(char *param_1,int **param_2,int *param_3);
void FUN_000bbc77(undefined4 param_1,void **param_2);
void FUN_000bc134(void);
void FUN_000bc17a(undefined4 param_1);
void FUN_000bc187(void);
void FUN_000bc284(void);
void FUN_000bc608(int param_1,short param_2);
void FUN_000bcb94(int param_1,float *param_2);
void FUN_000bcfe2(int param_1,short param_2);
void FUN_000bd74b(int param_1);
void FUN_000bd7f6(float *param_1,float param_2,float param_3);
void FUN_000bda78(undefined4 param_1);
void FUN_000bdb47(void);
void __thiscall FUN_000bdc1e(undefined4 param_1_00,float *param_1,float *param_2);
void FUN_000bdd50(int param_1);
void FUN_000bdfa2(int param_1);
void FUN_000be5a0(float *param_1);
bool FUN_000be6d1(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6);
undefined4 FUN_000be70a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,float *param_10);
int FUN_000bead6(int param_1);
int FUN_000beb27(void);
void FUN_000beb76(float *param_1,byte param_2,int param_3);
void FUN_000bf9d6(float *param_1,byte param_2);
float10 FUN_000c12e3(float *param_1,float param_2);
undefined4 FUN_000c208c(int param_1,int param_2,uint *param_3,uint param_4);
undefined4 FUN_000c2a75(int param_1);
undefined4 FUN_000c2d48(float *param_1,float param_2);
uint FUN_000c2f57(float param_1,float param_2,float param_3,float param_4,int param_5);
undefined4 FUN_000c35b9(void);
uint FUN_000c40b1(void);
undefined4 FUN_000c459e(int param_1,int param_2);
void FUN_000c48dd(int param_1,byte param_2);
void FUN_000c7318(float *param_1,float *param_2,float *param_3);
bool FUN_000c7391(float *param_1,float *param_2,float *param_3);
void FUN_000c7460(float *param_1,float *param_2,float *param_3);
void FUN_000c74d9(void);
void FUN_000c7570(void);
void FUN_000c7799(undefined4 param_1,int param_2,int param_3,undefined2 param_4);
void __thiscall FUN_000c783a(undefined4 param_1_00,float *param_1,float *param_2,undefined *param_3);
undefined4 __thiscall FUN_000c7dce(undefined4 param_1_00,undefined *param_1);
bool FUN_000c7fa2(float *param_1,undefined4 *param_2,int param_3,int param_4,int param_5);
undefined4 FUN_000c82a7(undefined4 param_1);
void FUN_000c96cb(void);
int FUN_000c989c(int param_1,int param_2);
uint FUN_000ca399(void);
uint FUN_000ca3b5(void);
void FUN_000ca3d1(float *param_1);
uint FUN_000ca41a(void);
uint FUN_000ca436(void);
uint FUN_000ca452(void);
float10 FUN_000ca46e(undefined4 *param_1);
float10 FUN_000ca4da(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
float10 FUN_000ca548(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
float10 FUN_000ca5b3(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
float10 FUN_000ca620(undefined4 *param_1);
float10 FUN_000ca68c(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
float10 FUN_000ca6fa(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
float10 FUN_000ca766(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
float10 FUN_000ca7d1(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_000ca83e(undefined4 *param_1,undefined4 param_2);
void FUN_000ca88d(int param_1,undefined4 *param_2);
void FUN_000ca92e(undefined4 *param_1,undefined4 *param_2,undefined *param_3,undefined2 param_4,float param_5,undefined4 param_6);
void FUN_000cac61(float *param_1,float *param_2);
undefined4 FUN_000cadc7(void);
void FUN_000cb205(int param_1,undefined4 param_2,float *param_3,float param_4,float *param_5);
void FUN_000cb4ac(undefined4 *param_1,undefined4 *param_2,undefined *param_3,undefined2 param_4,float param_5,undefined4 param_6,float param_7);
void __thiscall FUN_000cba39(undefined4 param_1_00,float *param_1);
int __thiscall FUN_000cbb53(undefined4 param_1_00,undefined4 *param_1,undefined4 *param_2,undefined4 param_3);
int __thiscall FUN_000cbd62(undefined4 param_1_00,undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4);
int __thiscall FUN_000cbf76(undefined4 param_1_00,undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
int __thiscall FUN_000cc184(undefined4 param_1_00,undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);
void FUN_000cc397(undefined4 param_1,undefined4 param_2);
void FUN_000cc40b(undefined4 *param_1);
undefined4 FUN_000cc42d(void);
int FUN_000cc437(int param_1,int param_2);
int FUN_000cc6ad(int param_1);
void FUN_000cc725(int param_1,uint param_2);
void FUN_000cc755(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
uint FUN_000cc7ea(int param_1);
undefined4 FUN_000cc817(int param_1);
void FUN_000cc9a8(int param_1,undefined4 param_2);
void FUN_000cc9cf(void);
int FUN_000cc9d4(undefined4 *param_1,uint *param_2,uint *param_3);
undefined4 FUN_000cca2f(void);
void FUN_000cca39(void);
float ** FUN_000cca52(float *param_1,float *param_2,float param_3,int param_4,byte param_5);
float ** FUN_000ce1ce(float **param_1,float *param_2,float *param_3,float param_4,byte param_5);
undefined4 FUN_000ced7c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5);
void FUN_000cedd4(undefined4 param_1);
void FUN_000cede1(byte param_1,float **param_2);
int __thiscall FUN_000cfb58(undefined4 param_1_00,undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,int param_6);
undefined4 FUN_000cfd87(void);
void FUN_000cfd91(uint param_1,int *param_2,undefined4 *param_3);
int __thiscall FUN_000cfdc5(undefined4 param_1_00,float *param_1,float *param_2,undefined4 param_3,float param_4,float *param_5);
void FUN_000d009e(int param_1,byte param_2);
int __thiscall FUN_000d15e9(undefined4 param_1_00,undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,int param_5);
void FUN_000d1809(void);
void FUN_000d1a00(byte param_1);
void FUN_000d1ac0(char *param_1,uint param_2);
int FUN_000d1b40(char *param_1);
void FUN_000d1bb0(void);
bool FUN_000d1bc0(undefined4 param_1);
undefined4 FUN_000d1cc0(int param_1);
void FUN_000d1ce0(int param_1);
void FUN_000d1e40(int *param_1,int *param_2,int param_3);
void FUN_000d1f20(void);
void FUN_000d1f80(void);
void FUN_000d2030(void);
void FUN_000d20c0(float param_1,float param_2);
void FUN_000d29a0(int param_1,float param_2);
int FUN_000d2f10(void);
void FUN_000d3010(int *param_1);
void FUN_000d31b0(void);
void FUN_000d31e0(int param_1);
void FUN_000d32b0(int param_1);
void FUN_000d33b0(int param_1);
undefined4 * FUN_000d3580(void);
uint FUN_000d35c0(void);
void FUN_000d36e0(void);
void FUN_000d3730(int param_1);
void FUN_000d37c0(void);
void FUN_000d37f0(void);
float10 FUN_000d3a30(float param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4);
void FUN_000d3b10(undefined4 *param_1,undefined4 param_2);
void FUN_000d3cb0(void);
void __fastcall FUN_000d3dd0(undefined4 *param_1);
void FUN_000d3e50(void);
void FUN_000d3ed0(void);
int * FUN_000d40b0(int param_1,undefined4 param_2);
void FUN_000d4180(int param_1);
void FUN_000d4210(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5);
void FUN_000d4370(void);
void FUN_000d4420(undefined4 *param_1);
void FUN_000d44f0(void);
undefined4 FUN_000d4550(int param_1);
void FUN_000d45c0(int param_1,int param_2);
undefined4 __fastcall FUN_000d4660(undefined4 param_1_00,undefined4 param_2_00,undefined4 *param_1,undefined4 *param_2);
undefined4 FUN_000d4710(float *param_1,float param_2,int param_3,float param_4,int param_5,int param_6);
void FUN_000d4ae0(int param_1);
void FUN_000d4e00(int param_1);
void FUN_000d5040(void);
void FUN_000d51b0(void);
void FUN_000d52d0(undefined4 *param_1,float param_2,undefined4 param_3);
void FUN_000d5380(int param_1);
void FUN_000d54f0(void);
void FUN_000d55f0(undefined4 *param_1);
void FUN_000d5870(int param_1);
undefined * FUN_000d5f80(int param_1);
void FUN_000d5ff0(undefined4 *param_1);
void FUN_000d6070(int param_1);
void FUN_000d61b0(int param_1);
void FUN_000d6270(undefined4 *param_1);
void FUN_000d65f0(void);
undefined4 FUN_000d6660(float *param_1,float *param_2,float *param_3,float *param_4,float param_5,float param_6);
void FUN_000d6780(void);
undefined4 __fastcall FUN_000d6b10(undefined4 param_1,float *param_2);
uint FUN_000d6bb0(int param_1,int param_2,int param_3,float param_4,float param_5);
void FUN_000d6ec0(undefined4 *param_1);
void FUN_000d6f80(void);
undefined4 __fastcall FUN_000d8140(undefined4 param_1_00,undefined4 *param_2_00,undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5);
void FUN_000d8260(void);
void FUN_000d8350(void);
undefined4 FUN_000d86b0(float *param_1,float *param_2,undefined4 param_3,int param_4);
void FUN_000d8850(undefined4 *param_1,undefined4 param_2,int param_3);
void FUN_000d8910(void);
void FUN_000d8aa0(int param_1);
float10 FUN_000d8b40(float param_1,int *param_2,undefined4 *param_3,undefined4 *param_4);
void FUN_000d8c30(int param_1);
void FUN_000d90e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);
void FUN_000d92b0(void);
void FUN_000d9750(int param_1);
float10 FUN_000d97e0(float param_1,int *param_2,undefined4 *param_3,undefined4 *param_4);
void FUN_000d9930(undefined *param_1);
undefined4 FUN_000d9e50(float *param_1,int param_2);
undefined4 FUN_000d9fb0(undefined4 param_1,undefined4 param_2);
void FUN_000da000(undefined4 *param_1,undefined4 param_2,int param_3);
void FUN_000da1a0(void);
void FUN_000da290(int param_1);
float10 FUN_000da320(float param_1,int *param_2,undefined4 *param_3,undefined4 *param_4);
void FUN_000da410(int param_1);
void FUN_000da7f0(int param_1);
void FUN_000da8a0(void);
void FUN_000dab00(int param_1);
int FUN_000dabf0(void);
void FUN_000dad10(void);
void FUN_000dae30(void);
void FUN_000db3e0(void);
void FUN_000db4f0(void);
void FUN_000db5b0(void);
undefined4 FUN_000db770(undefined4 param_1,float param_2,int param_3);
void FUN_000db8c0(void);
void FUN_000db930(void);
void FUN_000dba00(float *param_1,int param_2);
void FUN_000dbbb0(void);
void FUN_000dbc10(void);
void FUN_000dbd50(void);
int * FUN_000dbe70(int *param_1,undefined4 param_2,float param_3,int param_4,int param_5);
void FUN_000dbf80(int param_1);
void FUN_000dc090(void);
int FUN_000dc1b0(void);
undefined4 FUN_000dc200(void);
undefined4 FUN_000dc280(void);
void FUN_000dc290(int param_1);
void FUN_000dc310(int param_1,float param_2);
void FUN_000dc4e0(float param_1,float param_2);
void FUN_000dc710(int param_1,undefined4 param_2);
void FUN_000dc780(int param_1,undefined4 param_2);
void FUN_000dc7d0(int param_1,undefined4 *param_2,float *param_3);
void FUN_000dca00(float param_1);
void FUN_000dcd40(int param_1);
void FUN_000dd3f0(int param_1,int param_2);
void FUN_000dd470(int *param_1);
void FUN_000dd4d0(float *param_1);
void FUN_000dd660(void);
void FUN_000dd6f0(int param_1);
void FUN_000dd8b0(void);
void FUN_000dd980(void);
void FUN_000ddd60(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,undefined4 param_5,float param_6,int param_7);
void FUN_000dde20(int param_1);
void FUN_000dded0(undefined *param_1,undefined *param_2);
void FUN_000de230(void);
void FUN_000de260(int param_1,int param_2);
undefined4 FUN_000de3c0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5);
void FUN_000de550(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,int param_5,undefined4 param_6);
void FUN_000de860(int param_1);
void FUN_000dec20(void);
void FUN_000dec50(void);
void FUN_000dec70(void);
void FUN_000deca0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_000ded30(int param_1);
void FUN_000dede0(void);
int FUN_000dee80(void);
uint FUN_000def00(void);
int FUN_000def60(void);
int FUN_000df060(void);
void FUN_000df160(void);
undefined4 FUN_000df190(undefined4 param_1,undefined4 param_2);
void FUN_000df220(void);
void FUN_000df2f0(int param_1);
void FUN_000df5a0(void);
void FUN_000df5c0(int param_1,undefined4 param_2);
void FUN_000df610(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,float param_5,float param_6,int param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10);
void FUN_000df770(void);
void FUN_000df990(void);
undefined4 __thiscall FUN_000dfb70(undefined4 param_1_00,undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_000dfc10(int *param_1,int param_2);
void FUN_000e0640(int param_1,int param_2);
undefined4 FUN_000e0910(void);
int FUN_000e09a0(void);
void FUN_000e0a20(void);
void FUN_000e0ab0(void);
void FUN_000e0c20(int param_1);
void FUN_000e1e30(void);
undefined4 FUN_000e21b0(void);
void FUN_000e2220(undefined4 *param_1);
void FUN_000e23a0(int param_1);
void FUN_000e27f0(void);
void FUN_000e2930(undefined4 *param_1);
void FUN_000e3c80(void);
void FUN_000e3d90(void);
void FUN_000e3e90(void);
void FUN_000e4130(void);
uint FUN_000e41f0(void);
void FUN_000e4280(float param_1);
void FUN_000e4500(int *param_1,int *param_2,int param_3,int param_4);
void FUN_000e46b0(int param_1);
void FUN_000e4770(int param_1);
void FUN_000e4cf0(void);
void FUN_000e4d90(void);
void FUN_000e51d0(void);
undefined4 * FUN_000e52e0(undefined4 *param_1,undefined4 *param_2,float param_3,int param_4);
void FUN_000e54f0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_000e5510(float *param_1);
void FUN_000e55d0(undefined4 *param_1);
void FUN_000e5810(void);
void FUN_000e6340(void);
void FUN_000e63d0(undefined4 param_1);
void FUN_000e6520(float param_1);
void __fastcall FUN_000e72f0(undefined4 param_1);
void FUN_000e7720(int param_1,int param_2);
void FUN_000e77d0(undefined4 param_1);
int FUN_000e7900(void);
void FUN_000e7920(undefined4 param_1,int param_2,int param_3);
void FUN_000e7970(undefined4 param_1,int param_2,int param_3);
void FUN_000e79c0(undefined4 param_1,int param_2,int param_3,undefined4 param_4);
void FUN_000e7a00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined * FUN_000e7a40(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined * FUN_000e7a70(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_000e7aa0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_000e7af0(undefined4 *param_1,int param_2);
void FUN_000e7b70(undefined4 *param_1,int param_2,undefined4 param_3);
void FUN_000e7bf0(float *param_1,float param_2,float param_3);
void FUN_000e7c50(float *param_1,float param_2,float param_3);
void FUN_000e7cb0(float *param_1,float param_2,float param_3,float param_4,float param_5);
void FUN_000e7d40(float *param_1,float *param_2,float param_3);
void FUN_000e7dc0(undefined2 *param_1,undefined4 param_2,float param_3);
float10 FUN_000e7e30(void);
float10 FUN_000e7e60(void);
float10 FUN_000e7e90(float param_1);
float10 FUN_000e7eb0(void);
undefined4 FUN_000e7ee0(float *param_1,float param_2,float param_3);
float10 FUN_000e7f50(float *param_1,float *param_2);
void FUN_000e7f70(float *param_1,float *param_2,float *param_3);
undefined4 FUN_000e7fd0(float *param_1);
void FUN_000e8010(float *param_1,float param_2,undefined4 param_3);
void FUN_000e80b0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3);
undefined4 FUN_000e80f0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
undefined4 FUN_000e8150(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_000e81c0(int param_1,undefined4 param_2);
void FUN_000e8200(int param_1,undefined4 param_2);
void FUN_000e8220(int param_1,undefined2 param_2);
void FUN_000e8240(undefined4 param_1,undefined4 param_2,uint param_3);
void FUN_000e8330(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,float param_5,int param_6);
float10 FUN_000e85a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,int param_5);
float10 FUN_000e86f0(float param_1);
void FUN_000e87d0(float *param_1,undefined4 param_2,float param_3);
void FUN_000e8850(float *param_1,undefined4 param_2,float param_3,float param_4,float param_5);
uint FUN_000e8910(float *param_1,float *param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_000e8a20(undefined4 *param_1,undefined *param_2,undefined *param_3,undefined4 param_4,undefined4 param_5);
undefined4 FUN_000e8c50(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,float param_5,int param_6);
void FUN_000e8d90(float *param_1);
undefined4 FUN_000e9150(float *param_1,float *param_2,float *param_3,undefined4 param_4,int param_5,int param_6,undefined4 param_7,undefined4 param_8);
void FUN_000e97e0(undefined4 param_1,float *param_2);
void FUN_000e98c0(undefined4 *param_1,undefined4 param_2);
void FUN_000e9c90(float *param_1,float *param_2,float *param_3);
uint FUN_000ea300(float *param_1);
void FUN_000ea3a0(int param_1,int param_2);
int FUN_000ea480(int param_1);
void FUN_000ea540(int param_1);
void FUN_000ea640(void);
void FUN_000ea670(int *param_1,int param_2,int param_3);
uint __fastcall FUN_000ea8e0(int param_1);
int * FUN_000ea980(undefined4 param_1,int param_2,int **param_3);
void FUN_000eb060(void);
void FUN_000eb0a0(int param_1);
char FUN_000eb230(void);
undefined * FUN_000eb270(void);
undefined4 FUN_000eb2a0(int param_1,int param_2);
void FUN_000eb340(int param_1,int param_2);
undefined4 FUN_000eb3d0(int param_1,int param_2);
bool FUN_000eb410(void);
undefined4 FUN_000eb420(void);
undefined4 FUN_000eb440(void);
undefined FUN_000eb450(int param_1,int param_2);
undefined FUN_000eb470(int param_1,int param_2);
undefined4 FUN_000eb490(int param_1,int param_2);
int FUN_000eb4b0(int param_1,int param_2);
void FUN_000eb520(void);
int * FUN_000eb5a0(int param_1);
undefined4 FUN_000eb600(int param_1);
undefined4 FUN_000eb670(void);
void FUN_000eb6c0(void);
void FUN_000eb870(void);
uint FUN_000eb8b0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_000eb900(int param_1,char *param_2);
void FUN_000eb930(void);
uint FUN_000eb950(char param_1);
void FUN_000eb9b0(undefined4 param_1);
void FUN_000eba30(undefined4 param_1,undefined4 param_2,int param_3);
void FUN_000ebc40(void);
void FUN_000ebc90(int param_1);
void FUN_000ebce0(int param_1,undefined4 param_2,int param_3);
int FUN_000ebf60(void);
void FUN_000ec060(void);
void FUN_000ec390(char *param_1,int param_2);
undefined4 FUN_000ec3d0(void);
void FUN_000ec430(undefined4 param_1);
void FUN_000ec450(int param_1);
void FUN_000ec470(void);
int FUN_000ec5c0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5);
void FUN_000ec690(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_000ec6e0(void);
void FUN_000ec6f0(void);
void FUN_000ec710(void);
void FUN_000ec720(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4);
undefined FUN_000ec770(int param_1);
void FUN_000ec7a0(int param_1);
void FUN_000ec810(void);
void FUN_000ec870(void);
void FUN_000ec880(void);
void FUN_000ec890(void);
void FUN_000ec8a0(void);
int FUN_000ec8b0(int param_1);
int FUN_000ec8e0(int param_1);
void FUN_000ec930(void);
undefined4 FUN_000ec950(void);
void FUN_000ec970(undefined4 param_1,undefined4 param_2,int param_3,code *param_4);
void __thiscall FUN_000ec9a0(float *param_1_00,float *param_1,float param_2);
void FUN_000ec9d0(void);
undefined4 XAPILIB::SetThreadPriority(undefined4 param_1,int param_2);
undefined4 FUN_000eca77(undefined4 param_1);
undefined4 FUN_000eca9d(undefined4 param_1);
void XAPILIB::RaiseException(undefined4 param_1,uint param_2,uint param_3,undefined4 *param_4);
void XAPILIB::ExitThread(undefined4 param_1);
undefined4 XAPILIB::GetExitCodeThread(int param_1,undefined4 *param_2);
undefined *XAPILIB::CreateThread(undefined4 param_1,undefined *param_2,undefined4 param_3,undefined4 param_4,uint param_5,undefined4 param_6);
undefined4 FUN_000eccd8(void);
undefined4 FUN_000ecce5(undefined4 param_1,int param_2);
void FUN_000ecd37(undefined4 param_1);
void FUN_000ecd45(byte *param_1,ushort *param_2);
void FUN_000ecd66(byte *param_1,undefined4 *param_2);
int FUN_000ecd9e(undefined4 *param_1,uint *param_2);
undefined4 FUN_000ece48(void);
undefined4 FUN_000ece50(undefined4 *param_1,undefined2 *param_2);
bool FUN_000ecebb(undefined2 *param_1,undefined4 *param_2);
undefined4 FUN_000ecf30(short *param_1,uint *param_2,uint *param_3,char param_4);
undefined4 XAPILIB::GetTimeZoneInformation(int *param_1);
void FUN_000ed296(undefined4 *param_1);
void FUN_000ed2ec(undefined2 *param_1);
bool FUN_000ed36b(undefined4 param_1);
bool FUN_000ed389(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);
undefined4 XAPILIB::QueryPerformanceCounter(undefined4 *param_1);
undefined4 FUN_000ed3c0(undefined4 *param_1);
undefined4 FUN_000ed3d4(int param_1,char *param_2,int param_3,undefined4 param_4,undefined4 *param_5);
void FUN_000ed4ae(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
undefined4 XAPILIB::XLaunchNewImageA(char *param_1,int param_2);
undefined4 FUN_000ed606(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4);
int FUN_000ed6fa(int param_1,uint *param_2,undefined4 *param_3);
bool XAPILIB::XMountUtilityDrive(int param_1);
void XAPILIB::XUnmountAlternateTitleA(byte param_1);
undefined4 FUN_000eda46(undefined4 param_1,undefined4 param_2,uint param_3);
void XAPILIB::OutputDebugStringA(char *param_1);
undefined4 FUN_000edb53(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_000edb77(undefined4 *param_1);
int FUN_000edbc6(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
void MmFreeContiguousMemory(void);
void FUN_000edc0f(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
undefined4 FUN_000edc31(void);
uint FUN_000edc56(void);
uint FUN_000edca2(void);
undefined4 FUN_000edce6(void);
undefined4 FUN_000edd0b(void);
void FUN_000edd33(undefined4 param_1);
undefined4 FUN_000edd61(undefined4 param_1);
bool FUN_000edd78(undefined4 param_1);
bool FUN_000edde4(undefined4 param_1);
int FUN_000ede72(byte *param_1,byte *param_2);
undefined4 FUN_000eded6(void);
undefined4 FUN_000edf14(void);
int FUN_000edf79(void);
char * FUN_000edfd3(void);
void FUN_000ee011(uint *param_1,uint param_2,undefined4 param_3);
void FUN_000ee073(undefined4 param_1,uint *param_2,uint param_3,undefined4 param_4);
undefined4 FUN_000ee0e5(int param_1,undefined4 param_2);
undefined4 * FUN_000ee120(undefined4 param_1,int param_2);
undefined4 FUN_000ee19b(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_000ee1b5(uint *param_1,undefined *param_2);
void XAPILIB::XCalculateSignatureBegin(undefined4 param_1);
int FUN_000ee226(int param_1);
void FUN_000ee23a(short *param_1,int param_2);
undefined4 FUN_000ee2cc(undefined4 param_1);
undefined4 FUN_000ee310(undefined4 param_1,wchar_t *param_2,wchar_t *param_3,int param_4);
int FUN_000ee49b(uint *param_1,char *param_2,int param_3);
undefined4 FUN_000ee59b(undefined4 param_1,wchar_t *param_2);
void FUN_000ee619(undefined4 param_1);
int FUN_000ee675(char *param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6);
void FUN_000ee8d8(char *param_1);
undefined4 * FUN_000ee9a7(char *param_1);
undefined4 FUN_000eeaae(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,undefined4 *param_5);
undefined4 FUN_000eeb9b(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,undefined4 *param_5);
undefined4 FUN_000eec71(undefined4 param_1);
uint FUN_000eecf5(undefined4 param_1,uint param_2,uint *param_3,int param_4);
bool FUN_000eedef(undefined4 param_1);
bool FUN_000eee16(undefined4 param_1,undefined4 *param_2);
int FUN_000eee54(undefined4 param_1,undefined4 *param_2);
undefined4 FUN_000eee8f(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5,uint param_6);
void entry(void);
int * FUN_000ef0fb(int *param_1,uint param_2);
int ** FUN_000ef129(undefined4 *param_1);
void FUN_000ef249(int param_1,undefined4 *param_2);
void FUN_000ef26a(int param_1,uint param_2,uint param_3);
int * FUN_000ef2fd(int param_1,int *param_2,int **param_3,int *param_4);
ushort * FUN_000ef488(int param_1,ushort *param_2,int *param_3,char param_4);
void FUN_000ef72d(int param_1,ushort *param_2,uint param_3);
uint FUN_000ef843(int param_1,uint param_2,ushort *param_3,uint param_4,uint param_5);
undefined4 FUN_000efc70(undefined2 *param_1,undefined2 *param_2,byte param_3,undefined4 param_4,undefined2 *param_5,uint param_6,uint param_7);
undefined4 FUN_000efd8e(uint param_1,uint param_2);
void FUN_000eff15(int param_1,ushort *param_2,int param_3);
undefined4 FUN_000f01bf(void);
undefined4 FUN_000f05e3(void);
void FUN_000f0d52(void);
undefined FUN_000f0d65(void);
void FUN_000f0f22(void);
undefined FUN_000f160c(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_000f1623(void);
void FUN_000f1629(uint param_1,undefined4 param_2);
uint FUN_000f1646(uint param_1);
int FUN_000f1664(undefined4 param_1);
int FUN_000f16c7(undefined4 param_1,char *param_2,int param_3,undefined4 param_4);
int FUN_000f17ae(undefined4 param_1,ushort *param_2,char *param_3,int param_4,short *param_5,int param_6);
void FUN_000f1ae2(undefined4 param_1,undefined4 param_2);
void XAPILIB::XapiBootDash(undefined4 param_1,undefined4 param_2,undefined4 param_3);
int FUN_000f1b9c(void);
void XAPILIB::XapiInitProcess(void);
undefined4 FUN_000f1d99(undefined4 param_1);
undefined4 FUN_000f20b6(void);
int FUN_000f2122(uint param_1,byte *param_2,int param_3,byte *param_4,int param_5);
int FUN_000f22ab(undefined4 param_1,int param_2);
int FUN_000f2428(undefined4 param_1);
void FUN_000f2495(int param_1,undefined4 *param_2);
undefined4 FUN_000f2501(undefined4 param_1,undefined4 param_2);
bool FUN_000f260e(undefined4 param_1,undefined4 param_2);
void FUN_000f265f(void);
void FUN_000f26b7(void);
void XAPILIB::XAutoPowerDownResetTimer(void);
void FUN_000f270d(void);
int __fastcall FUN_000f2780(uint param_1);
uint FUN_000f2784(undefined4 param_1);
undefined4 FUN_000f27eb(int param_1);
bool FUN_000f280c(undefined4 param_1);
undefined4 FUN_000f282a(int param_1);
void FUN_000f2834(int *param_1);
void FUN_000f2857(int param_1,undefined4 param_2);
undefined4 __thiscall FUN_000f2865(int param_1_00,short param_1,short **param_2,int *param_3);
undefined4 __fastcall FUN_000f28d5(int param_1_00,undefined4 param_2_00,undefined4 param_1,undefined4 param_2);
int FUN_000f2905(byte *param_1);
int XGRAPHC::XFONT_OpenBitmapFontFromMemory(undefined4 param_1,undefined4 param_2,int *param_3);
void FUN_000f29a2(undefined4 param_1);
int FUN_000f29b8(int param_1,short *param_2,int param_3,int *param_4);
void FUN_000f2a20(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,uint param_10);
void FUN_000f2aef(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void FUN_000f2b38(int param_1);
int __fastcall FUN_000f2b6d(int param_1_00,ushort param_2_00,int *param_1,int *param_2);
undefined * FUN_000f2c4b(short *param_1,undefined4 param_2,undefined4 *param_3);
uint FUN_000f2d15(uint param_1);
int FUN_000f2d6b(undefined4 param_1,short *param_2,undefined4 *param_3,undefined param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,int param_12);
int FUN_000f2e5a(undefined4 param_1,short *param_2,uint param_3,uint param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,uint param_12);
int FUN_000f2f4b(undefined4 param_1,short *param_2,uint param_3,undefined4 param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,uint param_12);
int FUN_000f302a(undefined4 param_1,short *param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,uint param_12,int param_13,int param_14,int param_15,undefined param_16,int param_17,uint param_18);
int FUN_000f32ac(undefined4 param_1,short *param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,uint param_12,int param_13,int param_14,int param_15,uint param_16,byte *param_17,uint param_18,uint param_19,int param_20);
int FUN_000f360a(undefined4 param_1,short *param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,uint param_12,int param_13,uint param_14,uint param_15,uint param_16,uint *param_17,uint param_18);
int FUN_000f388f(undefined4 param_1,short *param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,uint param_11,int param_12,int param_13,uint param_14,int param_15,uint param_16,uint param_17,uint param_18,uint param_19,int param_20);
int FUN_000f3be6(undefined4 param_1,short *param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,uint param_12,int param_13,uint param_14,uint param_15,undefined4 param_16,uint *param_17,uint param_18);
int FUN_000f3e56(undefined4 param_1,short *param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,uint param_11,int param_12,int param_13,uint param_14,int param_15,uint param_16,uint param_17,uint param_18,uint param_19,int param_20);
void FUN_000f419c(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12);
void ExQueryNonVolatileSetting(void);
void XcSHAUpdate(void);
void XcSHAInit(void);
void XcSHAFinal(void);
void DbgPrint(void);
int FUN_000f4290(short *param_1);
char * __cdecl _strrchr(char *__s,int __c);
undefined4 FUN_000f42d7(undefined *param_1,undefined4 param_2);
void FUN_000f433a(void);
void FUN_000f4352(undefined4 param_1);
int _rand(void);
undefined4 FUN_000f4381(undefined *param_1,undefined4 param_2,undefined4 param_3);
float10 FUN_000f43d8(double param_1);
char * __cdecl _strncpy(char *__dest,char *__src,size_t __n);
int __cdecl _strncmp(char *__s1,char *__s2,size_t __n);
void FUN_000f45f0(void);
longlong __fastcall __allshl(byte param_1,int param_2);
uint * FUN_000f4620(uint *param_1,char *param_2);
void thunk_FUN_000f46a6(void);
void FUN_000f46a6(void);
undefined8 FUN_000f46c8(uint param_1,uint param_2,uint param_3,uint param_4);
void _test_whether_TOS_is_int(void);
int __cdecl FID_conflict:_wprintf(char *__format,...);
void FUN_000f4910(void);
uint FUN_000f491b(undefined4 *param_1,uint param_2,uint param_3,int *param_4);
size_t __cdecl FID_conflict:_fread(void *__ptr,size_t __size,size_t __n,FILE *__s);
void FUN_000f4a55(void);
int __fseek_lk(int param_1,int param_2,int param_3);
int __cdecl _fseek(FILE *__stream,long __off,int __whence);
void FUN_000f4b2d(void);
char * __ftell_lk(char **param_1);
long __cdecl _ftell(FILE *__stream);
void FUN_000f4cd0(void);
uint FUN_000f4cda(undefined4 *param_1,uint param_2,uint param_3,int *param_4);
size_t __cdecl FID_conflict:_fread(void *__ptr,size_t __size,size_t __n,FILE *__s);
void FUN_000f4e33(void);
undefined4 __fclose_lk(int param_1);
int __cdecl _fclose(FILE *__stream);
void FUN_000f4ed2(void);
undefined4 __fsopen(void);
void FUN_000f4f2c(void);
void FUN_000f4f36(undefined4 param_1,undefined4 param_2);
void FUN_000f4f49(void);
void FUN_000f4f98(void);
void FUN_000f4fa1(uint param_1);
int __nh_malloc(uint param_1,int param_2);
void * __cdecl _malloc(size_t __size);
uint __abstract_cw(void);
uint __hw_cw(void);
uint __control87(uint param_1,uint param_2);
void FUN_000f52b8(void);
float10 FUN_000f52d5(uint param_1,uint param_2);
undefined4 __flush(int *param_1);
int __fflush_lk(int param_1);
undefined4 _flsall(void);
void FUN_000f54ae(void);
void FUN_000f54da(void);
void __flushall(void);
void ?_JumpToContinuation@@YGXPAXPAUEHRegistrationNode@@@Z(code *param_1);
void ?_CallMemberFunction0@@YGXPAX0@Z(undefined4 param_1,code *param_2);
void ?_UnwindNestedFrames@@YGXPAUEHRegistrationNode@@PAUEHExceptionRecord@@@Z(undefined4 param_1,int param_2);
undefined4 ___CxxFrameHandler(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_000f56c1(int param_1,int param_2,undefined4 param_3);
int ?_GetRangeOfTrysToCheck@@YAPBU_s_TryBlockMapEntry@@PBU_s_FuncInfo@@HHPAI1@Z(uint param_1,int param_2,int param_3,uint *param_4,uint *param_5);
undefined4 * FUN_000f57ac(undefined4 *param_1,undefined4 param_2);
undefined4 FUN_000f57e5(int param_1);
void FUN_000f5806(int param_1);
undefined4 FUN_000f584e(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5);
undefined4 FUN_000f589f(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);
void __global_unwind2(undefined4 param_1);
void __local_unwind2(int param_1,int param_2);
undefined4 __abnormal_termination(void);
void __fastcall __NLG_Notify1(undefined4 param_1);
void __NLG_Notify(void);
void ?__ArrayUnwind@@YGXPAXIHP6EX0@Z@Z(void);
void ??_M@YGXPAXIHP6EX0@Z@Z(void);
void FUN_000f5ae4(void);
void ??_L@YGXPAXIHP6EX0@Z1@Z(void);
void FUN_000f5b46(void);
char * __cdecl FID_conflict:__mbscpy(char *__dest,char *__src);
char * __cdecl FID_conflict:_strcat(char *__dest,char *__src);
void * __cdecl _memset(void *__s,int __c,size_t __n);
int FUN_000f5ca8(int param_1);
undefined4 FUN_000f5cb3(undefined *param_1,undefined4 param_2);
void thunk_FUN_000f4f49(void);
void ??2@YAPAXI@Z(undefined4 param_1);
void FUN_000f5d38(undefined4 param_1,int param_2);
void __SEH_epilog(void);
ulonglong __allmul(uint param_1,uint param_2,uint param_3,uint param_4);
undefined4 * FUN_000f5dd0(undefined4 *param_1,undefined4 *param_2,uint param_3);
undefined4 FUN_000f6105(undefined *param_1,int param_2,undefined4 param_3);
int __stricmp(undefined *param_1,undefined *param_2);
ulonglong __fastcall __aullshr(byte param_1,uint param_2);
undefined8 __aullrem(uint param_1,uint param_2,uint param_3,uint param_4);
wchar_t * __cdecl _wcsncpy(wchar_t *__dest,wchar_t *__src,size_t __n);
wchar_t * __cdecl _wcsstr(wchar_t *__haystack,wchar_t *__needle);
int __cdecl _wcscmp(wchar_t *__s1,wchar_t *__s2);
undefined4 FUN_000f6302(undefined *param_1,int param_2,undefined4 param_3);
undefined8 __alldiv(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 __fastcall __allshr(byte param_1,int param_2);
int FUN_000f64c1(int param_1,uint param_2);
void _shortsort(undefined *param_1,int param_2,code *param_3);
void FUN_000f65d0(undefined *param_1,uint param_2,uint param_3,code *param_4);
void _longjmp(__jmp_buf_tag *__env,int __val);
undefined4 __setjmp3(undefined4 *param_1,int param_2,int param_3,undefined4 param_4);
int __cdecl _isdigit(int param_1);
int __cdecl _isspace(int param_1);
void FUN_000f69bb(undefined4 param_1,int param_2);
void FUN_000f6a65(undefined4 param_1);
int FUN_000f6a89(int param_1,int param_2);
void FUN_000f6adf(char *param_1);
void __fassign(int param_1,int *param_2,undefined4 param_3);
void __fastcall FUN_000f6bda(char *param_1);
undefined * FUN_000f6bfd(undefined *param_1,int param_2,int param_3,char param_4);
int FUN_000f6ca6(undefined4 *param_1,int param_2,int param_3,undefined4 param_4);
undefined * FUN_000f6d06(undefined *param_1,uint param_2,char param_3);
int FUN_000f6dad(undefined4 *param_1,int param_2,int param_3);
void FUN_000f6dff(undefined4 *param_1,int param_2,int param_3,undefined4 param_4);
void __cfltcvt(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5);
uint __flsbuf(uint param_1,int *param_2);
void __fastcall _write_char(byte **param_1);
void _write_multi_char(undefined4 param_1,int param_2);
void _write_string(int param_1);
int FUN_000f7096(undefined4 param_1,byte *param_2,int **param_3);
void __cintrindisp2(void);
void __cintrindisp1(void);
void __ctrandisp2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_000f78a7(void);
void cintrinexit(void);
void __ctrandisp1(undefined4 param_1,undefined4 param_2);
float10 __fload(uint param_1,int param_2);
void __fastcall __trandisp1(undefined4 param_1,int param_2);
void __fastcall __trandisp2(undefined4 param_1,int param_2);
undefined4 * FUN_000f7c2e(void);
void FUN_000f7e2b(uint *param_1,uint *param_2,uint param_3,int param_4,undefined8 *param_5,undefined8 *param_6);
bool FUN_000f80cf(uint param_1,double *param_2,uint param_3);
void FID_conflict:__set_errno_from_matherr(int param_1);
int __errcode(byte param_1);
float10 __umatherr(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8_00,undefined4 param_8);
float10 __handle_qnan1(undefined4 param_1,double param_2,undefined4 param_3);
float10 FUN_000f8400(undefined4 param_1,undefined4 param_2,undefined8 param_3,double param_4,undefined4 param_5);
float10 FUN_000f84a0(double param_1);
float10 __set_exp(ulonglong param_1,short param_2);
undefined4 __sptype(int param_1,uint param_2);
float10 FUN_000f8538(uint param_1,uint param_2,int *param_3);
int FUN_000f85ea(void);
int FUN_000f85f7(void);
int __ctrlfp(void);
void FUN_000f8629(void);
float10 __fastcall FUN_000f8954(undefined4 param_1_00,undefined4 param_2_00,undefined2 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
float10 __fastcall FUN_000f896b(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
unkbyte10 FUN_000f89a8(void);
void FUN_000f89bd(void);
undefined4 FUN_000f89d4(void);
uint __fastcall __fload_withFB(undefined4 param_1,int param_2);
uint FUN_000f8a30(undefined4 param_1,uint param_2);
undefined4 __thiscall FUN_000f8b34(undefined4 param_1_00,double param_1);
undefined4 FUN_000f8b95(int param_1,int param_2_00,int param_2,int param_4,double *param_3);
void __lock_file(uint param_1);
void __lock_file2(int param_1,int param_2);
void __unlock_file(uint param_1);
void __unlock_file2(int param_1,int param_2);
undefined4 __stbuf(void **param_1);
void __ftbuf(int param_1,undefined4 *param_2);
uint __filbuf(byte **param_1);
char * FUN_000f9104(uint param_1,char *param_2,char *param_3);
undefined4 __read(void);
void FUN_000f9354(void);
int FUN_000f9378(void);
int FUN_000f9381(void);
void __dosmaperr(uint param_1);
int FUN_000f93fd(uint param_1,undefined4 param_2,undefined4 param_3);
undefined4 __lseek(void);
void FUN_000f94f6(void);
int FUN_000f957f(uint param_1,char *param_2,char *param_3);
undefined4 __write(void);
void FUN_000f9791(void);
undefined4 FUN_000f97b5(uint param_1);
undefined4 __close(void);
void FUN_000f98ad(void);
void __freebuf(undefined4 *param_1);
undefined4 * __openfile(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 *param_4);
undefined4 * __getstream(void);
void FUN_000f9b7d(void);
void FUN_000f9bc4(int param_1);
undefined4 FUN_000f9bd6(int param_1);
void FUN_000f9c52(int param_1);
undefined4 __callnewh(undefined4 param_1);
uint FUN_000f9c9b(uint param_1);
ushort FUN_000f9ccb(int param_1,ushort param_2);
undefined4 FUN_000f9cec(void);
void FUN_000f9d8a(void);
undefined4 __fastcall FUN_000f9dff(undefined4 param_1_00,byte *param_2,uint *param_1);
void FUN_000f9e8c(void);
void FUN_000f9f3d(void);
void ___DestructExceptionObject(void);
int __fastcall FUN_000f9f98(int *param_1);
undefined4 FUN_000f9fb5(void);
void FUN_000fa0f8(void);
void FUN_000fa15c(void);
void __thiscall FUN_000fa2d3(undefined4 param_1);
void FUN_000fa342(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,undefined4 param_6,undefined4 param_7);
void FUN_000fa3f8(int param_1,undefined4 param_2,undefined4 param_3,int param_4,char param_5,undefined4 param_6,undefined4 param_7);
undefined4 FUN_000fa5bd(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint *param_5,int param_6,undefined4 param_7,uint param_8);
void FUN_000fa69a(void);
void __CallSettingFrame@12(undefined4 param_1,undefined4 param_2,int param_3);
void _write_char(undefined4 param_1);
void _write_multi_char(undefined4 param_1,int param_2);
void __thiscall _write_string(undefined2 *param_1_00,int param_1);
int FUN_000fa7a3(undefined4 param_1,ushort *param_2,int **param_3);
void FUN_000faff5(int param_1);
int FUN_000fb010(int param_1);
int FUN_000fb050(char *param_1,char *param_2);
void __rt_probe_read4@4(void);
void FUN_000fb0dc(undefined4 param_1);
undefined4 __ZeroTail(int param_1,int param_2);
void __IncMan(int param_1,int param_2);
undefined4 __RoundMan(int param_1,int param_2);
void __CopyMan(int param_1,undefined4 *param_2);
undefined4 __IsZeroMan(int param_1);
void __ShrMan(int param_1,int param_2);
undefined4 __ld12cvt(ushort *param_1,uint *param_2,int *param_3);
void FID_conflict:__ld12tod(undefined4 param_1,undefined4 param_2);
void FID_conflict:__ld12tod(undefined4 param_1,undefined4 param_2);
void FUN_000fb41c(undefined4 param_1,undefined4 param_2);
void FUN_000fb449(undefined4 param_1,undefined4 param_2);
void FUN_000fb476(char *param_1,int param_2,int param_3);
void ___dtold(uint *param_1,uint *param_2);
int * FUN_000fb5af(undefined4 param_1,undefined4 param_2,int *param_3,int param_4);
void __getbuf(undefined4 *param_1);
byte __isatty(uint param_1);
undefined4 FUN_000fb68c(undefined *param_1,ushort param_2);
undefined8 __aulldvrm(uint param_1,uint param_2,uint param_3,uint param_4);
void FUN_000fb755(int param_1,int *param_2,ushort *param_3);
void FUN_000fb832(void);
undefined4 __thiscall FUN_000fb85d(undefined4 param_1_00,int param_1);
undefined4 FUN_000fbadf(void);
undefined4 FUN_000fbb66(uint param_1,int param_2);
undefined4 FUN_000fbbac(uint param_1);
undefined4 __get_osfhandle(uint param_1);
undefined4 FUN_000fbc36(uint param_1);
void __unlock_fhandle(uint param_1);
int FUN_000fbccb(void);
undefined8 FUN_000fbe18(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
uint __thiscall FUN_000fbe99(int param_1_00,undefined4 *param_1,uint *param_2,undefined4 param_3,uint param_4,byte param_5);
undefined4 __sopen(void);
void FUN_000fc174(void);
undefined4 FUN_000fc184(undefined4 param_1);
void FUN_000fc194(void);
undefined4 FUN_000fc1f5(undefined4 param_1,undefined4 param_2,char *param_3);
bool FUN_000fc6d0(undefined4 param_1,undefined4 param_2);
bool FUN_000fc6eb(undefined4 param_1,undefined4 param_2);
bool FUN_000fc706(undefined4 param_1);
uint FUN_000fc71d(uint param_1,byte **param_2);
undefined4 FUN_000fc7e2(ushort *param_1,byte *param_2,int param_3);
void FUN_000fc819(int param_1);
void FUN_000fc845(void);
undefined4 ___addl(uint param_1,uint param_2,uint *param_3);
void ___add_12(undefined4 *param_1,undefined4 *param_2);
void ___shl_12(uint *param_1);
void ___shr_12(uint *param_1);
void FUN_000fc941(char *param_1,int param_2,uint *param_3);
undefined4 FUN_000fca0f(int param_1,uint param_2,short *param_3,int param_4,byte param_5,short *param_6);
int FUN_000fcc86(undefined4 param_1,int param_2);
void FUN_000fcda9(int *param_1,int *param_2);
void FUN_000fcfcb(undefined2 *param_1,uint param_2,int param_3);
ushort __flswbuf(ushort param_1,int *param_2);
int FUN_000fd169(uint param_1,int param_2);
void FUN_000fd1d0(char *param_1);
int __strnicmp(undefined *param_1,undefined *param_2,int param_3);
void FUN_000fd248(char *param_1);
longlong __ftol(void);
int FUN_000fd2a0(byte *param_1,byte *param_2,int param_3);
int FUN_000fd2fb(ushort *param_1,int param_2,byte *param_3,int param_4);
uint FUN_000fd3b3(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,int param_6,int param_7,undefined4 *param_8);
undefined4 FUN_000fd478(void);
undefined4 FUN_000fd4dd(void);
void FUN_000fd546(undefined4 param_1);
void RtlUnwind(void);
undefined4 FUN_000fd680(void);
undefined4 D3D8::D3D_GetDeviceCaps(int param_1,int param_2,undefined4 param_3);
void D3D8::D3D_SetPushBufferSize(undefined4 param_1,undefined4 param_2);
int D3D8::Direct3D_CreateDevice(void);
void D3D8::D3DDevice_SetRenderState_MultiSampleMode(undefined4 param_1);
void D3D8::D3DDevice_SetRenderState_MultiSampleRenderTargetMode(undefined4 param_1);
void D3D8::D3DDevice_SetRenderState_PSTextureModes(undefined4 param_1);
void __fastcall D3D8::D3DDevice_SetRenderState_Simple(undefined4 param_1,undefined4 param_2);
void D3D8::D3DDevice_SetRenderStateNotInline(int param_1,undefined4 param_2);
void FUN_000fd8c0(void);
void D3D8::D3DDevice_SetRenderState_EdgeAntiAlias(undefined4 param_1);
void D3D8::D3DDevice_SetRenderState_ShadowFunc(int param_1);
void D3D8::D3DDevice_SetRenderState_FogColor(uint param_1);
void D3D8::D3DDevice_SetRenderState_CullMode(int param_1);
void D3D8::D3DDevice_SetRenderState_FrontFace(undefined4 param_1);
void D3D8::D3DDevice_SetRenderState_NormalizeNormals(undefined4 param_1);
void D3D8::D3DDevice_SetRenderState_TextureFactor(undefined4 param_1);
void D3D8::D3DDevice_SetRenderState_LineWidth(float param_1);
void D3D8::D3DDevice_SetRenderState_Dxt1NoiseEnable(uint param_1);
void D3D8::D3DDevice_SetRenderState_ZBias(int param_1);
void D3D8::D3DDevice_SetRenderState_LogicOp(int param_1);
void D3D8::D3DDevice_SetRenderState_FillMode(undefined4 param_1);
void D3D8::D3DDevice_SetRenderState_BackFillMode(undefined4 param_1);
void D3D8::D3DDevice_SetRenderState_TwoSidedLighting(int param_1);
void D3D8::D3DDevice_SetRenderState_VertexBlend(undefined4 param_1);
void D3D8::D3DDevice_SetTextureState_TexCoordIndex(uint param_1,uint param_2);
void D3D8::D3DDevice_SetTextureState_BumpEnv(uint param_1,int param_2,undefined4 param_3);
void D3D8::D3DDevice_SetTextureState_BorderColor(int param_1,undefined4 param_2);
void D3D8::D3DDevice_SetTextureState_ColorKeyColor(int param_1,undefined *param_2);
void FUN_000fe170(int param_1,int param_2,uint param_3);
void __fastcall FUN_000fe260(int param_1,uint *param_2);
undefined4 * __fastcall FUN_000fe2b0(int param_1,undefined4 *param_2);
undefined4 * __fastcall FUN_000fe490(int param_1,undefined4 *param_2);
void FUN_000fe4f0(void);
void D3D8::D3DDevice_SetRenderState_ZEnable(int param_1);
void D3D8::D3DDevice_SetRenderState_StencilEnable(int param_1);
void D3D8::D3DDevice_SetRenderState_StencilFail(undefined4 param_1);
void D3D8::D3DDevice_SetRenderState_YuvEnable(undefined4 param_1);
void D3D8::D3DDevice_SetRenderState_OcclusionCullEnable(int param_1);
void D3D8::D3DDevice_SetRenderState_StencilCullEnable(int param_1);
void D3D8::D3DDevice_SetRenderState_RopZCmpAlwaysRead(undefined4 param_1);
void D3D8::D3DDevice_SetRenderState_RopZRead(undefined4 param_1);
void D3D8::D3DDevice_SetRenderState_DoNotCullUncompressed(undefined4 param_1);
void D3D8::D3DDevice_SetRenderState_MultiSampleAntiAlias(uint param_1);
void D3D8::D3DDevice_SetRenderState_MultiSampleMask(int param_1);
void FUN_000fe990(undefined4 *param_1);
void D3D8::D3DDevice_GetDeviceCaps(undefined4 *param_1);
void D3D8::D3DDevice_CreateTexture(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);
void D3D8::D3DDevice_CreateCubeTexture(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void D3D8::D3DDevice_SetTransform(int param_1,undefined4 *param_2);
void D3D8::D3DDevice_GetViewport(undefined4 *param_1);
void D3D8::D3DDevice_SetMaterial(undefined4 *param_1);
void D3D8::D3DDevice_SetBackMaterial(undefined4 *param_1);
void D3D8::D3DDevice_GetLightEnable(int param_1,undefined4 *param_2);
void __fastcall D3D8::D3DDevice_SwitchTexture(undefined4 param_1_00,undefined4 param_2,undefined4 param_1);
int D3D8::D3DDevice_AddRef(void);
void D3D8::D3DDevice_Release(void);
void D3D8::D3DDevice_SetVerticalBlankCallback(undefined4 param_1);
void D3D8::D3DDevice_BlockUntilVerticalBlank(void);
void D3D8::D3DDevice_SetFlickerFilter(int param_1);
void D3D8::D3DDevice_SetSoftDisplayFilter(int param_1);
void D3D8::D3DDevice_InsertFence(void);
uint FUN_000feda0(int param_1);
uint FUN_000fee00(int param_1);
void D3D8::D3DDevice_GetDisplayMode(int *param_1);
void D3D8::D3DDevice_SetRenderTarget(int param_1,int param_2);
void D3D8::D3DDevice_GetBackBuffer(int param_1,undefined4 param_2,undefined4 *param_3);
void FUN_000ff490(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5,int param_6,uint *param_7,uint *param_8);
void D3D8::D3DDevice_CopyRects(int param_1,int *param_2,uint param_3,int param_4,int *param_5);
undefined4 D3D8::D3DDevice_GetDepthStencilSurface(int *param_1);
void D3D8::D3DDevice_SetViewport(uint *param_1);
undefined * D3D8::D3DDevice_SetLight(float param_1,int *param_2);
int D3D8::D3DDevice_LightEnable(uint param_1,int param_2);
void D3D8::D3DDevice_SetTexture(int param_1,int *param_2);
void D3D8::D3DDevice_SetPalette(int param_1,uint *param_2);
void D3D8::D3DDevice_SetIndices(int *param_1,undefined4 param_2);
bool D3D8::D3DDevice_IsBusy(void);
void D3D8::D3DDevice_SetTile(int param_1,int *param_2);
void D3D8::D3DDevice_SetScissors(int param_1,int param_2,int **param_3);
void D3D8::D3DDevice_SetScreenSpaceOffset(float param_1,float param_2);
void __fastcall FUN_00100250(undefined4 param_1,int *param_2);
void FUN_001003a0(void);
void FUN_001004b0(void);
void FUN_00100580(int *param_1);
void FUN_00100680(void);
void FUN_001006e0(void);
void FUN_00100740(void);
void FUN_00100910(byte param_1);
void FUN_00100af0(void);
void FUN_00100c00(void);
undefined4 D3D8::D3DDevice_Swap(uint param_1);
undefined * D3D8::D3DDevice_CreateIndexBuffer(int param_1);
void D3D8::D3DPalette_Lock(undefined4 param_1,undefined4 *param_2,byte param_3);
undefined * D3D8::D3DDevice_CreateVertexBuffer(undefined4 param_1);
void D3D8::D3DVertexBuffer_Lock(undefined4 param_1,int param_2,undefined4 param_3,int *param_4,byte param_5);
undefined * D3D8::D3DDevice_CreatePalette(int param_1);
void D3D8::D3DDevice_Clear(int param_1,int *param_2,uint param_3,uint param_4,undefined4 param_5,undefined4 param_6);
void D3D8::D3DDevice_BeginStateBlock(void);
undefined * D3D8::D3D_RecordStateBlock(int **param_1);
void D3D8::D3DDevice_ApplyStateBlock(uint *param_1);
void D3D8::D3DDevice_DeleteStateBlock(uint *param_1);
void D3D8::D3DDevice_EndStateBlock(void);
void FUN_00101930(undefined8 *param_1,undefined8 *param_2,int param_3);
void D3D8::D3DDevice_DrawVerticesUP(int *param_1,uint param_2,int param_3,uint param_4);
void D3D8::D3DDevice_DrawVertices(undefined4 param_1,uint param_2,uint param_3);
void D3D8::D3DDevice_DrawIndexedVertices(undefined8 *param_1,uint param_2,undefined4 *param_3);
void D3D8::D3DDevice_SetVertexData2f(int param_1,undefined4 param_2,undefined4 param_3);
void D3D8::D3DDevice_SetVertexData4f(int param_1,int param_2,int param_3,int param_4,int param_5);
void D3D8::D3DDevice_Begin(undefined4 param_1);
void D3D8::D3DDevice_End(void);
void FUN_00101f40(int param_1,uint param_2);
void FUN_00102080(uint *param_1,uint *param_2);
void FUN_00102130(int *param_1,int *param_2,uint param_3);
void FUN_001021a0(int param_1,uint *param_2,int param_3);
void FUN_00102340(uint *param_1,uint *param_2);
undefined * __thiscall D3D8::D3DDevice_CreateVertexShader(uint param_1_00,int param_1,ushort *param_2,uint *param_3,undefined4 param_4);
void D3D8::D3DDevice_SetStreamSource(int param_1,int *param_2,int param_3);
void D3D8::D3DDevice_LoadVertexShader(int param_1,undefined4 param_2);
void D3D8::D3DDevice_SelectVertexShader(int param_1,undefined4 param_2);
void D3D8::D3DDevice_SetShaderConstantMode(uint param_1);
void FUN_001027f0(undefined4 param_1,undefined4 param_2);
void D3D8::D3DDevice_DeleteVertexShader(int param_1);
void __fastcall FUN_00102850(undefined4 *param_1);
void D3D8::D3DDevice_SetVertexShader(uint param_1);
void D3D8::D3DDevice_SetVertexShaderConstant(int param_1,undefined4 *param_2,int param_3);
undefined * D3D8::D3DDevice_CreatePixelShader(undefined4 *param_1,undefined4 *param_2);
void D3D8::D3DDevice_DeletePixelShader(int *param_1);
void D3D8::D3DDevice_SetPixelShader(uint param_1);
void D3D8::D3DDevice_SetPixelShaderConstant(float param_1,int param_2,int param_3);
void FUN_00103010(void);
void FUN_00103030(undefined4 *param_1,undefined4 param_2,undefined4 *param_3);
undefined * __fastcall FUN_001030a0(int *param_1);
void __fastcall FUN_00103150(int param_1);
int __fastcall FUN_00103170(uint *param_1,int param_2);
uint * FUN_001031e0(void);
void FUN_00103300(void);
void __fastcall D3D8::D3DDevice_KickOff(uint *param_1);
uint D3D8::D3D_SetFence(byte param_1);
void D3D8::D3D_BlockOnTime(int param_1,int param_2);
int * D3D8::D3D_MakeRequestedSpace_8(int param_1,int param_2);
void D3D8::D3DDevice_MakeSpace(void);
void FUN_00103750(int *param_1,int param_2);
void D3D8::D3D_KickOffAndWaitForIdle(void);
void D3D8::D3D_BlockOnResource(uint *param_1);
void FUN_00103840(uint *param_1);
void FUN_00103880(int param_1);
char D3D8::D3DResource_GetType(uint *param_1);
uint FUN_00103960(int param_1);
void D3D8::D3D_DestroyResource(uint *param_1);
undefined4 FUN_00103a10(uint *param_1);
void FUN_00103a50(uint *param_1);
uint D3D8::D3DResource_AddRef(uint *param_1);
uint D3D8::D3DResource_Release(uint *param_1);
undefined4 D3D8::D3DResource_IsBusy(uint *param_1);
void FUN_00103bb0(uint *param_1);
void D3D8::Get2DSurfaceDesc(uint param_1,uint param_2,uint *param_3);
void D3D8::D3DTexture_GetSurfaceLevel(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void D3D8::D3DTexture_LockRect(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void D3D8::D3DCubeTexture_GetCubeMapSurface(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined *FUN_00103d10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 *param_9);
byte D3D8::D3DBaseTexture_GetLevelCount(int param_1);
void D3D8::D3DSurface_GetDesc(undefined4 param_1,undefined4 param_2);
void D3D8::D3DSurface_LockRect(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined *FUN_00103e20(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 *param_5);
void FUN_00103e80(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4);
uint FUN_00103eb0(uint param_1);
int D3D8::D3D_CMiniport_GetDisplayCapabilities(void);
uint * FUN_00103f0f(void);
void __thiscall FUN_00103f88(int param_1_00,uint param_1,uint param_2,int param_3,uint param_4,undefined4 param_5,uint param_6,undefined4 param_7);
void FUN_00104250(void);
void FUN_00104330(void);
void __fastcall FUN_001043f0(int param_1);
undefined * __thiscall FUN_00104510(undefined4 *param_1_00,int *param_1);
undefined * FUN_00104a50(void);
void __fastcall FUN_00104f80(int **param_1);
void FUN_00105120(float *param_1,float *param_2,float param_3);
void FUN_00105150(float *param_1,float *param_2,float *param_3);
void FUN_00105180(undefined8 *param_1,float *param_2,float param_3,float *param_4);
void FUN_001051e0(undefined (*param_1) [16],float *param_2,float *param_3);
void FUN_001052e0(float param_1,float *param_2,float *param_3);
float10 FUN_001053c0(float param_1);
float10 FUN_00105430(float param_1);
void FUN_00105470(float *param_1);
undefined4 FUN_001054c0(float *param_1,float *param_2,int param_3);
int FUN_00105a20(float param_1);
unkbyte10 FUN_00105a30(float param_1);
float10 FUN_00105a40(float param_1);
float10 FUN_00105aa0(float param_1);
void __thiscall FUN_00105ab0(int *param_1_00,int param_1);
void __thiscall FUN_00105b32(int *param_1_00,int param_1);
int __fastcall FUN_00105b80(uint param_1);
undefined4 FUN_00105b90(undefined4 param_1);
undefined FUN_00105c50(uint param_1);
byte FUN_00105c70(int param_1);
uint FUN_00105ca0(int param_1,int param_2);
void FUN_00105ce0(int param_1);
void FUN_00105e00(int param_1);
void FUN_00105e70(int param_1,int param_2,int *param_3,int *param_4,int *param_5,uint *param_6,uint *param_7);
void D3D8::Get2DSurfaceDesc(uint param_1,uint param_2,uint *param_3);
void FUN_00106080(int param_1,int param_2,int param_3,int *param_4,uint *param_5,uint *param_6,uint *param_7,undefined4 *param_8);
void D3D8::Lock2DSurface(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,int *param_5,uint param_6);
int FUN_00106350(int param_1,int param_2,undefined4 param_3,uint param_4,uint param_5,uint param_6,char param_7,char param_8,uint *param_9,uint *param_10);
undefined4 __fastcall D3D8::CMiniport_IsFlipPending(int param_1);
undefined8 FUN_00106570(void);
void __thiscall FUN_001066a0(int *param_1_00,undefined4 param_1,int param_2);
undefined4 __fastcall FUN_00106720(int *param_1);
void __thiscall FUN_001068c0(int *param_1_00,uint **param_1,int param_2);
void FUN_00106940(int param_1);
undefined4 __fastcall FUN_00106bf0(int *param_1);
uint __fastcall FUN_00106ce0(int *param_1);
void __thiscall FUN_00106f10(int param_1_00,int param_1);
void __thiscall FUN_00106f23(int param_1_00,int param_1);
undefined4 __thiscall FUN_00106f63(int *param_1_00,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5);
undefined4 __thiscall FUN_00106fc6(int param_1_00,uint *param_1);
undefined4 __fastcall FUN_00106ffa(undefined4 *param_1);
undefined4 __fastcall FUN_00107025(int *param_1);
undefined4 __fastcall FUN_00107066(int *param_1);
undefined4 __fastcall FUN_00107170(int *param_1);
void FUN_001072a9(uint param_1,uint *param_2,undefined4 *param_3,int param_4);
undefined4 __thiscall D3D8::CMiniport_CreateCtxDmaObject(int *param_1_00,undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5);
undefined4 __thiscall FUN_001073d2(int param_1_00,undefined4 param_1,uint param_2,undefined4 *param_3);
void __thiscall FUN_00107462(int *param_1_00,undefined4 *param_1);
bool __fastcall D3D8::CMiniport_InitHardware(int param_1);
undefined4 __thiscall FUN_0010762f(int *param_1_00,uint param_1,uint param_2,int param_3,undefined4 param_4,uint param_5,uint param_6,uint param_7);
undefined4 __thiscall FUN_0010781d(int *param_1_00,int param_1,int param_2);
void __fastcall FUN_001078df(int *param_1);
uint FUN_00107a90(void);
void D3D8::D3D_LazySetPointParams(undefined4 *param_1);
void FUN_00107ca0(undefined4 *param_1);
void FUN_00107e10(undefined4 *param_1);
void FUN_00108000(undefined4 *param_1);
void FUN_001081e0(undefined4 *param_1);
void FUN_001085a0(int *param_1,int param_2,int param_3,uint param_4);
void FUN_001086a0(undefined4 *param_1,uint param_2);
undefined4 * FUN_00108840(undefined4 *param_1);
void FUN_00108980(undefined4 *param_1);
void FUN_00108cc0(int **param_1);
void FUN_00108ec0(void);
void __thiscall D3D8::D3DDevice_SetStateVB(undefined **param_1_00,undefined *param_1);
void __fastcall D3D8::D3DDevice_SetStateUP(uint **param_1);
void __fastcall FUN_00109220(int *param_1);
void __fastcall FUN_00109387(int *param_1);
void __fastcall FUN_00109485(int *param_1);
void __fastcall FUN_00109554(int *param_1);
void __fastcall FUN_0010958a(int *param_1);
void __fastcall FUN_001095ba(int *param_1);
void __fastcall FUN_0010962b(int *param_1);
void __thiscall FUN_0010966a(int *param_1_00,int param_1);
void __thiscall FUN_001096a3(int *param_1_00,uint param_1);
void __fastcall FUN_001098a0(int *param_1);
void __thiscall FUN_001098b2(int *param_1_00,uint param_1,uint param_2,uint param_3,int param_4);
void __thiscall FUN_00109a3f(int *param_1_00,int param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5);
void __thiscall FUN_00109a78(int *param_1_00,int param_1,uint param_2);
void __fastcall FUN_00109aed(int *param_1);
void __thiscall FUN_0010a4cc(int *param_1_00,uint param_1);
void __fastcall FUN_0010a5ef(int *param_1);
void __fastcall FUN_0010a670(int *param_1);
int __fastcall FUN_0010a910(uint param_1,uint param_2);
void FUN_0010a9b0(int param_1);
undefined4 FUN_0010f5a0(float param_1,float param_2);
void FUN_0010f5cd(float *param_1,float param_2,float param_3,float param_4,float param_5);
void FUN_0010f661(float *param_1,float *param_2,float param_3);
void FUN_0010f6b9(void);
void FUN_0010f6dc(float *param_1,float *param_2,float *param_3);
void FUN_0010f701(undefined4 *param_1,undefined4 *param_2);
void FUN_0010f77d(float *param_1,float *param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_0010f877(uint *param_1,uint *param_2);
void __fastcall FUN_0010f96e(undefined **param_1);
undefined4 FUN_0010f9dd(int param_1,undefined4 *param_2);
void FUN_0010fa4f(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5);
void __thiscall FUN_0010faee(float *param_1_00,uint param_1);
void __thiscall FUN_0010fb43(uint *param_1_00,uint param_1);
void __thiscall FUN_0010fbd8(int param_1_00,int param_1,undefined4 *param_2);
void __thiscall FUN_0010fbf4(uint *param_1_00,int param_1);
void __thiscall FUN_0010fc35(undefined2 *param_1_00,undefined4 param_1);
char FUN_0010fc5a(int *param_1,int param_2);
char FUN_0010fc83(ushort *param_1,uint param_2);
undefined4 FUN_0010fcb7(undefined4 *param_1,uint param_2,int param_3,uint *param_4);
undefined4 FUN_0010fd34(int *param_1,uint param_2,int param_3,uint *param_4);
void FUN_0010fdb4(int param_1,int param_2);
undefined4 FUN_0010fdca(undefined4 *param_1,uint param_2,int param_3,uint *param_4);
void FUN_0010fe8d(int param_1,short param_2);
undefined4 __thiscall FUN_0010fea5(int param_1_00,int param_1,int param_2,int param_3);
undefined4 __thiscall FUN_0010ff5d(int param_1_00,int param_1,int param_2);
undefined4 __thiscall FUN_0010ffc3(int param_1_00,int param_1,int param_2,int param_3);
undefined4 __thiscall FUN_001100a9(int param_1_00,int param_1,int param_2);
undefined4 FUN_0011012b(int *param_1,undefined4 *param_2,uint *param_3,uint *param_4);
undefined4 FUN_001101bd(undefined4 *param_1,undefined2 *param_2,uint *param_3,uint *param_4);
void __thiscall FUN_00110252(int param_1_00,int param_1,int param_2);
void __thiscall FUN_00110270(int param_1_00,int param_1,int param_2,int param_3);
void __thiscall FUN_001102c7(int param_1_00,int param_1,int param_2,int param_3);
void __thiscall FUN_00110361(int param_1_00,int param_1,int param_2);
undefined * __thiscall FUN_00110434(int param_1_00,undefined4 *param_1,uint *param_2);
void __thiscall FUN_00110562(undefined4 *param_1_00,undefined4 param_1,undefined4 param_2,undefined4 param_3);
void __fastcall FUN_00110583(int param_1);
void __thiscall FUN_0011059a(int param_1_00,int param_1,int param_2);
void __thiscall FUN_001105bb(int param_1_00,int param_1,int param_2,int param_3);
void __thiscall FUN_0011061f(int param_1_00,int param_1,int param_2,int param_3);
void __thiscall FUN_001106bc(int param_1_00,int param_1,int param_2);
undefined * __thiscall FUN_00110798(int param_1_00,undefined4 *param_1,uint *param_2);
void __thiscall FUN_001108c8(undefined4 *param_1_00,undefined4 param_1,undefined4 param_2,undefined2 param_3);
void __fastcall FUN_001108eb(int param_1);
int __fastcall FUN_00110902(int param_1);
int __fastcall FUN_00110921(int param_1);
undefined * __fastcall FUN_0011094a(undefined4 *param_1);
int __thiscall FUN_00110991(int param_1_00,int param_1);
void __thiscall FUN_001109b8(int param_1_00,undefined4 param_1);
undefined * __fastcall FUN_001109dc(undefined4 *param_1);
int __thiscall FUN_00110a24(int param_1_00,short param_1);
void __thiscall FUN_00110a4c(int param_1_00,undefined2 param_1);
void FUN_00110a72(undefined4 *param_1,undefined4 *param_2);
void FUN_00110a92(int *param_1,int *param_2,int param_3);
uint * FUN_00110add(uint *param_1,ushort *param_2,int param_3);
void __thiscall FUN_00110b30(int param_1_00,int param_1);
void __thiscall FUN_00110b97(int param_1_00,int param_1);
void __thiscall FUN_00110bd6(int param_1_00,int param_1);
void __thiscall FUN_00110c00(int param_1_00,ushort param_1);
void __thiscall FUN_00110c84(int param_1_00,ushort param_1);
void __thiscall FUN_00110cd0(int param_1_00,short param_1);
int __thiscall FUN_00110d01(int param_1_00,undefined4 param_1,undefined4 param_2);
void __thiscall FUN_00110de7(int param_1_00,undefined4 *param_1,uint *param_2);
undefined4 FUN_00110fa0(undefined4 param_1);
undefined * FUN_00110fb6(undefined4 param_1,int *param_2);
undefined4 FUN_0011100e(uint param_1,undefined4 *param_2);
void __fastcall FUN_00111177(undefined **param_1);
undefined4 FUN_00111202(int *param_1,int *param_2,int **param_3);
undefined4 FUN_0011127a(int param_1,int param_2);
undefined * FUN_00111416(int param_1,int param_2,int *param_3);
uint FUN_00111651(uint param_1,uint param_2,int param_3,uint param_4,uint param_5);
undefined * __thiscall FUN_001116a4(int param_1_00,uint param_1,uint param_2);
uint __thiscall FUN_001117f0(int param_1_00,int param_1);
undefined4 FUN_0011199e(int param_1,uint param_2);
undefined * FUN_00111a8c(int param_1,int param_2,int *param_3);
undefined * __thiscall FUN_00111cc7(int param_1_00,uint param_1,uint param_2);
uint __thiscall FUN_00111f3b(int param_1_00,int param_1);
undefined4 __fastcall FUN_0011211b(int param_1);
void __thiscall FUN_00112175(int *param_1_00,int param_1,int param_2,char param_3);
void __thiscall FUN_001121d3(ushort *param_1_00,ushort param_1,ushort param_2,char param_3);
undefined * __thiscall FUN_00112241(int param_1_00,int param_1);
undefined * __thiscall FUN_001123d0(int param_1_00,int param_1);
int __fastcall FUN_0011255e(int *param_1);
undefined4 __fastcall FUN_00112621(ushort *param_1);
undefined * __thiscall FUN_0011270d(int param_1_00,int param_1,int param_2,int param_3,int param_4);
undefined * __thiscall FUN_00112ade(int param_1_00,int *param_1,int *param_2);
undefined * __thiscall FUN_00112d31(int param_1_00,int param_1,undefined4 param_2);
undefined * __thiscall FUN_00112e58(int param_1_00,int param_1,undefined4 param_2);
undefined * __thiscall FUN_00112f39(int param_1_00,int param_1,int param_2,int param_3,int param_4);
undefined * __thiscall FUN_00113332(int param_1_00,int *param_1,undefined4 *param_2);
undefined * __thiscall FUN_001135a2(int param_1_00,int param_1,undefined4 param_2);
undefined * __thiscall FUN_001136e7(int param_1_00,int param_1,undefined4 param_2);
void FUN_001137d1(undefined4 param_1,char *param_2);
void FUN_001137f6(undefined4 param_1,char *param_2);
undefined * __thiscall FUN_0011381b(int param_1_00,uint param_1,int param_2,char param_3);
void __thiscall FUN_00113907(int param_1_00,int param_1);
uint __thiscall FUN_0011396c(int param_1_00,uint param_1);
undefined * __thiscall FUN_00113a44(int param_1_00,uint param_1,ushort param_2,char param_3);
void __thiscall FUN_00113b40(int param_1_00,ushort param_1);
uint __thiscall FUN_00113bbb(int param_1_00,ushort param_1);
int FUN_00113cb3(int param_1);
undefined * FUN_00113ceb(uint param_1,undefined4 *param_2,undefined4 *param_3);
undefined * FUN_00113e9f(int *param_1,undefined4 param_2,int param_3);
undefined4 FUN_001140c1(float *param_1,float param_2,int param_3,int param_4,uint param_5,int param_6,int param_7,int param_8,int *param_9,float *param_10);
undefined * FUN_00114184(uint param_1,undefined2 *param_2,undefined4 *param_3);
undefined * FUN_00114340(int *param_1,undefined4 param_2,int param_3);
undefined4 FUN_0011454c(float *param_1,float param_2,int param_3,int param_4,uint param_5,int param_6,int param_7,int param_8,int *param_9,float *param_10);
int __thiscall FUN_00114618(int param_1_00,int param_1,int param_2,int param_3);
int __thiscall FUN_001146ee(int param_1_00,uint param_1,int param_2,int param_3);
int __thiscall FUN_001149c6(int param_1_00,uint param_1,int param_2,int param_3);
int __thiscall FUN_00114abc(int param_1_00,uint param_1,int param_2,int param_3);
int FUN_00114de6(int param_1);
undefined ** __thiscall FUN_00114e1e(undefined **param_1_00,undefined *param_1,undefined *param_2,undefined *param_3);
undefined ** __thiscall FUN_00114f38(undefined **param_1_00,undefined *param_1,undefined *param_2,undefined *param_3);
undefined * FUN_00115052(int param_1,uint param_2,int param_3,int param_4,int **param_5);
undefined * __thiscall FUN_001151c9(int param_1_00,short *param_1);
undefined * __thiscall FUN_00115342(int param_1_00,int param_1);
undefined * __thiscall FUN_001154bf(int param_1_00,int param_1);
undefined * __thiscall FUN_0011563b(int param_1_00,int *param_1);
undefined4 __thiscall FUN_001157aa(int param_1_00,uint param_1,undefined4 param_2);
undefined * __thiscall FUN_0011584f(int param_1_00,uint param_1,int param_2,uint *param_3,int param_4);
undefined * __thiscall FUN_00115ae0(int param_1_00,uint param_1,int param_2,uint *param_3,int param_4);
undefined *FUN_00115d76(uint param_1,uint param_2,uint param_3,undefined4 param_4,int param_5,int *param_6);
undefined * FUN_00115e3c(int param_1,uint param_2,int param_3,int param_4,int **param_5);
undefined * __thiscall FUN_00115fb3(int param_1_00,uint *param_1,uint *param_2,uint *param_3,undefined4 *param_4,int **param_5,int param_6,int param_7);
undefined * __thiscall FUN_001165a3(int param_1_00,uint *param_1,uint *param_2,uint *param_3,undefined4 *param_4,int **param_5,int param_6,int param_7);
undefined *FUN_00116ba5(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,int **param_7);
void FUN_00116c96(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
undefined *FUN_00116cda(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,int **param_7);
void FUN_00116dcb(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
undefined4 FUN_00116e0f(int param_1);
undefined4 FUN_00116e4c(uint param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,int *param_6,int param_7,int param_8);
undefined *FUN_001170fc(int param_1,undefined4 param_2,int *param_3,int param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8,int param_9,undefined4 param_10);
void FUN_001172fd(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);
int FUN_00117325(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,undefined4 param_6,undefined4 param_7,int param_8);
void FUN_00117389(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
undefined *FUN_001173b1(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,int *param_6,undefined4 param_7,undefined4 param_8);
int FUN_001174d4(int param_1,undefined4 param_2,uint param_3,uint param_4);
int FUN_0011760e(int param_1,undefined4 param_2,uint param_3,uint param_4);
int FUN_0011776f(int param_1,int param_2,uint param_3,int param_4,int param_5,uint param_6,undefined4 param_7,int param_8,undefined4 param_9,int param_10,uint param_11,uint param_12,undefined4 param_13,uint *param_14,int *param_15);
int FUN_00117ae3(int param_1,int param_2,uint param_3,uint *param_4,uint param_5,undefined4 param_6,uint param_7,undefined4 param_8,uint param_9,uint param_10,uint param_11,undefined4 param_12,uint *param_13,int *param_14);
int __thiscall FUN_00117e81(undefined4 param_1_00,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,undefined4 param_14);
int __thiscall FUN_00117ee3(undefined4 param_1_00,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13);
void __fastcall FUN_00117f42(undefined **param_1);
undefined * __thiscall FUN_00117f57(int param_1_00,undefined4 param_1);
undefined4 FUN_00117f94(int *param_1,int *param_2,int **param_3);
int FUN_00117fdb(int param_1);
void __fastcall FUN_00118004(undefined **param_1);
void __fastcall FUN_0011801c(undefined4 *param_1);
void __fastcall FUN_00118026(code **param_1);
void __fastcall FUN_00118044(undefined4 *param_1);
undefined4 __fastcall FUN_00118066(int *param_1);
undefined4 __fastcall FUN_001181d5(int *param_1);
undefined4 __fastcall FUN_00118333(int *param_1);
undefined4 __fastcall FUN_0011844f(int *param_1);
undefined4 __fastcall FUN_0011859f(int *param_1);
undefined4 __fastcall FUN_001186c3(int *param_1);
undefined4 __fastcall FUN_00118812(int *param_1);
undefined4 __fastcall FUN_00118965(int *param_1);
undefined4 __fastcall FUN_00118a00(int *param_1);
void __thiscall FUN_00118b4c(float *param_1_00,float *param_1,float *param_2);
void __thiscall FUN_00118b78(float *param_1_00,float *param_1,float param_2);
undefined4 __fastcall FUN_00118ba4(int *param_1);
undefined4 __fastcall FUN_00118cdc(int **param_1);
undefined4 __fastcall FUN_00118d9e(int **param_1);
undefined * __fastcall FUN_00118f7c(int **param_1);
undefined * __fastcall FUN_0011915c(int **param_1);
undefined * __fastcall FUN_00119492(int **param_1);
uint * FUN_0011980b(int param_1);
undefined * __fastcall FUN_0011990b(int **param_1);
undefined * __fastcall FUN_00119c0d(int **param_1);
int * FUN_0011a0c9(uint param_1,int param_2,int param_3);
undefined * __fastcall FUN_0011a38a(int **param_1);
undefined * __fastcall FUN_0011a783(int **param_1);
undefined4 __thiscall FUN_0011ac9b(code **param_1_00,int param_1,undefined4 param_2,code *param_3);
void __fastcall FUN_0011adad(undefined4 *param_1);
void __fastcall FUN_0011adc7(int param_1);
undefined * __thiscall FUN_0011ae20(int *param_1_00,uint *param_1,uint param_2);
void FUN_0011b50b(int *param_1);
undefined * FUN_0011b56a(undefined4 param_1,undefined4 param_2);
undefined * __thiscall FUN_0011b7ba(int *param_1_00,uint *param_1,uint param_2);
undefined * __thiscall FUN_0011bc01(undefined4 *param_1_00,uint *param_1,uint param_2);
undefined * FUN_0011bed8(undefined4 param_1,undefined4 param_2);
undefined * __thiscall FUN_0011c3f1(uint *param_1_00,int *param_1,uint param_2);
undefined4 FUN_0011c714(short *param_1,uint param_2);
undefined4 __thiscall FUN_0011c744(undefined4 *param_1_00,undefined4 param_1,int param_2,undefined4 *param_3);
void __fastcall FUN_0011c89e(undefined4 *param_1);
uint __thiscall FUN_0011c8a8(void **param_1_00,undefined *param_1,int param_2);
undefined4 __fastcall FUN_0011c96d(int *param_1);
undefined4 __fastcall thunk_FUN_0011c96d(int *param_1);
void __thiscall FUN_0011c990(int param_1_00,int param_1,int param_2,float *param_3);
void __thiscall FUN_0011c9f9(int param_1_00,int param_1,int param_2,float *param_3);
void __thiscall FUN_0011ca8f(int param_1_00,int param_1,int param_2,float *param_3);
void __thiscall FUN_0011cb0d(int param_1_00,int param_1,int param_2,float *param_3);
void __thiscall FUN_0011cb77(float *param_1_00,float *param_1,float *param_2);
undefined4 __thiscall FUN_0011cba3(float *param_1_00,float *param_1);
void FUN_0011cbe3(void);
undefined ** __thiscall FUN_0011cc06(undefined **param_1_00,undefined4 *param_1,uint param_2,undefined *param_3);
void __thiscall FUN_0011ce04(int param_1_00,undefined4 *param_1);
void __thiscall FUN_0011ce49(int param_1_00,uint param_1,uint param_2,int param_3);
void __thiscall FUN_0011cf1e(int param_1_00,uint param_1,uint param_2,int param_3);
void __thiscall FUN_0011d02a(int param_1_00,uint param_1,uint param_2,int param_3);
void __thiscall FUN_0011d114(int param_1_00,uint param_1,uint param_2,int param_3);
void __thiscall FUN_0011d1fe(int param_1_00,uint param_1,uint param_2,int param_3);
void __thiscall FUN_0011d2e8(int param_1_00,uint param_1,uint param_2,int param_3);
void __thiscall FUN_0011d3ee(int param_1_00,uint param_1,uint param_2,int param_3);
void __thiscall FUN_0011d4fa(int param_1_00,uint param_1,uint param_2,int param_3);
void __thiscall FUN_0011d58b(int param_1_00,uint param_1,int param_2);
void __thiscall FUN_0011d645(int param_1_00,uint param_1,uint param_2,int param_3);
void __thiscall FUN_0011d6f2(int param_1_00,uint param_1,uint param_2,int param_3);
void __thiscall FUN_0011d7d2(int param_1_00,uint param_1,uint param_2,int param_3);
void __thiscall FUN_0011d890(int param_1_00,uint param_1,uint param_2,int param_3);
void __thiscall FUN_0011d97f(int param_1_00,uint param_1,uint param_2,int param_3);
void __thiscall FUN_0011daa1(int param_1_00,uint param_1,uint param_2,int param_3);
void __thiscall FUN_0011db61(int param_1_00,int param_1,int param_2,float *param_3);
void __thiscall FUN_0011dbed(int param_1_00,int param_1,int param_2,float *param_3);
void __thiscall FUN_0011dc93(int param_1_00,int param_1,int param_2,float *param_3);
void __thiscall FUN_0011dd2f(int param_1_00,int param_1,int param_2,float *param_3);
void __thiscall FUN_0011ddd4(int param_1_00,int param_1,int param_2,float *param_3);
void __thiscall FUN_0011de76(int param_1_00,int param_1,int param_2,float *param_3);
void __thiscall FUN_0011df26(int param_1_00,int param_1,int param_2,float *param_3);
void __thiscall FUN_0011dfd5(int param_1_00,int param_1,int param_2,undefined4 *param_3);
void __thiscall FUN_0011e0ab(int param_1_00,int param_1,int param_2,float *param_3);
void __thiscall FUN_0011e119(int param_1_00,int param_1,int param_2,float *param_3);
undefined ** __thiscall FUN_0011e1a2(undefined **param_1_00,int param_1);
undefined4 __fastcall FUN_0011e27b(int param_1);
undefined * __thiscall FUN_0011e467(int param_1_00,uint param_1,uint param_2,uint param_3);
undefined ** __thiscall FUN_0011e81f(undefined **param_1_00,int param_1);
undefined4 __fastcall FUN_0011e93f(int param_1);
undefined * __thiscall FUN_0011ec45(int param_1_00,uint param_1,uint param_2,int param_3);
void __thiscall FUN_0011eec1(int param_1_00,int param_1,int param_2,undefined4 *param_3);
undefined ** __thiscall FUN_0011efbb(undefined **param_1_00,undefined4 param_1);
undefined ** __thiscall FUN_0011efd7(undefined **param_1_00,undefined4 param_1);
undefined ** __thiscall FUN_0011eff3(undefined **param_1_00,undefined4 param_1);
undefined ** __thiscall FUN_0011f00f(undefined **param_1_00,undefined4 param_1);
undefined ** __thiscall FUN_0011f02b(undefined **param_1_00,undefined4 param_1);
undefined ** __thiscall FUN_0011f047(undefined **param_1_00,undefined4 param_1);
undefined ** __thiscall FUN_0011f063(undefined **param_1_00,undefined4 param_1);
undefined ** __thiscall FUN_0011f07f(undefined **param_1_00,undefined4 param_1);
undefined ** __thiscall FUN_0011f09b(undefined **param_1_00,undefined4 param_1);
undefined ** __thiscall FUN_0011f0b7(undefined **param_1_00,undefined4 param_1);
undefined ** __thiscall FUN_0011f0d3(undefined **param_1_00,undefined4 param_1);
undefined ** __thiscall FUN_0011f0ef(undefined **param_1_00,undefined4 param_1);
undefined ** __thiscall FUN_0011f10b(undefined **param_1_00,undefined4 param_1);
undefined ** __thiscall FUN_0011f144(undefined **param_1_00,undefined4 param_1);
undefined ** __thiscall FUN_0011f160(undefined **param_1_00,undefined4 param_1);
void __fastcall FUN_0011f17c(undefined **param_1);
void __fastcall FUN_0011f1a3(undefined **param_1);
undefined ** __thiscall FUN_0011f1d9(undefined **param_1_00,undefined4 param_1);
undefined ** __thiscall FUN_0011f1f1(undefined **param_1_00,undefined4 param_1);
undefined ** __thiscall FUN_0011f209(undefined **param_1_00,undefined4 param_1);
undefined ** __thiscall FUN_0011f221(undefined **param_1_00,undefined4 param_1);
undefined ** __thiscall FUN_0011f239(undefined **param_1_00,undefined4 param_1);
undefined4 FUN_0011f251(int param_1);
undefined4 __thiscall FUN_0011f556(undefined4 param_1_00,byte param_1);
void FUN_0011f572(code **param_1,int param_2,int param_3);
void thunk_FUN_001255cf(int param_1);
void FUN_0011f637(void);
int FUN_0011f7aa(code **param_1);
undefined4 FUN_0011f844(code **param_1);
int FUN_0011f8eb(code **param_1,char param_2);
uint FUN_0011f94e(void);
code ** FUN_0011f9f7(code **param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_0011fa7b(code **param_1);
undefined4 FUN_0011fb3c(void);
uint __thiscall FUN_0011fbca(undefined param_1_00,undefined param_1);
uint FUN_0011fec5(void);
undefined4 FUN_00120177(int *param_1);
undefined4 FUN_001203b3(int *param_1);
uint FUN_0012052d(void);
undefined4 FUN_00120684(void);
uint FUN_00120918(void);
uint FUN_00120b41(code **param_1);
undefined4 FUN_00120c18(int *param_1);
undefined4 FUN_00120cb4(int *param_1);
undefined4 FUN_00120d8b(code **param_1);
uint FUN_0012100f(int *param_1);
void FUN_0012117c(int param_1);
void FUN_001211a6(int param_1);
void FUN_00121223(int *param_1);
void FUN_00121317(code **param_1);
void __thiscall FUN_00121363(int param_1_00,int param_1,undefined4 *param_2);
void FUN_001213ea(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_00121404(__jmp_buf_tag *param_1,undefined4 param_2);
void FUN_00121422(int param_1,undefined4 param_2);
void FUN_00121437(undefined4 param_1,undefined4 param_2);
void FUN_0012145c(undefined4 param_1,undefined4 param_2);
int FUN_00121481(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_00121584(int param_1,int param_2);
void FUN_001216f7(int param_1,undefined4 param_2);
void FUN_00121717(int param_1,int param_2,int param_3);
void FUN_00121abe(int param_1,undefined4 *param_2);
void FUN_00121b0b(undefined4 *param_1,int param_2,int param_3);
void FUN_00121c2e(int *param_1,int *param_2,int *param_3);
uint FUN_00121caf(int param_1,int param_2,uint param_3);
undefined4 FUN_00121cc9(int param_1,int param_2);
uint FUN_00121cdf(int param_1,uint param_2);
undefined4 FUN_00121cf5(int param_1,int param_2,double *param_3);
undefined4 FUN_00121d1e(int param_1,int param_2,uint *param_3);
undefined4 FUN_00121d49(int param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6,uint *param_7,uint *param_8,uint *param_9);
undefined4 FUN_00121e1a(int param_1,int param_2,undefined4 *param_3,uint *param_4);
undefined4 FUN_00121e4d(int param_1,int param_2,undefined4 *param_3,uint *param_4,int *param_5);
void FUN_00121eb4(int param_1);
void FUN_00121ebd(int param_1);
undefined4 FUN_00121ed6(int param_1);
void FUN_00121eef(int param_1,byte param_2,int param_3);
void FUN_00121f3c(int *param_1,undefined *param_2);
void FUN_00121ffb(int param_1);
void FUN_00122004(int param_1,double param_2,double param_3);
void FUN_0012203a(int param_1);
void FUN_00122043(int param_1,int *param_2);
void FUN_0012212e(int *param_1,int param_2);
int ** FUN_0012223e(int **param_1,int **param_2,int **param_3);
void FUN_001223b5(int *param_1,undefined *param_2);
void FUN_001223f9(uint *param_1,int param_2,uint param_3,byte param_4);
void FUN_00122631(int *param_1,byte *param_2,int param_3,int param_4,byte param_5);
void FUN_0012297f(uint *param_1,int param_2,int param_3,int param_4,int param_5);
void FUN_00122b87(int *param_1,int param_2,int param_3);
void FUN_00122ed9(int *param_1,byte *param_2,int param_3,int param_4);
void FUN_00122fe7(uint param_1);
void FUN_001232f0(int param_1);
void FUN_00123403(int param_1);
void FUN_0012359f(int param_1,int param_2,double param_3);
void FUN_001235ba(int param_1,uint *param_2,uint param_3,uint param_4,char param_5,byte param_6,undefined param_7,undefined param_8,undefined param_9);
void FUN_0012365b(int param_1,int param_2,undefined4 param_3,undefined2 param_4);
void FUN_0012367f(int param_1,int param_2,undefined param_3);
void FUN_0012369a(int param_1,int param_2,undefined4 param_3);
void FUN_001236d3(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5);
void FUN_0012371a(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_00123742(int param_1,undefined4 param_2,undefined4 param_3);
int FUN_00123781(int param_1,uint param_2,uint param_3);
undefined4 * FUN_001237c9(undefined4 param_1,int param_2,int param_3);
void thunk_FUN_00126181(int param_1,int param_2);
void FUN_00123821(int param_1);
void FUN_00123878(undefined4 param_1,undefined4 *param_2);
undefined4 * FUN_00123886(int param_1);
void FUN_001238ac(int param_1,undefined4 param_2);
void FUN_00123915(undefined4 param_1,int param_2);
void FUN_0012393b(int param_1);
void FUN_0012396d(int param_1);
void FUN_001239a2(ushort *param_1);
void FUN_001239d2(uint *param_1);
void __fastcall FUN_00123a1f(float *param_1);
void FUN_00123abe(undefined4 param_1,undefined4 param_2,int param_3);
void __fastcall FUN_00123b49(undefined4 param_1,float *param_2);
void FUN_00123c7b(ushort param_1);
void FUN_00123cdc(int param_1,undefined2 *param_2,undefined4 param_3,undefined4 param_4);
void FUN_00124179(ushort *param_1,undefined4 *param_2);
void FUN_0012425e(int param_1,int param_2);
void FUN_001242ac(byte *param_1,int param_2);
void __thiscall FUN_001243ac(uint param_1_00,undefined4 param_1,undefined4 param_2);
void FUN_001243de(int param_1,ushort *param_2);
void FUN_00124437(int param_1,byte *param_2);
int FUN_0012458d(int param_1,int param_2);
int FUN_0012459d(int param_1,int param_2);
void FUN_001245b5(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6);
void FUN_001245fc(undefined4 *param_1,undefined4 *param_2,int param_3);
void FUN_0012461e(undefined4 *param_1,uint param_2);
uint FUN_00124639(void);
void FUN_0012466b(void);
code * FUN_00124826(void);
void FUN_0012499c(void);
void FUN_00124a2e(int param_1);
void FUN_00124afb(int *param_1);
void FUN_00124b43(int param_1);
void __fastcall FUN_00124b84(undefined4 param_1,undefined4 param_2);
int FUN_00124b99(code **param_1,int param_2,undefined4 *param_3);
undefined4 * FUN_00124c95(code **param_1,int param_2,uint param_3);
int FUN_00124d23(code **param_1,undefined4 param_2,uint param_3,uint param_4);
int FUN_00124db5(code **param_1,undefined4 param_2,int param_3,uint param_4);
void FUN_00124e53(code **param_1,int param_2,undefined param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void FUN_00124eb4(code **param_1,int param_2,undefined param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void FUN_00124f15(int param_1);
void FUN_00125094(undefined4 param_1,char param_2);
void FUN_0012511c(undefined4 param_1,char param_2);
int FUN_001251a7(code **param_1,int *param_2,uint param_3,uint param_4,char param_5);
int FUN_001252c5(code **param_1,int *param_2,uint param_3,uint param_4,char param_5);
void FUN_001253e8(code **param_1,int param_2);
void FUN_001254c9(int param_1);
void FUN_001254f9(code **param_1);
void FUN_001255ad(int param_1);
void FUN_001255cf(int param_1);
void FUN_001255ea(int param_1);
void FUN_00125606(int param_1);
uint __fastcall FUN_00125622(undefined4 param_1,int param_2);
void FUN_00125693(code **param_1);
void FUN_00125882(void);
void FUN_001258f1(void);
void FUN_00125bec(int param_1);
undefined4 FUN_00125c1c(int param_1);
undefined4 FUN_00125c5b(int param_1);
undefined4 FUN_00125c99(int param_1,int param_2,char *param_3,int param_4);
void FUN_00125d7e(undefined4 param_1,undefined4 param_2,undefined4 param_3);
int FUN_00125d95(byte **param_1,int param_2);
undefined4 * FUN_001260fc(int param_1);
void FUN_0012613e(int param_1);
void * FUN_0012614b(int param_1,size_t param_2);
void FUN_00126181(int param_1,int param_2);
undefined4 * FUN_0012619a(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,uint param_4);
undefined4 * FUN_001261bd(undefined4 param_1,undefined4 *param_2,undefined param_3,uint param_4);
undefined4 FUN_001261ee(undefined *param_1);
void FUN_00126211(int param_1,undefined4 param_2,undefined4 param_3);
bool FUN_0012622b(int param_1);
void FUN_00126289(undefined4 param_1,byte *param_2);
void FUN_001262eb(int param_1,undefined4 *param_2,uint param_3);
void FUN_00126501(uint *param_1,int *param_2,int param_3);
void FUN_001267ca(undefined4 param_1,int param_2,byte *param_3,byte *param_4,int param_5);
void FUN_00126945(int param_1);
undefined4 FUN_00126ae1(int param_1,uint param_2);
void FUN_00126b6d(int param_1,undefined4 param_2,int param_3);
void FUN_00126d63(int param_1,int param_2,uint param_3);
void FUN_00126e8d(int param_1,int param_2,int param_3);
void FUN_00126ed7(int param_1,int param_2,int param_3);
void FUN_00126fe2(uint param_1,int param_2,int param_3);
void FUN_001270d1(int param_1,int param_2,uint param_3);
void FUN_00127288(int param_1,int param_2,undefined4 param_3);
void __thiscall FUN_001272d2(undefined4 param_1_00,int param_1);
uint FUN_001274f6(uint param_1,byte *param_2,uint param_3);
void FUN_001275ff(undefined4 param_1,size_t param_2);
undefined4 FUN_0012760a(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_0012760f(code **param_1);
void FUN_00127623(void);
void FUN_001276cb(void);
void FUN_001277fc(void);
void FUN_001278d0(void);
void FUN_00127966(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_001279ce(int param_1,undefined4 param_2,uint *param_3,uint param_4);
void FUN_00127b61(code **param_1,char param_2);
void __fastcall FUN_00127c34(int param_1);
undefined4 FUN_00127c83(int param_1,int param_2);
undefined4 FUN_00127e5d(void);
undefined4 FUN_00127e60(int param_1);
int FUN_00127fff(uint param_1,int param_2);
uint FUN_00128165(void);
void FUN_00128765(int param_1);
void FUN_001287a0(int param_1,char param_2);
void FUN_00128898(int param_1,int param_2,int *param_3);
undefined4 FUN_00128a42(byte **param_1,byte *param_2,byte *param_3,int param_4);
uint FUN_00128b2c(int param_1,int param_2,int param_3,int param_4,int *param_5);
undefined4 FUN_00128c16(int param_1);
char FUN_00128c74(int param_1,int param_2);
void FUN_00129041(code **param_1);
void FUN_00129170(int param_1);
undefined4 FUN_001291aa(void);
char FUN_00129205(int param_1,int param_2);
char FUN_00129402(uint param_1,int *param_2);
undefined4 FUN_0012962b(int param_1,int param_2);
char FUN_0012970d(int *param_1,int *param_2);
void FUN_00129a7b(code **param_1);
void FUN_00129d1e(int param_1);
void FUN_00129d7f(code *param_1);
void FUN_00129f36(undefined4 *param_1);
void FUN_00129faa(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,int *param_6,int param_7);
void FUN_0012a00f(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,int *param_6);
void FUN_0012a09f(int param_1);
void FUN_0012a1d1(int param_1,char param_2);
void FUN_0012a26e(int param_1,int param_2,int *param_3,undefined4 param_4,int param_5,int *param_6,int param_7);
void FUN_0012a347(int param_1,undefined4 *param_2,undefined4 *param_3,int *param_4);
void FUN_0012a424(int param_1,undefined4 param_2,int param_3,undefined4 *param_4);
void FUN_0012a47b(int param_1,undefined4 param_2,undefined4 *param_3,int *param_4);
void FUN_0012a4e5(int param_1,int param_2,int param_3,byte **param_4);
void FUN_0012a589(int param_1,int param_2,byte **param_3,int *param_4);
void FUN_0012a690(code **param_1);
void FUN_0012a851(void);
void FUN_0012a901(int param_1,int param_2,int param_3,int *param_4,int param_5);
void FUN_0012a96c(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_0012a98f(int param_1,int *param_2,int param_3,undefined4 *param_4,int param_5);
void FUN_0012aac1(void);
void FUN_0012aac2(uint param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5);
void FUN_0012abfe(int param_1,int *param_2,int param_3,int *param_4,int param_5);
void FUN_0012ae1c(code **param_1);
void FUN_0012af3d(void);
void FUN_0012b002(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5,int *param_6,int param_7);
void FUN_0012b0a8(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5,int *param_6);
void FUN_0012b0d9(int param_1,int *param_2,int param_3,undefined4 *param_4);
void FUN_0012b22f(int param_1,int *param_2,int param_3,undefined4 *param_4);
void FUN_0012b415(int param_1);
void FUN_0012b48a(int param_1,int param_2,undefined4 param_3,int param_4);
void FUN_0012b4f6(void);
void FUN_0012b82e(undefined4 param_1,int param_2,int param_3,int param_4);
void FUN_0012b981(int param_1);
void FUN_0012bab9(void);
void FUN_0012bb46(int param_1,int param_2,int param_3);
void FUN_0012bcc6(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,byte *param_7);
void FUN_0012bde0(int param_1,int param_2,int param_3);
void FUN_0012beb0(int param_1,int param_2,char **param_3,int param_4);
void FUN_0012bf59(int param_1,int param_2,int *param_3,int param_4);
void FUN_0012c1c7(void);
void FUN_0012c279(code **param_1,char param_2);
void FUN_0012c38a(code **param_1);
int FUN_0012c49d(code **param_1,int *param_2);
void FUN_0012c568(void);
void FUN_0012c695(int param_1);
void FUN_0012c7c0(void);
void FUN_0012c885(int param_1,int param_2,char **param_3,int param_4);
void FUN_0012c90d(int param_1,int param_2,char **param_3,int param_4);
void FUN_0012c99a(int param_1,int param_2,char **param_3,uint param_4);
void FUN_0012ca85(uint param_1,int param_2,char **param_3,int param_4);
void FUN_0012cb84(int param_1,int param_2,char **param_3,char **param_4);
void FUN_0012cd08(void);
void FUN_0012cd3e(code **param_1);
void FUN_0012ce1c(code **param_1);
void FUN_0012cea3(int *param_1,int param_2,int *param_3);
undefined4 * FUN_0012cf0e(int param_1,undefined4 param_2,int param_3);
void FUN_0012cf9b(uint *param_1,int *param_2,undefined4 *param_3);
undefined4 FUN_0012d736(int param_1,int param_2);
uint FUN_0012d76a(uint param_1,byte *param_2,uint param_3);
void FUN_0012d893(undefined4 param_1,undefined4 param_2);
void FUN_0012d89e(int param_1,int param_2,int param_3,int param_4,int param_5);
void FUN_0012dbb3(int param_1,int param_2,int param_3,int param_4,int param_5);
void FUN_0012dd71(int param_1,int param_2,short *param_3,int *param_4,int param_5);
void FUN_0012ddae(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_0012ddfa(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_0012de46(int param_1,int param_2,short *param_3,int param_4,int param_5);
void FUN_0012e227(undefined param_1,undefined param_2,undefined4 param_3,undefined4 param_4,int param_5);
void FUN_0012e25b(uint param_1,byte **param_2,int param_3);
void FUN_0012e7bf(undefined4 param_1,int param_2);
undefined4 FUN_0012e7d0(uint *param_1,uint param_2,uint param_3,int param_4,int param_5,int *param_6,int param_7,uint *param_8,uint *param_9);
int FUN_0012eb55(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5);
int FUN_0012ebd4(uint param_1,undefined4 param_2,int param_3,int *param_4,int *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9);
undefined4 FUN_0012ecd7(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4);
int FUN_0012ed06(int param_1,int param_2,int param_3);
void FUN_0012ee1b(short *param_1,short *param_2,int *param_3,int param_4,int param_5,int param_6);
void FUN_0012f298(undefined8 *param_1,undefined8 *param_2,ulonglong *param_3,int param_4,int param_5,int param_6);
void FUN_0012f950(short *param_1,short *param_2,short *param_3,int param_4,int param_5,int param_6);
void FUN_0012fcb5(undefined8 *param_1,ulonglong *param_2,undefined8 *param_3,int *param_4,int param_5,int param_6);
undefined4 FUN_00130a88(uint param_1,byte *param_2,int param_3,int param_4,int param_5,byte **param_6);
undefined4 FUN_00133960(undefined4 param_1,int param_2);
int __fastcall FUN_00133c25(uint param_1);
void __fastcall FUN_00133c31(undefined4 *param_1);
void __thiscall FUN_00133c50(uint *param_1_00,uint param_1,uint param_2,uint param_3);
uint __thiscall FUN_00133cb1(int param_1_00,uint param_1);
uint __thiscall FUN_00133cda(int param_1_00,uint param_1);
void FUN_00133d03(undefined4 param_1,undefined4 param_2,uint *param_3,uint *param_4);
void FUN_00133d77(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_00133e77(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_00133f75(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_0013406e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_00134151(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_00134263(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 XGRAPHC::XGIsSwizzledFormat(int param_1);
undefined4 FUN_0013439d(undefined4 param_1);
void FUN_00134419(int *param_1);
void FUN_0013449a(int *param_1);
void FUN_0013451b(int *param_1);
void FUN_001345ef(int *param_1);
void FUN_001346c3(int *param_1);
void FUN_00134746(int *param_1);
void FUN_001347c9(int *param_1);
void FUN_00134895(int *param_1);
void FUN_00134961(int *param_1);
void FUN_001349dc(int *param_1);
void FUN_00134a57(int *param_1);
void FUN_00134b33(int *param_1);
void XGRAPHC::XGSwizzleRect(undefined4 *param_1,int param_2,int *param_3,undefined4 *param_4,uint param_5,uint param_6,uint *param_7,undefined8 *param_8);
void XGRAPHC::XGUnswizzleRect(undefined4 *param_1,uint param_2,uint param_3,uint *param_4,undefined4 *param_5,undefined (*param_6) [16],int *param_7,uint param_8);
void FUN_00135aa0(int *param_1);
void FUN_00135abf(undefined4 param_1);
void FUN_00135ad0(void);
void FUN_00135af5(void);
code * DSOUND::DSound_CRefCount_Release(code **param_1);
int __fastcall FUN_00135b43(uint param_1);
void DSOUND::CHrtfSource_SetAlgorithm_FullHrtf(void);
undefined4 DSOUND::DirectSoundEnterCriticalSection(void);
void __thiscall FUN_00135b81(int param_1_00,undefined4 param_1,undefined4 param_2,undefined4 param_3);
int __fastcall FUN_00135bb0(int param_1);
void DSOUND::IDirectSound_Release(int param_1);
void DSOUND::IDirectSoundBuffer_Release(int param_1);
void DSOUND::DirectSoundUseFullHRTF(void);
undefined4 DSOUND::XAudioCalculatePitch(int param_1);
void DSOUND::XAudioCreatePcmFormat(ushort param_1,int param_2,ushort param_3,undefined2 *param_4);
void __thiscall FUN_00135c8c(int param_1_00,undefined4 *param_1);
void __fastcall FUN_00135cae(undefined **param_1);
void __fastcall FUN_00135ccb(undefined **param_1);
undefined4 DSOUND::CDirectSound_DownloadEffectsImage(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void DSOUND::CDirectSound_DoWork(void);
void __thiscall FUN_00135d9a(int param_1_00,byte *param_1);
void __fastcall FUN_00135e14(undefined **param_1);
void DSOUND::CDirectSoundVoice_SetPitch(int param_1,undefined4 param_2);
void DSOUND::CDirectSoundVoice_SetVolume(int param_1,int param_2);
undefined4 DSOUND::CDirectSoundVoice_CommitDeferredSettings(int param_1);
undefined * __thiscall FUN_00135ecf(int param_1_00,int param_1,undefined4 *param_2);
void __fastcall FUN_00135fa4(undefined **param_1);
undefined4 DSOUND::CDirectSoundBuffer_Play(void);
undefined4 DSOUND::CDirectSoundBuffer_Stop(void);
undefined4 DSOUND::CDirectSoundBuffer_GetStatus(undefined4 param_1,undefined4 param_2);
undefined4 DSOUND::CDirectSoundBuffer_GetCurrentPosition(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 DSOUND::CDirectSoundBuffer_SetCurrentPosition(undefined4 param_1,undefined4 param_2);
void __fastcall FUN_001361ff(undefined **param_1);
int DSOUND::CDirectSoundStream_Process(undefined4 param_1,undefined4 param_2);
undefined4 DSOUND::CDirectSoundStream_Pause(undefined4 param_1,undefined4 param_2);
code ** FUN_001364ef(code **param_1);
undefined4 DSOUND::CDirectSoundBuffer_SetVolume(undefined4 param_1,undefined4 param_2);
undefined4 DSOUND::CDirectSoundBuffer_SetPitch(undefined4 param_1,undefined4 param_2);
void DSOUND::IDirectSound_DownloadEffectsImage(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void DSOUND::IDirectSoundBuffer_SetVolume(int param_1,undefined4 param_2);
void DSOUND::IDirectSoundBuffer_SetPitch(int param_1,undefined4 param_2);
void DSOUND::IDirectSoundBuffer_Play(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void DSOUND::IDirectSoundBuffer_Stop(int param_1);
void DSOUND::IDirectSoundBuffer_GetStatus(int param_1,undefined4 param_2);
void DSOUND::IDirectSoundBuffer_GetCurrentPosition(int param_1,undefined4 param_2,undefined4 param_3);
void DSOUND::IDirectSoundBuffer_SetCurrentPosition(int param_1,undefined4 param_2);
undefined4 DSOUND::IDirectSoundStream_Pause(undefined4 param_1,undefined4 param_2);
void DSOUND::DirectSoundDoWork(void);
undefined4 __thiscall FUN_0013679e(undefined4 param_1_00,byte param_1);
undefined4 __thiscall DSOUND::CDirectSound_CommitDeferredSettings(undefined4 param_1_00,int param_1);
int DSOUND::CDirectSound_EnableHeadphones(int param_1,int param_2);
undefined4 __thiscall FUN_001368d0(int param_1_00,undefined4 param_1,int param_2);
void __thiscall FUN_0013694c(int param_1_00,undefined4 param_1);
undefined ** __thiscall FUN_00136993(undefined **param_1_00,undefined4 param_1);
undefined4 __thiscall FUN_001369bd(undefined4 param_1_00,byte param_1);
void FUN_001369d8(int param_1,undefined4 param_2,undefined4 param_3);
int DSOUND::CDirectSoundVoice_SetFormat(int param_1,undefined4 param_2);
undefined4 DSOUND::CDirectSoundVoice_SetMaxDistance(int param_1,undefined4 param_2,byte param_3);
undefined4 DSOUND::CDirectSoundVoice_SetMinDistance(int param_1,undefined4 param_2,byte param_3);
undefined4 DSOUND::CDirectSoundVoice_SetPosition(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,byte param_5);
void __thiscall FUN_00136b16(int param_1_00,undefined4 param_1,undefined4 param_2);
undefined ** __thiscall FUN_00136b3a(undefined **param_1_00,undefined4 param_1);
undefined4 __thiscall FUN_00136b52(undefined4 param_1_00,byte param_1);
int __thiscall FUN_00136b6d(int param_1_00,byte param_1);
undefined4 DSOUND::CDirectSoundBuffer_SetFormat(undefined4 param_1,undefined4 param_2);
undefined4 DSOUND::CDirectSoundBuffer_SetMaxDistance(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 DSOUND::CDirectSoundBuffer_SetMinDistance(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 DSOUND::CDirectSoundBuffer_SetPosition(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void DSOUND::IDirectSound_EnableHeadphones(int param_1,undefined4 param_2);
void DSOUND::IDirectSound_CommitDeferredSettings(int param_1);
void DSOUND::IDirectSoundBuffer_SetFormat(int param_1,undefined4 param_2);
void DSOUND::IDirectSoundBuffer_SetMaxDistance(int param_1,undefined4 param_2,undefined4 param_3);
void DSOUND::IDirectSoundBuffer_SetMinDistance(int param_1,undefined4 param_2,undefined4 param_3);
void DSOUND::IDirectSoundBuffer_SetPosition(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
undefined ** __fastcall FUN_00136dba(undefined **param_1);
int __thiscall FUN_00136e46(uint param_1_00,int param_1);
undefined4 DSOUND::CDirectSound_SetRolloffFactor(int param_1,undefined4 param_2,byte param_3);
undefined4 DSOUND::CDirectSound_SetOrientation(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,byte param_8);
undefined4 DSOUND::CDirectSound_SetPosition(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,byte param_5);
undefined4 DSOUND::CDirectSound_SetI3DL2Listener(int param_1,undefined4 *param_2,byte param_3);
void __fastcall FUN_00137162(undefined **param_1);
undefined * __thiscall FUN_0013719a(int param_1_00,uint param_1,undefined4 param_2,int param_3);
undefined * __thiscall DSOUND::CDirectSoundBufferSettings_SetBufferData(int param_1_00,int param_1,int param_2);
int DSOUND::CDirectSoundBuffer_SetBufferData(int param_1,int param_2,int param_3);
void __thiscall FUN_0013738f(int param_1_00,undefined4 *param_1);
undefined ** __thiscall DSOUND::CDirectSoundStream_Constructor(undefined **param_1_00,undefined4 param_1);
undefined * FUN_001373ed(int param_1,undefined4 param_2);
void DSOUND::IDirectSound_SetOrientation(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);
void DSOUND::IDirectSound_SetPosition(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void DSOUND::IDirectSound_SetRolloffFactor(int param_1,undefined4 param_2,undefined4 param_3);
void DSOUND::IDirectSound_SetI3DL2Listener(int param_1,undefined4 param_2,undefined4 param_3);
void DSOUND::IDirectSoundBuffer_SetBufferData(int param_1,undefined4 param_2,undefined4 param_3);
undefined *DSOUND::CDirectSound_CreateSoundStream(undefined4 param_1,undefined4 param_2,int **param_3);
undefined4 __thiscall FUN_0013760b(undefined4 param_1_00,byte param_1);
void __fastcall FUN_00137626(undefined **param_1);
void __thiscall FUN_0013764b(int param_1_00,int param_1);
undefined * __thiscall FUN_001376b0(undefined4 param_1_00,int param_1,undefined4 param_2);
undefined ** __thiscall FUN_00137798(undefined **param_1_00,byte param_1);
undefined *DSOUND::CDirectSound_CreateSoundBuffer(undefined4 param_1,undefined4 param_2,uint *param_3);
undefined4 __thiscall FUN_00137855(undefined4 param_1_00,byte param_1);
undefined * FUN_00137870(uint param_1);
undefined * FUN_00137999(int **param_1);
int DSOUND::DirectSoundCreate(undefined4 param_1,uint *param_2);
int DSOUND::DirectSoundCreateBuffer(undefined4 param_1,undefined4 param_2);
int DSOUND::DirectSoundCreateStream(undefined4 param_1,undefined4 param_2);
undefined4 * DSOUND::DSound_CMemoryManager_PoolAlloc(undefined4 param_1,undefined4 param_2);
void FUN_00137b42(undefined4 param_1);
undefined4 * FUN_00137b5a(undefined4 param_1,undefined4 param_2,int param_3);
void FUN_00137ba9(undefined4 param_1);
undefined4 * FUN_00137bc1(undefined4 param_1,uint param_2,int param_3);
void FUN_00137c29(int param_1);
void DSOUND::XAudioCreatePcmFormat(ushort param_1,int param_2,ushort param_3,undefined2 *param_4);
void FUN_00137ca7(undefined2 *param_1,int param_2);
void FUN_00137cd0(undefined2 *param_1,int param_2);
undefined4 FUN_00137cf7(undefined4 param_1,int param_2);
uint __fastcall FUN_00137d40(uint param_1);
uint __fastcall FUN_00137d5a(uint param_1);
undefined4 __thiscall FUN_00137d8e(int *param_1_00,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void __fastcall FUN_00137dc7(int *param_1);
undefined4 __thiscall FUN_00137df2(undefined4 *param_1_00,undefined4 param_1,int param_2,int *param_3);
undefined4 __thiscall FUN_00137e30(undefined4 *param_1_00,undefined4 param_1,undefined4 param_2,int *param_3);
void __fastcall FUN_00137e5f(undefined4 *param_1);
int __thiscall FUN_00137e75(int *param_1_00,int param_1,int param_2,int *param_3);
int __thiscall FUN_00137f24(int param_1_00,uint param_1,undefined4 param_2,int param_3,int *param_4);
int __thiscall FUN_00137f81(int param_1_00,undefined4 *param_1,uint param_2,undefined4 *param_3);
int __thiscall FUN_0013800f(int param_1_00,undefined4 *param_1,uint param_2,undefined4 *param_3);
void __thiscall FUN_00138164(int param_1_00,undefined4 *param_1,undefined4 *param_2);
undefined * __thiscall FUN_00138202(int param_1_00,uint *param_1,int *param_2);
void __fastcall FUN_001383d1(int param_1);
void FUN_001383ec(char *param_1,uint param_2,int param_3);
undefined4 FUN_00138428(undefined4 param_1,short *param_2);
int __fastcall FUN_0013846b(undefined4 *param_1);
void FUN_0013848f(void);
undefined * __thiscall FUN_0013849f(undefined4 *param_1_00,int param_1,undefined4 param_2);
int __thiscall FUN_0013868e(int param_1_00,uint *param_1,uint *param_2);
void __thiscall FUN_00138724(int param_1_00,undefined4 param_1,undefined4 param_2);
int __thiscall FUN_0013873c(int param_1_00,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
float10 FUN_0013879b(float *param_1);
undefined4 FUN_001387c2(float param_1);
undefined4 FUN_001387f9(float param_1);
undefined4 FUN_00138840(float param_1);
undefined4 * __thiscall FUN_00138887(undefined4 *param_1_00,undefined4 param_1);
void __fastcall FUN_001388c2(int *param_1);
void __thiscall FUN_001388d6(undefined4 *param_1_00,uint param_1);
void __thiscall FUN_001389b3(undefined4 *param_1_00,undefined4 param_1,undefined4 param_2);
void __thiscall FUN_001389e9(int param_1_00,undefined4 param_1);
void FUN_001389ff(float *param_1);
void FUN_00138a52(int param_1);
void FUN_00138b62(float *param_1);
void FUN_00138bfd(int param_1);
void FUN_00138c97(float param_1);
void FUN_00138d87(float *param_1);
void DSOUND::CFullHrtfSource_GetHrtfFilterPair(int param_1);
void FUN_00138f80(float *param_1);
void __fastcall FUN_0013914a(int param_1);
void __fastcall FUN_00139169(int param_1);
undefined * __fastcall FUN_001391de(int param_1);
undefined4 __thiscall FUN_00139353(int param_1_00,uint param_1,int **param_2);
void __thiscall FUN_0013937a(int param_1_00,uint param_1,uint param_2);
void __thiscall FUN_001393df(undefined4 param_1_00,undefined4 param_1,undefined4 param_2);
void __thiscall FUN_001393f3(int param_1_00,undefined4 param_1,undefined4 param_2);
void __fastcall FUN_0013940a(int param_1);
void __thiscall FUN_0013944b(int param_1_00,int param_1,int param_2,undefined4 *param_3);
int __thiscall FUN_001394e4(int param_1_00,int param_1,int param_2,undefined4 *param_3,uint param_4,byte param_5);
int FUN_0013958d(int param_1,int param_2,undefined4 *param_3,uint param_4);
void FUN_001395c7(int param_1,int *param_2);
void __fastcall FUN_001395f1(undefined *param_1);
void __fastcall FUN_00139624(int param_1);
undefined ** __thiscall FUN_0013963b(undefined **param_1_00,int param_1);
void __fastcall FUN_00139700(int param_1);
undefined4 __thiscall FUN_00139763(int param_1_00,int param_1);
void __thiscall FUN_001397f7(int param_1_00,int param_1);
void FUN_0013986a(void);
void __fastcall FUN_001398cd(int param_1);
undefined4 FUN_00139946(int param_1);
void FUN_00139972(void);
void __thiscall FUN_001399d0(int param_1_00,uint param_1);
uint __fastcall FUN_00139a36(int param_1);
undefined4 __thiscall FUN_00139aed(int param_1_00,int *param_1);
void __thiscall FUN_00139b12(int param_1_00,int param_1);
void __fastcall FUN_00139b74(int param_1);
void __fastcall DSOUND::CMcpxAPU_ServiceDeferredCommandsLow(int param_1);
undefined4 __thiscall FUN_00139c8b(undefined4 param_1_00,uint param_1);
undefined4 __thiscall DSOUND::CMcpxAPU_SetMixBinHeadroom(int param_1_00,int param_1);
undefined4 __fastcall FUN_00139d07(int param_1);
void __fastcall FUN_00139dc3(undefined **param_1);
void __fastcall FUN_00139e7f(int param_1);
void FUN_00139ec1(int param_1,undefined4 param_2);
void FUN_00139ed7(int param_1);
undefined4 __thiscall FUN_00139f27(undefined4 param_1_00,byte param_1);
void FUN_00139f42(void);
undefined4 __thiscall FUN_00139f89(int param_1_00,int **param_1);
uint __fastcall FUN_0013a05f(int param_1);
int FUN_0013a0b4(int param_1);
int __fastcall FUN_0013a107(int param_1);
void FUN_0013a233(float *param_1,float *param_2);
void FUN_0013a2cf(float *param_1);
int FUN_0013a340(float param_1);
void FUN_0013a35e(float *param_1,float *param_2,float param_3);
void FUN_0013a462(undefined (*param_1) [16],float *param_2,float *param_3);
void __fastcall FUN_0013a4a3(int *param_1);
int __thiscall FUN_0013a4bf(int param_1_00,uint param_1);
undefined * __thiscall FUN_0013a4e0(int *param_1_00,int param_1);
undefined4 __fastcall FUN_0013a5de(int param_1);
void __fastcall FUN_0013a6f1(int param_1);
void __thiscall FUN_0013a779(int param_1_00,uint *param_1,uint *param_2);
void __thiscall FUN_0013a82a(int param_1_00,int param_1);
void __thiscall FUN_0013aa11(int param_1_00,int *param_1);
void __thiscall FUN_0013aa93(int param_1_00,undefined *param_1,int *param_2);
void __thiscall FUN_0013aaf6(int param_1_00,int param_1);
void __fastcall FUN_0013acdd(int *param_1);
void __fastcall FUN_0013ad34(int param_1);
void __fastcall FUN_0013adb8(int *param_1);
void __thiscall FUN_0013ae12(int param_1_00,uint param_1);
void __fastcall FUN_0013aeb9(int param_1);
undefined4 __thiscall DSOUND::CMcpxVoiceClient_SetFilter(int param_1_00,uint *param_1);
undefined4 __fastcall FUN_0013b10b(int param_1);
undefined4 __fastcall FUN_0013b201(int param_1);
void __thiscall FUN_0013b28c(int *param_1_00,int param_1,int param_2);
void FUN_0013b2aa(ushort param_1);
void __fastcall FUN_0013b2c1(undefined **param_1);
int __fastcall FUN_0013b31b(int param_1);
undefined4 __fastcall DSOUND::CMcpxVoiceClient_SetMixBins(int param_1);
undefined4 __fastcall DSOUND::CMcpxVoiceClient_SetVolume(int param_1);
undefined4 __fastcall DSOUND::CMcpxVoiceClient_SetPitch(int param_1);
void __fastcall FUN_0013b682(int param_1);
void FUN_0013b69e(byte param_1,int param_2,byte param_3);
undefined ** __thiscall FUN_0013b6eb(undefined **param_1_00,undefined4 param_1,undefined4 param_2);
undefined4 __thiscall FUN_0013b753(undefined4 param_1_00,byte param_1);
void __thiscall FUN_0013b76e(int *param_1_00,int param_1);
uint __fastcall DSOUND::CMcpxVoiceClient_Commit3dSettings(int param_1);
void __fastcall FUN_0013b96a(int param_1);
void __fastcall FUN_0013bb1e(ushort *param_1,ushort param_2);
void __fastcall FUN_0013bb22(ushort *param_1,ushort param_2);
bool __thiscall FUN_0013bb26(int *param_1_00,int param_1);
uint __thiscall FUN_0013bb44(int param_1_00,uint param_1);
void __thiscall FUN_0013bb5d(int param_1_00,int param_1);
void __fastcall FUN_0013bbcf(int param_1);
void __thiscall FUN_0013bc15(int *param_1_00,uint param_1);
void __thiscall FUN_0013bd56(int param_1_00,undefined4 param_1,undefined4 param_2);
undefined4 __thiscall DSOUND::CMcpxBuffer_GetStatus(int param_1_00,undefined4 *param_1);
undefined4 __thiscall DSOUND::CMcpxBuffer_GetCurrentPosition(int param_1_00,uint *param_1,uint *param_2);
int __fastcall FUN_0013bff7(int *param_1);
void __thiscall FUN_0013c03e(int param_1_00,uint param_1,int param_2);
void __fastcall FUN_0013c09f(int param_1);
void __thiscall FUN_0013c108(int param_1_00,int param_1);
int * FUN_0013c122(int *param_1);
undefined ** __thiscall FUN_0013c137(undefined **param_1_00,undefined4 param_1,undefined4 param_2);
undefined * __fastcall FUN_0013c192(int param_1);
void __fastcall FUN_0013c1fa(int param_1);
void __fastcall FUN_0013c24c(int *param_1);
int __fastcall FUN_0013c2eb(int param_1);
int __thiscall DSOUND::CMcpxBuffer_Play(int *param_1_00,uint param_1);
int __thiscall DSOUND::CMcpxBuffer_Stop(int *param_1_00,byte param_1);
int __thiscall DSOUND::CMcpxBuffer_SetCurrentPosition(int param_1_00,uint param_1);
void __fastcall FUN_0013c539(int param_1);
void __fastcall DSOUND::CMcpxBuffer_SetBufferData(int param_1);
void __fastcall FUN_0013c577(int *param_1);
void __fastcall FUN_0013c5c4(int *param_1);
void __fastcall FUN_0013c5df(undefined **param_1);
undefined4 __thiscall FUN_0013c61c(int param_1_00,int param_1);
undefined4 __thiscall FUN_0013c68e(undefined4 param_1_00,byte param_1);
void FUN_0013c6a9(int param_1);
void FUN_0013c6c7(int param_1,undefined4 param_2,code *param_3,undefined4 param_4,undefined4 param_5);
int FUN_0013c70b(undefined4 param_1,int *param_2);
undefined4 __fastcall FUN_0013c726(int param_1);
void __fastcall FUN_0013c73e(int param_1);
int __fastcall FUN_0013c7e5(int param_1);
undefined4 __thiscall DSOUND::CMcpxStream_Pause(int param_1_00,int param_1);
undefined4 __thiscall DSOUND::CMcpxStream_Stop(int *param_1_00,byte param_1);
undefined4 __thiscall DSOUND::CMcpxStream_GetStatus(int param_1_00,uint *param_1);
void __fastcall FUN_0013c9d0(int *param_1);
uint __thiscall FUN_0013c9fd(int param_1_00,int param_1,int param_2);
void __thiscall FUN_0013cb60(int *param_1_00,int param_1);
void __thiscall FUN_0013cc35(int param_1_00,int param_1);
void __fastcall FUN_0013cc81(int *param_1);
void __thiscall FUN_0013ccee(int param_1_00,int param_1);
undefined ** __thiscall FUN_0013cd06(undefined **param_1_00,undefined4 param_1,undefined4 param_2);
int __thiscall FUN_0013cdb1(int param_1_00,int param_1);
void __thiscall FUN_0013ce18(int param_1_00,int param_1,undefined4 param_2);
void __fastcall FUN_0013ce8e(int *param_1);
void __thiscall FUN_0013ceb6(int param_1_00,uint param_1,undefined4 param_2);
undefined4 __fastcall DSOUND::CMcpxStream_Flush(int *param_1);
void __fastcall FUN_0013d04c(int param_1);
uint __fastcall FUN_0013d05a(int param_1);
undefined4 __fastcall FUN_0013d108(int param_1);
void __fastcall FUN_0013d1bf(undefined **param_1);
int __thiscall FUN_0013d21a(int *param_1_00,int **param_1);
undefined4 DSOUND::CMcpxStream_Discontinuity(void);
undefined4 __thiscall FUN_0013d300(undefined4 param_1_00,byte param_1);
void __fastcall FUN_0013d31b(undefined **param_1);
int FUN_0013d3f1(int param_1,undefined4 param_2,undefined4 *param_3);
int __thiscall FUN_0013d4b1(int param_1_00,byte param_1);
undefined ** __fastcall FUN_0013d4d0(undefined **param_1);
void FUN_0013d4fe(int *param_1,undefined2 param_2,undefined2 param_3,int *param_4);
void FUN_0013d534(int *param_1,int param_2,int *param_3);
void __fastcall FUN_0013d55b(undefined **param_1);
void __fastcall FUN_0013d57b(undefined **param_1);
undefined * __thiscall FUN_0013d59d(int param_1_00,uint param_1);
int ** __thiscall FUN_0013d628(int param_1_00,int *param_1,ushort param_2);
int __thiscall FUN_0013d6f9(int param_1_00,int param_1,int param_2);
void FUN_0013d71a(int param_1,int param_2,int param_3);
void FUN_0013d787(undefined4 param_1,int param_2);
void __fastcall FUN_0013d79e(undefined **param_1);
void __fastcall FUN_0013d7c3(undefined **param_1);
bool __thiscall FUN_0013d824(int param_1_00,int param_1,int param_2,int param_3);
uint __thiscall FUN_0013d8a8(int *param_1_00,int param_1);
int FUN_0013d983(int param_1,int param_2);
undefined4 __thiscall FUN_0013d99e(undefined4 param_1_00,byte param_1);
undefined4 * __thiscall FUN_0013d9b9(int param_1_00,uint param_1,int param_2);
void __thiscall FUN_0013da48(int param_1_00,int *param_1);
undefined4 __thiscall FUN_0013daa4(undefined4 param_1_00,byte param_1);
void __thiscall FUN_0013dabf(int *param_1_00,int param_1);
void FUN_0013db58(int param_1);
undefined4 * __thiscall FUN_0013dbb9(undefined4 *param_1_00,undefined4 param_1);
void __fastcall FUN_0013dbd3(int param_1);
void __thiscall FUN_0013dc01(uint *param_1_00,uint param_1);
void __thiscall FUN_0013dcb4(int *param_1_00,int param_1,int param_2,int *param_3);
void __thiscall FUN_0013dd06(int param_1_00,int param_1,undefined4 *param_2,uint param_3);
undefined * __thiscall FUN_0013dd2e(int *param_1_00,uint param_1);
void FUN_0013de06(uint param_1,uint param_2,undefined4 *param_3,uint param_4);
void FUN_0013de7f(undefined4 param_1);
undefined4 FUN_0013deac(undefined4 *param_1,int param_2,uint param_3,int param_4,int param_5);
int FUN_0013df7b(float param_1);
float10 FUN_0013df84(int param_1);
void __thiscall FUN_0013dfd2(undefined4 *param_1_00,undefined4 param_1);
void FUN_0013dfdd(float param_1);
void FUN_0013e062(float param_1);
void FUN_0013e095(float param_1);
void FUN_0013e0b1(float param_1);
void FUN_0013e0e6(float param_1);
void __thiscall FUN_0013e176(int param_1_00,float param_1);
void __fastcall FUN_0013e1ed(int param_1);
void FUN_0013e224(int param_1,int param_2,float param_3,float param_4,float *param_5,float *param_6);
void __thiscall FUN_0013e2e3(undefined4 *param_1_00,undefined4 param_1,undefined4 param_2);
undefined4 FUN_0013e306(int param_1,int param_2,float param_3,float param_4);
void FUN_0013e394(float param_1,float param_2);
void FUN_0013e3f1(int param_1,float param_2,float param_3,float param_4,undefined4 param_5);
void __thiscall FUN_0013e49c(undefined4 *param_1_00,float param_1);
void __thiscall FUN_0013e602(int param_1_00,undefined4 param_1,undefined4 param_2,undefined4 param_3);
void __fastcall FUN_0013e6d9(int **param_1);
void FUN_0013e9f0(void);
void __fastcall FUN_0013eac1(uint param_1);
void __fastcall FUN_0013ebea(int param_1);
int __fastcall FUN_0013ed6d(int param_1);
void __thiscall FUN_0013ee26(undefined4 param_1_00,int param_1);
void __thiscall FUN_0013ee5d(undefined4 param_1_00,int param_1);
void __thiscall FUN_0013ee94(undefined4 param_1_00,int param_1);
void __thiscall FUN_0013eeef(undefined4 param_1_00,int param_1);
int __thiscall FUN_0013ef51(undefined4 param_1_00,uint param_1,uint param_2,uint *param_3,uint *param_4);
void FUN_0013efc8(int *param_1,uint *param_2,uint *param_3);
undefined * FUN_0013f005(int *param_1,undefined4 param_2,undefined4 param_3);
void FUN_0013f044(void);
void FUN_0013f0be(void);
undefined ** __thiscall FUN_0013f0da(undefined **param_1_00,undefined4 param_1);
void __fastcall FUN_0013f0fd(undefined **param_1);
void FUN_0013f1a2(void);
undefined * __fastcall FUN_0013f26d(int param_1);
int FUN_0013f3ed(int param_1);
undefined4 __thiscall FUN_0013f4ce(undefined4 param_1_00,byte param_1);
void FUN_0013f4e9(void);
int FUN_0013f569(void);
void __fastcall FUN_0013f5c3(undefined4 param_1);
undefined4 FUN_0013f5cb(void);
undefined4 FUN_0013f5f8(void);
void __fastcall FUN_0013f648(int param_1);
void FUN_0013f65c(int param_1,undefined2 param_2);
undefined4 FUN_0013f679(void);
void __fastcall FUN_0013f691(int *param_1);
void __thiscall FUN_0013f6c0(int *param_1_00,byte param_1,byte param_2,int param_3,int param_4);
void __thiscall FUN_0013f750(int *param_1_00,int param_1);
void __thiscall FUN_0013f781(int *param_1_00,uint param_1);
undefined * __thiscall FUN_0013f7bd(int param_1_00,int param_1,int **param_2);
void __thiscall FUN_0013f825(int param_1_00,undefined4 param_1,uint param_2);
void __fastcall FUN_0013f8b6(int *param_1);
void __thiscall FUN_0013f928(int param_1_00,int param_1);
void __thiscall FUN_0013f976(int *param_1_00,int param_1);
undefined * __thiscall FUN_0013f9d0(int param_1_00,uint param_1,undefined4 param_2,undefined4 param_3);
void __fastcall FUN_0013fa72(int param_1);
void __fastcall FUN_0013fac0(uint param_1);
uint __fastcall FUN_0013fb17(int **param_1);
void __fastcall FUN_0013fbeb(int *param_1);
void __thiscall FUN_0013fc61(int param_1_00,int param_1);
void __fastcall FUN_0013fca0(int param_1);
int __thiscall FUN_0013fd2b(int param_1_00,undefined4 param_1);
undefined4 FUN_0013fe0a(void);
void FUN_0013fe10(int param_1,undefined4 *param_2,undefined4 *param_3);
void __fastcall FUN_0013feae(undefined4 *param_1);
undefined4 __fastcall FUN_0013febb(int param_1);
void __thiscall FUN_0013febf(int *param_1_00,uint param_1);
void __thiscall FUN_0013ff36(int *param_1_00,undefined4 param_1,uint param_2);
void __thiscall FUN_0013ff5e(int *param_1_00,undefined4 param_1,uint param_2);
void __fastcall FUN_0013ffa3(int *param_1);
void __thiscall FUN_0013ffc0(int *param_1_00,int param_1);
void FUN_00153708(void);
int __thiscall FUN_0015385f(int param_1_00,int param_1);
bool __fastcall FUN_00153896(int param_1);
void __thiscall FUN_001538a2(char *param_1_00,char *param_1);
void __fastcall FUN_00153aa4(int param_1);
void __thiscall FUN_00153bc7(undefined *param_1_00,byte param_1,undefined param_2);
void XAPILIB::XInitDevices(undefined4 param_1);
void FUN_00153cf4(undefined4 param_1,int param_2);
void FUN_00153d6d(void);
void FUN_00153d79(void);
undefined4 FUN_00153dbb(int *param_1,char param_2,int param_3);
void FUN_00153ee5(void);
void __fastcall FUN_00153f06(int *param_1);
void __fastcall FUN_00153fb6(uint *param_1);
void __fastcall FUN_0015417b(int *param_1);
undefined4 FUN_001541dc(undefined4 *param_1);
void FUN_001541e7(int *param_1);
int XAPILIB::XInputOpen(void);
void XAPILIB::XInputClose(void);
undefined4 XAPILIB::XInputGetState(int *param_1,int *param_2);
undefined4 XAPILIB::XInputSetState(int param_1,int param_2);
void FUN_00154350(void);
void FUN_0015436b(int param_1);
void FUN_00154393(undefined4 param_1);
void FUN_00154429(undefined4 param_1,int param_2);
void __fastcall FUN_001544fb(int param_1);
void FUN_0015454a(int param_1,int param_2);
uint FUN_001545b7(int param_1,int param_2,undefined2 *param_3);
char * __fastcall FUN_001547a3(char param_1,char *param_2);
undefined * __fastcall XAPILIB::GetTypeInformation(int param_1);
undefined4 XAPILIB::XMountMUA(undefined4 param_1,undefined4 param_2,char *param_3);
undefined4 FUN_00154937(undefined4 param_1,undefined4 param_2);
int FUN_00154a45(char param_1);
int FUN_00154a64(char param_1);
void FUN_00154a86(uint *param_1,byte param_2,char param_3);
void XAPILIB::XInitDevices(undefined4 param_1);
bool XAPILIB::XGetDeviceChanges(uint *param_1,uint *param_2,uint *param_3);
void FUN_00154b1a(void);
void __fastcall FUN_00154b46(undefined4 *param_1);
int __fastcall FUN_00154b69(int param_1,int param_2);
void __fastcall FUN_00154bd3(int *param_1,byte *param_2);
void FUN_00154c7e(undefined *param_1,int *param_2);
void __fastcall FUN_00154ed2(int param_1,undefined4 *param_2);
void __fastcall FUN_00154fe6(int param_1);
void __fastcall XAPILIB::XID_fCloseDevice(int *param_1);
undefined4 __fastcall FUN_001551f9(int *param_1,undefined4 *param_2);
void FUN_0015531d(undefined4 param_1,undefined4 *param_2);
undefined4 __thiscall FUN_001554a1(int param_1_00,int **param_1,char *param_2);
int __fastcall FUN_00155829(int param_1);
int __fastcall FUN_00155840(int param_1);
int __fastcall FUN_00155857(int param_1);
void __thiscall FUN_0015586e(int param_1_00,undefined4 param_1);
undefined4 __fastcall FUN_00155881(int param_1);
undefined4 __thiscall FUN_00155885(int param_1_00,undefined4 param_1);
undefined __fastcall FUN_00155892(int param_1);
void __thiscall FUN_00155896(int param_1_00,undefined param_1);
undefined4 FUN_001558a0(int param_1);
undefined4 FUN_0015590e(int param_1);
undefined4 FUN_0015597a(void);
byte * FUN_00155980(byte param_1,char param_2,char param_3);
undefined4 __fastcall FUN_001559f6(int param_1);
int __thiscall FUN_001559fa(char *param_1_00,int param_1);
undefined4 __thiscall FUN_00155a80(char *param_1_00,int param_1);
void FUN_00155aec(byte param_1);
void __thiscall FUN_00155b1d(int param_1_00,int param_1);
uint __thiscall FUN_00155b65(int param_1_00,uint param_1);
void __thiscall FUN_00155bc1(int param_1_00,int param_1,uint param_2);
uint __thiscall FUN_00155c28(int param_1_00,int param_1);
void __thiscall FUN_00155d15(int param_1_00,char **param_1,int param_2);
void FUN_00155d57(void);
undefined4 FUN_00155da2(undefined4 param_1);
undefined4 FUN_00155dc2(int param_1,int param_2);
void FUN_00155e1c(undefined4 *param_1,uint param_2);
void FUN_00155e5c(void);
void __fastcall FUN_00155e78(int *param_1);
undefined4 FUN_00155e9f(uint param_1);
void FUN_00155eb9(uint param_1);
void FUN_00155ecf(undefined4 *param_1,uint param_2);
void __fastcall FUN_001560b5(int param_1,int param_2);
void FUN_00156136(int param_1,int param_2);
void FUN_00156204(undefined4 *param_1,int param_2);
void FUN_001563ea(undefined4 *param_1,int param_2);
undefined4 __fastcall FUN_00156565(int param_1);
void FUN_001565bd(undefined4 *param_1,uint param_2);
void FUN_0015665f(undefined4 *param_1,int param_2);
void __fastcall FUN_0015672f(undefined4 *param_1,int param_2);
void FUN_001568bf(int param_1,int param_2);
int __fastcall FUN_00156942(int param_1);
void __thiscall FUN_00156992(int param_1_00,int param_1);
void __thiscall FUN_001569c4(int param_1_00,undefined param_1,undefined param_2);
void FUN_00156a8b(void);
void FUN_00156aad(int param_1,int param_2);
byte __fastcall FUN_00156b29(int param_1);
void __fastcall FUN_00156b5a(int param_1,char param_2);
void FUN_00156b8e(undefined4 param_1,undefined4 param_2);
void FUN_00156ba3(void);
void thunk_FUN_00156aad(int param_1,int param_2);
void __fastcall FUN_00156c0a(char *param_1);
void FUN_00156c80(char *param_1);
void FUN_00156cd2(undefined4 param_1,undefined4 param_2);
void FUN_00156d73(undefined4 param_1);
void __fastcall FUN_00156dea(char *param_1);
void __fastcall FUN_00156e2f(uint param_1);
void FUN_00156eb0(undefined4 param_1,undefined4 param_2);
void FUN_00156ec3(int param_1,int param_2);
void FUN_00156ef6(undefined4 param_1,int param_2);
void FUN_00156f63(int param_1);
void __thiscall FUN_00156fc8(char *param_1_00,int param_1);
void __thiscall FUN_001570fb(int param_1_00,undefined4 param_1);
void FUN_0015720a(int param_1,undefined *param_2);
void __fastcall FUN_00157347(int param_1);
void FUN_00157444(int param_1,int param_2);
void __fastcall FUN_001574fd(undefined4 param_1,char *param_2);
void FUN_0015769c(undefined4 param_1,int param_2);
void __fastcall FUN_001576d7(int param_1,undefined4 param_2);
void FUN_001577dd(int param_1,int param_2);
void __fastcall FUN_00157861(int param_1);
void FUN_001578ea(int param_1,int param_2);
void __fastcall FUN_001579e7(undefined *param_1,int param_2);
void __fastcall FUN_00157b15(int param_1);
void __fastcall FUN_00157dbe(int param_1);
undefined4 * __thiscall FUN_00157dec(undefined4 *param_1_00,undefined4 param_1,undefined4 param_2);
void FUN_00157e46(int param_1);
uint FUN_00157e5a(ushort param_1,byte param_2,char param_3);
char * FUN_00157ea3(undefined4 param_1);
void FUN_00157ed8(void);
int __fastcall FUN_00157eeb(undefined4 param_1,int param_2);
undefined4 __fastcall FUN_0015805f(undefined4 param_1,int param_2);
undefined4 __fastcall FUN_00158080(undefined4 param_1,int param_2);
void __fastcall FUN_001580ae(int param_1,int param_2);
void __fastcall FUN_001580e7(int param_1,int param_2);
void __fastcall FUN_00158120(int param_1,int param_2);
void __fastcall FUN_0015814f(int param_1,int param_2);
void __fastcall FUN_001581c5(int *param_1,int param_2);
void FUN_00158202(int param_1);
undefined4 FUN_0015823d(int param_1,int param_2);
undefined4 __fastcall FUN_001582f4(int param_1,int param_2);
undefined4 __fastcall FUN_0015835b(int param_1,int param_2);
uint FUN_001583ae(undefined4 param_1,int param_2);
void FUN_001584c6(void);
void FUN_0015851a(int param_1);
void FUN_00158589(int param_1);
void FUN_001585d9(undefined4 param_1);
void FUN_00158636(uint param_1);
void FUN_00158784(undefined *param_1,undefined4 param_2);
void FUN_001587a6(undefined4 param_1,byte param_2,undefined4 param_3,char param_4);
void FUN_0015888d(undefined4 param_1);
void FUN_001588bf(undefined *param_1,undefined4 param_2);
void FUN_00158950(int param_1,undefined4 param_2);
void FUN_001589ab(int param_1,undefined4 param_2);
void FUN_00158a06(undefined4 param_1);
void FUN_00158afd(byte *param_1,undefined4 param_2);
void FUN_00158bbd(int param_1,undefined4 param_2);
void FUN_00158c28(undefined4 param_1);
void FUN_00158cf1(undefined4 param_1,undefined4 param_2);
void FUN_00158d21(undefined4 param_1,undefined4 param_2);
void FUN_00158da1(undefined4 param_1,undefined4 param_2);
void FUN_00158eb3(undefined *param_1,undefined4 param_2);
void __fastcall FUN_00159085(int param_1,ushort *param_2);
void FUN_00159114(int *param_1,int param_2,int param_3,int param_4);
void __thiscall FUN_00159161(undefined4 param_1_00,int *param_1,int param_2);
void __fastcall FUN_001591a9(int *param_1);
void FUN_00159268(int param_1);
void __fastcall FUN_00159285(int *param_1,int param_2);
void __fastcall FUN_001592c2(int *param_1,int param_2);
int __fastcall FUN_00159312(int param_1,uint param_2);
void __fastcall FUN_00159328(uint param_1_00,undefined4 param_2,byte param_1);
undefined4 __fastcall FUN_0015939f(int param_1,int param_2);
void __fastcall FUN_0015957b(int param_1,int param_2);
undefined4 FUN_001596f4(undefined4 param_1,int *param_2);
int __fastcall FUN_0015978a(int param_1);
void __fastcall FUN_001597ae(int param_1_00,int param_2,int param_1);
void __fastcall FUN_0015982a(undefined4 param_1,int param_2);
void __fastcall FUN_0015985c(undefined4 param_1,uint *param_2);
void __fastcall FUN_00159950(undefined4 param_1,int param_2);
bool __fastcall FUN_001599fc(int param_1,uint param_2);
void __fastcall FUN_00159afe(undefined4 param_1,int param_2);
bool __fastcall FUN_00159b54(int param_1,uint param_2);
bool __fastcall FUN_00159bdb(int param_1,uint param_2);
void FUN_00159cb5(undefined4 param_1,int *param_2);
void FUN_00159dc3(void);
int __fastcall FUN_00159dd5(undefined4 param_1,int param_2);
undefined4 __fastcall FUN_00159f82(int param_1,int param_2);
void __fastcall FUN_00159fc6(undefined4 param_1,int param_2);
undefined4 __fastcall FUN_0015a04f(undefined4 param_1,int param_2);
undefined4 __fastcall FUN_0015a1b6(undefined4 param_1,int param_2);
undefined4 __fastcall FUN_0015a2d5(undefined4 param_1,int param_2);
void __fastcall FUN_0015a32f(undefined4 param_1,uint *param_2);
void FUN_0015a41f(undefined param_1);
bool FUN_0015a43f(ushort param_1);
bool FUN_0015a45e(ushort param_1);
uint __fastcall FUN_0015a47d(int param_1,int param_2);
void __fastcall FUN_0015a4b0(uint *param_1,uint *param_2);
void __fastcall FUN_0015a4ea(int *param_1_00,uint param_2,uint param_1);
void __fastcall FUN_0015a7e8(undefined4 param_1,int param_2);
void __fastcall FUN_0015a83b(int param_1);
void __fastcall FUN_0015a888(int param_1);
undefined4 __fastcall FUN_0015a8d5(undefined4 param_1_00,int param_2,int param_1);
undefined4 __fastcall FUN_0015a908(int param_1,int param_2);
undefined4 __fastcall FUN_0015a944(int param_1,int param_2);
int __fastcall FUN_0015a980(undefined4 param_1,int param_2);

