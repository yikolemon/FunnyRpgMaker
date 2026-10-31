/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14010b128 */

/* Library Function - Single Match
    ___lc_collate_cp_func
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

UINT __cdecl ___lc_collate_cp_func(void)

{
  longlong lVar1;
  longlong local_res8 [4];
  
  lVar1 = FUN_140121578();
  local_res8[0] = *(longlong *)(lVar1 + 0x90);
  __acrt_update_locale_info(lVar1,local_res8);
  return *(UINT *)(local_res8[0] + 0x14);
}

