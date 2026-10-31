/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180192079 */

void FUN_180192079(int *param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,float param_8,int param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar4 = DAT_1802de570._4_4_;
  fVar3 = (float)DAT_1802de570;
  fVar2 = DAT_1802dbb50;
  fVar1 = DAT_1802dbb2c;
  fVar9 = param_6 - param_2;
  fVar10 = param_7 - param_3;
  fVar11 = (param_4 - param_6) * fVar10 - (param_5 - param_7) * fVar9;
  if ((fVar9 * fVar9 + fVar10 * fVar10) * param_8 <= fVar11 * fVar11 * DAT_1802dbb50) {
    do {
      param_9 = param_9 + 1;
      if (param_9 == 0xb) {
        return;
      }
      fVar10 = (param_4 + param_2) * fVar3;
      param_4 = (param_4 + param_6) * fVar4;
      fVar9 = (param_5 + param_3) * fVar3;
      param_5 = (param_5 + param_7) * fVar4;
      fVar12 = (fVar10 + param_4) * fVar1;
      fVar13 = (fVar9 + param_5) * fVar1;
      FUN_180192079(param_1,param_2,param_3,fVar10,fVar9,fVar12,fVar13,param_8,param_9);
      fVar9 = param_6 - fVar12;
      fVar10 = param_7 - fVar13;
      fVar11 = (param_4 - param_6) * fVar10 - (param_5 - param_7) * fVar9;
      param_2 = fVar12;
      param_3 = fVar13;
    } while ((fVar9 * fVar9 + fVar10 * fVar10) * param_8 <= fVar11 * fVar11 * fVar2);
  }
  iVar5 = *param_1;
  if (iVar5 == param_1[1]) {
    if (iVar5 == 0) {
      iVar7 = 8;
    }
    else {
      iVar7 = iVar5 / 2 + iVar5;
    }
    iVar8 = iVar5 + 1;
    if (iVar5 + 1 < iVar7) {
      iVar8 = iVar7;
    }
    lVar6 = FUN_1800fe7f8((longlong)iVar8 << 3);
    if (*(longlong *)(param_1 + 2) != 0) {
      FUN_1802a82f0(lVar6,*(longlong *)(param_1 + 2),(longlong)*param_1 << 3);
      FUN_1800fe8d4(*(undefined8 *)(param_1 + 2));
    }
    *(longlong *)(param_1 + 2) = lVar6;
    param_1[1] = iVar8;
    iVar5 = *param_1;
  }
  else {
    lVar6 = *(longlong *)(param_1 + 2);
  }
  *(float *)(lVar6 + (longlong)iVar5 * 8) = param_6;
  *(float *)(lVar6 + 4 + (longlong)iVar5 * 8) = param_7;
  *param_1 = *param_1 + 1;
  return;
}

