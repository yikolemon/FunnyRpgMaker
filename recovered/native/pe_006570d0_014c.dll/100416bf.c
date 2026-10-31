/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100416bf */

void FUN_100416bf(undefined4 param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [24];
  undefined8 local_30;
  undefined8 *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_18 = &LAB_1005a3c0;
  local_1c = ExceptionList;
  local_20 = auStack_48;
  local_24 = auStack_48;
  local_28 = &local_30;
  local_30 = *param_3;
  ExceptionList = &local_1c;
  *(undefined4 *)param_3 = 0;
  *(undefined4 *)((int)param_3 + 4) = 0;
  local_14 = 0;
  FUN_10001f66(*param_2);
  local_14 = 0xffffffff;
  FUN_10041780();
  ExceptionList = local_1c;
  return;
}

