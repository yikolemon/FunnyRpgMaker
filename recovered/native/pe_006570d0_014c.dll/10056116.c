/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10056116 */

undefined4 * __thiscall FUN_10056116(undefined4 *param_1,undefined4 *param_2)

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
  local_10 = &LAB_1005ace0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_2[4] = 0;
  param_2[5] = 0xf;
  *(undefined1 *)param_2 = 0;
  local_c = 0;
  local_20 = param_1 + 6;
  local_1c = param_1;
  FUN_1004b3be(0);
  ExceptionList = local_14;
  return local_1c;
}

