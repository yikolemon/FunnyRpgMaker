/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d9402 */

undefined4 * __thiscall FUN_100d9402(undefined4 param_1,undefined4 *param_2)

{
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_20;
  local_18 = &LAB_100ddfe0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  local_14 = 0;
  FUN_100d9481(param_1,param_2);
  ExceptionList = local_1c;
  return param_2;
}

