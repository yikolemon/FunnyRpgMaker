/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b1566 */

undefined4 * __thiscall
FUN_100b1566(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_20;
  local_10 = 0xffffffff;
  local_14 = &LAB_100c4820;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  *param_1 = *param_2;
  param_1[1] = *param_3;
  local_20 = param_1 + 2;
  FUN_10001f66(param_4);
  ExceptionList = local_18;
  return param_1;
}

