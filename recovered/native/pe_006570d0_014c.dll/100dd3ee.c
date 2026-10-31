/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100dd3ee */

undefined4 * __thiscall FUN_100dd3ee(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *local_28;
  undefined1 local_21;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_18 = &LAB_100de1b0;
  local_1c = ExceptionList;
  local_28 = param_1 + 2;
  ExceptionList = &local_1c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_21 = 0;
  local_14 = 0;
  uVar1 = *param_2;
  FUN_10016770(0);
  *(undefined1 *)param_1 = 6;
  param_1[3] = 0;
  param_1[2] = uVar1;
  ExceptionList = local_1c;
  return param_1;
}

