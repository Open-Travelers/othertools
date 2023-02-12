
#include "../common.h"

enum Buttons
{
	BTN_LB= 	0x1,
	BTN_RB=		0x2,
	BTN_LT=		0x4,
	BTN_RT=		0x8,
	BTN_Y=		0x10,
	BTN_B=		0x20,
	BTN_A=		0x40,
	BTN_X=		0x80,
	BTN_SELECT=	0x100,
	BTN_L3=		0x200,
	BTN_R3=		0x400,
	BTN_START=	0x800,
	BTN_UP=		0x1000,            
	BTN_RIGHT=	0x2000,
	BTN_DOWN=	0x4000,
	BTN_LEFT=	0x8000,
};

int count = 0;

void NuGScnRndr3_Hook(int param1)
{
	count++;
	printf("You called NuGScnRndr3() %d\n", count);

	// Now call the function that was replaced
	typedef __int64(__cdecl* ptrFunc)(int);
	ptrFunc func = (ptrFunc)(0x393d0);
	func(param1);
}

void InjectCall(int callAddr, int funcAddr)
{
	int diff = funcAddr - (callAddr + 5);
	*(unsigned char*)callAddr = 0xe9;
	memcpy((char*)(callAddr + 1), &diff, 4);
}

DWORD WINAPI Mod_Entry(HMODULE hModule)
{
	Mod_OpenConsole();

	Mod_ResizeConsole(400, 300);

	InjectCall(0x86c8f, (int)(&NuGScnRndr3_Hook));
	
	printf("Pause the game, then press...\n");
	printf("Select + LB: Disable Render\n");
	printf("Select + RB: Enable Render\n");
	printf("Select + LT: --\n");
	printf("Select + RT: --\n");
	printf("Select + Y:  --\n");
	printf("Select + A:  Close Mod\n");
	
	while(true)
	{
		unsigned char menuState = *(unsigned char*)((int)Cursor + 0x6e);
		unsigned int buttonPress = *(unsigned int*)0x427660;
				
		#define ENTER_MENU(xxx) \
			if(menuState != xxx) \
				NewMenu(Cursor, xxx, -1, -1);
		
		if (
			buttonPress & BTN_SELECT &&
			buttonPress & BTN_A
			)
		{
			break;
		}

		// only check for buttons while in pause menu
		if (menuState < 5) continue;
		if (menuState > 15) continue;
		
		if (
			buttonPress & BTN_SELECT &&
			buttonPress & BTN_LB
			)
		{
			// disable by setting 1
			*(unsigned char*)0x23b7a8 = 1;
		}

		if(
			buttonPress & BTN_SELECT &&
			buttonPress & BTN_RB
		  )
		{
			// enable by setting 0
			*(unsigned char*)0x23b7a8 = 0;
		}
		
		if(
			buttonPress & BTN_SELECT &&
			buttonPress & BTN_LT
		  )
		{
			ENTER_MENU(13);
		}
		
		if(
			buttonPress & BTN_SELECT &&
			buttonPress & BTN_RT
		  )
		{
			ENTER_MENU(14);
		}
		
		if(
			buttonPress & BTN_SELECT &&
			buttonPress & BTN_Y
		  )
		{
			ENTER_MENU(15);
		}
		
		// update 60 times per second
		Sleep(16);
	}

	Mod_CloseConsole();

	return 0;
}