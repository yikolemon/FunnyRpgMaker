/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00488986 */

/* Library Function - Single Match
    ____lc_locale_name_func
   
   Library: Visual Studio 2019 Release */

wchar_t ** __cdecl ____lc_locale_name_func(void)

{
  int iVar1;
  int local_8;
  
  iVar1 = FUN_004961ad();
  local_8 = *(int *)(iVar1 + 0x4c);
  ___acrt_update_locale_info(iVar1,&local_8);
  return (wchar_t **)(local_8 + 0xa0);
}

