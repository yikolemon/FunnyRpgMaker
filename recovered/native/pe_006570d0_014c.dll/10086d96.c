/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10086d96 */

undefined4 * __thiscall FUN_10086d96(undefined4 *param_1,int *param_2)

{
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c32b0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_24 = param_1;
  FUN_10086e2a((param_2[1] - *param_2 >> 3) * -0x33333333,param_2,param_2 + 1);
  ExceptionList = local_1c;
  return local_24;
}

