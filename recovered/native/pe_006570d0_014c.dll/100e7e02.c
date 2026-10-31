/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e7e02 */

undefined4 * FUN_100e7e02(undefined4 *param_1)

{
  undefined4 local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_2c;
  local_18 = &LAB_100eacf0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0xf;
  local_24 = param_1 + 6;
  param_1[7] = 0;
  local_14 = 2;
  local_28 = param_1 + 9;
  FUN_1002218a();
  local_14 = 4;
  FUN_100e7f3d(local_2c,param_1);
  ExceptionList = local_1c;
  return param_1;
}

