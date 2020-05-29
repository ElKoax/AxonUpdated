
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
	Script = "spawn(function() script=Instance.new(\"LocalScript\") " + Script + "\r\nend)";


	if (luaL_loadbuffer(m_L, Script.c_str(), Script.size(), "@Axon"))
	{
		//r_luaL_error(m_rL, lua_tostring(m_L, -1));
		r_lua_getglobal(m_rL, "warn");
		r_lua_pushstring(m_rL, lua_tostring(m_L, -1));
		r_lua_pcall(m_rL, 1, 0, 0);
		return;
	}
		//r_luaL_error(m_rL, lua_tostring(m_L, -1));
	else
	{
		lua_pcall(m_L, 0, 0, 0);
	}
	UserDataGC(m_L);
	
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

int GDM;

typedef DWORD(__cdecl* gdm2)();
gdm2 getdatamodel2 = (gdm2)(x(0xE418F0));


typedef DWORD(__thiscall* getdatamodel)(DWORD, DWORD);
getdatamodel r_getdatamodel = (getdatamodel)(x(0xE41A40));

int GetDatamodel()
{
	volatile DWORD StackPad[16]{};
	static DWORD DMPad[16]{}; 
	r_getdatamodel(getdatamodel2(), (DWORD)DMPad);
	DWORD DM = DMPad[0];
	return DM + 0x44;
	/*
	GetDataModel, Fixed by Shade and Synapse X source code i guess? xD enjoy this.
	*/
}

const char* GetClass(int self)
{
	return (const char*)(*(int(**)(void))(*(int*)self + 16))();
}

int FindFirstClass(int Instance, const char* Name)
{
	DWORD StartOfChildren = *(DWORD*)(Instance + 0x2C);
	DWORD EndOfChildren = *(DWORD*)(StartOfChildren + 4);

	for (int i = *(int*)StartOfChildren; i != EndOfChildren; i += 8)
	{
		if (memcmp(GetClass(*(int*)i), Name, strlen(Name)) == 0)
		{
			return *(int*)i;
		}
	}
}



void getdatamodeltesting()
{
	GDM = GetDatamodel();
	printf("GDM: (%x08)\n", GDM);
	ScriptContext = FindFirstClass(GDM, "ScriptContext");
	printf("Ha! yes done! \n");
	m_rL = (ScriptContext + 56 * 0 + 164) - *(DWORD*)(ScriptContext + 56 * 0 + 164);
	*(DWORD*)(*(DWORD*)(m_rL + 112) + 24) = 6;
	printf("Done! :3 \n");
}


void InitGlobals()
{
	std::vector<const char*> Globals = {
    "printidentity","game","Game","workspace","Workspace",
    "Axes","BrickColor","CFrame","Color3","ColorSequence","ColorSequenceKeypoint",
    "NumberRange","NumberSequence","NumberSequenceKeypoint","PhysicalProperties","Ray",
    "Rect","Region3","Region3int16","TweenInfo","UDim","UDim2","Vector2",
    "Vector2int16","Vector3","Vector3int16","Enum","Faces",
    "Instance","math","warn","typeof","type","print",
    "printidentity","ypcall","Wait","wait","delay","Delay","tick", "pcall", "spawn", "Spawn"
	};
	for (int i = 0; i < Globals.size(); i++)
	{
		r_lua_getglobal(m_rL, Globals[i]);
		Bridge::push(m_rL, m_L, -1);
		lua_setglobal(m_L, Globals[i]);
		r_lua_pop(m_rL, 1);
		std::cout << "WRAPPED GLOBAL: " << Globals[i] << std::endl;
	}
	printf("Globals Have been sucessfully wrapped!\n");
}



void main()
{
	ConsoleBypass("Axon | Instance Caching ~~ Updated by ElKoax :tm:");
	getdatamodeltesting();

	m_L = luaL_newstate();
	Bridge::VehHandlerpush();
	luaL_openlibs(m_L);
	InitGlobals();
	lua_register(m_L, "getrawmetatable", getRawMetaTable);
	lua_newtable(m_L);
	lua_setglobal(m_L, "_G");
	printf("YEETED ON FUNCTIONS\n");
	CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)input, NULL, NULL, NULL);
	printf("AXON INJECTED!\n");
	MessageBoxA(NULL, "Credits to ElKoax/KoaxyBoy and ElKoax/KoaxyBoy and XDumper again for the BANGING addies :DDD ", "Credits", MB_OK);
	std::string urnan;
	while (true)
	{
		std::getline(std::cin, urnan);
		Executeee(urnan);
	}
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
