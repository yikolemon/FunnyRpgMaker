/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f1208 */

int FUN_100f1208(undefined4 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined1 local_28 [4];
  undefined4 local_24;
  int local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = local_28;
  local_c = 0xffffffff;
  local_10 = &LAB_100f5460;
  local_14 = ExceptionList;
  local_24 = param_3;
  ExceptionList = &local_14;
  FUN_100f1318();
  *(undefined8 *)(local_1c + 4) = *param_2;
  ExceptionList = local_14;
  return local_1c;
}

