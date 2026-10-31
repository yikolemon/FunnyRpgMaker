/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008cb0a */

undefined4 * __thiscall FUN_1008cb0a(undefined4 param_1,undefined4 *param_2)

{
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_20;
  local_18 = &LAB_100c3730;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  param_2[4] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[5] = 0xf;
  local_14 = 0;
  FUN_1008cb96(param_1,param_2);
  ExceptionList = local_1c;
  return param_2;
}

