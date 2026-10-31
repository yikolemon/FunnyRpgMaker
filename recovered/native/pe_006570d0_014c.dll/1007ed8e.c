/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007ed8e */

int * __thiscall FUN_1007ed8e(int *param_1,undefined4 param_2,undefined1 param_3,int param_4)

{
  int **ppiVar1;
  int *unaff_FS_OFFSET;
  int *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2fa0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_24 = param_1;
  ppiVar1 = &local_24;
  if (param_4 != 0) {
    *param_1 = (int)&DAT_10294e6c;
    FUN_10073366();
    ppiVar1 = (int **)local_20;
  }
  local_20 = (undefined1 *)ppiVar1;
  *(undefined ***)((int)local_24 + *(int *)(*local_24 + 4)) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(int *)((int)local_24 + *(int *)(*local_24 + 4) + -4) = *(int *)(*local_24 + 4) + -8;
  local_14 = 0;
  FUN_100738a2(param_2,param_3);
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

