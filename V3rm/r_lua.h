#pragma once
#include <Windows.h>
#include "retcheck.h"

#define r_lua_tostring(rL,i)	r_lua_tolstring(rL, (i), NULL)
#define r_lua_pop(rL,n)		r_lua_settop(rL, -(n)-1)
#define r_lua_getglobal(rL,s)	r_lua_getfield(rL, LUA_GLOBALSINDEX, (s))
#define r_lua_newtable(rL) r_lua_createtable(rL, 0, 0)
#define x(x) (x - 0x400000 + (DWORD)GetModuleHandleA(0))

/*
nil: 0
boolean: 1
vector: 2
lightuserdata: 3
number: 4
string: 5
userdata: 6
function: 7
thread: 8
table: 9
proto: 10
upval: 11
*/



#define R_LUA_TNIL 0
#define R_LUA_TBOOLEAN 1
#define R_LUA_TLIGHTUSERDATA 3
#define R_LUA_TNUMBER 4
#define R_LUA_TSTRING 5
#define R_LUA_TUSERDATA 6
#define R_LUA_TFUNCTION 7
#define R_LUA_TTHREAD 8
#define R_LUA_TTABLE 9

//#define R_LUA_TPROTO 10
//#define R_LUA_TUPVALUE 11


int GDM;

DWORD TOP = 0x14;
DWORD BASE = 0x8;


/* 
UPDATED FOR ROBLOX 10Th June Two Thousand and Twenry!
ElKoax was here
*/


typedef DWORD(__cdecl* gdm2)();
gdm2 getdatamodel2 = (gdm2)(x(0xE0E120));


typedef DWORD(__thiscall* getdatamodel)(DWORD, DWORD);
getdatamodel r_getdatamodel = (getdatamodel)(x(0xE0E270));


typedef int(__cdecl* ee)(int e, const char* n, ...);
static ee r_luaL_error = (ee)x(0x118DAB0); // 22

typedef void(__stdcall* rgetfield)(DWORD rL, int idx, const char* k);
rgetfield r_lua_getfield = (rgetfield)retcheckBypass(x(0x118B700));

typedef int(__cdecl* rboolean)(unsigned int, int);
rboolean r_lua_pushboolean = (rboolean)(retcheckBypass(x(0x118BF40)));

typedef char* (__stdcall* rtolstring)(DWORD rL, int idx, size_t* size);
rtolstring r_lua_tolstring = (rtolstring)(retcheckBypass(x(0x118D070)));

typedef bool(__cdecl* toboolean)(DWORD rL, bool idx);
toboolean r_lua_toboolean = (toboolean)(x(0x118CFA0));

typedef void(__cdecl* pushvalue)(DWORD rL, DWORD idx);
pushvalue r_lua_pushvalue = (pushvalue)(retcheckBypass(x(0x118C450)));

typedef double(__stdcall* pushnumber)(DWORD rL, double idx);
pushnumber r_lua_pushnumber = (pushnumber)(retcheckBypass(x(0x118C240)));

typedef void(__cdecl* rpushstring)(DWORD rL, const char*);
rpushstring r_lua_pushstring = (rpushstring)(retcheckBypass(x(0x118C2A0)));

typedef int(__cdecl* rLua_pcall)(DWORD lst, int nargs, int nresults, int errfunc);
rLua_pcall r_lua_pcall = (rLua_pcall)retcheckBypass(x(0x118BE80));

typedef DWORD(__cdecl* next2)(DWORD rL, int idx);
next2 r_lua_next = (next2)(retcheckBypass(x(0x118BD10)));

typedef double(__cdecl* rtonumber)(DWORD, int, int);
rtonumber r_lua_tonumber = (rtonumber)(x(0x118D1A0));

typedef void(__fastcall* rpushcclosure)(DWORD rL, int fn, int non, int a1, int xd);
rpushcclosure r_lua_pushcclosure = (rpushcclosure)(retcheckBypass(x(0x118BF90)));

typedef void(__cdecl* rcreatetable)(DWORD rL, int num, int fix);
rcreatetable r_lua_createtable = (rcreatetable)(retcheckBypass(x(0x118B4E0)));

typedef DWORD(__cdecl* rnewthread)(DWORD);
rnewthread r_lua_newthread = (rnewthread)retcheckBypass(x(0x118BC00));

typedef void* (__cdecl* rnewuserdata)(DWORD, size_t, int);
rnewuserdata r_lua_newuserdata = (rnewuserdata)(retcheckBypass(x(0x118BC90)));

typedef void(__cdecl* rrawgeti)(DWORD, DWORD, DWORD);
rrawgeti r_lua_rawgeti = (rrawgeti)retcheckBypass(x(0x118C6E0));

typedef void* (__fastcall* rgetmetatable)(DWORD rL, int idx);
rgetmetatable r_lua_getmetatable = (rgetmetatable)(retcheckBypass(x(0x118B7B0)));

typedef int(__cdecl* rtouserdata)(DWORD, int);
rtouserdata r_lua_touserdata = (rtouserdata)(retcheckBypass(x(0x118D430)));

typedef DWORD(__cdecl* rtype)(DWORD, int);
rtype r_lua_type = (rtype)(x(0x118D520));

typedef void* (__cdecl* rsettable)(DWORD rL, int);
rsettable r_lua_settable = (rsettable)(retcheckBypass(x(0x118CDF0)));

typedef DWORD(__cdecl* rref)(DWORD, DWORD);
rref r_luaL_ref = (rref)(retcheckBypass(x(0x118DE30)));

//typedef int(__cdecl* gettop)(DWORD);
//gettop r_lua_gettop = (gettop)(x(0x11CEA40));

int r_lua_gettop(int rL)
{
	return *(DWORD*)(rL + TOP) - *(DWORD*)(rL + BASE) >> 4;
}

typedef void(__cdecl* rsettop)(DWORD rL, int idx);
rsettop r_lua_settop = (rsettop)(retcheckBypass(x(0x118CE70)));

typedef void(__cdecl* pushnil)(DWORD);
pushnil r_lua_pushnil = (pushnil)(retcheckBypass(x(0x118C1F0)));

typedef void(__cdecl* rpushlight)(DWORD, void*);
rpushlight r_lua_pushlightuserdata = (rpushlight)(retcheckBypass(x(0x118C130)));

