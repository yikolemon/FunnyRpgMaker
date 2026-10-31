/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400907c6 */

undefined8 * FUN_1400907c6(undefined8 *param_1,longlong param_2,float *param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  byte bVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_108 [32];
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined1 local_d0 [8];
  undefined1 local_c8 [8];
  ulonglong local_c0;
  
  lVar5 = DAT_140f2a910;
  fVar12 = DAT_1401c86c8;
  local_c0 = DAT_140f17b40 ^ (ulonglong)auStack_108;
  fVar13 = *(float *)(param_2 + 0x284) + DAT_1401c86c8;
  fVar15 = *(float *)(param_2 + 0x280) + DAT_1401c86c8;
  fVar14 = *(float *)(param_2 + 0x27c) + DAT_1401c86a4;
  fVar10 = (float)FUN_14004863e(DAT_1401c86a4 + *(float *)(param_2 + 0x278) +
                                *(float *)(param_2 + 0xb8),fVar15);
  fVar14 = (float)FUN_14004863e(fVar14 + *(float *)(param_2 + 0xbc),fVar13);
  uVar9 = param_4;
  if ((param_4 & 0x15) == 0) {
    uVar9 = *(byte *)(param_2 + 0x104) | param_4;
  }
  if ((uVar9 & 0x2a) == 0) {
    uVar7 = 2;
    if (*(char *)(param_2 + 0x110) != '\0') {
      uVar7 = 0x20;
    }
    uVar9 = uVar9 | uVar7;
  }
  fVar11 = *param_3;
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = *(float *)(lVar5 + 0xe04);
  bVar8 = 1;
  bVar6 = 1;
  if ((fVar15 - fVar10 < fVar4 + fVar4 + (fVar2 - fVar11)) && (*(char *)(param_2 + 0x128) < '\x01'))
  {
    bVar6 = (*(byte *)(param_2 + 0x14) & 0x40) >> 6;
  }
  if ((fVar13 - fVar14 < *(float *)(lVar5 + 0xe08) + *(float *)(lVar5 + 0xe08) + (fVar3 - fVar1)) &&
     (*(char *)(param_2 + 0x129) < '\x01')) {
    bVar8 = (*(byte *)(param_2 + 0x14) & 0x40) >> 6;
  }
  if ((uVar9 & 1) != 0 && (fVar15 < fVar2 || fVar11 < fVar10)) {
    if ((fVar10 <= fVar11 & bVar6) == 0) {
      fVar11 = fVar11 - fVar4;
      fVar12 = 0.0;
    }
    else {
      if (fVar2 < fVar15) goto LAB_140090a03;
      fVar11 = fVar2 + fVar4;
    }
LAB_1400909f2:
    FUN_140093943(param_2,fVar11 - *(float *)(param_2 + 0x60),fVar12);
  }
  else if ((uVar9 & 4) != 0 && (fVar15 < fVar2 || fVar11 < fVar10) || (uVar9 & 0x10) != 0) {
    fVar12 = 0.0;
    if (bVar6 != 0) {
      fVar11 = (float)(int)((fVar11 + fVar2) * DAT_1401c86a0);
      fVar12 = DAT_1401c86a0;
    }
    goto LAB_1400909f2;
  }
LAB_140090a03:
  if ((uVar9 & 2) == 0 || fVar3 <= fVar13 && fVar14 <= fVar1) {
    if (((uVar9 & 8) == 0 || fVar3 <= fVar13 && fVar14 <= fVar1) && (uVar9 & 0x20) == 0)
    goto LAB_140090a93;
    fVar12 = param_3[1];
    fVar10 = 0.0;
    if (bVar8 != 0) {
      fVar12 = (float)(int)((fVar12 + param_3[3]) * DAT_1401c86a0);
      fVar10 = DAT_1401c86a0;
    }
  }
  else if ((fVar14 <= param_3[1] & bVar8) == 0) {
    fVar12 = param_3[1] - *(float *)(lVar5 + 0xe08);
    fVar10 = 0.0;
  }
  else {
    if (param_3[3] < fVar13) goto LAB_140090a93;
    fVar12 = param_3[3] + *(float *)(lVar5 + 0xe08);
    fVar10 = DAT_1401c86c8;
  }
  FUN_14009397d(param_2,fVar12 - *(float *)(param_2 + 100),fVar10);
LAB_140090a93:
  FUN_14008db73(local_c8,param_2);
  fVar12 = local_c8._0_4_ - (float)*(undefined8 *)(param_2 + 0xd4);
  fVar10 = local_c8._4_4_ - (float)((ulonglong)*(undefined8 *)(param_2 + 0xd4) >> 0x20);
  *param_1 = CONCAT44(fVar10,fVar12);
  if (((uVar9 & 0x40) == 0) && ((*(byte *)(param_2 + 0x17) & 1) != 0)) {
    uVar9 = (param_4 & 0xffffffea) + 1;
    if ((param_4 & 0x14) == 0) {
      uVar9 = param_4;
    }
    uVar7 = uVar9 & 0xffffffc1 | 2;
    if ((uVar9 & 0x28) == 0) {
      uVar7 = uVar9;
    }
    local_e8 = *param_3 - fVar12;
    fStack_e4 = param_3[1] - fVar10;
    fStack_e0 = param_3[2] - fVar12;
    fStack_dc = param_3[3] - fVar10;
    FUN_1400907c6(local_d0,*(undefined8 *)(param_2 + 0x408),&local_e8,uVar7);
    *param_1 = CONCAT44(local_d0._4_4_ + fVar10,local_d0._0_4_ + fVar12);
  }
  if (DAT_140f17b40 == (local_c0 ^ (ulonglong)auStack_108)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_c0 ^ (ulonglong)auStack_108);
}

