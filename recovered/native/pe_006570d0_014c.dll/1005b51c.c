/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005b51c */

undefined4 * __thiscall FUN_1005b51c(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c1e90;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_24 = param_1;
  FUN_10044618(param_2[1] - *param_2,param_2,param_2 + 1);
  local_24[3] = *param_3;
  ExceptionList = local_1c;
  return local_24;
}

