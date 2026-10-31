/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f4566 */

undefined4 * FUN_100f4566(undefined4 *param_1)

{
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_1c;
  local_10 = 0xffffffff;
  local_14 = &LAB_100f56d0;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_10235360(param_1);
  local_10 = 0;
  FUN_102354d0(param_1);
  ExceptionList = local_18;
  return param_1;
}

