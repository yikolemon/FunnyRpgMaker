/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009eff6 */

undefined4 * __thiscall FUN_1009eff6(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  undefined1 local_14 [12];
  
  iVar2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)local_14;
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  param_2[4] = 0;
  param_2[5] = 7;
  *(undefined2 *)param_2 = 0;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 0xb) = *(undefined8 *)(param_2 + 0xb);
  uVar3 = param_2[8];
  uVar4 = param_2[9];
  uVar5 = param_2[10];
  param_1[7] = param_2[7];
  param_1[8] = uVar3;
  param_1[9] = uVar4;
  param_1[10] = uVar5;
  param_2[0xb] = 0;
  param_2[0xc] = 7;
  *(undefined2 *)(param_2 + 7) = 0;
  uVar3 = param_2[0xf];
  param_2[0xf] = 0;
  uVar1 = *(undefined8 *)(param_2 + 0xd);
  param_2[0xe] = 0;
  param_2[0xd] = 0;
  *(undefined8 *)(param_1 + 0xd) = uVar1;
  param_1[0xf] = uVar3;
  uVar3 = param_2[0x12];
  param_2[0x12] = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  param_2[0x11] = 0;
  param_2[0x10] = 0;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  param_1[0x12] = uVar3;
  *(undefined8 *)(param_1 + 0x13) = *(undefined8 *)(param_2 + 0x13);
  *unaff_FS_OFFSET = iVar2;
  return param_1;
}

