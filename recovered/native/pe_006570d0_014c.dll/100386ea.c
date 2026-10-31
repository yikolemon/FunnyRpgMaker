/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100386ea */

void FUN_100386ea(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_30;
  local_14 = 0xffffffff;
  local_18 = &LAB_10059ba0;
  local_1c = ExceptionList;
  local_30 = CONCAT44(local_30._4_4_,0x138);
  ExceptionList = &local_1c;
  local_24 = FUN_10228350();
  local_14 = 0;
  local_28 = *(undefined4 *)(param_2 + 1);
  local_30 = *param_2;
  FUN_1002372c();
  *param_1 = local_24;
  ExceptionList = local_1c;
  return;
}

