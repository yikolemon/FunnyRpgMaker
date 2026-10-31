/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100529aa */

int FUN_100529aa(undefined4 *param_1)

{
  int local_20;
  int local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_20;
  local_c = 0xffffffff;
  local_10 = &LAB_1005aa70;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_1000334a(*param_1);
  local_c = 0;
  local_20 = local_1c + 0x18;
  FUN_1004b3be(0);
  ExceptionList = local_14;
  return local_1c;
}

