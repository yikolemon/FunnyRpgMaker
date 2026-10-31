/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001663a */

undefined4 * __thiscall FUN_1001663a(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_20;
  local_10 = &LAB_10058fc0;
  local_14 = ExceptionList;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  ExceptionList = &local_14;
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  *(undefined1 *)param_3 = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  local_c = 2;
  local_20 = param_1 + 4;
  local_1c = param_1;
  FUN_10017244(param_3 + 4);
  *(undefined1 *)(local_1c + 0xc) = 1;
  ExceptionList = local_14;
  return local_1c;
}

