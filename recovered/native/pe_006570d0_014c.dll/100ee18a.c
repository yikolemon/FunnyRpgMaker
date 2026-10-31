/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ee18a */

undefined4 * __thiscall FUN_100ee18a(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_20;
  local_10 = 0xffffffff;
  local_14 = &LAB_100f5200;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  *param_1 = *(undefined4 *)*param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = &DAT_10356101;
  local_20 = param_1 + 3;
  FUN_1005c1aa();
  ExceptionList = local_18;
  return param_1;
}

