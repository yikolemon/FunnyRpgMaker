/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10088b42 */

undefined4 * __thiscall FUN_10088b42(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *local_28;
  undefined1 local_21;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_18 = &LAB_100c3420;
  local_1c = ExceptionList;
  local_28 = param_1 + 2;
  ExceptionList = &local_1c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_21 = 0;
  local_14 = 0;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_1007fbb8(0);
  *(undefined1 *)param_1 = 5;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  ExceptionList = local_1c;
  return param_1;
}

