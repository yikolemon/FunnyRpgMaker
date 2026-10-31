/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14010b0c4 */

/* Library Function - Single Match
    ___lc_locale_name_func
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

wchar_t ** __cdecl ___lc_locale_name_func(void)

{
  longlong lVar1;
  longlong local_res8 [4];
  
  lVar1 = FUN_140121578();
  local_res8[0] = *(longlong *)(lVar1 + 0x90);
  __acrt_update_locale_info(lVar1,local_res8);
  return (wchar_t **)(local_res8[0] + 0x128);
}

