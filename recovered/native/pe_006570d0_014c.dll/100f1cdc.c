/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f1cdc */

undefined4 * __thiscall FUN_100f1cdc(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_20;
  local_14 = &LAB_100f54f0;
  local_18 = ExceptionList;
  uVar1 = *param_2;
  ExceptionList = &local_18;
  *param_2 = 0;
  local_20 = *param_1;
  *param_1 = uVar1;
  local_10 = 0xffffffff;
  FUN_100f0cde();
  ExceptionList = local_18;
  return param_1;
}

