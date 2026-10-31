/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e83d4 */

undefined4 * FUN_100e83d4(undefined4 *param_1)

{
  undefined4 local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_18 = &LAB_100ead20;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_14 = 0;
  local_24 = param_1 + 3;
  FUN_1002218a();
  local_14 = 2;
  FUN_100e84b3(local_28,param_1);
  ExceptionList = local_1c;
  return param_1;
}

