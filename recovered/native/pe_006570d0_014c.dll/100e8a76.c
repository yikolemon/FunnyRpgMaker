/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e8a76 */

undefined4 * __thiscall FUN_100e8a76(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_18 = &LAB_100ead70;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[5] = 0xf;
  local_28 = param_2 + 6;
  param_2[7] = 0;
  local_24 = param_2 + 9;
  param_2[10] = 0;
  local_14 = 3;
  FUN_100e8b81(param_1,param_2);
  ExceptionList = local_1c;
  return param_2;
}

