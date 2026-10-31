/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10014148 */

undefined1 * __thiscall FUN_10014148(undefined1 *param_1,undefined1 param_2)

{
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_20;
  local_c = 0xffffffff;
  local_10 = &LAB_10058f00;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *param_1 = param_2;
  local_20 = param_1 + 8;
  local_1c = param_1;
  FUN_100582b4(param_2);
  ExceptionList = local_14;
  return local_1c;
}

