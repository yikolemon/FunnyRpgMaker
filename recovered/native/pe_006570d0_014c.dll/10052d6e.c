/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10052d6e */

undefined4 * __thiscall FUN_10052d6e(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 local_28;
  undefined4 *local_20;
  undefined1 local_19;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_28;
  local_10 = &LAB_1005aa90;
  local_14 = ExceptionList;
  local_20 = param_1 + 2;
  ExceptionList = &local_14;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_19 = 0;
  local_c = 0;
  local_28 = *param_2;
  FUN_10016770(0);
  *(undefined1 *)param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_28;
  ExceptionList = local_14;
  return param_1;
}

