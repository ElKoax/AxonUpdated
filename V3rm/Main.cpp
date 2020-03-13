
#include "globals.h"
#include "Bridge.h"
#include <string>
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <iterator>
#include <fstream>
#include <intrin.h>
#include <Tlhelp32.h>
#include <CommCtrl.h>
#include <Wininet.h>
#pragma comment(lib, "wininet.lib")
using namespace std;

DWORD ScriptContext;
DWORD ScriptContextVFTable = x(0x187CBD0);

//DWORD grabGlobalStateIndex(DWORD ScriptContext, int idx)
//{
//	DWORD* context = reinterpret_cast<DWORD*>(ScriptContext);
//	return context[idx] - (DWORD)&context[idx];
//}

using Bridge::m_rL;
using Bridge::m_L;

void PushGlobal(DWORD rL, lua_State* L, const char* s)
{
	r_lua_getglobal(rL, s);
	Bridge::push(rL, L, -1);
	lua_setglobal(L, s);
	r_lua_pop(rL, 1);
}

using namespace std;
std::string replace_all(std::string subject, const std::string& search, const std::string& replace) {
	size_t pos = 0;
	while ((pos = subject.find(search, pos)) != std::string::npos) {
		subject.replace(pos, search.length(), replace);
		pos += replace.length();
	}
	return subject;
}


static int UserDataGC(lua_State *Thread) {
	void *UD = lua_touserdata(Thread, 1);
	if (m_rL) {

		r_lua_rawgeti(m_rL, LUA_REGISTRYINDEX, (int)UD);
		if (r_lua_type(m_rL, -1) <= R_LUA_TNIL) {
			lua_pushnil(Thread);
			lua_rawseti(Thread, LUA_REGISTRYINDEX, (int)UD);

		}
	}
	return 0;
}
void Executeee(std::string Script) {
	// script=Instance.new('LocalScript') script.Name = 'KEKE' \r\n"
	//Script = "spawn(function()" + Script + "\r\nend)";
	//Script = "script=Instance.new('LocalScript') script.Name = 'Kek' \r\n";

	if (luaL_loadstring(m_L, Script.c_str()))
		printf("Error: %s\n", lua_tostring(m_L, -1));
	else
		lua_pcall(m_L, 0, 0, 0);

	UserDataGC(m_L);
}


namespace Memory {
	///////////////
	// ScriptContext Scanner, Pretty Damn Fast
	// Credits To Whoever Made It (I Believe It Was Louka Or Rakion99)
	///////////////

	bool compare(BYTE* address, BYTE* pattern, BYTE* mask) {
		for (; *mask; address++, pattern++, mask++) {
			if (*mask == 'x' && *address != *pattern) {
				return false;
			}
		}
		return true;
	}

	DWORD Scan(BYTE* aob, BYTE* mask, BYTE prot = (PAGE_READONLY | PAGE_READWRITE | PAGE_WRITECOPY | PAGE_EXECUTE | PAGE_EXECUTE_READ | PAGE_EXECUTE_READWRITE | PAGE_EXECUTE_WRITECOPY)) {
		MEMORY_BASIC_INFORMATION mbi;
		DWORD j = (DWORD)GetModuleHandle(NULL);
		while (j < 0x7FFFFFFF && VirtualQuery((void*)j, &mbi, sizeof(mbi))) {
			if (!(mbi.Protect & PAGE_GUARD) && (mbi.State & MEM_COMMIT) && (mbi.Protect & prot)) {
				for (DWORD k = (DWORD)mbi.BaseAddress; k < ((DWORD)mbi.BaseAddress + mbi.RegionSize); ++k) {
					if (compare((BYTE*)k, (BYTE*)aob, (BYTE*)mask)) {
						return k;
					}
				}
			}
			j += mbi.RegionSize;
		}
		return 0;
	}
	///////////////
}


DWORD WINAPI input(PVOID lvpParameter)
{
	string WholeScript = "";
	HANDLE hPipe;
	char buffer[999999];
	DWORD dwRead;
	hPipe = CreateNamedPipe(TEXT("\\\\.\\pipe\\Axon"),
		PIPE_ACCESS_DUPLEX | PIPE_TYPE_BYTE | PIPE_READMODE_BYTE,
		PIPE_WAIT,
		1,
		999999,
		999999,
		NMPWAIT_USE_DEFAULT_WAIT,
		NULL);
	while (hPipe != INVALID_HANDLE_VALUE)
	{
		if (ConnectNamedPipe(hPipe, NULL) != FALSE)
		{
			while (ReadFile(hPipe, buffer, sizeof(buffer) - 1, &dwRead, NULL) != FALSE)
			{
				buffer[dwRead] = '\0';
				try {
					try {
						WholeScript = WholeScript + buffer;
					}
					catch (...) {
					}
				}
				catch (std::exception e) {

				}
				catch (...) {

				}
			}
			/*if (luaL_loadstring(m_L, WholeScript.c_str()))
				printf("Error: %s\n", lua_tostring(m_L, -1));
			else
				lua_pcall(m_L, 0, 0, 0);*/
			Executeee(WholeScript);

			WholeScript = "";
		}
		DisconnectNamedPipe(hPipe);
	}
}


bool CompareData(const char* Data, const char* Pattern, const char* Mask) {
	while (*Mask) {
		if (*Mask != '?') {
			if (*Data != *Pattern) {
				return false;
			};
		};
		++Mask;
		++Data;
		++Pattern;
	};
	return true;
};


DWORD ScanForScriptContext(const char* SCVFT_Offsetted) {
	MEMORY_BASIC_INFORMATION BasicMemoryInformation = {};
	SYSTEM_INFO SystemInformation = {};
	GetSystemInfo(&SystemInformation);
	DWORD StartingMemorySearchPosition = (DWORD)SystemInformation.lpMinimumApplicationAddress;
	DWORD MaximumSearchBoundary = (DWORD)SystemInformation.lpMaximumApplicationAddress;
	do {
		while (VirtualQuery((void*)StartingMemorySearchPosition, &BasicMemoryInformation, sizeof(BasicMemoryInformation))) {
			if ((BasicMemoryInformation.Protect & PAGE_READWRITE) && !(BasicMemoryInformation.Protect & PAGE_GUARD)) {
				for (DWORD Key = (DWORD)(BasicMemoryInformation.BaseAddress); ((Key - (DWORD)(BasicMemoryInformation.BaseAddress) < BasicMemoryInformation.RegionSize)); ++Key) {
					if (CompareData((const char*)Key, SCVFT_Offsetted, "xxxx")) {
						return Key;
					};
				};
			};
			StartingMemorySearchPosition += BasicMemoryInformation.RegionSize;
		};
	} while (StartingMemorySearchPosition < MaximumSearchBoundary);
	return 0x0;
};

int getRawMetaTable(lua_State *L) {
	Bridge::push(L, m_rL, 1);

	if (r_lua_getmetatable(m_rL, -1) == 0) {
		lua_pushnil(L);
		return 0;
	}
	Bridge::push(m_rL, L, -1);

	return 1;
}







void ConsoleBypass(const char* Title) {
	DWORD aaaa;
	VirtualProtect((PVOID)&FreeConsole, 1, PAGE_EXECUTE_READWRITE, &aaaa);
	*(BYTE*)(&FreeConsole) = 0xC3;
	AllocConsole();
	SetConsoleTitleA(Title);
	freopen("CONOUT$", "w", stdout);
	freopen("CONIN$", "r", stdin);
	HWND ConsoleHandle = GetConsoleWindow();
	::SetWindowPos(ConsoleHandle, HWND_TOPMOST, 0, 0, 0, 0, SWP_DRAWFRAME | SWP_NOMOVE | SWP_NOSIZE | SWP_SHOWWINDOW);
	::ShowWindow(ConsoleHandle, SW_NORMAL);
}


namespace Memory {

	bool Compare(const char* pData, const char* bMask, const char* szMask)
	{
		while (*szMask) {
			if (*szMask != '?') {
				if (*pData != *bMask) return 0;
			}
			++szMask, ++pData, ++bMask;
		}
		return 1;
	}

	DWORD Scan(const char* vftable)  // Credits goes to tepig
	{
		MEMORY_BASIC_INFORMATION BasicMemoryInformation = {};
		SYSTEM_INFO SystemInformation = {};
		GetSystemInfo(&SystemInformation);
		DWORD StartingMemorySearchPosition = (DWORD)SystemInformation.lpMinimumApplicationAddress;
		DWORD MaximumSearchBoundary = (DWORD)SystemInformation.lpMaximumApplicationAddress;
		do {
			while (VirtualQuery((void*)StartingMemorySearchPosition, &BasicMemoryInformation, sizeof(BasicMemoryInformation))) {
				if ((BasicMemoryInformation.Protect & PAGE_READWRITE) && !(BasicMemoryInformation.Protect & PAGE_GUARD)) {
					for (DWORD Key = (DWORD)(BasicMemoryInformation.BaseAddress); ((Key - (DWORD)(BasicMemoryInformation.BaseAddress) < BasicMemoryInformation.RegionSize)); ++Key) {
						if (Compare((const char*)Key, vftable, "xxxx")) {
							return Key;
						};
					};
				};
				StartingMemorySearchPosition += BasicMemoryInformation.RegionSize;
			};
		} while (StartingMemorySearchPosition < MaximumSearchBoundary);
		return 0x0;
	}
}

void gay()
{
	printf("axon is shit");
	uintptr_t ScriptContextVFTable = x(0x1C49D48);
	uintptr_t ScriptContext = Memory::Scan((char*)&ScriptContextVFTable);
	DWORD v2 = ScriptContext;
	DWORD v3 = 0;
	m_rL = *(DWORD*)(v2 + 56 * v3 + 172) - (v2 + 56 * v3 + 172);
	printf("%x08\n", m_rL);
}



void main()
{
	ConsoleBypass("Axon ");
	printf("Hooking To Gettop....\n");
	// u need to write the luastate and scriptcontext bullshit
	printf("Done Hooking Gettop!\n");
	gay();
		
	printf("YEET\n");
	m_L = luaL_newstate();
	printf("YEETED\n");
	Bridge::VehHandlerpush();
	printf("YEET\n");
	luaL_openlibs(m_L);
	luaL_newmetatable(m_L, "garbagecollector");
	lua_pushcfunction(m_L, UserDataGC);
	lua_setfield(m_L, -2, "__gc");
	lua_pushvalue(m_L, -1);
	lua_setfield(m_L, -2, "__index");
	PushGlobal(m_rL, m_L, "game");
	PushGlobal(m_rL, m_L, "Game");
	PushGlobal(m_rL, m_L, "workspace");
	PushGlobal(m_rL, m_L, "Workspace");
	PushGlobal(m_rL, m_L, "Axes");
	PushGlobal(m_rL, m_L, "BrickColor");
	PushGlobal(m_rL, m_L, "CFrame");
	PushGlobal(m_rL, m_L, "Color3");
	PushGlobal(m_rL, m_L, "ColorSequence");
	PushGlobal(m_rL, m_L, "ColorSequenceKeypoint");
	PushGlobal(m_rL, m_L, "NumberRange");
	PushGlobal(m_rL, m_L, "NumberSequence");
	PushGlobal(m_rL, m_L, "NumberSequenceKeypoint");
	PushGlobal(m_rL, m_L, "PhysicalProperties");
	PushGlobal(m_rL, m_L, "Ray");
	PushGlobal(m_rL, m_L, "Rect");
	PushGlobal(m_rL, m_L, "Region3");
	PushGlobal(m_rL, m_L, "Region3int16");
	PushGlobal(m_rL, m_L, "TweenInfo");
	PushGlobal(m_rL, m_L, "UDim");
	PushGlobal(m_rL, m_L, "UDim2");
	PushGlobal(m_rL, m_L, "Vector2");
	PushGlobal(m_rL, m_L, "Vector2int16");
	PushGlobal(m_rL, m_L, "Vector3");
	PushGlobal(m_rL, m_L, "Vector3int16");
	PushGlobal(m_rL, m_L, "Enum");
	PushGlobal(m_rL, m_L, "Faces");
	PushGlobal(m_rL, m_L, "Instance");
	PushGlobal(m_rL, m_L, "math");
	PushGlobal(m_rL, m_L, "warn");
	PushGlobal(m_rL, m_L, "typeof");
	PushGlobal(m_rL, m_L, "type");
	PushGlobal(m_rL, m_L, "spawn");
	PushGlobal(m_rL, m_L, "Spawn");
	PushGlobal(m_rL, m_L, "print");
	PushGlobal(m_rL, m_L, "printidentity");
	PushGlobal(m_rL, m_L, "ypcall");
	PushGlobal(m_rL, m_L, "Wait");
	PushGlobal(m_rL, m_L, "wait");
	PushGlobal(m_rL, m_L, "delay");
	PushGlobal(m_rL, m_L, "Delay");
	PushGlobal(m_rL, m_L, "tick");
	PushGlobal(m_rL, m_L, "LoadLibrary");
	printf("Globals Have been sucessfully wrapped!\n");
	lua_register(m_L, "getrawmetatable", getRawMetaTable);
	lua_newtable(m_L);
	lua_setglobal(m_L, "_G");
	printf("YEETED ON FUNCTIONS\n");
	CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)input, NULL, NULL, NULL);
	printf("RVX INJECTED!\n");
//	luaL_dostring(m_L, "script=Instance.new('LocalScript') script.Name = 'GayAxon' \r\n");
	MessageBoxA(NULL, "OK!", "Loaded", MB_OK);
//	MessageBoxA(NULL, "Credits to RoboMat for his hook", MB_OK);

	MessageBoxA(NULL, "Credits to ElKoax/KoaxyBoy and ElKoax/KoaxyBoy again for the BANGING addies :DDD ", "Credits", MB_OK);
}



BOOL APIENTRY DllMain(HMODULE Module, DWORD Reason, void* Reserved)
{
	switch (Reason)
	{
	case DLL_PROCESS_ATTACH:
		DisableThreadLibraryCalls(Module);
		CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)main, NULL, NULL, NULL);
		break;
	case DLL_PROCESS_DETACH:
		break;
	default: break;
	}

	return TRUE;
}
