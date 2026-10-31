/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10099a16 */

undefined4 * __thiscall FUN_10099a16(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 *local_28;
  undefined1 local_21;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_18 = &LAB_100c3c10;
  local_1c = ExceptionList;
  local_28 = param_1 + 2;
  ExceptionList = &local_1c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_21 = 0;
  local_14 = 0;
  iVar1 = *param_2;
  FUN_1007fbb8(0);
  *(undefined1 *)param_1 = 5;
  param_1[3] = iVar1 >> 0x1f;
  param_1[2] = iVar1;
  ExceptionList = local_1c;
  return param_1;
}

