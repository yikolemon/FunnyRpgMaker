/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025e5f1 */

/* Library Function - Single Match
    ____lc_collate_cp_func
   
   Library: Visual Studio 2019 Release */

UINT __cdecl ____lc_collate_cp_func(void)

{
  int iVar1;
  int local_8;
  
  iVar1 = FUN_102743cd();
  local_8 = *(int *)(iVar1 + 0x4c);
  ___acrt_update_locale_info(iVar1,&local_8);
  return *(UINT *)(local_8 + 0x10);
}

