/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10067920 */

undefined4 * __thiscall FUN_10067920(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_100c22d0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_1 = param_2;
  param_1[1] = 0;
  local_14 = 0;
  local_24 = param_1;
  uVar1 = FUN_10228350(0x18);
  local_24[1] = uVar1;
  ExceptionList = local_1c;
  return local_24;
}

