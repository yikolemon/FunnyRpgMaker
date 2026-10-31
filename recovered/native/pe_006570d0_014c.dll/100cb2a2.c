/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cb2a2 */

void FUN_100cb2a2(undefined4 param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined1 auStack_40 [24];
  undefined8 local_28;
  undefined1 *local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_10 = 0xffffffff;
  local_14 = &LAB_100cc4b0;
  local_18 = ExceptionList;
  local_1c = auStack_40;
  local_20 = auStack_40;
  local_28 = *param_3;
  ExceptionList = &local_18;
  FUN_10001f66(param_2);
  local_10 = 0xffffffff;
  FUN_1004192a();
  ExceptionList = local_18;
  return;
}

