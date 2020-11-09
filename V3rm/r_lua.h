#pragma once
#include <Windows.h>
#include "retcheck.h"





namespace Adresses {
	/*

	* addinfo_Decompiled_Args: int a1
	* addinfo_TypeDef: int
	* addinfo_Aob: 55 8B EC 81 EC 00 01 00 00 57
	* addinfo_ProtectedByRetCheck: false
	* addinfo_IsApartOfLua: true
	* addinfo_Mask: ..........

	 */
	DWORD addinfo_addr = 0x0142A930;
#define addinfo_CCV  __cdecl

	/*

	* adjuststack_Decompiled_Args: int a1
	* adjuststack_TypeDef: int
	* adjuststack_Aob: 55 8B EC 53 8B 5D 08 83 7B 04
	* adjuststack_ProtectedByRetCheck: false
	* adjuststack_IsApartOfLua: true
	* adjuststack_Mask: ..........

	 */
	DWORD adjuststack_addr = 0x0141FF50;
#define adjuststack_CCV  __cdecl

	/*

	* arith_Decompiled_Args: int a1, int a2, int a3
	* arith_TypeDef: int
	* arith_Aob: 55 8B EC 56 8B 75 0C 57 8B 46 0C
	* arith_ProtectedByRetCheck: false
	* arith_IsApartOfLua: true
	* arith_Mask: ...........

	 */
	DWORD arith_addr = 0x014357D0;
#define arith_CCV  __cdecl

	/*

	* aux_upvalue_Decompiled_Args: int a1, int a2, int a3
	* aux_upvalue_TypeDef: int
	* aux_upvalue_Aob: 55 8B EC 8B 55 08 56 57 83 7A
	* aux_upvalue_ProtectedByRetCheck: false
	* aux_upvalue_IsApartOfLua: true
	* aux_upvalue_Mask: ..........

	 */
	DWORD aux_upvalue_addr = 0x0141DA10;
#define aux_upvalue_CCV  __cdecl

	/*

	* auxgetinfo_Decompiled_Args: int a1, int a2, int a3, int a4
	* auxgetinfo_TypeDef: int
	* auxgetinfo_Aob: 55 8B EC 53 57 8B 7D 0C BB
	* auxgetinfo_ProtectedByRetCheck: false
	* auxgetinfo_IsApartOfLua: true
	* auxgetinfo_Mask: .........

	 */
	DWORD auxgetinfo_addr = 0x0142A9A0;
#define auxgetinfo_CCV  __cdecl

	/*

	* auxresume_Decompiled_Args: int a1, int a2, int a3
	* auxresume_TypeDef: int
	* auxresume_Aob: 55 8B EC 53 56 8B 75 0C 57 8B 7D 08 3B
	* auxresume_ProtectedByRetCheck: false
	* auxresume_IsApartOfLua: true
	* auxresume_Mask: .............

	 */
	DWORD auxresume_addr = 0x0142C530;
#define auxresume_CCV  __cdecl

	/*

	* call_bintm_Decompiled_Args: int a1, int a2, int a3, int a4
	* call_bintm_TypeDef: int
	* call_bintm_Aob: 55 8B EC 51 53 56 8B 75 0C 57 85
	* call_bintm_ProtectedByRetCheck: false
	* call_bintm_IsApartOfLua: true
	* call_bintm_Mask: ...........

	 */
	DWORD call_bintm_addr = 0x01435050;
#define call_bintm_CCV  __cdecl

	/*

	* call_ordertm_Decompiled_Args: int a1, int a2
	* call_ordertm_TypeDef: int
	* call_ordertm_Aob: 55 8B EC 8B 45 08 53 56 57 8B 78 0C
	* call_ordertm_ProtectedByRetCheck: false
	* call_ordertm_IsApartOfLua: true
	* call_ordertm_Mask: ............

	 */
	DWORD call_ordertm_addr = 0x01435100;
#define call_ordertm_CCV  __cdecl

	/*

	* callcheck_Decompiled_Args: Given Adress Is Not A Function
	* callcheck_TypeDef: Given Adress Is Not A Function
	* callcheck_Aob: FF 15 F8 E1 5C 02 8B D8
	* callcheck_ProtectedByRetCheck: false
	* callcheck_IsApartOfLua: false
	* callcheck_Mask: ........

	 */
	DWORD callcheck_addr = 0x005DED50;
#define callcheck_CCV  __stdcall

	/*

	* calltmres_Decompiled_Args: Given Adress Is Not A Function
	* calltmres_TypeDef: Given Adress Is Not A Function
	* calltmres_Aob: 83 7E 0C 08 75
	* calltmres_ProtectedByRetCheck: false
	* calltmres_IsApartOfLua: true
	* calltmres_Mask: .....

	 */
	DWORD calltmres_addr = 0x01435930;
#define calltmres_CCV  __cdecl

	/*

	* close_state_Decompiled_Args: int a1
	* close_state_TypeDef: int
	* close_state_Aob: 55 8B EC 53 8B 5D 08 56 57 8B 7B 1C
	* close_state_ProtectedByRetCheck: false
	* close_state_IsApartOfLua: true
	* close_state_Mask: ............

	 */
	DWORD close_state_addr = 0x0142A410;
#define close_state_CCV  __cdecl

	/*

	* collectvalidlines_Decompiled_Args: int a1, int a2
	* collectvalidlines_TypeDef: int
	* collectvalidlines_Aob: 55 8B EC 56 8B 75 0C 57 8B 7D 08 8B 57
	* collectvalidlines_ProtectedByRetCheck: false
	* collectvalidlines_IsApartOfLua: true
	* collectvalidlines_Mask: .............

	 */
	DWORD collectvalidlines_addr = 0x01420BE0;
#define collectvalidlines_CCV  __cdecl

	/*

	* currentline_Decompiled_Args: int a1
	* currentline_TypeDef: int
	* currentline_Aob: 55 8B EC 8B 4D 0C 53 56 57 8B 01
	* currentline_ProtectedByRetCheck: false
	* currentline_IsApartOfLua: true
	* currentline_Mask: ...........

	 */
	DWORD currentline_addr = 0x0142ABB0;
#define currentline_CCV  __cdecl

	/*

	* deobfuscate_closure_Decompiled_Args: int a1, int a2
	* deobfuscate_closure_TypeDef: int
	* deobfuscate_closure_Aob: 55 8B EC 53 8B 5D 08 56 8B 75 0C 57 83 7E 0C 09 75 3C
	* deobfuscate_closure_ProtectedByRetCheck: false
	* deobfuscate_closure_IsApartOfLua: true
	* deobfuscate_closure_Mask: ..................

	 */
	DWORD deobfuscate_closure_addr = 0x01435F10;
#define deobfuscate_closure_CCV  __cdecl

	/*

	* f_call_Decompiled_Args: int a1
	* f_call_TypeDef: int
	* f_call_Aob: 55 8B EC 8B 45 0C FF 70 04 FF 30 FF 75 08 E8 3D
	* f_call_ProtectedByRetCheck: true
	* f_call_IsApartOfLua: true
	* f_call_Mask: ................

	 */
	DWORD f_call_addr = 0x0141DA90;
#define f_call_CCV  __cdecl

	/*

	* f_luaopen_Decompiled_Args: int a1
	* f_luaopen_TypeDef: int
	* f_luaopen_Aob: 55 8B EC 53 56 57 8B 7D 08 8B 5F 1C 8D
	* f_luaopen_ProtectedByRetCheck: false
	* f_luaopen_IsApartOfLua: true
	* f_luaopen_Mask: .............

	 */
	DWORD f_luaopen_addr = 0x0142A4A0;
#define f_luaopen_CCV  __cdecl

	/*

	* findfirstchild_Decompiled_Args: int a1
	* findfirstchild_TypeDef: int
	* findfirstchild_Aob: 55 8B EC 8B 41 2C 83
	* findfirstchild_ProtectedByRetCheck: false
	* findfirstchild_IsApartOfLua: false
	* findfirstchild_Mask: .......

	 */
	DWORD findfirstchild_addr = 0x0067C590;
#define findfirstchild_CCV  __stdcall

	/*

	* findfirstchildofclass_Decompiled_Args: int a1
	* findfirstchildofclass_TypeDef: int
	* findfirstchildofclass_Aob: Unable to get AOB
	* findfirstchildofclass_ProtectedByRetCheck: false
	* findfirstchildofclass_IsApartOfLua: false
	* findfirstchildofclass_Mask: .......

	 */
	DWORD findfirstchildofclass_addr = 0x0067CC80;
#define findfirstchildofclass_CCV  __stdcall

	/*

	* findlocal_Decompiled_Args: int a1, int a2, int a3
	* findlocal_TypeDef: int
	* findlocal_Aob: 55 8B EC 83 EC 0C 8B 4D 08 33 C0
	* findlocal_ProtectedByRetCheck: false
	* findlocal_IsApartOfLua: true
	* findlocal_Mask: ...........

	 */
	DWORD findlocal_addr = 0x01432190;
#define findlocal_CCV  __cdecl

	/*

	* fireclickdetector_Decompiled_Args: int a1
	* fireclickdetector_TypeDef: int
	* fireclickdetector_Aob: Unable to get AOB
	* fireclickdetector_ProtectedByRetCheck: false
	* fireclickdetector_IsApartOfLua: false
	* fireclickdetector_Mask: .......

	 */
	DWORD fireclickdetector_addr = 0x00B01940;
#define fireclickdetector_CCV  __stdcall

	/*

	* flog_getvalue_Decompiled_Args: int a1, int a2, int a3
	* flog_getvalue_TypeDef: bool
	* flog_getvalue_Aob: 55 8B EC 83 EC 1C 53 8B 5D 08 56 57 8B 3D 1C 28 16 03 53 0F B6 07 8D 77 01 03 F0 56 E8 1F
	* flog_getvalue_ProtectedByRetCheck: false
	* flog_getvalue_IsApartOfLua: false
	* flog_getvalue_Mask: ..............................

	 */
	DWORD flog_getvalue_addr = 0x015DD1A0;
#define flog_getvalue_CCV  __cdecl

	/*

	* flog_setvalue_Decompiled_Args: int a1, const char* a2, int a3
	* flog_setvalue_TypeDef: int
	* flog_setvalue_Aob: 55 8B EC 64 A1 00 00 00 00 6A FF 68 E8 FE 47 02 50 64 89 25 00 00 00 00 83 EC 5C
	* flog_setvalue_ProtectedByRetCheck: false
	* flog_setvalue_IsApartOfLua: false
	* flog_setvalue_Mask: ...........................

	 */
	DWORD flog_setvalue_addr = 0x015DD960;
#define flog_setvalue_CCV  __cdecl

	/*

	* getdatamodel_Decompiled_Args: int a1
	* getdatamodel_TypeDef: int
	* getdatamodel_Aob: 55 8B EC 64 A1 00 00 00 00 6A FF 68 B8 65 48 02 50 64 89 25 00 00 00 00 83 EC 10 80 3D 28
	* getdatamodel_ProtectedByRetCheck: false
	* getdatamodel_IsApartOfLua: false
	* getdatamodel_Mask: ..............................

	 */
	DWORD getdatamodel_addr = 0x00F10D00;
#define getdatamodel_CCV  __stdcall

	/*

	* getdatamodel2_Decompiled_Args: Function Has No Args Or Unable To Get Args
	* getdatamodel2_TypeDef: Unable To Get typedef
	* getdatamodel2_Aob: 55 8B EC 64 A1 00 00 00 00 6A FF 68 54 D1
	* getdatamodel2_ProtectedByRetCheck: false
	* getdatamodel2_IsApartOfLua: false
	* getdatamodel2_Mask: ..............

	 */
	DWORD getdatamodel2_addr = 0x00F10BB0;
#define getdatamodel2_CCV  __cdecl

	/*

	* getfunc_Decompiled_Args: int a1, int a2
	* getfunc_TypeDef: int
	* getfunc_Aob: 55 8B EC 81 EC 24 01 00 00 56
	* getfunc_ProtectedByRetCheck: false
	* getfunc_IsApartOfLua: true
	* getfunc_Mask: ..........

	 */
	DWORD getfunc_addr = 0x0142BD30;
#define getfunc_CCV  __cdecl

	/*

	* getnamecallmethod_Decompiled_Args: int a1
	* getnamecallmethod_TypeDef: int
	* getnamecallmethod_Aob: 55 8B EC 56 57 8B 7D 08 8B 47 18 3B
	* getnamecallmethod_ProtectedByRetCheck: false
	* getnamecallmethod_IsApartOfLua: true
	* getnamecallmethod_Mask: ............

	 */
	DWORD getnamecallmethod_addr = 0x0141FFC0;
#define getnamecallmethod_CCV  __cdecl

	/*

	* growci_Decompiled_Args: int a1
	* growci_TypeDef: int
	* growci_Aob: 55 8B EC 56 8B 75 08 8B 46 24 3D
	* growci_ProtectedByRetCheck: false
	* growci_IsApartOfLua: true
	* growci_Mask: ...........

	 */
	DWORD growci_addr = 0x01420B80;
#define growci_CCV  __cdecl

	/*

	* hashnum_Decompiled_Args: int a1, int a2, int a3
	* hashnum_TypeDef: int
	* hashnum_Aob: 55 8B EC 8B 4D 10 81 E1
	* hashnum_ProtectedByRetCheck: false
	* hashnum_IsApartOfLua: true
	* hashnum_Mask: ........

	 */
	DWORD hashnum_addr = 0x01433C30;
#define hashnum_CCV  __cdecl

	/*

	* index2adr_Decompiled_Args: int a1, int a2
	* index2adr_TypeDef: int
	* index2adr_Aob: 55 8B EC 8B 55 0C 81 FA F0 D8
	* index2adr_ProtectedByRetCheck: false
	* index2adr_IsApartOfLua: true
	* index2adr_Mask: ..........

	 */
	DWORD index2adr_addr = 0x0141DAE0;
#define index2adr_CCV  __stdcall

	/*

	* match_Decompiled_Args: int a1, int a2, int a3
	* match_TypeDef: int
	* match_Aob: 55 8B EC 83 EC 1C 53 8B 5D 08 56 57 8B 0B
	* match_ProtectedByRetCheck: false
	* match_IsApartOfLua: true
	* match_Mask: ..............

	 */
	DWORD match_addr = 0x0142FA80;
#define match_CCV  __cdecl

	/*

	* newlstr_Decompiled_Args: int a1, int a2, int a3, int a4
	* newlstr_TypeDef: int
	* newlstr_Aob: 55 8B EC 83 EC 0C 53 56 8B 75 10 57 8D
	* newlstr_ProtectedByRetCheck: false
	* newlstr_IsApartOfLua: true
	* newlstr_Mask: .............

	 */
	DWORD newlstr_addr = 0x01433A70;
#define newlstr_CCV  __stdcall

	/*

	* push_captures_Decompiled_Args: int a1, int a2, int a3
	* push_captures_TypeDef: int
	* push_captures_Aob: 55 8B EC 53 56 8B 75 08 57 8B 5E 14
	* push_captures_ProtectedByRetCheck: false
	* push_captures_IsApartOfLua: true
	* push_captures_Mask: ............

	 */
	DWORD push_captures_addr = 0x01430410;
#define push_captures_CCV  __cdecl

	/*

	* luaa_pushobject_Decompiled_Args: int a1, int a2
	* luaa_pushobject_TypeDef: int
	* luaa_pushobject_Aob: 55 8B EC 8B 55 08 8B 45 0C 8B 4A 10 0F
	* luaa_pushobject_ProtectedByRetCheck: false
	* luaa_pushobject_IsApartOfLua: true
	* luaa_pushobject_Mask: .............

	 */
	DWORD luaa_pushobject_addr = 0x0141DBA0;
#define luaa_pushobject_CCV  __cdecl

	/*

	* lua_rawvalue_Decompiled_Args: int a1, int a2
	* lua_rawvalue_TypeDef: int
	* lua_rawvalue_Aob: 55 8B EC 8B 55 0C 85 D2 7E 28
	* lua_rawvalue_ProtectedByRetCheck: false
	* lua_rawvalue_IsApartOfLua: true
	* lua_rawvalue_Mask: ..........

	 */
	DWORD lua_rawvalue_addr = 0x0141DBC0;
#define lua_rawvalue_CCV  __cdecl

	/*

	* lua_call_Decompiled_Args: int a1, int a2, int a3
	* lua_call_TypeDef: int
	* lua_call_Aob: 55 8B EC 8B 4D 0C 57 8B 7D 08 FF
	* lua_call_ProtectedByRetCheck: true
	* lua_call_IsApartOfLua: true
	* lua_call_Mask: ...........

	 */
	DWORD lua_call_addr = 0x0141DC10;
#define lua_call_CCV  __cdecl

	/*

	* lua_checkstack_Decompiled_Args: int a1, int a2
	* lua_checkstack_TypeDef: int
	* lua_checkstack_Aob: 55 8B EC 8B 4D 0C 56 8B 75 08 57 BF
	* lua_checkstack_ProtectedByRetCheck: false
	* lua_checkstack_IsApartOfLua: true
	* lua_checkstack_Mask: ............

	 */
	DWORD lua_checkstack_addr = 0x0141DC80;
#define lua_checkstack_CCV  __cdecl

	/*

	* lua_concat_Decompiled_Args: int a1, int a2
	* lua_concat_TypeDef: int
	* lua_concat_Aob: 55 8B EC 56 8B 75 0C 57 8B 7D 08 83 FE 02
	* lua_concat_ProtectedByRetCheck: true
	* lua_concat_IsApartOfLua: true
	* lua_concat_Mask: ..............

	 */
	DWORD lua_concat_addr = 0x0141DD20;
#define lua_concat_CCV  __cdecl

	/*

	* lua_createtable_Decompiled_Args: int a1
	* lua_createtable_TypeDef: int
	* lua_createtable_Aob: 55 8B EC 57 8B 7D 08 8B 4F 1C 8B 44 39 68 3B 44 39 6C 72 0B 6A 01 57 E8 34
	* lua_createtable_ProtectedByRetCheck: true
	* lua_createtable_IsApartOfLua: true
	* lua_createtable_Mask: .........................

	 */
	DWORD lua_createtable_addr = 0x0141DDD0;
#define lua_createtable_CCV  __cdecl

	/*

	* lua_freeobj_Decompiled_Args: int a1
	* lua_freeobj_TypeDef: int
	* lua_freeobj_Aob: 55 8B EC 51 53 57 8B 7D 08 8B 5F
	* lua_freeobj_ProtectedByRetCheck: false
	* lua_freeobj_IsApartOfLua: true
	* lua_freeobj_Mask: ...........

	 */
	DWORD lua_freeobj_addr = 0x014325A0;
#define lua_freeobj_CCV  __cdecl

	/*

	* lua_gc_Decompiled_Args: int a1, int a2, int a3
	* lua_gc_TypeDef: int
	* lua_gc_Aob: 55 8B EC 53 56 57 8B 7D 08 33 DB 8B 77
	* lua_gc_ProtectedByRetCheck: false
	* lua_gc_IsApartOfLua: true
	* lua_gc_Mask: .............

	 */
	DWORD lua_gc_addr = 0x0141DE50;
#define lua_gc_CCV  __cdecl

	/*

	* lua_getfenv_Decompiled_Args: int a1, int a2
	* lua_getfenv_TypeDef: int
	* lua_getfenv_Aob: 55 8B EC 8B 4D 0C 56 8B 75 08 85 C9 7E 18 8B 46 08 BA
	* lua_getfenv_ProtectedByRetCheck: true
	* lua_getfenv_IsApartOfLua: true
	* lua_getfenv_Mask: ..................

	 */
	DWORD lua_getfenv_addr = 0x0141DF70;
#define lua_getfenv_CCV  __cdecl

	/*

	* lua_getfield_Decompiled_Args: const char* a1
	* lua_getfield_TypeDef: int
	* lua_getfield_Aob: Unable to get AOB
	* lua_getfield_ProtectedByRetCheck: true
	* lua_getfield_IsApartOfLua: true
	* lua_getfield_Mask: .......

	 */
	DWORD lua_getfield_addr = 0x0141E010;
#define lua_getfield_CCV  __fastcall

	/*

	* lua_getinfo_Decompiled_Args: int a1, int a2, int a3
	* lua_getinfo_TypeDef: int
	* lua_getinfo_Aob: 55 8B EC 51 8B 55 10 53 8B 5D 0C
	* lua_getinfo_ProtectedByRetCheck: true
	* lua_getinfo_IsApartOfLua: true
	* lua_getinfo_Mask: ...........

	 */
	DWORD lua_getinfo_addr = 0x0142B100;
#define lua_getinfo_CCV  __cdecl

	/*

	* lua_getlocal_Decompiled_Args: int a1, int a2
	* lua_getlocal_TypeDef: int
	* lua_getlocal_Aob: 55 8B EC 8B 45 0C 53 56 57 8B 80
	* lua_getlocal_ProtectedByRetCheck: true
	* lua_getlocal_IsApartOfLua: true
	* lua_getlocal_Mask: ...........

	 */
	DWORD lua_getlocal_addr = 0x0142B1D0;
#define lua_getlocal_CCV  __cdecl

	/*

	* lua_setlocal_Decompiled_Args: int a1, int a2
	* lua_setlocal_TypeDef: int
	* lua_setlocal_Aob: 55 8B EC 8B 45 0C 53 56 8B 75 08 8B 80 1C 01 00 00 57 8D 0C 40 8B 46 20 8D
	* lua_setlocal_ProtectedByRetCheck: true
	* lua_setlocal_IsApartOfLua: true
	* lua_setlocal_Mask: .........................

	 */
	DWORD lua_setlocal_addr = 0x0142B320;
#define lua_setlocal_CCV  __cdecl

	/*

	* lua_getmettable_Decompiled_Args: int a1, int a2
	* lua_getmettable_TypeDef: int
	* lua_getmettable_Aob: 55 8B EC 8B 4D 0C 56 8B 75 08 57 85 C9 7E 18 8B 46 08 BA
	* lua_getmettable_ProtectedByRetCheck: false
	* lua_getmettable_IsApartOfLua: true
	* lua_getmettable_Mask: ...................

	 */
	DWORD lua_getmettable_addr = 0x0141E0B0;
#define lua_getmettable_CCV  __cdecl

	/*

	* lua_getstack_Decompiled_Args: int a1, int a2, int a3
	* lua_getstack_TypeDef: int
	* lua_getstack_Aob: 55 8B EC 8B 4D 0C B8 AB
	* lua_getstack_ProtectedByRetCheck: false
	* lua_getstack_IsApartOfLua: true
	* lua_getstack_Mask: ........

	 */
	DWORD lua_getstack_addr = 0x0142B290;
#define lua_getstack_CCV  __cdecl

	/*

	* lua_gettable_Decompiled_Args: int a1, int a2
	* lua_gettable_TypeDef: int
	* lua_gettable_Aob: Unable to get AOB
	* lua_gettable_ProtectedByRetCheck: true
	* lua_gettable_IsApartOfLua: true
	* lua_gettable_Mask: .......

	 */
	DWORD lua_gettable_addr = 0x0141E170;
#define lua_gettable_CCV  __cdecl

	/*

	* lua_gettop_Decompiled_Args: int a1
	* lua_gettop_TypeDef: int
	* lua_gettop_Aob: 55 8B EC 8B 4D 08 8B 41 10 2B
	* lua_gettop_ProtectedByRetCheck: false
	* lua_gettop_IsApartOfLua: true
	* lua_gettop_Mask: ..........

	 */
	DWORD lua_gettop_addr = 0x0141E1E0;
#define lua_gettop_CCV  __cdecl

	/*

	* lua_getupvalue_Decompiled_Args: int a1, int a2
	* lua_getupvalue_TypeDef: int
	* lua_getupvalue_Aob: 55 8B EC 8B 4D 0C 56 8B 75 08 57 85 C9 7E 18 8B 46 08 C1
	* lua_getupvalue_ProtectedByRetCheck: true
	* lua_getupvalue_IsApartOfLua: true
	* lua_getupvalue_Mask: ...................

	 */
	DWORD lua_getupvalue_addr = 0x0141E200;
#define lua_getupvalue_CCV  __cdecl

	/*

	* lua_insert_Decompiled_Args: int a1, int a2
	* lua_insert_TypeDef: int
	* lua_insert_Aob: 55 8B EC 8B 4D 0C 56 8B 75 08 85 C9 7E 17
	* lua_insert_ProtectedByRetCheck: true
	* lua_insert_IsApartOfLua: true
	* lua_insert_Mask: ..............

	 */
	DWORD lua_insert_addr = 0x0141E290;
#define lua_insert_CCV  __cdecl

	/*

	* lua_iscfunction_Decompiled_Args: int a1, int a2
	* lua_iscfunction_TypeDef: int
	* lua_iscfunction_Aob: Unable to get AOB
	* lua_iscfunction_ProtectedByRetCheck: false
	* lua_iscfunction_IsApartOfLua: true
	* lua_iscfunction_Mask: .......

	 */
	DWORD lua_iscfunction_addr = 0x0141E310;
#define lua_iscfunction_CCV  __cdecl

	/*

	* lua_isnumber_Decompiled_Args: int a1, int a2
	* lua_isnumber_TypeDef: int
	* lua_isnumber_Aob: Unable to get AOB
	* lua_isnumber_ProtectedByRetCheck: false
	* lua_isnumber_IsApartOfLua: true
	* lua_isnumber_Mask: .......

	 */
	DWORD lua_isnumber_addr = 0x0141E3B0;
#define lua_isnumber_CCV  __cdecl

	/*

	* lua_isstring_Decompiled_Args: int a1, int a2
	* lua_isstring_TypeDef: int
	* lua_isstring_Aob: 55 8B EC 8B 55 0C 85 D2 7E 17
	* lua_isstring_ProtectedByRetCheck: false
	* lua_isstring_IsApartOfLua: true
	* lua_isstring_Mask: ..........

	 */
	DWORD lua_isstring_addr = 0x0141E410;
#define lua_isstring_CCV  __cdecl

	/*

	* lua_error_Decompiled_Args: Function Has No Args Or Unable To Get Args
	* lua_error_TypeDef: Unable To Get typedef
	* lua_error_Aob: 55 8B EC 6A 02 FF 75 08 E8 D3
	* lua_error_ProtectedByRetCheck: false
	* lua_error_IsApartOfLua: true
	* lua_error_Mask: ..........

	 */
	DWORD lua_error_addr = 0x0141DE40;
#define lua_error_CCV  __cdecl

	/*

	* lua_isuserdata_Decompiled_Args: int a1, int a2
	* lua_isuserdata_TypeDef: int
	* lua_isuserdata_Aob: Unable to get AOB
	* lua_isuserdata_ProtectedByRetCheck: false
	* lua_isuserdata_IsApartOfLua: true
	* lua_isuserdata_Mask: .......

	 */
	DWORD lua_isuserdata_addr = 0x0141E360;
#define lua_isuserdata_CCV  __cdecl

	/*

	* lua_lessthan_Decompiled_Args: int a1, int a2, int a3
	* lua_lessthan_TypeDef: int
	* lua_lessthan_Aob: 55 8B EC 8B 4D 0C 53 56 8B 75 08 57 BF E8
	* lua_lessthan_ProtectedByRetCheck: true
	* lua_lessthan_IsApartOfLua: true
	* lua_lessthan_Mask: ..............

	 */
	DWORD lua_lessthan_addr = 0x0141E460;
#define lua_lessthan_CCV  __cdecl

	/*

	* lua_newstate_Decompiled_Args: int a1, int a2
	* lua_newstate_TypeDef: int
	* lua_newstate_Aob: 55 8B EC 83 EC 08 53 8B 5D 08 56 57 8B 7D 0C 68
	* lua_newstate_ProtectedByRetCheck: false
	* lua_newstate_IsApartOfLua: true
	* lua_newstate_Mask: ................

	 */
	DWORD lua_newstate_addr = 0x0142A640;
#define lua_newstate_CCV  __cdecl

	/*

	* lua_newthread_Decompiled_Args: int a1
	* lua_newthread_TypeDef: int
	* lua_newthread_Aob: 55 8B EC 56 8B 75 08 57 8B 4E 1C 8B 44 31 68 3B 44 31 6C 72 0B 6A 01 56 E8 F3
	* lua_newthread_ProtectedByRetCheck: true
	* lua_newthread_IsApartOfLua: true
	* lua_newthread_Mask: ..........................

	 */
	DWORD lua_newthread_addr = 0x0141E510;
#define lua_newthread_CCV  __cdecl

	/*

	* lua_newuserdata_Decompiled_Args: int a1
	* lua_newuserdata_TypeDef: int
	* lua_newuserdata_Aob: 55 8B EC 56 8B 75 08 57 8B 4E 1C 8B 44 31 68 3B 44 31 6C 72 0B 6A 01 56 E8 63
	* lua_newuserdata_ProtectedByRetCheck: true
	* lua_newuserdata_IsApartOfLua: true
	* lua_newuserdata_Mask: ..........................

	 */
	DWORD lua_newuserdata_addr = 0x0141E5A0;
#define lua_newuserdata_CCV  __cdecl

	/*

	* lua_next_Decompiled_Args: int a1, int a2
	* lua_next_TypeDef: int
	* lua_next_Aob: 55 8B EC 8B 4D 0C 56 8B 75 08 57 85 C9 7E 19
	* lua_next_ProtectedByRetCheck: true
	* lua_next_IsApartOfLua: true
	* lua_next_Mask: ...............

	 */
	DWORD lua_next_addr = 0x0141E620;
#define lua_next_CCV  __cdecl

	/*

	* lua_objlen_Decompiled_Args: int a1, int a2
	* lua_objlen_TypeDef: int
	* lua_objlen_Aob: 55 8B EC 8B 4D 0C 56 57 8B 7D 08 85
	* lua_objlen_ProtectedByRetCheck: false
	* lua_objlen_IsApartOfLua: true
	* lua_objlen_Mask: ............

	 */
	DWORD lua_objlen_addr = 0x0141E6B0;
#define lua_objlen_CCV  __cdecl

	/*

	* lua_pcall_Decompiled_Args: int a1, int a2, int a3, int a4
	* lua_pcall_TypeDef: int
	* lua_pcall_Aob: 55 8B EC 8B 4D 14 83 EC 08 53 57
	* lua_pcall_ProtectedByRetCheck: true
	* lua_pcall_IsApartOfLua: true
	* lua_pcall_Mask: ...........

	 */
	DWORD lua_pcall_addr = 0x0141E790;
#define lua_pcall_CCV  __cdecl

	/*

	* lua_pushboolean_Decompiled_Args: int a1, int a2
	* lua_pushboolean_TypeDef: int
	* lua_pushboolean_Aob: 55 8B EC 8B 55 08 33 C0 39
	* lua_pushboolean_ProtectedByRetCheck: true
	* lua_pushboolean_IsApartOfLua: true
	* lua_pushboolean_Mask: .........

	 */
	DWORD lua_pushboolean_addr = 0x0141E850;
#define lua_pushboolean_CCV  __cdecl

	/*

	* lua_pushcclosure_Decompiled_Args: int a1, int a2, int a3, int a4, int a5
	* lua_pushcclosure_TypeDef: int
	* lua_pushcclosure_Aob: 55 8B EC 56 8B 75 08 8B 4E 1C 8B
	* lua_pushcclosure_ProtectedByRetCheck: true
	* lua_pushcclosure_IsApartOfLua: true
	* lua_pushcclosure_Mask: ...........

	 */
	DWORD lua_pushcclosure_addr = 0x0141E8A0;
#define lua_pushcclosure_CCV  __cdecl

	/*

	* lua_pushfstring_Decompiled_Args: int a1, int a2
	* lua_pushfstring_TypeDef: int
	* lua_pushfstring_Aob: 55 8B EC 56 8B 75 08 57 8B 4E 1C 8B 44 31 68 3B 44 31 6C 72 0B 6A 01 56 E8 93
	* lua_pushfstring_ProtectedByRetCheck: false
	* lua_pushfstring_IsApartOfLua: true
	* lua_pushfstring_Mask: ..........................

	 */
	DWORD lua_pushfstring_addr = 0x0141E970;
#define lua_pushfstring_CCV  __cdecl

	/*

	* lua_pushinteger_Decompiled_Args: int a1, int a2
	* lua_pushinteger_TypeDef: int
	* lua_pushinteger_Aob: 55 8B EC 66 0F 6E 4D
	* lua_pushinteger_ProtectedByRetCheck: true
	* lua_pushinteger_IsApartOfLua: true
	* lua_pushinteger_Mask: .......

	 */
	DWORD lua_pushinteger_addr = 0x0141E9E0;
#define lua_pushinteger_CCV  __cdecl

	/*

	* lua_pushlightuserdata_Decompiled_Args: int a1, int a2
	* lua_pushlightuserdata_TypeDef: int
	* lua_pushlightuserdata_Aob: 55 8B EC 8B 55 08 8B 45 0C 8B 4A 10 89
	* lua_pushlightuserdata_ProtectedByRetCheck: true
	* lua_pushlightuserdata_IsApartOfLua: true
	* lua_pushlightuserdata_Mask: .............

	 */
	DWORD lua_pushlightuserdata_addr = 0x0141EA40;
#define lua_pushlightuserdata_CCV  __cdecl

	/*

	* lua_pushlstring_Decompiled_Args: int a1
	* lua_pushlstring_TypeDef: int
	* lua_pushlstring_Aob: 55 8B EC 57 8B 7D 08 8B 4F 1C 8B 44 39 68 3B 44 39 6C 72 0B 6A 01 57 E8 74
	* lua_pushlstring_ProtectedByRetCheck: true
	* lua_pushlstring_IsApartOfLua: true
	* lua_pushlstring_Mask: .........................

	 */
	DWORD lua_pushlstring_addr = 0x0141EA90;
#define lua_pushlstring_CCV  __cdecl

	/*

	* lua_pushnil_Decompiled_Args: int a1
	* lua_pushnil_TypeDef: int
	* lua_pushnil_Aob: 55 8B EC 8B 55 08 8B 42 10 C7
	* lua_pushnil_ProtectedByRetCheck: true
	* lua_pushnil_IsApartOfLua: true
	* lua_pushnil_Mask: ..........

	 */
	DWORD lua_pushnil_addr = 0x0141EB00;
#define lua_pushnil_CCV  __cdecl

	/*

	* lua_pushnumber_Decompiled_Args: int a1, int a2
	* lua_pushnumber_TypeDef: int
	* lua_pushnumber_Aob: 55 8B EC 8B 55 08 0F 28 15
	* lua_pushnumber_ProtectedByRetCheck: true
	* lua_pushnumber_IsApartOfLua: true
	* lua_pushnumber_Mask: .........

	 */
	DWORD lua_pushnumber_addr = 0x0141EB50;
#define lua_pushnumber_CCV  __cdecl

	/*

	* lua_pushstring_Decompiled_Args: int a1, const char* a2
	* lua_pushstring_TypeDef: int
	* lua_pushstring_Aob: 55 8B EC 8B 45 0C 85 C0 75 48
	* lua_pushstring_ProtectedByRetCheck: true
	* lua_pushstring_IsApartOfLua: true
	* lua_pushstring_Mask: ..........

	 */
	DWORD lua_pushstring_addr = 0x0141EBB0;
#define lua_pushstring_CCV  __cdecl

	/*

	* lua_pushthread_Decompiled_Args: int a1
	* lua_pushthread_TypeDef: int
	* lua_pushthread_Aob: 55 8B EC 56 8B 75 08 8B 46 10 89
	* lua_pushthread_ProtectedByRetCheck: true
	* lua_pushthread_IsApartOfLua: true
	* lua_pushthread_Mask: ...........

	 */
	DWORD lua_pushthread_addr = 0x0141EC90;
#define lua_pushthread_CCV  __cdecl

	/*

	* lua_pushvalue_Decompiled_Args: int a1, int a2
	* lua_pushvalue_TypeDef: int
	* lua_pushvalue_Aob: 55 8B EC 8B 4D 0C 56 8B 75 08 85 C9 7E 19 8B 46 08 83
	* lua_pushvalue_ProtectedByRetCheck: true
	* lua_pushvalue_IsApartOfLua: true
	* lua_pushvalue_Mask: ..................

	 */
	DWORD lua_pushvalue_addr = 0x0141ED60;
#define lua_pushvalue_CCV  __stdcall

	/*

	* lua_pushvfstring_Decompiled_Args: int a1
	* lua_pushvfstring_TypeDef: int
	* lua_pushvfstring_Aob: 55 8B EC 56 8B 75 08 57 8B 4E 1C 8B 44 31 68 3B 44 31 6C 72 0B 6A 01 56 E8 33
	* lua_pushvfstring_ProtectedByRetCheck: false
	* lua_pushvfstring_IsApartOfLua: true
	* lua_pushvfstring_Mask: ..........................

	 */
	DWORD lua_pushvfstring_addr = 0x0141EDD0;
#define lua_pushvfstring_CCV  __cdecl

	/*

	* lua_rawequal_Decompiled_Args: int a1, int a2, int a3
	* lua_rawequal_TypeDef: int
	* lua_rawequal_Aob: 55 8B EC 8B 4D 0C 53 56 BE
	* lua_rawequal_ProtectedByRetCheck: false
	* lua_rawequal_IsApartOfLua: true
	* lua_rawequal_Mask: .........

	 */
	DWORD lua_rawequal_addr = 0x0141EE40;
#define lua_rawequal_CCV  __cdecl

	/*

	* lua_rawget_Decompiled_Args: int a1, int a2
	* lua_rawget_TypeDef: int
	* lua_rawget_Aob: Unable to get AOB
	* lua_rawget_ProtectedByRetCheck: true
	* lua_rawget_IsApartOfLua: true
	* lua_rawget_Mask: .......

	 */
	DWORD lua_rawget_addr = 0x0141EEC0;
#define lua_rawget_CCV  __cdecl

	/*

	* lua_rawgeti_Decompiled_Args: int a1, int a2
	* lua_rawgeti_TypeDef: int
	* lua_rawgeti_Aob: Unable to get AOB
	* lua_rawgeti_ProtectedByRetCheck: true
	* lua_rawgeti_IsApartOfLua: true
	* lua_rawgeti_Mask: .......

	 */
	DWORD lua_rawgeti_addr = 0x0141EFE0;
#define lua_rawgeti_CCV  __cdecl

	/*

	* lua_rawset_Decompiled_Args: int a1, int a2
	* lua_rawset_TypeDef: int
	* lua_rawset_Aob: Unable to get AOB
	* lua_rawset_ProtectedByRetCheck: true
	* lua_rawset_IsApartOfLua: true
	* lua_rawset_Mask: .......

	 */
	DWORD lua_rawset_addr = 0x0141F060;
#define lua_rawset_CCV  __cdecl

	/*

	* lua_rawseti_Decompiled_Args: int a1, int a2
	* lua_rawseti_TypeDef: int
	* lua_rawseti_Aob: Unable to get AOB
	* lua_rawseti_ProtectedByRetCheck: true
	* lua_rawseti_IsApartOfLua: true
	* lua_rawseti_Mask: .......

	 */
	DWORD lua_rawseti_addr = 0x0141F130;
#define lua_rawseti_CCV  __cdecl

	/*

	* lua_remove_Decompiled_Args: int a1, int a2
	* lua_remove_TypeDef: int
	* lua_remove_Aob: Unable to get AOB
	* lua_remove_ProtectedByRetCheck: true
	* lua_remove_IsApartOfLua: true
	* lua_remove_Mask: .......

	 */
	DWORD lua_remove_addr = 0x0141F200;
#define lua_remove_CCV  __cdecl

	/*

	* lua_replace_Decompiled_Args: int a1, int a2
	* lua_replace_TypeDef: int
	* lua_replace_Aob: 55 8B EC 56 8B 75 08 57 8B 7D 0C 81
	* lua_replace_ProtectedByRetCheck: true
	* lua_replace_IsApartOfLua: true
	* lua_replace_Mask: ............

	 */
	DWORD lua_replace_addr = 0x0141F290;
#define lua_replace_CCV  __cdecl

	/*

	* lua_resume_Decompiled_Args: int a1, int a2, int a3
	* lua_resume_TypeDef: int
	* lua_resume_Aob: 55 8B EC 56 8B 75 08 8A 46 06 3C 01 74 28 84 C0 75 08 8B 46 18 3B 46 20 74 1C C7 45 08 2A
	* lua_resume_ProtectedByRetCheck: true
	* lua_resume_IsApartOfLua: true
	* lua_resume_Mask: ..............................

	 */
	DWORD lua_resume_addr = 0x01421070;
#define lua_resume_CCV  __cdecl

	/*

	* lua_setfenv_Decompiled_Args: int a1, int a2
	* lua_setfenv_TypeDef: int
	* lua_setfenv_Aob: 55 8B EC 8B 4D 0C 53 56 8B 75 08 57 BF 01
	* lua_setfenv_ProtectedByRetCheck: false
	* lua_setfenv_IsApartOfLua: true
	* lua_setfenv_Mask: ..............

	 */
	DWORD lua_setfenv_addr = 0x0141F390;
#define lua_setfenv_CCV  __cdecl

	/*

	* lua_setfield_Decompiled_Args: int a1, int a2, const char* a3
	* lua_setfield_TypeDef: int
	* lua_setfield_Aob: 55 8B EC 8B 4D 0C 83 EC 10 56
	* lua_setfield_ProtectedByRetCheck: true
	* lua_setfield_IsApartOfLua: true
	* lua_setfield_Mask: ..........

	 */
	DWORD lua_setfield_addr = 0x0141F460;
#define lua_setfield_CCV  __stdcall

	/*

	* lua_setmetatable_Decompiled_Args: int a1, int a2
	* lua_setmetatable_TypeDef: int
	* lua_setmetatable_Aob: 55 8B EC 8B 4D 0C 56 8B 75 08 57 85 C9 7E 17
	* lua_setmetatable_ProtectedByRetCheck: true
	* lua_setmetatable_IsApartOfLua: true
	* lua_setmetatable_Mask: ...............

	 */
	DWORD lua_setmetatable_addr = 0x0141F510;
#define lua_setmetatable_CCV  __cdecl

	/*

	* lua_setreadonly_Decompiled_Args: int a1, int a2, int a3
	* lua_setreadonly_TypeDef: int
	* lua_setreadonly_Aob: Unable to get AOB
	* lua_setreadonly_ProtectedByRetCheck: true
	* lua_setreadonly_IsApartOfLua: true
	* lua_setreadonly_Mask: .......

	 */
	DWORD lua_setreadonly_addr = 0x0141F620;
#define lua_setreadonly_CCV  __cdecl

	/*

	* lua_settable_Decompiled_Args: int a1, int a2
	* lua_settable_TypeDef: int
	* lua_settable_Aob: 55 8B EC 8B 4D 0C 56 8B 75 08 85 C9 7E 19 8B 56
	* lua_settable_ProtectedByRetCheck: true
	* lua_settable_IsApartOfLua: true
	* lua_settable_Mask: ................

	 */
	DWORD lua_settable_addr = 0x0141F700;
#define lua_settable_CCV  __cdecl

	/*

	* lua_settop_Decompiled_Args: int a1, int a2
	* lua_settop_TypeDef: int
	* lua_settop_Aob: 55 8B EC 8B 45 0C 8B C8 8B
	* lua_settop_ProtectedByRetCheck: true
	* lua_settop_IsApartOfLua: true
	* lua_settop_Mask: .........

	 */
	DWORD lua_settop_addr = 0x0141F780;
#define lua_settop_CCV  __stdcall

	/*

	* lua_setupvalue_Decompiled_Args: int a1, int a2
	* lua_setupvalue_TypeDef: int
	* lua_setupvalue_Aob: 55 8B EC 8B 4D 0C 53 56 8B 75 08 57 85
	* lua_setupvalue_ProtectedByRetCheck: true
	* lua_setupvalue_IsApartOfLua: true
	* lua_setupvalue_Mask: .............

	 */
	DWORD lua_setupvalue_addr = 0x0141F800;
#define lua_setupvalue_CCV  __cdecl

	/*

	* lua_toboolean_Decompiled_Args: int a1, int a2
	* lua_toboolean_TypeDef: bool
	* lua_toboolean_Aob: 55 8B EC 8B 55 0C 85 D2 7E 29
	* lua_toboolean_ProtectedByRetCheck: false
	* lua_toboolean_IsApartOfLua: true
	* lua_toboolean_Mask: ..........

	 */
	DWORD lua_toboolean_addr = 0x0141F8B0;
#define lua_toboolean_CCV  __cdecl

	/*

	* lua_tolstring_Decompiled_Args: int a1, int a2, int a3
	* lua_tolstring_TypeDef: int
	* lua_tolstring_Aob: 55 8B EC 53 8B 5D 0C 56 8B 75 08 57 85
	* lua_tolstring_ProtectedByRetCheck: true
	* lua_tolstring_IsApartOfLua: true
	* lua_tolstring_Mask: .............

	 */
	DWORD lua_tolstring_addr = 0x0141F980;
#define lua_tolstring_CCV  __stdcall

	/*

	* lua_tonumber_Decompiled_Args: int a1, int a2, int a3
	* lua_tonumber_TypeDef: int
	* lua_tonumber_Aob: Unable to get AOB
	* lua_tonumber_ProtectedByRetCheck: false
	* lua_tonumber_IsApartOfLua: true
	* lua_tonumber_Mask: .......

	 */
	DWORD lua_tonumber_addr = 0x0141FAA0;
#define lua_tonumber_CCV  __cdecl

	/*

	* lua_topointer_Decompiled_Args: int a1, int a2
	* lua_topointer_TypeDef: int
	* lua_topointer_Aob: 55 8B EC 53 8B 5D 08 56 57 8B 7D 0C BE
	* lua_topointer_ProtectedByRetCheck: false
	* lua_topointer_IsApartOfLua: true
	* lua_topointer_Mask: .............

	 */
	DWORD lua_topointer_addr = 0x0141FB20;
#define lua_topointer_CCV  __cdecl

	/*

	* lua_tostring_Decompiled_Args: int a1, int a2
	* lua_tostring_TypeDef: int
	* lua_tostring_Aob: Unable to get AOB
	* lua_tostring_ProtectedByRetCheck: false
	* lua_tostring_IsApartOfLua: true
	* lua_tostring_Mask: .......

	 */
	DWORD lua_tostring_addr = 0x0141FBE0;
#define lua_tostring_CCV  __cdecl

	/*

	* lua_tothread_Decompiled_Args: int a1, int a2
	* lua_tothread_TypeDef: int
	* lua_tothread_Aob: Unable to get AOB
	* lua_tothread_ProtectedByRetCheck: false
	* lua_tothread_IsApartOfLua: true
	* lua_tothread_Mask: .......

	 */
	DWORD lua_tothread_addr = 0x0141FC60;
#define lua_tothread_CCV  __cdecl

	/*

	* lua_touserdata_Decompiled_Args: int a1, int a2
	* lua_touserdata_TypeDef: int
	* lua_touserdata_Aob: Unable to get AOB
	* lua_touserdata_ProtectedByRetCheck: false
	* lua_touserdata_IsApartOfLua: true
	* lua_touserdata_Mask: .......

	 */
	DWORD lua_touserdata_addr = 0x0141FD30;
#define lua_touserdata_CCV  __cdecl

	/*

	* lua_type_Decompiled_Args: int a1, int a2
	* lua_type_TypeDef: int
	* lua_type_Aob: 55 8B EC 8B 55 0C 85 D2 7E 15
	* lua_type_ProtectedByRetCheck: false
	* lua_type_IsApartOfLua: true
	* lua_type_Mask: ..........

	 */
	DWORD lua_type_addr = 0x0141FE20;
#define lua_type_CCV  __cdecl

	/*

	* lua_typename_Decompiled_Args: int a1
	* lua_typename_TypeDef: int
	* lua_typename_Aob: 55 8B EC 8B 45 0C 83 F8 FF 75
	* lua_typename_ProtectedByRetCheck: false
	* lua_typename_IsApartOfLua: true
	* lua_typename_Mask: ..........

	 */
	DWORD lua_typename_addr = 0x0141FE60;
#define lua_typename_CCV  __cdecl

	/*

	* lua_xmove_Decompiled_Args: int a1, int a2, int a3
	* lua_xmove_TypeDef: int
	* lua_xmove_Aob: 55 8B EC 56 8B 75 0C 57 8B 7D 08 3B
	* lua_xmove_ProtectedByRetCheck: true
	* lua_xmove_IsApartOfLua: true
	* lua_xmove_Mask: ............

	 */
	DWORD lua_xmove_addr = 0x0141FED0;
#define lua_xmove_CCV  __cdecl

	/*

	* lua_yeild_Decompiled_Args: int a1, int a2
	* lua_yeild_TypeDef: bool
	* lua_yeild_Aob: 55 8B EC 8B 55 08 66 8B 42 30
	* lua_yeild_ProtectedByRetCheck: true
	* lua_yeild_IsApartOfLua: true
	* lua_yeild_Mask: ..........

	 */
	DWORD lua_yeild_addr = 0x01421270;
#define lua_yeild_CCV  __cdecl

	/*

	* luab_auxwrap_Decompiled_Args: int a1
	* luab_auxwrap_TypeDef: int
	* luab_auxwrap_Aob: 55 8B EC 56 57 8B 7D 08 68 ED
	* luab_auxwrap_ProtectedByRetCheck: false
	* luab_auxwrap_IsApartOfLua: true
	* luab_auxwrap_Mask: ..........

	 */
	DWORD luab_auxwrap_addr = 0x0142C660;
#define luab_auxwrap_CCV  __cdecl

	/*

	* luac_barrierback_Decompiled_Args: int a1, int a2
	* luac_barrierback_TypeDef: int
	* luac_barrierback_Aob: 55 8B EC 8B 45 08 8B 4D 0C 83 C0 1C 8B 10 03 D0 80
	* luac_barrierback_ProtectedByRetCheck: false
	* luac_barrierback_IsApartOfLua: true
	* luac_barrierback_Mask: .................

	 */
	DWORD luac_barrierback_addr = 0x01432540;
#define luac_barrierback_CCV  __cdecl

	/*

	* luac_barrierf_Decompiled_Args: int a1, int a2
	* luac_barrierf_TypeDef: int
	* luac_barrierf_Aob: 55 8B EC 8B 45 08 83 C0 1C 8B
	* luac_barrierf_ProtectedByRetCheck: false
	* luac_barrierf_IsApartOfLua: true
	* luac_barrierf_Mask: ..........

	 */
	DWORD luac_barrierf_addr = 0x01432560;
#define luac_barrierf_CCV  __cdecl

	/*

	* luac_fullgc_Decompiled_Args: int a1
	* luac_fullgc_TypeDef: int
	* luac_fullgc_Aob: 55 8B EC 53 56 57 8B 7D 08 8B 77 1C
	* luac_fullgc_ProtectedByRetCheck: false
	* luac_fullgc_IsApartOfLua: true
	* luac_fullgc_Mask: ............

	 */
	DWORD luac_fullgc_addr = 0x01432690;
#define luac_fullgc_CCV  __cdecl

	/*

	* luac_link_Decompiled_Args: int a1, int a2, int a3
	* luac_link_TypeDef: int
	* luac_link_Aob: 55 8B EC 8B 45 08 8B 4D 0C 83 C0 1C 8B 10 03 D0 8B
	* luac_link_ProtectedByRetCheck: false
	* luac_link_IsApartOfLua: true
	* luac_link_Mask: .................

	 */
	DWORD luac_link_addr = 0x01432770;
#define luac_link_CCV  __cdecl

	/*

	* luac_linkupval_Decompiled_Args: int a1, int a2
	* luac_linkupval_TypeDef: bool
	* luac_linkupval_Aob: 55 8B EC 8B 55 0C 56 57 8B 7D 08 83
	* luac_linkupval_ProtectedByRetCheck: false
	* luac_linkupval_IsApartOfLua: true
	* luac_linkupval_Mask: ............

	 */
	DWORD luac_linkupval_addr = 0x014327A0;
#define luac_linkupval_CCV  __thiscall

	/*

	* luac_step_Decompiled_Args: int a1
	* luac_step_TypeDef: int
	* luac_step_Aob: 55 8B EC 83 EC 14 53 56 8B 75 08 B8 1F
	* luac_step_ProtectedByRetCheck: false
	* luac_step_IsApartOfLua: true
	* luac_step_Mask: .............

	 */
	DWORD luac_step_addr = 0x01432820;
#define luac_step_CCV  __cdecl

	/*

	* luad_call_Decompiled_Args: int a1
	* luad_call_TypeDef: int
	* luad_call_Aob: 55 8B EC 56 8B 75 08 BA C8
	* luad_call_ProtectedByRetCheck: false
	* luad_call_IsApartOfLua: true
	* luad_call_Mask: .........

	 */
	DWORD luad_call_addr = 0x01420AE0;
#define luad_call_CCV  __cdecl

	/*

	* luad_pcall_Decompiled_Args: int a1, int a2, int a3
	* luad_pcall_TypeDef: int
	* luad_pcall_Aob: 55 8B EC 83 EC 08 53 56 57 8B 7D 08 FF
	* luad_pcall_ProtectedByRetCheck: false
	* luad_pcall_IsApartOfLua: true
	* luad_pcall_Mask: .............

	 */
	DWORD luad_pcall_addr = 0x01420C10;
#define luad_pcall_CCV  __cdecl

	/*

	* luad_precall_Decompiled_Args: int a1, int a2, int a3
	* luad_precall_TypeDef: int
	* luad_precall_Aob: 55 8B EC 53 56 8B 75 0C 57 8B 7D 08 83 7E
	* luad_precall_ProtectedByRetCheck: false
	* luad_precall_IsApartOfLua: true
	* luad_precall_Mask: ..............

	 */
	DWORD luad_precall_addr = 0x01429FB0;
#define luad_precall_CCV  __cdecl

	/*

	* luad_poscall_Decompiled_Args: int a1, int a2
	* luad_poscall_TypeDef: int
	* luad_poscall_Aob: 55 8B EC 83 EC 08 53 8B 5D 08 56 57 8B 7D 0C 8B 73
	* luad_poscall_ProtectedByRetCheck: false
	* luad_poscall_IsApartOfLua: true
	* luad_poscall_Mask: .................

	 */
	DWORD luad_poscall_addr = 0x01429F20;
#define luad_poscall_CCV  __cdecl

	/*

	* luad_rawrunprotected_Decompiled_Args: int a1, int a2
	* luad_rawrunprotected_TypeDef: int
	* luad_rawrunprotected_Aob: 55 8B EC 6A FF 68 40 92
	* luad_rawrunprotected_ProtectedByRetCheck: false
	* luad_rawrunprotected_IsApartOfLua: true
	* luad_rawrunprotected_Mask: ........

	 */
	DWORD luad_rawrunprotected_addr = 0x01420D10;
#define luad_rawrunprotected_CCV  __cdecl

	/*

	* luad_reallocci_Decompiled_Args: int a1, int a2
	* luad_reallocci_TypeDef: int
	* luad_reallocci_Aob: 55 8B EC 8B 45 0C 53 8B 5D 08 56 57 8B 4B
	* luad_reallocci_ProtectedByRetCheck: false
	* luad_reallocci_IsApartOfLua: true
	* luad_reallocci_Mask: ..............

	 */
	DWORD luad_reallocci_addr = 0x01420E50;
#define luad_reallocci_CCV  __cdecl

	/*

	* luad_seterrorObj_Decompiled_Args: int a1, int a2, int a3
	* luad_seterrorObj_TypeDef: int
	* luad_seterrorObj_Aob: 55 8B EC 8B 45 0C 56 8B 75 10 83
	* luad_seterrorObj_ProtectedByRetCheck: false
	* luad_seterrorObj_IsApartOfLua: true
	* luad_seterrorObj_Mask: ...........

	 */
	DWORD luad_seterrorObj_addr = 0x01420FB0;
#define luad_seterrorObj_CCV  __cdecl

	/*

	* luad_throw_Decompiled_Args: Function Has No Args Or Unable To Get Args
	* luad_throw_TypeDef: Unable To Get typedef
	* luad_throw_Aob: 55 8B EC 83 EC 14 8D 4D
	* luad_throw_ProtectedByRetCheck: false
	* luad_throw_IsApartOfLua: true
	* luad_throw_Mask: ........

	 */
	DWORD luad_throw_addr = 0x01421020;
#define luad_throw_CCV  __cdecl

	/*

	* luae_freethread_Decompiled_Args: int a1, int a2
	* luae_freethread_TypeDef: int
	* luae_freethread_Aob: 55 8B EC 56 8B 75 0C 57 FF 76
	* luae_freethread_ProtectedByRetCheck: false
	* luae_freethread_IsApartOfLua: true
	* luae_freethread_Mask: ..........

	 */
	DWORD luae_freethread_addr = 0x0142A520;
#define luae_freethread_CCV  __cdecl

	/*

	* luae_newthread_Decompiled_Args: int a1
	* luae_newthread_TypeDef: int
	* luae_newthread_Aob: 55 8B EC 56 57 8B 7D 08 6A 70
	* luae_newthread_ProtectedByRetCheck: false
	* luae_newthread_IsApartOfLua: true
	* luae_newthread_Mask: ..........

	 */
	DWORD luae_newthread_addr = 0x0142A590;
#define luae_newthread_CCV  __cdecl

	/*

	* luaf_close_Decompiled_Args: int a1, int a2
	* luaf_close_TypeDef: int
	* luaf_close_Aob: 55 8B EC 53 57 8B 7D 08 8B 5F 1C
	* luaf_close_ProtectedByRetCheck: false
	* luaf_close_IsApartOfLua: true
	* luaf_close_Mask: ...........

	 */
	DWORD luaf_close_addr = 0x01431F40;
#define luaf_close_CCV  __cdecl

	/*

	* luaf_freeproto_Decompiled_Args: int a1, int a2
	* luaf_freeproto_TypeDef: int
	* luaf_freeproto_Aob: 55 8B EC 56 8B 75 0C 57 8B 7D 08 8D 4E
	* luaf_freeproto_ProtectedByRetCheck: false
	* luaf_freeproto_IsApartOfLua: true
	* luaf_freeproto_Mask: .............

	 */
	DWORD luaf_freeproto_addr = 0x014320A0;
#define luaf_freeproto_CCV  __cdecl

	/*

	* luaf_findupval_Decompiled_Args: int a1, int a2
	* luaf_findupval_TypeDef: bool
	* luaf_findupval_Aob: 55 8B EC 8B 55 08 53 8B 5A
	* luaf_findupval_ProtectedByRetCheck: false
	* luaf_findupval_IsApartOfLua: true
	* luaf_findupval_Mask: .........

	 */
	DWORD luaf_findupval_addr = 0x01431FD0;
#define luaf_findupval_CCV  __cdecl

	/*

	* luaf_newcclosure_Decompiled_Args: int a1, int a2
	* luaf_newcclosure_TypeDef: int
	* luaf_newcclosure_Aob: 55 8B EC 53 8B 5D 0C 8B C3 C1
	* luaf_newcclosure_ProtectedByRetCheck: false
	* luaf_newcclosure_IsApartOfLua: true
	* luaf_newcclosure_Mask: ..........

	 */
	DWORD luaf_newcclosure_addr = 0x01432200;
#define luaf_newcclosure_CCV  __cdecl

	/*

	* luaf_newlclosure_Decompiled_Args: int a1, int a2, int a3
	* luaf_newlclosure_TypeDef: int
	* luaf_newlclosure_Aob: 55 8B EC 53 8B 5D 0C 57 8D
	* luaf_newlclosure_ProtectedByRetCheck: false
	* luaf_newlclosure_IsApartOfLua: true
	* luaf_newlclosure_Mask: .........

	 */
	DWORD luaf_newlclosure_addr = 0x01432250;
#define luaf_newlclosure_CCV  __cdecl

	/*

	* luaf_newproto_Decompiled_Args: No Args Found
	* luaf_newproto_TypeDef: int
	* luaf_newproto_Aob: 55 8B EC 57 6A 54
	* luaf_newproto_ProtectedByRetCheck: false
	* luaf_newproto_IsApartOfLua: true
	* luaf_newproto_Mask: ......

	 */
	DWORD luaf_newproto_addr = 0x014322C0;
#define luaf_newproto_CCV  __cdecl

	/*

	* luag_runerror_Decompiled_Args: Function Has No Args Or Unable To Get Args
	* luag_runerror_TypeDef: Unable To Get typedef
	* luag_runerror_Aob: 55 8B EC 56 8B 75 08 8D 45 10 50 FF
	* luag_runerror_ProtectedByRetCheck: false
	* luag_runerror_IsApartOfLua: true
	* luag_runerror_Mask: ............

	 */
	DWORD luag_runerror_addr = 0x0142AFE0;
#define luag_runerror_CCV  __cdecl

	/*

	* luag_typeerror_Decompiled_Args: int a1, int a2, int a3
	* luag_typeerror_TypeDef: int
	* luag_typeerror_Aob: 55 8B EC 8B 4D 0C 56 8B 75 08 8B 51
	* luag_typeerror_ProtectedByRetCheck: false
	* luag_typeerror_IsApartOfLua: true
	* luag_typeerror_Mask: ............

	 */
	DWORD luag_typeerror_addr = 0x01435DF0;
#define luag_typeerror_CCV  __cdecl

	/*

	* luah_free_Decompiled_Args: int a1, int a2
	* luah_free_TypeDef: int
	* luah_free_Aob: 55 8B EC 56 8B 75 0C 8B 56 20
	* luah_free_ProtectedByRetCheck: false
	* luah_free_IsApartOfLua: true
	* luah_free_Mask: ..........

	 */
	DWORD luah_free_addr = 0x01433DC0;
#define luah_free_CCV  __cdecl

	/*

	* luah_get_Decompiled_Args: int a1
	* luah_get_TypeDef: int
	* luah_get_Aob: 55 8B EC 56 57 8B 7D 0C 8B 47 0C
	* luah_get_ProtectedByRetCheck: false
	* luah_get_IsApartOfLua: true
	* luah_get_Mask: ...........

	 */
	DWORD luah_get_addr = 0x01433E20;
#define luah_get_CCV  __cdecl

	/*

	* luah_getn_Decompiled_Args: int a1
	* luah_getn_TypeDef: int
	* luah_getn_Aob: 55 8B EC 53 56 57 8B 7D 08 8B 77 0C 85
	* luah_getn_ProtectedByRetCheck: false
	* luah_getn_IsApartOfLua: true
	* luah_getn_Mask: .............

	 */
	DWORD luah_getn_addr = 0x01433ED0;
#define luah_getn_CCV  __cdecl

	/*

	* luah_getnum_Decompiled_Args: int a1, int a2
	* luah_getnum_TypeDef: int
	* luah_getnum_Aob: 55 8B EC 8B 4D 0C 83 EC 08 57
	* luah_getnum_ProtectedByRetCheck: false
	* luah_getnum_IsApartOfLua: true
	* luah_getnum_Mask: ..........

	 */
	DWORD luah_getnum_addr = 0x01433F50;
#define luah_getnum_CCV  __cdecl

	/*

	* luah_getstr_Decompiled_Args: int a1, int a2
	* luah_getstr_TypeDef: int
	* luah_getstr_Aob: 55 8B EC 8B 45 08 53 8B 5D 0C 56 8A
	* luah_getstr_ProtectedByRetCheck: false
	* luah_getstr_IsApartOfLua: true
	* luah_getstr_Mask: ............

	 */
	DWORD luah_getstr_addr = 0x01434030;
#define luah_getstr_CCV  __cdecl

	/*

	* luah_new_Decompiled_Args: int a1
	* luah_new_TypeDef: int
	* luah_new_Aob: 55 8B EC 56 57 8B 7D 08 6A 24
	* luah_new_ProtectedByRetCheck: false
	* luah_new_IsApartOfLua: true
	* luah_new_Mask: ..........

	 */
	DWORD luah_new_addr = 0x014340A0;
#define luah_new_CCV  __cdecl

	/*

	* luah_next_Decompiled_Args: int a1, int a2
	* luah_next_TypeDef: int
	* luah_next_Aob: 55 8B EC 83 EC 0C 56 57 8B 7D 10
	* luah_next_ProtectedByRetCheck: false
	* luah_next_IsApartOfLua: true
	* luah_next_Mask: ...........

	 */
	DWORD luah_next_addr = 0x01434100;
#define luah_next_CCV  __cdecl

	/*

	* luah_resizearray_Decompiled_Args: int a1
	* luah_resizearray_TypeDef: int
	* luah_resizearray_Aob: 55 8B EC 8B 55 0C 8B 42 20
	* luah_resizearray_ProtectedByRetCheck: false
	* luah_resizearray_IsApartOfLua: true
	* luah_resizearray_Mask: .........

	 */
	DWORD luah_resizearray_addr = 0x014342D0;
#define luah_resizearray_CCV  __cdecl

	/*

	* luah_set_Decompiled_Args: int a1, int a2
	* luah_set_TypeDef: int
	* luah_set_Aob: 55 8B EC 56 57 8B 7D 10 8B 47
	* luah_set_ProtectedByRetCheck: false
	* luah_set_IsApartOfLua: true
	* luah_set_Mask: ..........

	 */
	DWORD luah_set_addr = 0x01434320;
#define luah_set_CCV  __cdecl

	/*

	* luah_setnum_Decompiled_Args: int a1, int a2
	* luah_setnum_TypeDef: int
	* luah_setnum_Aob: 55 8B EC 83 EC 10 56 8B 75 10 57 8B 7D
	* luah_setnum_ProtectedByRetCheck: false
	* luah_setnum_IsApartOfLua: true
	* luah_setnum_Mask: .............

	 */
	DWORD luah_setnum_addr = 0x01434440;
#define luah_setnum_CCV  __cdecl

	/*

	* lual_addlstring_Decompiled_Args: int a1, int a2, int a3
	* lual_addlstring_TypeDef: int
	* lual_addlstring_Aob: 55 8B EC 53 8B 5D 10 85 DB 74
	* lual_addlstring_ProtectedByRetCheck: false
	* lual_addlstring_IsApartOfLua: true
	* lual_addlstring_Mask: ..........

	 */
	DWORD lual_addlstring_addr = 0x01420040;
#define lual_addlstring_CCV  __cdecl

	/*

	* lual_addvalue_Decompiled_Args: int a1
	* lual_addvalue_TypeDef: int
	* lual_addvalue_Aob: 55 8B EC 53 56 57 8B 7D 08 8D
	* lual_addvalue_ProtectedByRetCheck: false
	* lual_addvalue_IsApartOfLua: true
	* lual_addvalue_Mask: ..........

	 */
	DWORD lual_addvalue_addr = 0x014200B0;
#define lual_addvalue_CCV  __cdecl

	/*

	* lual_argerror_Decompiled_Args: int a1, int a2
	* lual_argerror_TypeDef: int
	* lual_argerror_Aob: 55 8B EC 56 8B 75 08 57 8B 7D 0C 8D 87 0F 27 00 00 3D 0F 27 00 00 77 0C 56 E8 22
	* lual_argerror_ProtectedByRetCheck: false
	* lual_argerror_IsApartOfLua: true
	* lual_argerror_Mask: ...........................

	 */
	DWORD lual_argerror_addr = 0x014201A0;
#define lual_argerror_CCV  __cdecl

	/*

	* lual_checkany_Decompiled_Args: Function Has No Args Or Unable To Get Args
	* lual_checkany_TypeDef: Unable To Get typedef
	* lual_checkany_Aob: 55 8B EC 51 FF 75 0C FF 75 08 E8 E1 FB
	* lual_checkany_ProtectedByRetCheck: false
	* lual_checkany_IsApartOfLua: true
	* lual_checkany_Mask: .............

	 */
	DWORD lual_checkany_addr = 0x01420230;
#define lual_checkany_CCV  __cdecl

	/*

	* lual_checkinteger_Decompiled_Args: Function Has No Args Or Unable To Get Args
	* lual_checkinteger_TypeDef: Unable To Get typedef
	* lual_checkinteger_Aob: 55 8B EC 51 8D 45 FC 50 FF 75 0C FF 75 08 E8 7D
	* lual_checkinteger_ProtectedByRetCheck: false
	* lual_checkinteger_IsApartOfLua: true
	* lual_checkinteger_Mask: ................

	 */
	DWORD lual_checkinteger_addr = 0x01420270;
#define lual_checkinteger_CCV  __cdecl

	/*

	* lual_checklstring_Decompiled_Args: No Args Found
	* lual_checklstring_TypeDef: int
	* lual_checklstring_Aob: 55 8B EC FF 75 10 FF 75 0C FF 75 08 E8 CF F6
	* lual_checklstring_ProtectedByRetCheck: false
	* lual_checklstring_IsApartOfLua: true
	* lual_checklstring_Mask: ...............

	 */
	DWORD lual_checklstring_addr = 0x014202A0;
#define lual_checklstring_CCV  __cdecl

	/*

	* lual_checknumber_Decompiled_Args: Function Has No Args Or Unable To Get Args
	* lual_checknumber_TypeDef: Unable To Get typedef
	* lual_checknumber_Aob: 55 8B EC 51 8D 45 FC 50 FF 75 0C FF 75 08 E8 BD
	* lual_checknumber_ProtectedByRetCheck: false
	* lual_checknumber_IsApartOfLua: true
	* lual_checknumber_Mask: ................

	 */
	DWORD lual_checknumber_addr = 0x014202D0;
#define lual_checknumber_CCV  __cdecl

	/*

	* lual_checkstack_Decompiled_Args: Function Has No Args Or Unable To Get Args
	* lual_checkstack_TypeDef: Unable To Get typedef
	* lual_checkstack_Aob: 55 8B EC 51 FF 75 0C FF 75 08 E8 71 D9
	* lual_checkstack_ProtectedByRetCheck: false
	* lual_checkstack_IsApartOfLua: true
	* lual_checkstack_Mask: .............

	 */
	DWORD lual_checkstack_addr = 0x01420300;
#define lual_checkstack_CCV  __cdecl

	/*

	* lual_checktype_Decompiled_Args: int a1
	* lual_checktype_TypeDef: int
	* lual_checktype_Aob: 55 8B EC FF 75 0C FF 75 08 E8 D2 FA
	* lual_checktype_ProtectedByRetCheck: false
	* lual_checktype_IsApartOfLua: true
	* lual_checktype_Mask: ............

	 */
	DWORD lual_checktype_addr = 0x01420340;
#define lual_checktype_CCV  __cdecl

	/*

	* lual_error_Decompiled_Args: Function Has No Args Or Unable To Get Args
	* lual_error_TypeDef: Unable To Get typedef
	* lual_error_Aob: 55 8B EC 56 8B 75 08 6A 01 56 E8 11 06 00 00 8D
	* lual_error_ProtectedByRetCheck: false
	* lual_error_IsApartOfLua: true
	* lual_error_Mask: ................

	 */
	DWORD lual_error_addr = 0x014203A0;
#define lual_error_CCV  __cdecl

	/*

	* lual_findtable_Decompiled_Args: int a1, int a2, int a3
	* lual_findtable_TypeDef: int
	* lual_findtable_Aob: 55 8B EC 53 56 8B 75 08 57 FF 75 0C 56 E8 7E E9
	* lual_findtable_ProtectedByRetCheck: false
	* lual_findtable_IsApartOfLua: true
	* lual_findtable_Mask: ................

	 */
	DWORD lual_findtable_addr = 0x014203D0;
#define lual_findtable_CCV  __cdecl

	/*

	* lual_getmetafield_Decompiled_Args: int a1
	* lual_getmetafield_TypeDef: int
	* lual_getmetafield_Aob: 55 8B EC 56 FF 75 0C 8B 75 08 56 E8 F0 DB
	* lual_getmetafield_ProtectedByRetCheck: false
	* lual_getmetafield_IsApartOfLua: true
	* lual_getmetafield_Mask: ..............

	 */
	DWORD lual_getmetafield_addr = 0x014204B0;
#define lual_getmetafield_CCV  __cdecl

	/*

	* lual_newmetatable_Decompiled_Args: int a1
	* lual_newmetatable_TypeDef: int
	* lual_newmetatable_Aob: 55 8B EC 56 FF 75 0C 8B 75 08 BA
	* lual_newmetatable_ProtectedByRetCheck: false
	* lual_newmetatable_IsApartOfLua: true
	* lual_newmetatable_Mask: ...........

	 */
	DWORD lual_newmetatable_addr = 0x01420510;
#define lual_newmetatable_CCV  __cdecl

	/*

	* lual_optinteger_Decompiled_Args: int a1, int a2, int a3
	* lual_optinteger_TypeDef: int
	* lual_optinteger_Aob: 55 8B EC 51 56 8B 75 0C 57 8B 7D 08 56
	* lual_optinteger_ProtectedByRetCheck: false
	* lual_optinteger_IsApartOfLua: true
	* lual_optinteger_Mask: .............

	 */
	DWORD lual_optinteger_addr = 0x01420570;
#define lual_optinteger_CCV  __cdecl

	/*

	* lual_optlstring_Decompiled_Args: int a1, int a2, int a3, const char* a4
	* lual_optlstring_TypeDef: int
	* lual_optlstring_Aob: 55 8B EC 56 8B 75 0C 57 8B 7D 08 56 57 E8 4E
	* lual_optlstring_ProtectedByRetCheck: false
	* lual_optlstring_IsApartOfLua: true
	* lual_optlstring_Mask: ...............

	 */
	DWORD lual_optlstring_addr = 0x014205C0;
#define lual_optlstring_CCV  __cdecl

	/*

	* lual_prepbuffer_Decompiled_Args: int a1
	* lual_prepbuffer_TypeDef: int
	* lual_prepbuffer_Aob: 55 8B EC 56 8B 75 08 57 8B 06 8D
	* lual_prepbuffer_ProtectedByRetCheck: false
	* lual_prepbuffer_IsApartOfLua: true
	* lual_prepbuffer_Mask: ...........

	 */
	DWORD lual_prepbuffer_addr = 0x014206A0;
#define lual_prepbuffer_CCV  __cdecl

	/*

	* lual_ref_Decompiled_Args: int a1, int a2
	* lual_ref_TypeDef: int
	* lual_ref_Aob: 55 8B EC 56 8B 75 08 57 8B 7D 0C 8D 87 0F 27 00 00 3D 0F 27 00 00 77 0C 56 E8 A2
	* lual_ref_ProtectedByRetCheck: false
	* lual_ref_IsApartOfLua: true
	* lual_ref_Mask: ...........................

	 */
	DWORD lual_ref_addr = 0x01420720;
#define lual_ref_CCV  __cdecl

	/*

	* lual_register_Decompiled_Args: int a1, int a2, int a3
	* lual_register_TypeDef: int
	* lual_register_Aob: 55 8B EC 83 7D 0C 00 56 8B 75 10
	* lual_register_ProtectedByRetCheck: false
	* lual_register_IsApartOfLua: true
	* lual_register_Mask: ...........

	 */
	DWORD lual_register_addr = 0x014207D0;
#define lual_register_CCV  __cdecl

	/*

	* lual_typeerror_Decompiled_Args: int a1, int a2, int a3
	* lual_typeerror_TypeDef: int
	* lual_typeerror_Aob: Unable to get AOB
	* lual_typeerror_ProtectedByRetCheck: false
	* lual_typeerror_IsApartOfLua: true
	* lual_typeerror_Mask: .......

	 */
	DWORD lual_typeerror_addr = 0x0141F900;
#define lual_typeerror_CCV  __cdecl

	/*

	* lual_unref_Decompiled_Args: int a1, int a2, int a3
	* lual_unref_TypeDef: int
	* lual_unref_Aob: 55 8B EC 53 8B 5D 10 85 DB 78
	* lual_unref_ProtectedByRetCheck: false
	* lual_unref_IsApartOfLua: true
	* lual_unref_Mask: ..........

	 */
	DWORD lual_unref_addr = 0x01420960;
#define lual_unref_CCV  __cdecl

	/*

	* lual_where_Decompiled_Args: int a1
	* lual_where_TypeDef: int
	* lual_where_Aob: 55 8B EC 81 EC 24 01 00 00 8D
	* lual_where_ProtectedByRetCheck: false
	* lual_where_IsApartOfLua: true
	* lual_where_Mask: ..........

	 */
	DWORD lual_where_addr = 0x014209C0;
#define lual_where_CCV  __cdecl

	/*

	* luam_realloc_Decompiled_Args: int a1, int a2, int a3, int a4
	* luam_realloc_TypeDef: int
	* luam_realloc_Aob: 55 8B EC 8B 4D 08 53 56 8B 75 14
	* luam_realloc_ProtectedByRetCheck: false
	* luam_realloc_IsApartOfLua: true
	* luam_realloc_Mask: ...........

	 */
	DWORD luam_realloc_addr = 0x01436230;
#define luam_realloc_CCV  __cdecl

	/*

	* luam_realloc__Decompiled_Args: int a1, int a2
	* luam_realloc__TypeDef: int
	* luam_realloc__Aob: 55 8B EC 53 8B 5D 08 56 8B 75 0C 8D
	* luam_realloc__ProtectedByRetCheck: false
	* luam_realloc__IsApartOfLua: true
	* luam_realloc__Mask: ............

	 */
	DWORD luam_realloc__addr = 0x014360E0;
#define luam_realloc__CCV  __cdecl

	/*

	* luam_toobig_Decompiled_Args: Function Has No Args Or Unable To Get Args
	* luam_toobig_TypeDef: Unable To Get typedef
	* luam_toobig_Aob: 55 8B EC 51 C7 45 FC C2
	* luam_toobig_ProtectedByRetCheck: false
	* luam_toobig_IsApartOfLua: true
	* luam_toobig_Mask: ........

	 */
	DWORD luam_toobig_addr = 0x01436340;
#define luam_toobig_CCV  __cdecl

	/*

	* luao_chunkid_Decompiled_Args: int a1, int a2, const char* a3
	* luao_chunkid_TypeDef: int
	* luao_chunkid_Aob: 55 8B EC 53 8B 5D 0C 56 57 8A
	* luao_chunkid_ProtectedByRetCheck: false
	* luao_chunkid_IsApartOfLua: true
	* luao_chunkid_Mask: ..........

	 */
	DWORD luao_chunkid_addr = 0x014215B0;
#define luao_chunkid_CCV  __cdecl

	/*

	* luao_pushfstring_Decompiled_Args: int a1, int a2
	* luao_pushfstring_TypeDef: int
	* luao_pushfstring_Aob: 55 8B EC 81 EC 00 02 00 00 8D 45
	* luao_pushfstring_ProtectedByRetCheck: false
	* luao_pushfstring_IsApartOfLua: true
	* luao_pushfstring_Mask: ...........

	 */
	DWORD luao_pushfstring_addr = 0x01421730;
#define luao_pushfstring_CCV  __cdecl

	/*

	* luao_pushvfstring_Decompiled_Args: int a1
	* luao_pushvfstring_TypeDef: int
	* luao_pushvfstring_Aob: 55 8B EC 81 EC 00 02 00 00 8D 85
	* luao_pushvfstring_ProtectedByRetCheck: false
	* luao_pushvfstring_IsApartOfLua: true
	* luao_pushvfstring_Mask: ...........

	 */
	DWORD luao_pushvfstring_addr = 0x014217D0;
#define luao_pushvfstring_CCV  __cdecl

	/*

	* luao_rawequalObj_Decompiled_Args: int a1, int a2
	* luao_rawequalObj_TypeDef: int
	* luao_rawequalObj_Aob: 55 8B EC 8B 4D 08 8B 55 0C 8B 41 0C 83
	* luao_rawequalObj_ProtectedByRetCheck: false
	* luao_rawequalObj_IsApartOfLua: true
	* luao_rawequalObj_Mask: .............

	 */
	DWORD luao_rawequalObj_addr = 0x01421870;
#define luao_rawequalObj_CCV  __cdecl

	/*

	* luao_str2d_Decompiled_Args: int a1, int a2
	* luao_str2d_TypeDef: int
	* luao_str2d_Aob: 55 8B EC 51 56 8B 75 08 8D 45 FC 57
	* luao_str2d_ProtectedByRetCheck: false
	* luao_str2d_IsApartOfLua: true
	* luao_str2d_Mask: ............

	 */
	DWORD luao_str2d_addr = 0x01421970;
#define luao_str2d_CCV  __cdecl

	/*

	* luas_newlstr_Decompiled_Args: int a1, int a2, int a3
	* luas_newlstr_TypeDef: int
	* luas_newlstr_Aob: 55 8B EC 8B 45 10 8B D0
	* luas_newlstr_ProtectedByRetCheck: false
	* luas_newlstr_IsApartOfLua: true
	* luas_newlstr_Mask: ........

	 */
	DWORD luas_newlstr_addr = 0x01433840;
#define luas_newlstr_CCV  __cdecl

	/*

	* luas_newudata_Decompiled_Args: int a1, int a2
	* luas_newudata_TypeDef: int
	* luas_newudata_Aob: 55 8B EC 53 8B 5D 0C 57 81
	* luas_newudata_ProtectedByRetCheck: false
	* luas_newudata_IsApartOfLua: true
	* luas_newudata_Mask: .........

	 */
	DWORD luas_newudata_addr = 0x01433940;
#define luas_newudata_CCV  __cdecl

	/*

	* luas_resize_Decompiled_Args: int a1, int a2
	* luas_resize_TypeDef: int
	* luas_resize_Aob: 55 8B EC 8B 4D 08 83 EC 10 8B 41
	* luas_resize_ProtectedByRetCheck: false
	* luas_resize_IsApartOfLua: true
	* luas_resize_Mask: ...........

	 */
	DWORD luas_resize_addr = 0x01433990;
#define luas_resize_CCV  __cdecl

	/*

	* luat_gettmbyobj_Decompiled_Args: int a1, int a2
	* luat_gettmbyobj_TypeDef: int
	* luat_gettmbyobj_Aob: 55 8B EC 56 FF 75 10 8B 75 08 56 E8 60
	* luat_gettmbyobj_ProtectedByRetCheck: false
	* luat_gettmbyobj_IsApartOfLua: true
	* luat_gettmbyobj_Mask: .............

	 */
	DWORD luat_gettmbyobj_addr = 0x01435DC0;
#define luat_gettmbyobj_CCV  __cdecl

	/*

	* luat_typenames_Decompiled_Args: Given Adress Is Not A Function
	* luat_typenames_TypeDef: Given Adress Is Not A Function
	* luat_typenames_Aob: 4C 41 7F 02 94
	* luat_typenames_ProtectedByRetCheck: false
	* luat_typenames_IsApartOfLua: false
	* luat_typenames_Mask: .....

	 */
	DWORD luat_typenames_addr = 0x01FED940;
#define luat_typenames_CCV  __stdcall

	/*

	* luau_deserialize_Decompiled_Args: int a1, int a2, const char* a3, int a4
	* luau_deserialize_TypeDef: int
	* luau_deserialize_Aob: 55 8B EC 6A FF 68 90 92 56
	* luau_deserialize_ProtectedByRetCheck: false
	* luau_deserialize_IsApartOfLua: true
	* luau_deserialize_Mask: .........

	 */
	DWORD luau_deserialize_addr = 0x01429490;
#define luau_deserialize_CCV  __cdecl

	/*

	* luau_execute_Decompiled_Args: int a1, int a2, int a3, int a4, int a5
	* luau_execute_TypeDef: int
	* luau_execute_Aob: 55 8B EC 51 80 3D 04 A7 15 03 00 74 22 C7 45 FC 52
	* luau_execute_ProtectedByRetCheck: false
	* luau_execute_IsApartOfLua: true
	* luau_execute_Mask: .................

	 */
	DWORD luau_execute_addr = 0x0144B5C0;
#define luau_execute_CCV  __cdecl

	/*

	* luav_concat_Decompiled_Args: int a1, const char* a2, const char* a3
	* luav_concat_TypeDef: int
	* luav_concat_Aob: 55 8B EC 8B 55 08 83 EC 74
	* luav_concat_ProtectedByRetCheck: false
	* luav_concat_IsApartOfLua: true
	* luav_concat_Mask: .........

	 */
	DWORD luav_concat_addr = 0x01435190;
#define luav_concat_CCV  __cdecl

	/*

	* luav_execute_Decompiled_Args: int a1
	* luav_execute_TypeDef: bool
	* luav_execute_Aob: 55 8B EC 83 E4 F0 81 EC B8 00 00 00 56 57 8B 7D 08 8B 47 18 8B 70
	* luav_execute_ProtectedByRetCheck: false
	* luav_execute_IsApartOfLua: true
	* luav_execute_Mask: ......................

	 */
	DWORD luav_execute_addr = 0x01421A60;
#define luav_execute_CCV  __cdecl

	/*

	* luav_gettable_Decompiled_Args: int a1, int a2, int a3, int a4, int a5
	* luav_gettable_TypeDef: int
	* luav_gettable_Aob: 55 8B EC 51 53 56 8B 75 0C 33 DB 57 89
	* luav_gettable_ProtectedByRetCheck: false
	* luav_gettable_IsApartOfLua: true
	* luav_gettable_Mask: .............

	 */
	DWORD luav_gettable_addr = 0x01435920;
#define luav_gettable_CCV  __cdecl

	/*

	* luav_gettable_opt_Decompiled_Args: Function Has No Args Or Unable To Get Args
	* luav_gettable_opt_TypeDef: Unable To Get typedef
	* luav_gettable_opt_Aob: 55 8B EC 6A 01 FF 75 14 FF 75 10 FF 75 0C FF 75 08 E8 0A 00
	* luav_gettable_opt_ProtectedByRetCheck: false
	* luav_gettable_opt_IsApartOfLua: true
	* luav_gettable_opt_Mask: ....................

	 */
	DWORD luav_gettable_opt_addr = 0x01435900;
#define luav_gettable_opt_CCV  __cdecl

	/*

	* luav_lessthan_Decompiled_Args: int a1, int a2, int a3
	* luav_lessthan_TypeDef: int
	* luav_lessthan_Aob: 55 8B EC 8B 4D 08 56 8B 75 0C 57 8B 7D 10 8B 46 0C 3B 47 0C 75 5B
	* luav_lessthan_ProtectedByRetCheck: false
	* luav_lessthan_IsApartOfLua: true
	* luav_lessthan_Mask: ......................

	 */
	DWORD luav_lessthan_addr = 0x01435AC0;
#define luav_lessthan_CCV  __cdecl

	/*

	* luav_settable_Decompiled_Args: int a1, int a2, int a3, int a4
	* luav_settable_TypeDef: int
	* luav_settable_Aob: 55 8B EC 83 EC 18 53 8B 5D 0C 56 8B 75 08 57 33
	* luav_settable_ProtectedByRetCheck: false
	* luav_settable_IsApartOfLua: true
	* luav_settable_Mask: ................

	 */
	DWORD luav_settable_addr = 0x01435B60;
#define luav_settable_CCV  __cdecl

	/*

	* luav_tonumber_Decompiled_Args: int a1, int a2
	* luav_tonumber_TypeDef: int
	* luav_tonumber_Aob: 55 8B EC 8B 45 08 83 EC 08 8B 48 0C
	* luav_tonumber_ProtectedByRetCheck: false
	* luav_tonumber_IsApartOfLua: true
	* luav_tonumber_Mask: ............

	 */
	DWORD luav_tonumber_addr = 0x01435CF0;
#define luav_tonumber_CCV  __cdecl

	/*

	* luav_tostring_Decompiled_Args: const char* a1
	* luav_tostring_TypeDef: int
	* luav_tostring_Aob: 55 8B EC 83 EC 20 56 8B 75 0C 83
	* luav_tostring_ProtectedByRetCheck: false
	* luav_tostring_IsApartOfLua: true
	* luav_tostring_Mask: ...........

	 */
	DWORD luav_tostring_addr = 0x01435D50;
#define luav_tostring_CCV  __cdecl

	/*

	* luax_init_Decompiled_Args: const char* a1
	* luax_init_TypeDef: bool
	* luax_init_Aob: 55 8B EC 53 56 57 8B 7D 08 BE 30
	* luax_init_ProtectedByRetCheck: false
	* luax_init_IsApartOfLua: true
	* luax_init_Mask: ...........

	 */
	DWORD luax_init_addr = 0x01435E60;
#define luax_init_CCV  __cdecl

	/*

	* mainposition_Decompiled_Args: int a1, int a2
	* mainposition_TypeDef: int
	* mainposition_Aob: 55 8B EC 83 EC 0C 56 8B 75 0C 57 8B 46
	* mainposition_ProtectedByRetCheck: false
	* mainposition_IsApartOfLua: true
	* mainposition_Mask: .............

	 */
	DWORD mainposition_addr = 0x014344F0;
#define mainposition_CCV  __cdecl

	/*

	* markmt_Decompiled_Args: int a1
	* markmt_TypeDef: int
	* markmt_Aob: 55 8B EC 51 53 56 57 8B 7D 08 BB
	* markmt_ProtectedByRetCheck: false
	* markmt_IsApartOfLua: true
	* markmt_Mask: ...........

	 */
	DWORD markmt_addr = 0x01432A70;
#define markmt_CCV  __cdecl

	/*

	* markroot_Decompiled_Args: int a1
	* markroot_TypeDef: int
	* markroot_Aob: 55 8B EC 8B 55 08 56 8D 72
	* markroot_ProtectedByRetCheck: false
	* markroot_IsApartOfLua: true
	* markroot_Mask: .........

	 */
	DWORD markroot_addr = 0x01432B60;
#define markroot_CCV  __cdecl

	/*

	* newkey_Decompiled_Args: int a1, int a2, int a3
	* newkey_TypeDef: int
	* newkey_Aob: 55 8B EC 83 EC 10 53 8B 5D 0C 56 57 8B 7D 10
	* newkey_ProtectedByRetCheck: false
	* newkey_IsApartOfLua: true
	* newkey_Mask: ...............

	 */
	DWORD newkey_addr = 0x01434620;
#define newkey_CCV  __cdecl

	/*

	* print_Decompiled_Args: int a1
	* print_TypeDef: int
	* print_Aob: 55 8B EC 6A FF 68 68 C8 47 02 64 A1 00 00 00 00 50 64 89 25 00 00 00 00 83 EC 18 8D 45 10
	* print_ProtectedByRetCheck: false
	* print_IsApartOfLua: false
	* print_Mask: ..............................

	 */
	DWORD print_addr = 0x0065A970;
#define print_CCV  __cdecl

	/*

	* reallymarkobject_Decompiled_Args: int a1, int a2
	* reallymarkobject_TypeDef: int
	* reallymarkobject_Aob: 55 8B EC 56 8B 75 0C 0F B6
	* reallymarkobject_ProtectedByRetCheck: false
	* reallymarkobject_IsApartOfLua: true
	* reallymarkobject_Mask: .........

	 */
	DWORD reallymarkobject_addr = 0x01433260;
#define reallymarkobject_CCV  __cdecl

	/*

	* rehash_Decompiled_Args: Function Has No Args Or Unable To Get Args
	* rehash_TypeDef: Unable To Get typedef
	* rehash_Aob: Unable to get AOB
	* rehash_ProtectedByRetCheck: false
	* rehash_IsApartOfLua: true
	* rehash_Mask: .......

	 */
	DWORD rehash_addr = 0x014347D0;
#define rehash_CCV  __cdecl

	/*

	* resize_Decompiled_Args: int a1, int a2, int a3, int a4
	* resize_TypeDef: int
	* resize_Aob: 55 8B EC 83 EC 38 56 8B 75 0C
	* resize_ProtectedByRetCheck: false
	* resize_IsApartOfLua: true
	* resize_Mask: ..........

	 */
	DWORD resize_addr = 0x01434A50;
#define resize_CCV  __cdecl

	/*

	* resume_Decompiled_Args: int a1, int a2
	* resume_TypeDef: int
	* resume_Aob: 55 8B EC 56 8B 75 08 80 7E 06 00 75 29
	* resume_ProtectedByRetCheck: false
	* resume_IsApartOfLua: true
	* resume_Mask: .............

	 */
	DWORD resume_addr = 0x014212E0;
#define resume_CCV  __cdecl

	/*

	* reportError_Decompiled_Args: int a1, int a2, int a3
	* reportError_TypeDef: int
	* reportError_Aob: 55 8B EC 6A FF 68 98 65
	* reportError_ProtectedByRetCheck: false
	* reportError_IsApartOfLua: false
	* reportError_Mask: ........

	 */
	DWORD reportError_addr = 0x00797E90;
#define reportError_CCV  __stdcall

	/*

	* resume_error_Decompiled_Args: int a1, const char* a2
	* resume_error_TypeDef: int
	* resume_error_Aob: 55 8B EC 8B 55 0C 8B CA 53
	* resume_error_ProtectedByRetCheck: true
	* resume_error_IsApartOfLua: true
	* resume_error_Mask: .........

	 */
	DWORD resume_error_addr = 0x014213C0;
#define resume_error_CCV  __cdecl

	/*

	* retcheck_Decompiled_Args: No Args Found
	* retcheck_TypeDef: int
	* retcheck_Aob: 55 8B EC 64 A1 00 00 00 00 6A FF 68 E8 48 48 02 50 64 89 25 00 00 00 00 83 EC 0C 53
	* retcheck_ProtectedByRetCheck: false
	* retcheck_IsApartOfLua: false
	* retcheck_Mask: ............................

	 */
	DWORD retcheck_addr = 0x006BEFB0;
#define retcheck_CCV  __cdecl

	/*

	* sandboxthread_Decompiled_Args: int a1, int a2, int a3
	* sandboxthread_TypeDef: int
	* sandboxthread_Aob: 55 8B EC 80 3D CC 39
	* sandboxthread_ProtectedByRetCheck: false
	* sandboxthread_IsApartOfLua: false
	* sandboxthread_Mask: .......

	 */
	DWORD sandboxthread_addr = 0x0079AC80;
#define sandboxthread_CCV  __cdecl

	/*

	* setarrayvector_Decompiled_Args: int a1, int a2
	* setarrayvector_TypeDef: int
	* setarrayvector_Aob: 55 8B EC 53 8B 5D 10 56 57 81
	* setarrayvector_ProtectedByRetCheck: false
	* setarrayvector_IsApartOfLua: true
	* setarrayvector_Mask: ..........

	 */
	DWORD setarrayvector_addr = 0x01434C50;
#define setarrayvector_CCV  __cdecl

	/*

	* setnodevector_Decompiled_Args: int a1, int a2
	* setnodevector_TypeDef: bool
	* setnodevector_Aob: 55 8B EC 53 56 8B 75 10 57 85
	* setnodevector_ProtectedByRetCheck: false
	* setnodevector_IsApartOfLua: true
	* setnodevector_Mask: ..........

	 */
	DWORD setnodevector_addr = 0x01434CD0;
#define setnodevector_CCV  __cdecl

	/*

	* singlestep_Decompiled_Args: int a1
	* singlestep_TypeDef: int
	* singlestep_Aob: 55 8B EC 53 8B 5D 08 56 8D 73 1C 57
	* singlestep_ProtectedByRetCheck: false
	* singlestep_IsApartOfLua: true
	* singlestep_Mask: ............

	 */
	DWORD singlestep_addr = 0x01433340;
#define singlestep_CCV  __cdecl

	/*

	* spawn_Decompiled_Args: int a1
	* spawn_TypeDef: int
	* spawn_Aob: 55 8B EC 6A FF 68 2F 69 4A
	* spawn_ProtectedByRetCheck: false
	* spawn_IsApartOfLua: false
	* spawn_Mask: .........

	 */
	DWORD spawn_addr = 0x0079AFF0;
#define spawn_CCV  __cdecl

	/*

	* stack_init_Decompiled_Args: int a1
	* stack_init_TypeDef: int
	* stack_init_Aob: 55 8B EC 57 68 C0
	* stack_init_ProtectedByRetCheck: false
	* stack_init_IsApartOfLua: true
	* stack_init_Mask: ......

	 */
	DWORD stack_init_addr = 0x0142A8A0;
#define stack_init_CCV  __cdecl

	/*

	* str_find_aux_Decompiled_Args: int a1, const char* a2
	* str_find_aux_TypeDef: int
	* str_find_aux_Aob: 55 8B EC 81 EC 34 01 00 00 53 8B
	* str_find_aux_ProtectedByRetCheck: false
	* str_find_aux_IsApartOfLua: true
	* str_find_aux_Mask: ...........

	 */
	DWORD str_find_aux_addr = 0x014305C0;
#define str_find_aux_CCV  __cdecl

	/*

	* tag_error_Decompiled_Args: Function Has No Args Or Unable To Get Args
	* tag_error_TypeDef: Unable To Get typedef
	* tag_error_Aob: 55 8B EC FF 75 10 FF 75 08 E8 12
	* tag_error_ProtectedByRetCheck: false
	* tag_error_IsApartOfLua: true
	* tag_error_Mask: ...........

	 */
	DWORD tag_error_addr = 0x01420A40;
#define tag_error_CCV  __cdecl

	/*

	* trustCheck_Decompiled_Args: const char* a1, const char* a2
	* trustCheck_TypeDef: bool
	* trustCheck_Aob: 55 8B EC 64 A1 00 00 00 00 6A FF 68 1B 84 48 02 50 64 89 25 00 00 00 00 81
	* trustCheck_ProtectedByRetCheck: false
	* trustCheck_IsApartOfLua: false
	* trustCheck_Mask: .........................

	 */
	DWORD trustCheck_addr = 0x00635DC0;
#define trustCheck_CCV  __cdecl

	/*

	* trustcheck_bypass1_Decompiled_Args: Given Adress Is Not A Function
	* trustcheck_bypass1_TypeDef: Given Adress Is Not A Function
	* trustcheck_bypass1_Aob: AC CA 7F
	* trustcheck_bypass1_ProtectedByRetCheck: false
	* trustcheck_bypass1_IsApartOfLua: false
	* trustcheck_bypass1_Mask: ...

	 */
	DWORD trustcheck_bypass1_addr = 0x023C107C;
#define trustcheck_bypass1_CCV  __cdecl

	/*

	* tryfunctm_Decompiled_Args: int a1, int a2
	* tryfunctm_TypeDef: int
	* tryfunctm_Aob: 55 8B EC 53 56 8B 75 08 57 8B 7D 0C 6A 0F
	* tryfunctm_ProtectedByRetCheck: false
	* tryfunctm_IsApartOfLua: true
	* tryfunctm_Mask: ..............

	 */
	DWORD tryfunctm_addr = 0x0142A320;
#define tryfunctm_CCV  __cdecl

	/*

	* unbound_search_Decompiled_Args: int a1, int a2
	* unbound_search_TypeDef: int
	* unbound_search_Aob: 55 8B EC 83 EC 08 0F 28 1D
	* unbound_search_ProtectedByRetCheck: false
	* unbound_search_IsApartOfLua: true
	* unbound_search_Mask: .........

	 */
	DWORD unbound_search_addr = 0x01434D90;
#define unbound_search_CCV  __cdecl

	/*

	* vm_invoker_Decompiled_Args: Function Has No Args Or Unable To Get Args
	* vm_invoker_TypeDef: Unable To Get typedef
	* vm_invoker_Aob: 55 8B EC 8B 45 08 80 78 07
	* vm_invoker_ProtectedByRetCheck: false
	* vm_invoker_IsApartOfLua: true
	* vm_invoker_Mask: .........

	 */
	DWORD vm_invoker_addr = 0x01429470;
#define vm_invoker_CCV  __cdecl

	DWORD retcheckflag1 = 0x027BC000;

	DWORD retcheckflag2 = 0x027BC004;

	DWORD xorconst = 0x0275A670;

	DWORD luao_nilobject = 0x01FEC5E8;

	DWORD scriptcontext = 0x01E1DA18;

	DWORD getnamecallmethod_offset = 0x60;
	DWORD networked_dm = 0x488;
	int readonly = 9;
	DWORD RBX_LuaState(DWORD ScriptContext) { return (ScriptContext + 172) - *(DWORD*)(ScriptContext + 172); }

	int Identity1 = 24;
	int Identity2 = 104;
	int top = 16;
	int base = 8;
}
// Scanning Time: 6 Secs
// For version-fd0181e00b9d43f1
/*

idc.MakeName(0x013F33E0, 'addinfo');
idc.MakeName(0x013FE270, 'arith');
idc.MakeName(0x013E63B0, 'aux_upvalue');
idc.MakeName(0x013F4F50, 'auxresume');
idc.MakeName(0x013FDAE0, 'call_bintm');
idc.MakeName(0x013FD9F0, 'calltmres');
idc.MakeName(0x013FDB90, 'call_ordertm');
idc.MakeName(0x013FE9B0, 'deobfuscate_closure');
idc.MakeName(0x013E6430, 'f_call');
idc.MakeName(0x013F2F50, 'f_luaopen');
idc.MakeName(0x00673DE0, 'findfirstchild');
idc.MakeName(0x0066B8C0, 'findfirstchildofclass');
idc.MakeName(0x00EE4E30, 'getdatamodel');
idc.MakeName(0x00EE4CE0, 'getdatamodel2');
idc.MakeName(0x013F4730, 'getfunc');
idc.MakeName(0x013E8A20, 'getnamecallmethod');
idc.MakeName(0x015A55F0, 'flog_getvalue');
idc.MakeName(0x015A5DB0, 'flog_setvalue');
idc.MakeName(0x013E6480, 'index2adr');
idc.MakeName(0x013FB550, 'markmt');
idc.MakeName(0x013FB640, 'markroot');
idc.MakeName(0x013FCFE0, 'mainposition');
idc.MakeName(0x013FD110, 'newkey');
idc.MakeName(0x013FD2C0, 'rehash');
idc.MakeName(0x013FD540, 'resize');
idc.MakeName(0x013E9DA0, 'resume');
idc.MakeName(0x013E9E80, 'resume_error');
idc.MakeName(0x006B4FF0, 'retcheck');
idc.MakeName(0x013F3350, 'stack_init');
idc.MakeName(0x013F2DD0, 'tryfunctm');
idc.MakeName(0x013FD880, 'unbound_search');
idc.MakeName(0x013E6560, 'lua_atpanic');
idc.MakeName(0x013E65B0, 'lua_call');
idc.MakeName(0x013E6620, 'lua_checkstack');
idc.MakeName(0x013E66C0, 'lua_concat');
idc.MakeName(0x013E6760, 'lua_createtable');
idc.MakeName(0x013FB080, 'lua_freeobj');
idc.MakeName(0x013E67E0, 'lua_gc');
idc.MakeName(0x013E6900, 'lua_getfenv');
idc.MakeName(0x013E69A0, 'lua_getfield');
idc.MakeName(0x013F3AD0, 'lua_getinfo');
idc.MakeName(0x013E6A50, 'lua_getmettable');
idc.MakeName(0x013F3C60, 'lua_getstack');
idc.MakeName(0x013E6B10, 'lua_gettable');
idc.MakeName(0x013E6B90, 'lua_gettop');
idc.MakeName(0x013E6BB0, 'lua_getupvalue');
idc.MakeName(0x013E6C40, 'lua_insert');
idc.MakeName(0x013E6CD0, 'lua_iscfunction');
idc.MakeName(0x013E6D70, 'lua_isnumber');
idc.MakeName(0x013E67D0, 'lua_isstring');
idc.MakeName(0x013E6D20, 'lua_isuserdata');
idc.MakeName(0x013E6E20, 'lua_lessthan');
idc.MakeName(0x013F30F0, 'lua_newstate');
idc.MakeName(0x013E6ED0, 'lua_newthread');
idc.MakeName(0x013E6F60, 'lua_newuserdata');
idc.MakeName(0x013E6FE0, 'lua_next');
idc.MakeName(0x013E7070, 'lua_objlen');
idc.MakeName(0x013E7150, 'lua_pcall');
idc.MakeName(0x013E7210, 'lua_pushboolean');
idc.MakeName(0x013E7260, 'lua_pushcclosure');
idc.MakeName(0x013E7330, 'lua_pushfstring');
idc.MakeName(0x013E73A0, 'lua_pushinteger');
idc.MakeName(0x013E7400, 'lua_pushlightuserdata');
idc.MakeName(0x013E7450, 'lua_pushlstring');
idc.MakeName(0x013E74C0, 'lua_pushnil');
idc.MakeName(0x013E7510, 'lua_pushnumber');
idc.MakeName(0x013E7570, 'lua_pushstring');
idc.MakeName(0x013E7650, 'lua_pushthread');
idc.MakeName(0x013E7720, 'lua_pushvalue');
idc.MakeName(0x013E7790, 'lua_pushvfstring');
idc.MakeName(0x013E7800, 'lua_rawequal');
idc.MakeName(0x013E7880, 'lua_rawget');
idc.MakeName(0x013E79B0, 'lua_rawgeti');
idc.MakeName(0x013E7A30, 'lua_rawset');
idc.MakeName(0x013E7B00, 'lua_rawseti');
idc.MakeName(0x013E7BD0, 'lua_remove');
idc.MakeName(0x013E7C60, 'lua_replace');
idc.MakeName(0x013E9B30, 'lua_resume');
idc.MakeName(0x013E7D70, 'lua_setfenv');
idc.MakeName(0x013E7E50, 'lua_setfield');
idc.MakeName(0x013E7F00, 'lua_setmetatable');
idc.MakeName(0x013E8010, 'lua_setreadonly');
idc.MakeName(0x013E80F0, 'lua_settable');
idc.MakeName(0x013E8170, 'lua_settop');
idc.MakeName(0x013E81F0, 'lua_setupvalue');
idc.MakeName(0x013E82B0, 'lua_toboolean');
idc.MakeName(0x013E8390, 'lua_tolstring');
idc.MakeName(0x013E84C0, 'lua_tonumber');
idc.MakeName(0x013E8550, 'lua_topointer');
idc.MakeName(0x013E8610, 'lua_tostring');
idc.MakeName(0x013E86B0, 'lua_tothread');
idc.MakeName(0x013E8790, 'lua_touserdata');
idc.MakeName(0x013E8880, 'lua_type');
idc.MakeName(0x013E88C0, 'lua_typename');
idc.MakeName(0x013E8930, 'lua_xmove');
idc.MakeName(0x013E9D30, 'lua_yeild');
idc.MakeName(0x013F5080, 'luab_auxwrap');
idc.MakeName(0x013FB170, 'luac_fullgc');
idc.MakeName(0x013FB250, 'luac_link');
idc.MakeName(0x013FB300, 'luac_step');
idc.MakeName(0x013E9580, 'luad_call');
idc.MakeName(0x013E96B0, 'luad_pcall');
idc.MakeName(0x013F2A60, 'luad_precall');
idc.MakeName(0x013E97B0, 'luad_rawrunprotected');
idc.MakeName(0x013FEA80, 'luad_reallocci');
idc.MakeName(0x013E9A50, 'luad_seterrorObj');
idc.MakeName(0x013E9AE0, 'luad_throw');
idc.MakeName(0x013F2FD0, 'luae_freethread');
idc.MakeName(0x013F3040, 'luae_newthread');
idc.MakeName(0x013FAA20, 'luaf_close');
idc.MakeName(0x013FAB80, 'luaf_freeproto');
idc.MakeName(0x013FACE0, 'luaf_newcclosure');
idc.MakeName(0x013FADA0, 'luaf_newproto');
idc.MakeName(0x013F39B0, 'luag_runerror');
idc.MakeName(0x013FE890, 'luag_typeerror');
idc.MakeName(0x013FC900, 'luah_get');
idc.MakeName(0x013FCA30, 'luah_getnum');
idc.MakeName(0x013FCB10, 'luah_getstr');
idc.MakeName(0x013FCB80, 'luah_new');
idc.MakeName(0x013FCBF0, 'luah_next');
idc.MakeName(0x013FCDC0, 'luah_resizearray');
idc.MakeName(0x013FCE10, 'luah_set');
idc.MakeName(0x013E6DD0, 'lual_addvalue');
idc.MakeName(0x013E8C10, 'lual_argerror');
idc.MakeName(0x013E8CA0, 'lual_checkany');
idc.MakeName(0x013E8CE0, 'lual_checkinteger');
idc.MakeName(0x013E8DB0, 'lual_checktype');
idc.MakeName(0x013E8E10, 'lual_error');
idc.MakeName(0x013E8E40, 'lual_findtable');
idc.MakeName(0x013E8F30, 'lual_getmetafield');
idc.MakeName(0x013E8F90, 'lual_newmetatable');
idc.MakeName(0x013E9000, 'lual_optinteger');
idc.MakeName(0x013E91B0, 'lual_ref');
idc.MakeName(0x013E9270, 'lual_register');
idc.MakeName(0x013E8310, 'lual_typeerror');
idc.MakeName(0x013E9460, 'lual_where');
idc.MakeName(0x013FEB80, 'luam_realloc_');
idc.MakeName(0x013FECD0, 'luam_realloc');
idc.MakeName(0x013FEDE0, 'luam_toobig');
idc.MakeName(0x013EA070, 'luao_chunkid');
idc.MakeName(0x013EA1F0, 'luao_pushfstring');
idc.MakeName(0x013EA290, 'luao_pushvfstring');
idc.MakeName(0x013EA330, 'luao_rawequalObj');
idc.MakeName(0x013FC420, 'luas_newudata');
idc.MakeName(0x013FDC20, 'luav_concat');
idc.MakeName(0x013EA520, 'luav_execute');
idc.MakeName(0x013FE3C0, 'luav_gettable');
idc.MakeName(0x013FE3A0, 'luav_gettable_opt');
idc.MakeName(0x013FE560, 'luav_lessthan');
idc.MakeName(0x013FE600, 'luav_settable');
idc.MakeName(0x013FE7F0, 'luav_tostring');
idc.MakeName(0x013FC320, 'luas_newlstr');
idc.MakeName(0x013FE860, 'luat_gettmbyobj');
idc.MakeName(0x01FAA188, 'luat_typenames');
idc.MakeName(0x01413D10, 'luau_execute');
idc.MakeName(0x013F1F50, 'luau_deserialize');
idc.MakeName(0x0065A530, 'print');
idc.MakeName(0x007898B0, 'sandboxthread');
idc.MakeName(0x013FD740, 'setarrayvector');
idc.MakeName(0x013FBE20, 'singlestep');
idc.MakeName(0x013FD7C0, 'setnodevector');
idc.MakeName(0x00789C20, 'spawn');
idc.MakeName(0x0276A000, 'retcheckflag1');
idc.MakeName(0x0276A004, 'retcheckflag2');
idc.MakeName(0x02708ED0, 'xorconst');
idc.MakeName(0x01FA8E60, 'luao_nilobject');
idc.MakeName(0x01DDEE40, 'scriptcontext');


 */

















#define r_lua_tostring(rL,i)	r_lua_tolstring(rL, (i), NULL)
#define r_lua_pop(rL,n)		r_lua_settop(rL, -(n)-1)
#define r_lua_getglobal(rL,s)	r_lua_getfield(rL, LUA_GLOBALSINDEX, (s))
#define r_lua_newtable(rL) r_lua_createtable(rL, 0, 0)
#define x(x) (x - 0x400000 + (DWORD)GetModuleHandleA(0))





/*
RTNIL = 0,
	RTLIGHTUSERDATA = 4,
	RTNUMBER = 3,
	RTBOOLEAN = 1,
	RTSTRING = 5,
	RLUA_TTHREAD = 8,
	RFUNCTION = 9,
	RTTABLE = 6,
	RTUSERDATA = 7,
*/

int R_LUA_TUSERDATA =      0;
int R_LUA_TFUNCTION =      0;
int R_LUA_TSTRING =        0;
int R_LUA_TBOOLEAN =       0;
int R_LUA_TNUMBER =        0;
int R_LUA_TTABLE =         0;
int R_LUA_TNIL =           0;
int R_LUA_TTHREAD =        0;
int R_LUA_TLIGHTUSERDATA = 0;

//#define R_LUA_TPROTO 10
//#define R_LUA_TUPVALUE 11


int GDM;




/* 
UPDATED FOR ROBLOX 10Th June Two Thousand and Twenry!
ElKoax was here
*/


typedef DWORD(__cdecl* gdm2)();
gdm2 getdatamodel2 = (gdm2)(x(Adresses::getdatamodel2_addr));


typedef DWORD(__thiscall* getdatamodel)(DWORD, DWORD);
getdatamodel r_getdatamodel = (getdatamodel)(x(Adresses::getdatamodel_addr));


typedef int(__cdecl* ee)(int e, const char* n, ...);
static ee r_luaL_error = (ee)x(Adresses::lual_error_addr); // 22



typedef void(lua_getfield_CCV* rgetfield)(DWORD rL, int idx, const char* k);
rgetfield r_lua_getfield = (rgetfield)retcheckBypass(x(Adresses::lua_getfield_addr));


typedef int(__cdecl* rboolean)(unsigned int, int);
rboolean r_lua_pushboolean = (rboolean)(retcheckBypass(x(Adresses::lua_pushboolean_addr)));

typedef char* (lua_tolstring_CCV* rtolstring)(DWORD rL, int idx, size_t* size);
rtolstring r_lua_tolstring = (rtolstring)(retcheckBypass(x(Adresses::lua_tolstring_addr))); 

typedef bool(__cdecl* toboolean)(DWORD rL, bool idx);
toboolean r_lua_toboolean = (toboolean)(x(Adresses::lua_toboolean_addr));

typedef void(lua_pushvalue_CCV* pushvalue)(DWORD rL, DWORD idx);
pushvalue r_lua_pushvalue = (pushvalue)(retcheckBypass(x(Adresses::lua_pushvalue_addr)));

typedef double(lua_pushnumber_CCV* pushnumber)(DWORD rL, double idx);
pushnumber r_lua_pushnumber = (pushnumber)(retcheckBypass(x(Adresses::lua_pushnumber_addr)));

typedef void(lua_pushstring_CCV* rpushstring)(DWORD rL, const char*);
rpushstring r_lua_pushstring = (rpushstring)(retcheckBypass(x(Adresses::lua_pushstring_addr))); 

typedef int(__cdecl* rLua_pcall)(DWORD lst, int nargs, int nresults, int errfunc);
rLua_pcall r_lua_pcall = (rLua_pcall)retcheckBypass(x(Adresses::lua_pcall_addr));

typedef DWORD(__cdecl* next2)(DWORD rL, int idx);
next2 r_lua_next = (next2)(retcheckBypass(x(Adresses::lua_next_addr)));

typedef double(__cdecl* rtonumber)(DWORD, int, int);
rtonumber r_lua_tonumber = (rtonumber)(x(Adresses::lua_tonumber_addr));

typedef void(lua_pushcclosure_CCV* rpushcclosure)(DWORD rL, int fn, int non, int a1, int xd);
rpushcclosure r_lua_pushcclosure = (rpushcclosure)(retcheckBypass(x(Adresses::lua_pushcclosure_addr))); //r_Lua_PushCCloser_Type

typedef void(__cdecl* rcreatetable)(DWORD rL, int num, int fix);
rcreatetable r_lua_createtable = (rcreatetable)(retcheckBypass(x(Adresses::lua_createtable_addr)));

typedef DWORD(__cdecl* rnewthread)(DWORD);
rnewthread r_lua_newthread = (rnewthread)retcheckBypass(x(Adresses::lua_newthread_addr));

typedef void* (__cdecl* rnewuserdata)(DWORD, size_t, int);
rnewuserdata r_lua_newuserdata = (rnewuserdata)(retcheckBypass(x(Adresses::lua_newuserdata_addr)));

typedef void(__cdecl* rrawgeti)(DWORD, DWORD, DWORD);
rrawgeti r_lua_rawgeti = (rrawgeti)retcheckBypass(x(Adresses::lua_rawgeti_addr));

typedef void(__cdecl* rrawgeti)(DWORD, DWORD, DWORD);
rrawgeti r_lua_rawseti = (rrawgeti)retcheckBypass(x(Adresses::lua_rawseti_addr));

typedef void* (lua_getmettable_CCV* rgetmetatable)(DWORD rL, int idx);
rgetmetatable r_lua_getmetatable = (rgetmetatable)(retcheckBypass(x(Adresses::lua_getmettable_addr)));

typedef int(__cdecl* rtouserdata)(DWORD, int);
rtouserdata r_lua_touserdata = (rtouserdata)(retcheckBypass(x(Adresses::lua_touserdata_addr)));

typedef DWORD(__cdecl* rtype)(DWORD, int);
rtype r_lua_type = (rtype)(x(Adresses::lua_type_addr));

typedef void* (__cdecl* rsettable)(DWORD rL, int);
rsettable r_lua_settable = (rsettable)(retcheckBypass(x(Adresses::lua_settable_addr)));

typedef DWORD(__cdecl* rref)(DWORD, DWORD);
rref r_luaL_ref = (rref)(retcheckBypass(x(Adresses::lual_ref_addr)));


int r_lua_gettop(int rL)
{
	return *(DWORD*)(rL + Adresses::top) - *(DWORD*)(rL + Adresses::base) >> 4;
}

typedef void(lua_settop_CCV* rsettop)(DWORD rL, int idx);
rsettop r_lua_settop = (rsettop)(retcheckBypass(x(Adresses::lua_settop_addr))); 

typedef void(__cdecl* pushnil)(DWORD);
pushnil r_lua_pushnil = (pushnil)(retcheckBypass(x(Adresses::lua_pushnil_addr)));

typedef void(__cdecl* rpushlight)(DWORD, void*);
rpushlight r_lua_pushlightuserdata = (rpushlight)(retcheckBypass(x(Adresses::lua_pushlightuserdata_addr)));

typedef bool(__cdecl* FLog)(const std::string& name, std::string& value, bool alsoCheckUnknown);
FLog GetValue = reinterpret_cast<FLog>(x(Adresses::flog_getvalue_addr));

typedef bool(__cdecl* SLog)(const std::string& name, const std::string& value, int Type, bool loadedFromServer);
SLog SetValue = reinterpret_cast<SLog>(x(Adresses::flog_setvalue_addr));

typedef uint32_t(__cdecl* T_index2adr)(uint32_t, uint32_t); // Auto updating convention
T_index2adr r_index2adr;

