/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007aee8 */

int * __thiscall FUN_1007aee8(int *param_1,int param_2)

{
  int **ppiVar1;
  int *unaff_FS_OFFSET;
  int *local_28;
  int *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2d70;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_24 = param_1;
  ppiVar1 = &local_28;
  if (param_2 != 0) {
    *param_1 = (int)&DAT_102949cc;
    param_1[4] = (int)&DAT_102956d8;
    FUN_10073366();
    ppiVar1 = (int **)local_20;
  }
  local_20 = (undefined1 *)ppiVar1;
  *(undefined ***)((int)param_1 + *(int *)(*param_1 + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((int)param_1 + *(int *)(*param_1 + 4) + -4) = *(int *)(*param_1 + 4) + -0x68;
  local_28 = param_1 + 6;
  local_14 = 0;
  FUN_100733fc(local_28,0);
  local_14 = 1;
  *(undefined ***)((int)local_24 + *(int *)(*local_24 + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((int)local_24 + *(int *)(*local_24 + 4) + -4) = *(int *)(*local_24 + 4) + -0x68;
  FUN_1007b27a(3);
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

