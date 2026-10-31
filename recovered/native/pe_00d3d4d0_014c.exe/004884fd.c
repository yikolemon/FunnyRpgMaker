/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004884fd */

/* Library Function - Single Match
    ____mb_cur_max_func
   
   Library: Visual Studio 2019 Release */

int __cdecl ____mb_cur_max_func(void)

{
  int iVar1;
  int local_8;
  
  iVar1 = FUN_004961ad();
  local_8 = *(int *)(iVar1 + 0x4c);
  ___acrt_update_locale_info(iVar1,&local_8);
  return *(int *)(local_8 + 4);
}

