/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b6402 */

undefined4 * FUN_100b6402(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_20;
  local_10 = 0xffffffff;
  local_14 = &LAB_100c4a10;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  *param_1 = *param_2;
  local_20 = param_1 + 1;
  FUN_10063788(param_3);
  ExceptionList = local_18;
  return param_1;
}

