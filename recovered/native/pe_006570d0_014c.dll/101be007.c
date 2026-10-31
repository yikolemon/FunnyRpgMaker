/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101be007 */

void FUN_101be007(int param_1)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  
  puVar2 = (undefined4 *)FUN_101bd5e3();
  puVar3 = (undefined4 *)FUN_100fa1fa(0x3c);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  *(undefined4 **)(param_1 + 0x40) = puVar3;
  iVar4 = *(int *)(param_1 + 0x50);
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_1 + 0x4c);
  }
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  *(undefined8 *)(puVar3 + 0xd) = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[9] = 1;
  puVar3[7] = 1;
  fVar1 = DAT_1028f6d0;
  uVar5 = (uint)*(float *)(param_1 + 0x10);
  puVar3[1] = (int)uVar5 >> 0x1f & (int)(*(float *)(param_1 + 0x10) - DAT_1028f6d0) | uVar5;
  uVar5 = (uint)*(float *)(param_1 + 0x14);
  puVar3[2] = (int)uVar5 >> 0x1f & (int)(*(float *)(param_1 + 0x14) - fVar1) | uVar5;
  puVar3[3] = 0;
  puVar3[8] = iVar4;
  puVar3[10] = 0;
  puVar3[0xb] = 0x50;
  puVar3[0xe] = 0x80000000;
  (**(code **)(*(int *)*puVar2 + 0x34))((int *)*puVar2,puVar3 + 1,puVar3);
  return;
}

