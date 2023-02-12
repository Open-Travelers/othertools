#include "../common.h"

DWORD WINAPI Mod_Entry(HMODULE hModule)
{
	Mod_OpenConsole();

	// Call the function
	OpenGame();

	// show in the console that the mod executed
	printf("Hello Wrath of Cortex\n");

	// pause, so the program doesn't immediately end
	system("pause");

	Mod_CloseConsole();
	
	return 0;
}