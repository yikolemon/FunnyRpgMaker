/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ac49d */

undefined4 * FUN_100ac49d(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_18 = &LAB_100c45e0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_2[4] = 0;
  param_2[5] = 0xf;
  *(undefined1 *)param_2 = 0;
  local_24 = param_1 + 6;
  uVar2 = param_2[8];
  param_2[8] = 0;
  uVar1 = *(undefined8 *)(param_2 + 6);
  param_2[7] = 0;
  param_2[6] = 0;
  *(undefined8 *)(param_1 + 6) = uVar1;
  param_1[8] = uVar2;
  local_14 = 2;
  local_28 = param_1 + 9;
  FUN_100ac5bc(param_2 + 9);
  *unaff_FS_OFFSET = local_1c;
  return param_1;
}

