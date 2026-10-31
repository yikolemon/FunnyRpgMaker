/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012b954 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __fastcall FUN_1012b954(float *param_1,int param_2,float *param_3,char param_4,float *param_5)

{
  int iVar1;
  float10 fVar2;
  float10 extraout_ST0;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  iVar1 = DAT_1039d74c;
  fVar2 = (float10)FUN_100ea38a(param_1[2] - *param_1,param_1[3] - param_1[1]);
  fVar2 = (float10)FUN_100fdbca(*(float *)(iVar1 + 0x1228) * DAT_102b70e0,
                                (float)fVar2 * DAT_102b8f90);
  FUN_100ea38a(*(float *)(iVar1 + 0x1228) * DAT_102b9150,(float)fVar2);
  fVar13 = (float)extraout_ST0;
  fVar4 = param_1[2];
  if (param_4 == '\0') {
    fVar7 = (float)(int)(fVar13 * _DAT_102b9160);
    fVar8 = (float)(int)(fVar13 * _UNK_102b9164);
    fVar3 = (float)(int)(DAT_102b9170 * fVar7);
    fVar13 = param_1[3];
    uVar10 = *(undefined8 *)param_1;
    fVar14 = fVar3;
  }
  else {
    fVar7 = (float)(int)(fVar13 * _DAT_102b9180);
    fVar8 = (float)(int)(fVar13 * _UNK_102b9184);
    fVar13 = param_1[3];
    uVar10 = *(undefined8 *)param_1;
    fVar3 = (float)(int)((fVar4 - (float)uVar10) * (float)DAT_102b89c0 - fVar8);
    fVar14 = (float)(int)((fVar13 - (float)((ulonglong)uVar10 >> 0x20)) * DAT_102b89c0._4_4_ - fVar8
                         );
  }
  fVar11 = (float)((ulonglong)uVar10 >> 0x20);
  fVar9 = (float)(int)((float)DAT_102b89c0 * ((float)uVar10 + fVar4));
  fVar12 = (float)(int)(DAT_102b89c0._4_4_ * (fVar11 + fVar13));
  if (param_2 == -1) {
    fVar5 = fVar9 - fVar7;
    fVar6 = fVar12 - fVar7;
    fVar4 = fVar7 + (float)(int)((float)DAT_102b89c0 * ((float)uVar10 + fVar4));
    fVar8 = fVar7 + (float)(int)(DAT_102b89c0._4_4_ * (fVar11 + fVar13));
  }
  else {
    switch(param_2) {
    case 0:
      fVar5 = (fVar9 - fVar3) - fVar8;
      fVar6 = fVar12 - fVar7;
      fVar4 = (fVar9 - fVar3) + fVar8;
      fVar8 = fVar12 + fVar7;
      break;
    case 1:
      fVar5 = (fVar3 + fVar9) - fVar8;
      fVar6 = fVar12 - fVar7;
      fVar4 = fVar3 + fVar9 + fVar8;
      fVar8 = fVar12 + fVar7;
      break;
    case 2:
      fVar5 = fVar9 - fVar7;
      fVar6 = (fVar12 - fVar14) - fVar8;
      fVar4 = fVar9 + fVar7;
      fVar8 = (fVar12 - fVar14) + fVar8;
      break;
    case 3:
      fVar5 = fVar9 - fVar7;
      fVar6 = (fVar14 + fVar12) - fVar8;
      fVar4 = fVar9 + fVar7;
      fVar8 = fVar14 + fVar12 + fVar8;
      break;
    default:
      goto switchD_1012ba94_default;
    }
  }
  *param_3 = fVar5;
  param_3[1] = fVar6;
  param_3[2] = fVar4;
  param_3[3] = fVar8;
switchD_1012ba94_default:
  if (param_5 != (float *)0x0) {
    fVar13 = *param_3;
    fVar14 = param_3[1];
    fVar3 = param_3[2];
    fVar8 = param_3[3];
    fVar4 = *param_5;
    if (param_4 == '\0') {
      fVar9 = (fVar4 - fVar9) * (fVar4 - fVar9) + (param_5[1] - fVar12) * (param_5[1] - fVar12);
      if (fVar9 < DAT_102b9190 * fVar7 * DAT_102b9190 * fVar7) {
        return param_2 == -1;
      }
      if (fVar9 < DAT_102b9194 * fVar7 * DAT_102b9194 * fVar7) {
        iVar1 = FUN_10127676();
        return param_2 == iVar1;
      }
      fVar7 = (float)(int)(fVar7 * DAT_102b8d94);
      fVar3 = fVar3 + fVar7;
      fVar8 = fVar8 + fVar7;
      fVar13 = fVar13 - fVar7;
      fVar14 = fVar14 - fVar7;
    }
    if (fVar13 <= fVar4) {
      return (bool)(param_5[1] < fVar8 & -(fVar14 <= param_5[1]) & -(fVar4 < fVar3));
    }
  }
  return false;
}

