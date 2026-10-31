/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b2109 */

undefined8 * FUN_100b2109(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_20;
  local_10 = 0xffffffff;
  local_14 = &LAB_100c4880;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  *param_1 = *param_2;
  local_20 = param_1 + 1;
  FUN_1000334a(param_2 + 1);
  ExceptionList = local_18;
  return param_1;
}

