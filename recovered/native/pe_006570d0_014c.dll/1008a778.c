/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008a778 */

void __fastcall FUN_1008a778(int param_1)

{
  int iVar1;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_100c3560;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)(param_1 + -0x70 + *(int *)(*(int *)(param_1 + -0x70) + 4)) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  iVar1 = *(int *)(*(int *)(param_1 + -0x70) + 4);
  *(int *)(param_1 + -0x74 + iVar1) = iVar1 + -0x70;
  local_8 = 0xffffffff;
  local_18 = param_1;
  FUN_100735dc();
  ExceptionList = local_10;
  return;
}

