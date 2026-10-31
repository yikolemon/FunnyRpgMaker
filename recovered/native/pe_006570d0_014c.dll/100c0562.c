/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c0562 */

undefined4 * __thiscall FUN_100c0562(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_2c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c4d10;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_1 = *param_2;
  local_24 = param_1 + 1;
  FUN_1000334a(param_2 + 1);
  local_14 = 0;
  local_28 = param_1 + 7;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  local_2c = param_1;
  FUN_10044618(param_2[8] - param_2[7],param_2 + 7,param_2 + 8);
  ExceptionList = local_1c;
  return local_2c;
}

