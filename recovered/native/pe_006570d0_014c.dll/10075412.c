/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10075412 */

void __fastcall FUN_10075412(int param_1)

{
  int iVar1;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_100c2ac0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)(param_1 + -0x78 + *(int *)(*(int *)(param_1 + -0x78) + 4)) =
       std::basic_fstream<char,std::char_traits<char>_>::vftable;
  iVar1 = *(int *)(*(int *)(param_1 + -0x78) + 4);
  *(int *)(param_1 + -0x7c + iVar1) = iVar1 + -0x78;
  local_8 = 0xffffffff;
  local_18 = param_1;
  FUN_100735dc();
  ExceptionList = local_10;
  return;
}

