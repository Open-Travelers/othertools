
#include "../common.h"

DWORD WINAPI Mod_Entry(HMODULE hModule)
{
	Mod_OpenConsole();

	for (int i = 0; i < 0x60; i++)
	{
		// call all menus
		printf("testing %d\n\n", i);
		NewMenu(Cursor, i, -1, -1);
		system("pause");
	}

	printf("Finished\n");
	system("pause");

	Mod_CloseConsole();

	return 0;
}