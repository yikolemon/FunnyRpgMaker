/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100648ae */

undefined4 * __thiscall FUN_100648ae(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_100c2170;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_14 = 0;
  local_24 = param_1;
  if (param_2 == param_3) {
    param_1[5] = 3;
    *param_1 = 0;
  }
  else {
    FUN_10066596(param_2,param_3 - param_2 >> 2);
  }
  ExceptionList = local_1c;
  return local_24;
}

