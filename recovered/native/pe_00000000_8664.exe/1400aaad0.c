/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400aaad0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1400aaad0(float *param_1,int param_2,float *param_3,char param_4,float *param_5)

{
  longlong lVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  float extraout_XMM0_Da;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  lVar1 = DAT_140f2a910;
  fVar3 = (float)FUN_14004863e(param_1[2] - *param_1,param_1[3] - param_1[1]);
  uVar4 = FUN_14007b71f(*(float *)(lVar1 + 0x1320) * DAT_1401c86a0,fVar3 * DAT_140211730);
  FUN_14004863e(*(float *)(lVar1 + 0x1320) * DAT_1402118c0,uVar4);
  fVar3 = param_1[2];
  if (param_4 == '\0') {
    fVar8 = (float)(int)(extraout_XMM0_Da * _DAT_1402118d0);
    fVar9 = (float)(int)(extraout_XMM0_Da * _UNK_1402118d4);
    fVar5 = (float)(int)(DAT_1402118e0 * fVar8);
    fVar14 = param_1[3];
    uVar11 = *(undefined8 *)param_1;
    fVar15 = fVar5;
  }
  else {
    fVar8 = (float)(int)(extraout_XMM0_Da * _DAT_1402118f0);
    fVar9 = (float)(int)(extraout_XMM0_Da * _UNK_1402118f4);
    fVar14 = param_1[3];
    uVar11 = *(undefined8 *)param_1;
    fVar5 = (float)(int)((fVar3 - (float)uVar11) * (float)DAT_1401c8640 - fVar9);
    fVar15 = (float)(int)((fVar14 - (float)((ulonglong)uVar11 >> 0x20)) * DAT_1401c8640._4_4_ -
                         fVar9);
  }
  fVar12 = (float)((ulonglong)uVar11 >> 0x20);
  fVar10 = (float)(int)((float)DAT_1401c8640 * ((float)uVar11 + fVar3));
  fVar13 = (float)(int)(DAT_1401c8640._4_4_ * (fVar12 + fVar14));
  if (param_2 == -1) {
    fVar6 = fVar10 - fVar8;
    fVar7 = fVar13 - fVar8;
    fVar3 = fVar8 + (float)(int)((float)DAT_1401c8640 * ((float)uVar11 + fVar3));
    fVar9 = fVar8 + (float)(int)(DAT_1401c8640._4_4_ * (fVar12 + fVar14));
  }
  else {
    switch(param_2) {
    case 0:
      fVar6 = (fVar10 - fVar5) - fVar9;
      fVar7 = fVar13 - fVar8;
      fVar3 = (fVar10 - fVar5) + fVar9;
      fVar9 = fVar13 + fVar8;
      break;
    case 1:
      fVar6 = (fVar5 + fVar10) - fVar9;
      fVar7 = fVar13 - fVar8;
      fVar3 = fVar5 + fVar10 + fVar9;
      fVar9 = fVar13 + fVar8;
      break;
    case 2:
      fVar6 = fVar10 - fVar8;
      fVar7 = (fVar13 - fVar15) - fVar9;
      fVar3 = fVar10 + fVar8;
      fVar9 = (fVar13 - fVar15) + fVar9;
      break;
    case 3:
      fVar6 = fVar10 - fVar8;
      fVar7 = (fVar15 + fVar13) - fVar9;
      fVar3 = fVar10 + fVar8;
      fVar9 = fVar15 + fVar13 + fVar9;
      break;
    default:
      goto switchD_1400aac07_default;
    }
  }
  *param_3 = fVar6;
  param_3[1] = fVar7;
  param_3[2] = fVar3;
  param_3[3] = fVar9;
switchD_1400aac07_default:
  if (param_5 != (float *)0x0) {
    fVar14 = *param_3;
    fVar15 = param_3[1];
    fVar5 = param_3[2];
    fVar9 = param_3[3];
    fVar3 = *param_5;
    if (param_4 == '\0') {
      fVar10 = (fVar3 - fVar10) * (fVar3 - fVar10) + (param_5[1] - fVar13) * (param_5[1] - fVar13);
      if (fVar10 < DAT_140211900 * fVar8 * DAT_140211900 * fVar8) {
        return param_2 == -1;
      }
      if (fVar10 < DAT_140211904 * fVar8 * DAT_140211904 * fVar8) {
        iVar2 = FUN_1400a64f3();
        return param_2 == iVar2;
      }
      fVar8 = (float)(int)(fVar8 * DAT_1402115c8);
      fVar5 = fVar5 + fVar8;
      fVar9 = fVar9 + fVar8;
      fVar14 = fVar14 - fVar8;
      fVar15 = fVar15 - fVar8;
    }
    if (fVar14 <= fVar3) {
      return (bool)(param_5[1] < fVar9 & -(fVar15 <= param_5[1]) & -(fVar3 < fVar5));
    }
  }
  return false;
}

