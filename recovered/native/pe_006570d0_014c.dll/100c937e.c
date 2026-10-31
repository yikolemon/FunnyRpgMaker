/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c937e */

int FUN_100c937e(undefined4 *param_1)

{
  undefined1 local_20 [4];
  int local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = local_20;
  local_c = 0xffffffff;
  local_10 = &LAB_100cc310;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_1000334a(*param_1);
  *(undefined4 *)(local_1c + 0x1c) = 0;
  *(undefined4 *)(local_1c + 0x18) = 0;
  ExceptionList = local_14;
  return local_1c;
}

