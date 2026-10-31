/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011bcee */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18011bcee(float *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar8;
  float fVar9;
  undefined8 uVar7;
  
  if ((longlong)*(int *)(param_2 + 0x5c) < 0) {
    uVar7 = *(undefined8 *)(*(longlong *)(param_2 + 0x48) + 8);
    uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x48) + 0x10);
    fVar3 = (float)uVar1;
    fVar4 = (float)((ulonglong)uVar1 >> 0x20);
  }
  else {
    lVar2 = (longlong)*(int *)(param_2 + 0x5c) * 0x30;
    uVar7 = *(undefined8 *)(*(longlong *)(DAT_180419160 + 0xd80) + 0x10 + lVar2);
    uVar1 = *(undefined8 *)(*(longlong *)(DAT_180419160 + 0xd80) + 0x18 + lVar2);
    fVar3 = (float)uVar1;
    fVar4 = (float)((ulonglong)uVar1 >> 0x20);
  }
  fVar5 = (float)uVar7;
  fVar8 = (float)((ulonglong)uVar7 >> 0x20);
  fVar6 = (float)*(undefined8 *)(DAT_180419160 + 0xec8);
  fVar9 = (float)((ulonglong)*(undefined8 *)(DAT_180419160 + 0xec8) >> 0x20);
  fVar6 = (float)(((uint)fVar6 ^ _DAT_1802b0ce0) & -(uint)(fVar6 + fVar6 < (fVar3 + fVar5) - fVar5))
  ;
  fVar9 = (float)(((uint)fVar9 ^ _UNK_1802b0ce4) & -(uint)(fVar9 + fVar9 < (fVar4 + fVar8) - fVar8))
  ;
  *param_1 = fVar5 - fVar6;
  param_1[1] = fVar8 - fVar9;
  param_1[2] = fVar6 + fVar3 + fVar5;
  param_1[3] = fVar9 + fVar4 + fVar8;
  return;
}

