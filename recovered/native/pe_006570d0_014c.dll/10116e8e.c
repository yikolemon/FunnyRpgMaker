/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10116e8e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116e8e(float *param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar8;
  float fVar9;
  undefined8 uVar7;
  
  iVar2 = *(int *)(param_2 + 0x4c);
  if (iVar2 < 0) {
    uVar7 = *(undefined8 *)(*(int *)(param_2 + 0x3c) + 8);
    uVar1 = *(undefined8 *)(*(int *)(param_2 + 0x3c) + 0x10);
    fVar3 = (float)uVar1;
    fVar4 = (float)((ulonglong)uVar1 >> 0x20);
  }
  else {
    uVar7 = *(undefined8 *)(*(int *)(DAT_1039d74c + 0xca4) + 0x10 + iVar2 * 0x28);
    uVar1 = *(undefined8 *)(*(int *)(DAT_1039d74c + 0xca4) + 0x18 + iVar2 * 0x28);
    fVar3 = (float)uVar1;
    fVar4 = (float)((ulonglong)uVar1 >> 0x20);
  }
  fVar5 = (float)uVar7;
  fVar8 = (float)((ulonglong)uVar7 >> 0x20);
  fVar6 = (float)*(undefined8 *)(DAT_1039d74c + 0xde0);
  fVar9 = (float)((ulonglong)*(undefined8 *)(DAT_1039d74c + 0xde0) >> 0x20);
  fVar6 = (float)(((uint)fVar6 ^ _DAT_1028f620) & -(uint)(fVar6 + fVar6 < (fVar3 + fVar5) - fVar5));
  fVar9 = (float)(((uint)fVar9 ^ _UNK_1028f624) & -(uint)(fVar9 + fVar9 < (fVar4 + fVar8) - fVar8));
  *param_1 = fVar5 - fVar6;
  param_1[1] = fVar8 - fVar9;
  param_1[2] = fVar6 + fVar3 + fVar5;
  param_1[3] = fVar9 + fVar4 + fVar8;
  return;
}

