/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180131a0e */

void FUN_180131a0e(longlong param_1,undefined8 *param_2,float *param_3,float *param_4,float *param_5
                  )

{
  undefined8 uVar1;
  longlong lVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar2 = DAT_180419160;
  fVar9 = *(float *)(DAT_180419160 + 0x1320);
  fVar4 = *(float *)(DAT_180419160 + 0xdf8);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  fVar6 = (float)((ulonglong)uVar1 >> 0x20);
  fVar7 = fVar4 + fVar4 + fVar6 + fVar9;
  fVar8 = *(float *)(param_1 + 0x50) + (float)uVar1;
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = uVar1;
    *(float *)(param_2 + 1) = fVar8;
    *(float *)((longlong)param_2 + 0xc) = fVar7;
    fVar9 = *(float *)(lVar2 + 0x1320);
    fVar4 = *(float *)(lVar2 + 0xdf8);
  }
  fVar10 = *(float *)(lVar2 + 0xdc8);
  fVar5 = *(float *)(lVar2 + 0xdf4);
  fVar8 = (fVar8 - fVar10) - fVar5;
  fVar4 = fVar4 + fVar6;
  bVar3 = *(byte *)(param_1 + 0xd4);
  if ((bVar3 & 8) != 0) {
    if (param_5 != (float *)0x0) {
      *param_5 = fVar8 - fVar9;
      param_5[1] = fVar4;
      bVar3 = *(byte *)(param_1 + 0xd4);
    }
    fVar8 = fVar8 - (*(float *)(lVar2 + 0xe0c) + fVar9);
  }
  fVar5 = (float)uVar1 + fVar10 + fVar5;
  fVar10 = fVar5;
  if ((bVar3 & 0x10) != 0) {
    if (*(int *)(lVar2 + 0xde0) == 1) {
      fVar4 = *(float *)(lVar2 + 0xdf8) + fVar6;
      fVar10 = fVar8 - fVar9;
      fVar8 = fVar8 - (fVar9 + *(float *)(lVar2 + 0xe0c));
    }
    else if (*(int *)(lVar2 + 0xde0) == 0) {
      fVar5 = fVar9 + *(float *)(lVar2 + 0xe0c) + fVar5;
    }
  }
  *param_3 = fVar5;
  param_3[1] = fVar6;
  param_3[2] = fVar8;
  param_3[3] = fVar7;
  if (param_4 != (float *)0x0) {
    *param_4 = fVar10;
    param_4[1] = fVar4;
  }
  return;
}

