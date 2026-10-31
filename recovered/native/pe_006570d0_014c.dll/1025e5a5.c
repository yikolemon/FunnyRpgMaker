/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025e5a5 */

/* Library Function - Single Match
    ____lc_locale_name_func
   
   Library: Visual Studio 2019 Release */

wchar_t ** __cdecl ____lc_locale_name_func(void)

{
  int iVar1;
  int local_8;
  
  iVar1 = FUN_102743cd();
  local_8 = *(int *)(iVar1 + 0x4c);
  ___acrt_update_locale_info(iVar1,&local_8);
  return (wchar_t **)(local_8 + 0xa0);
}

