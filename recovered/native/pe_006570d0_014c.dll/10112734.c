/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10112734 */

void __fastcall FUN_10112734(int *param_1)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  
  iVar7 = DAT_1039d74c;
  iVar2 = *(int *)(DAT_1039d74c + 0x14cc);
  *param_1 = iVar2;
  param_1[1] = *(int *)(iVar7 + 0x1e80);
  param_1[2] = *(int *)(iVar7 + 0x1e3c);
  uVar3 = *(uint *)(iVar7 + 0x1e84);
  param_1[7] = uVar3;
  uVar1 = *(undefined8 *)(iVar2 + 0x154);
  fVar4 = *(float *)(iVar7 + 0x1ea0);
  fVar5 = *(float *)(iVar7 + 0x1ea4);
  fVar6 = *(float *)(iVar7 + 0x1ea8);
  fVar8 = (float)uVar1;
  fVar9 = (float)((ulonglong)uVar1 >> 0x20);
  param_1[3] = (int)(*(float *)(iVar7 + 0x1e9c) - fVar8);
  param_1[4] = (int)(fVar4 - fVar9);
  param_1[5] = (int)(fVar5 - fVar8);
  param_1[6] = (int)(fVar6 - fVar9);
  if ((uVar3 >> 0x15 & 1) != 0) {
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(iVar7 + 0x1e58);
  }
  return;
}

