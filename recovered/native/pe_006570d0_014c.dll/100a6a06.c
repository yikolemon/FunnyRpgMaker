/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a6a06 */

undefined4 * __thiscall FUN_100a6a06(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_34;
  local_18 = &LAB_100c42e0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_1 = *param_2;
  local_34 = param_1 + 1;
  *(undefined8 *)(param_1 + 5) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  param_1[1] = param_2[1];
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  *(undefined8 *)(param_1 + 5) = *(undefined8 *)(param_2 + 5);
  param_2[5] = 0;
  param_2[6] = 7;
  *(undefined2 *)(param_2 + 1) = 0;
  *(undefined8 *)(param_1 + 7) = *(undefined8 *)(param_2 + 7);
  local_30 = param_1 + 9;
  uVar2 = param_2[0xb];
  param_2[0xb] = 0;
  uVar1 = *(undefined8 *)(param_2 + 9);
  param_2[10] = 0;
  param_2[9] = 0;
  *(undefined8 *)(param_1 + 9) = uVar1;
  param_1[0xb] = uVar2;
  local_14 = 1;
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  local_2c = param_1 + 0xd;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  local_24 = param_1;
  FUN_10044618(param_2[0xe] - param_2[0xd],param_2 + 0xd,param_2 + 0xe);
  local_14 = 2;
  local_28 = local_24 + 0x10;
  local_24[0x10] = 0;
  local_24[0x11] = 0;
  local_24[0x12] = 0;
  FUN_10044618(param_2[0x11] - param_2[0x10],param_2 + 0x10,param_2 + 0x11);
  ExceptionList = local_1c;
  return local_24;
}

