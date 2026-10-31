/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10084774 */

undefined1 * __thiscall
FUN_10084774(undefined1 *param_1,undefined1 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_18;
  local_10 = &LAB_100c31e0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 8) = param_4;
  local_c = 0xffffffff;
  FUN_1007f222();
  ExceptionList = local_14;
  return param_1;
}

