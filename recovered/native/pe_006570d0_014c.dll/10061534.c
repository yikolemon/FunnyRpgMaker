/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10061534 */

undefined4 * __thiscall FUN_10061534(undefined4 *param_1,undefined4 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_100c1fd0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_1 = param_2;
  param_1[1] = 0;
  local_14 = 0;
  local_24 = param_1;
  iVar1 = FUN_10228350(0x10);
  local_24[1] = iVar1;
  *(undefined8 *)(iVar1 + 8) = *param_3;
  ExceptionList = local_1c;
  return local_24;
}

