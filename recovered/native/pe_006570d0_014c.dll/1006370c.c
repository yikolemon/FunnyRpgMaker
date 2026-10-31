/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006370c */

undefined1 * FUN_1006370c(undefined1 *param_1,undefined1 *param_2,undefined4 param_3)

{
  undefined1 *local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_20;
  local_10 = 0xffffffff;
  local_14 = &LAB_100c20b0;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  *param_1 = *param_2;
  local_20 = param_1 + 4;
  FUN_10063788(param_3);
  ExceptionList = local_18;
  return param_1;
}

