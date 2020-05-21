#pragma once
#include <Windows.h>


#define r_lua_tostring(rL,i)	r_lua_tolstring(rL, (i), NULL)
#define r_lua_pop(rL,n)		r_lua_settop(rL, -(n)-1)
#define r_lua_getglobal(rL,s)	r_lua_getfield(rL, LUA_GLOBALSINDEX, (s))
#define r_lua_newtable(rL) r_lua_createtable(rL, 0, 0)
#pragma once
#define x(x) (x - 0x400000 + (DWORD)GetModuleHandleA(0))


#define R_LUA_TNIL 0
#define R_LUA_TLIGHTUSERDATA 2
#define R_LUA_TNUMBER 3
#define R_LUA_TBOOLEAN 1
#define R_LUA_TSTRING 4
#define R_LUA_TTHREAD 6
#define R_LUA_TFUNCTION 7
#define R_LUA_TTABLE 8
#define R_LUA_TUSERDATA 5

DWORD unprotect(DWORD addr)
{
	BYTE* tAddr = (BYTE*)addr;
	do
	{
		tAddr += 16;
	} while (!(tAddr[0] == 0x55 && tAddr[1] == 0x8B && tAddr[2] == 0xEC));

	DWORD funcSz = tAddr - (BYTE*)addr;

	PVOID nFunc = VirtualAlloc(NULL, funcSz, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
	if (nFunc == NULL)
		return addr;

	memcpy(nFunc, (void*)addr, funcSz);

	BYTE* pos = (BYTE*)nFunc;
	BOOL valid = false;
	do
	{
		if (pos[0] == 0x72 && pos[2] == 0xA1 && pos[7] == 0x8B) {
			*(BYTE*)pos = 0xEB;

			DWORD cByte = (DWORD)nFunc;
			do
			{
				if (*(BYTE*)cByte == 0xE8)
				{
					DWORD oFuncPos = addr + (cByte - (DWORD)nFunc);
					DWORD oFuncAddr = (oFuncPos + *(DWORD*)(oFuncPos + 1)) + 5;

					if (oFuncAddr % 16 == 0)
					{
						DWORD relativeAddr = oFuncAddr - cByte - 5;
						*(DWORD*)(cByte + 1) = relativeAddr;

						cByte += 4;
					}
				}

				cByte += 1;
			} while (cByte - (DWORD)nFunc < funcSz);

			valid = true;
		}
		pos += 1;
	} while ((DWORD)pos < (DWORD)nFunc + funcSz);

	if (!valid)
	{
		VirtualFree(nFunc, funcSz, MEM_RELEASE);
		return addr;
	}

	return (DWORD)nFunc;
}
#include "retcheck.h"
typedef void(__cdecl* rgetfield)(DWORD rL, int idx, const char* k);
rgetfield r_lua_getfield = (rgetfield)retcheckBypass(x(0x11C0080));

typedef int(__cdecl* rboolean)(unsigned int, int);
rboolean r_lua_pushboolean = (rboolean)(retcheckBypass(x(0x11c0950)));

typedef char* (__fastcall* rtolstring)(DWORD rL, int idx, size_t* size);
rtolstring r_lua_tolstring = (rtolstring)(retcheckBypass(x(0x11C1B70)));

typedef bool(__cdecl* toboolean)(DWORD rL, bool idx);
toboolean r_lua_toboolean = (toboolean)(x(0x11C1AA0));

typedef void(__fastcall* pushvalue)(DWORD rL, DWORD idx);
pushvalue r_lua_pushvalue = (pushvalue)(retcheckBypass(x(0x11C0EA0)));

typedef double(__thiscall* pushnumber)(DWORD rL, double idx);
pushnumber r_lua_pushnumber = (pushnumber)(retcheckBypass(x(0x11c0c90)));

typedef void(__cdecl* rpushstring)(DWORD rL, const char*);
rpushstring r_lua_pushstring = (rpushstring)(retcheckBypass(x(0x11C0CF0)));

typedef int(__cdecl* rLua_pcall)(DWORD lst, int nargs, int nresults, int errfunc);
rLua_pcall r_lua_pcall = (rLua_pcall)retcheckBypass(x(0x11C0890));

typedef DWORD(__cdecl* next2)(DWORD rL, int idx);
next2 r_lua_next = (next2)(retcheckBypass(x(0x11C0720)));

typedef double(__cdecl* rtonumber)(DWORD, int, int);
rtonumber r_lua_tonumber = (rtonumber)(x(0x11C1CA0));

typedef void(__stdcall* rpushcclosure)(DWORD rL, int fn, int non, int a1, int xd);
rpushcclosure r_lua_pushcclosure = (rpushcclosure)(retcheckBypass(x(0x11C09A0)));

typedef void(__cdecl* rcreatetable)(DWORD rL, int num, int fix);
rcreatetable r_lua_createtable = (rcreatetable)(retcheckBypass(x(0x11BFE40)));

typedef DWORD(__cdecl* rnewthread)(DWORD);
rnewthread r_lua_newthread = (rnewthread)retcheckBypass(x(0x11C0610));

typedef void* (__cdecl* rnewuserdata)(DWORD, size_t, int);
rnewuserdata r_lua_newuserdata = (rnewuserdata)(retcheckBypass(x(0x11C06A0)));

typedef void(__cdecl* rrawgeti)(DWORD, DWORD, DWORD);
rrawgeti r_lua_rawgeti = (rrawgeti)retcheckBypass(x(0x11C1150));

typedef void* (__cdecl* rgetmetatable)(DWORD rL, int idx);
rgetmetatable r_lua_getmetatable = (rgetmetatable)(retcheckBypass(x(0x11C0130)));

typedef int(__cdecl* rtouserdata)(DWORD, int);
rtouserdata r_lua_touserdata = (rtouserdata)(retcheckBypass(x(0x11C1F30)));

typedef DWORD(__cdecl* rtype)(DWORD, int);
rtype r_lua_type = (rtype)(x(0x11C1FD0));

typedef void* (__cdecl* rsettable)(DWORD rL, int);
rsettable r_lua_settable = (rsettable)(retcheckBypass(x(0x11C18C0)));

typedef DWORD(__cdecl* rref)(DWORD, DWORD);
rref r_luaL_ref = (rref)(retcheckBypass(x(0x11C2930)));

typedef int(__cdecl* gettop)(DWORD);
gettop r_lua_gettop = (gettop)(x(0x11C0260));

typedef void(__fastcall* rsettop)(DWORD rL, int idx);
rsettop r_lua_settop = (rsettop)(retcheckBypass(x(0x11C1940)));

typedef void(__cdecl* pushnil)(DWORD);
pushnil r_lua_pushnil = (pushnil)(retcheckBypass(x(0x11C0C40)));

typedef void(__cdecl* rpushlight)(DWORD, void*);
rpushlight r_lua_pushlightuserdata = (rpushlight)(retcheckBypass(x(0x11C0B70)));

