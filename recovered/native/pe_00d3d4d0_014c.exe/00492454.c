/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00492454 */

/* Library Function - Single Match
    _localeconv
   
   Library: Visual Studio 2019 Release */

lconv * __cdecl _localeconv(void)

{
  int iVar1;
  int local_8;
  
  iVar1 = FUN_004961ad();
  local_8 = *(int *)(iVar1 + 0x4c);
  ___acrt_update_locale_info(iVar1,&local_8);
  return *(lconv **)(local_8 + 0x88);
}

