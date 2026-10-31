/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009e92e */

undefined4 * __thiscall FUN_1009e92e(undefined4 *param_1,undefined4 *param_2)

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
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  uVar3 = param_2[7];
  uVar4 = param_2[8];
  uVar5 = param_2[9];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  param_1[8] = uVar4;
  param_1[9] = uVar5;
  param_2[10] = 0;
  param_2[0xb] = 7;
  *(undefined2 *)(param_2 + 6) = 0;
  uVar3 = param_2[0xe];
  param_2[0xe] = 0;
  uVar1 = *(undefined8 *)(param_2 + 0xc);
  param_2[0xd] = 0;
  param_2[0xc] = 0;
  *(undefined8 *)(param_1 + 0xc) = uVar1;
  param_1[0xe] = uVar3;
  param_1[0xf] = param_2[0xf];
  uVar3 = param_2[0x12];
  param_2[0x12] = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  param_2[0x11] = 0;
  param_2[0x10] = 0;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  param_1[0x12] = uVar3;
  uVar3 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar3;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)(param_1 + 0x19) = 0;
  *(undefined8 *)(param_1 + 0x19) = *(undefined8 *)(param_2 + 0x19);
  uVar3 = param_2[0x16];
  uVar4 = param_2[0x17];
  uVar5 = param_2[0x18];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = uVar3;
  param_1[0x17] = uVar4;
  param_1[0x18] = uVar5;
  param_2[0x19] = 0;
  param_2[0x1a] = 7;
  *(undefined2 *)(param_2 + 0x15) = 0;
  *unaff_FS_OFFSET = iVar2;
  return param_1;
}

