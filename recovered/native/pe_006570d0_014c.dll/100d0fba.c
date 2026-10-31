/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d0fba */

int FUN_100d0fba(undefined4 param_1,undefined8 *param_2)

{
  int local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_c = 0xffffffff;
  local_10 = &LAB_100ddd50;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_1000334a(param_1);
  *(undefined8 *)(local_1c + 0x18) = *param_2;
  ExceptionList = local_14;
  return local_1c;
}

