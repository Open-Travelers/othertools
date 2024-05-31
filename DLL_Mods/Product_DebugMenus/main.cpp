
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

DWORD WINAPI Mod_Entry(HMODULE hModule)
{
	Mod_OpenConsole();

	Mod_ResizeConsole(400, 200);
	
	printf("Pause the game, then press...\n");
	printf("Select + LB: 11\n");
	printf("Select + RB: 12\n");
	printf("Select + LT: 13\n");
	printf("Select + RT: 14\n");
	printf("Select + Y:  15\n");
	printf("Select + A:  Close Mod\n");
	
	while(true)
	{
		unsigned char menuState = *(unsigned char*)((int)Cursor + 0x6e);
		unsigned int buttonPress = *(unsigned int*)0x427660;
		
		// only check for buttons while in pause menu
		if(menuState < 5) continue;
		if(menuState > 15) continue;
		
		#define ENTER_MENU(xxx) \
			if(menuState != xxx) \
				NewMenu(Cursor, xxx, -1, -1);
		
		if(
			buttonPress & BTN_SELECT &&
			buttonPress & BTN_LB
		  )
		{
			ENTER_MENU(11);
		}
		
		if(
			buttonPress & BTN_SELECT &&
			buttonPress & BTN_RB
		  )
		{
			ENTER_MENU(12);
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

		if (
			buttonPress & BTN_SELECT &&
			buttonPress & BTN_A
			)
		{
			break;
		}
		
		// update 60 times per second
		Sleep(16);
	}

	Mod_CloseConsole();

	return 0;
}