/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f1180 */

undefined4 FUN_100f1180(undefined4 param_1,undefined4 param_2)

{
  undefined1 local_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = local_30;
  local_10 = 0xffffffff;
  local_14 = &LAB_100f5450;
  local_18 = ExceptionList;
  local_28 = param_2;
  local_2c = param_1;
  ExceptionList = &local_18;
  FUN_100f1208();
  ExceptionList = local_18;
  return local_24;
}

