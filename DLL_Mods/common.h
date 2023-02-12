#include <stdio.h>
#include <Windows.h>

// Wow I need a macro to make this easier

// draws text, the string must be all capital letters
// posX and posY are screen-space, (0,0) is center of screen
// Text3D("Hello", -0.34f, -0.46f, 1.07f, 1.5f, 1.5f, 1.5f, 1, 3);
typedef __int64(__cdecl* ptrText3D)(char* string, float posX, float posY, float unk1, float scaleX, float scaleY, float scaleZ, unsigned int unk2, int color);
ptrText3D Text3D = (ptrText3D)(0x5df20);

// Open a menu while paused
// NewMenu(Cursor, index, -1, -1);
typedef __int64(__cdecl* ptrNewMenu)(void* cursor, int menuIndex, int rowIndex, int unk2);
ptrNewMenu NewMenu = (ptrNewMenu)(0x6af20);

// Unlock everything
// OpenGame();
typedef __int64(__cdecl* ptrOpenGame)();
ptrOpenGame OpenGame = (ptrOpenGame)(0x6b490);

// Restarts the pyro fight, does not move Crash Bandicoot
// ResetFireBoss()
typedef __int64(__cdecl* ptrFireBossReset)();
ptrFireBossReset FireBossReset = (ptrFireBossReset)(0x7fe80);

// Trigger pause menu
// PauseGame();
typedef __int64(__cdecl* ptrPauseGame)();
ptrPauseGame PauseGame = (ptrPauseGame)(0x86cd0);

// Subtract life from player and respawn on blimp
// FarmReset();
typedef __int64(__cdecl* ptrFarmReset)();
ptrFarmReset FarmReset = (ptrFarmReset)(0xd54f0);

// Restarts boss fight, does not move crash, does not refill health
// EarthBossReset();
typedef __int64(__cdecl* ptrEarthBossReset)();
ptrEarthBossReset EarthBossReset = (ptrEarthBossReset)(0xe51d0);


// object pointers
void* FireBoss = (void*)0x5168a0;
void* Cursor = (void*)0x5607c0;
char* LevelFileName = (char*)0x561740;
void* Game = (void*)0x5625a0;

// ========================================================

FILE* f;
HMODULE hModule1;
DWORD WINAPI Mod_Entry(HMODULE hModule);

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ui_reason_for_call, LPVOID lpReserved)
{
	hModule1 = hModule;
	switch (ui_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		CloseHandle(CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)Mod_Entry, hModule, 0, nullptr));
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}

void Mod_OpenConsole()
{
	// initialize console window
	AllocConsole();
	freopen_s(&f, "CONOUT$", "w", stdout);	
}

void Mod_CloseConsole()
{
	// close console window
	fclose(f);
	FreeConsole();

	// terminate thread
	FreeLibraryAndExitThread(hModule1, 0);
}

void Mod_ResizeConsole(int x, int y)
{
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r);
	MoveWindow(console, r.left, r.top, x, y, TRUE);
}