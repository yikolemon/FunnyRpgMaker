/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076dfd8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14076dfd8(uint param_1,uint param_2)

{
  float *pfVar1;
  undefined4 uVar2;
  bool bVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar9;
  ulonglong uVar10;
  float10 in_ST0;
  float10 in_ST1;
  uint uVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar15;
  undefined1 auVar14 [16];
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float *pfVar8;
  
  uVar4 = _DAT_150b0b740;
  uVar7 = (int)&stack0xffffffffffffffe0 - 0x3c;
  pfVar8 = (float *)(ulonglong)uVar7;
  auVar19._0_8_ = (ulonglong)_DAT_150b0b740;
  uVar11 = *(uint *)(auVar19._0_8_ + 0x2048);
  uVar10 = (ulonglong)uVar11;
  pfVar8[-2] = 3.857422;
  pfVar8[-1] = 1.4013e-45;
  iVar6 = FUN_14076edd8(param_2);
  if (iVar6 == 1) {
    uVar9 = uVar4 + 0xe4;
    *pfVar8 = (float)uVar9;
    pfVar8[-2] = 3.8574266;
    pfVar8[-1] = 1.4013e-45;
    cVar5 = FUN_14075bb00();
    uVar11 = uVar4 + 0x2468;
    if (cVar5 != '\0') {
      uVar11 = uVar9;
    }
    uVar13 = CONCAT44((float)((ulonglong)*(undefined8 *)(ulonglong)uVar11 >> 0x20) +
                      fRam0000000150a26e2f,(float)*(undefined8 *)(ulonglong)uVar11 + _DAT_150a26e2b)
    ;
    goto LAB_14076e1b4;
  }
  if ((((*(int *)(auVar19._0_8_ + 0x1528) == 0) || (*(char *)(auVar19._0_8_ + 0x153a) != '\x01')) ||
      ((param_2 >> 0x1a & 1) == 0)) ||
     (*(int *)(auVar19._0_8_ + 0x1528) != *(int *)(auVar19._0_8_ + 0x1e80))) {
    if (uVar11 == 0) {
      fVar16 = 0.0;
      fVar17 = 0.0;
      fVar12 = 0.0;
      fVar15 = 0.0;
      goto LAB_14076e0ec;
    }
    pfVar1 = (float *)(uVar10 + 0x3cc + (ulonglong)(uint)(*(int *)(auVar19._0_8_ + 0x2050) << 4));
    fVar12 = (float)*(undefined8 *)(uVar10 + 0x154);
    fVar16 = *pfVar1 + fVar12;
    fVar15 = (float)((ulonglong)*(undefined8 *)(uVar10 + 0x154) >> 0x20);
    fVar17 = pfVar1[1] + fVar15;
    fVar12 = pfVar1[2] + fVar12;
    fVar15 = pfVar1[3] + fVar15;
LAB_14076e088:
    if (*(int *)(uVar10 + 0x2b4) != *(int *)(auVar19._0_8_ + 4)) {
      if ((*(float *)(uVar10 + 0xd4) == _DAT_150a26a56) &&
         (!NAN(*(float *)(uVar10 + 0xd4)) && !NAN(_DAT_150a26a56))) {
        if ((*(float *)(uVar10 + 0xd8) == _DAT_150a26a69) &&
           (!NAN(*(float *)(uVar10 + 0xd8)) && !NAN(_DAT_150a26a69))) goto LAB_14076e0e5;
      }
      pfVar8[4] = fVar16;
      pfVar8[5] = fVar17;
      pfVar8[6] = fVar12;
      pfVar8[7] = fVar15;
      pfVar8[-2] = 3.8574703;
      pfVar8[-1] = 1.4013e-45;
      FUN_1407679b1((undefined8 *)((ulonglong)(pfVar8 + 0xc) & 0xffffffff),uVar10);
      uVar13 = *(undefined8 *)((ulonglong)(pfVar8 + 0xc) & 0xffffffff);
      fVar12 = (float)*(undefined8 *)(uVar10 + 0xc4) - (float)uVar13;
      fVar15 = (float)((ulonglong)*(undefined8 *)(uVar10 + 0xc4) >> 0x20) -
               (float)((ulonglong)uVar13 >> 0x20);
      fVar16 = pfVar8[4] + fVar12;
      fVar17 = pfVar8[5] + fVar15;
      fVar12 = pfVar8[6] + fVar12;
      fVar15 = pfVar8[7] + fVar15;
    }
LAB_14076e0e5:
    bVar3 = false;
  }
  else {
    fVar16 = *(float *)(auVar19._0_8_ + 0x1e9c);
    fVar17 = *(float *)(auVar19._0_8_ + 0x1ea0);
    fVar12 = *(float *)(auVar19._0_8_ + 0x1ea4);
    fVar15 = *(float *)(auVar19._0_8_ + 0x1ea8);
    if (uVar11 != 0) goto LAB_14076e088;
LAB_14076e0ec:
    bVar3 = true;
  }
  pfVar8[4] = fVar16;
  pfVar8[5] = fVar17;
  pfVar8[6] = fVar12;
  pfVar8[7] = fVar15;
  pfVar8[8] = fVar15;
  pfVar8[9] = fVar15;
  pfVar8[10] = fVar15;
  pfVar8[0xb] = fVar15;
  uVar2 = *(undefined4 *)(auVar19._0_8_ + 0xd10);
  pfVar8[1] = fVar15 - fVar17;
  *pfVar8 = (float)uVar2;
  pfVar8[-2] = 3.8574917;
  pfVar8[-1] = 1.4013e-45;
  FUN_14074225a();
  pfVar8[3] = (float)in_ST0;
  pfVar8[8] = pfVar8[8] - pfVar8[3];
  pfVar8[9] = pfVar8[9];
  pfVar8[10] = pfVar8[10];
  pfVar8[0xb] = pfVar8[0xb];
  fVar16 = *(float *)(auVar19._0_8_ + 0xd0c) * _DAT_150a26e0d;
  pfVar8[1] = (float)*(undefined8 *)(pfVar8 + 6) - (float)*(undefined8 *)(pfVar8 + 4);
  *pfVar8 = fVar16;
  pfVar8[-2] = 3.857509;
  pfVar8[-1] = 1.4013e-45;
  FUN_14074225a();
  pfVar8[2] = (float)in_ST1;
  auVar14._0_4_ = pfVar8[2] + pfVar8[4];
  auVar14._4_8_ = 0;
  auVar14._12_4_ = pfVar8[9];
  auVar19._8_8_ = auVar14._8_8_;
  auVar19._0_8_ = CONCAT44(pfVar8[8],auVar14._0_4_);
  if ((!bVar3) && (uVar11 = *(uint *)(uVar10 + 0x3c), uVar11 != 0)) {
    uVar13 = *(undefined8 *)((ulonglong)uVar11 + 8);
    fVar16 = (float)uVar13;
    fVar17 = (float)((ulonglong)uVar13 >> 0x20);
    uVar13 = *(undefined8 *)((ulonglong)uVar11 + 0x10);
    auVar18._0_4_ = (float)uVar13 + fVar16;
    auVar18._4_4_ = (float)((ulonglong)uVar13 >> 0x20) + fVar17;
    auVar18._8_8_ = 0;
    auVar19 = minps(auVar18,auVar19);
    uVar11 = -(uint)(pfVar8[8] < fVar17);
    auVar19._0_8_ =
         CONCAT44(~uVar11 & auVar19._4_4_,~-(uint)(auVar14._0_4_ < fVar16) & auVar19._0_4_) |
         CONCAT44((uint)fVar17 & uVar11,(uint)fVar16 & -(uint)(auVar14._0_4_ < fVar16));
  }
  uVar13 = CONCAT44((float)(int)(float)(auVar19._0_8_ >> 0x20),(float)(int)(float)auVar19._0_8_);
LAB_14076e1b4:
  *(undefined8 *)(ulonglong)param_1 = uVar13;
  if (_DAT_150af6ec3 != ((uint)pfVar8[0xe] ^ uVar7)) {
                    /* WARNING: Subroutine does not return */
    *(code **)(pfVar8 + -2) = FUN_14076e1dc;
    FUN_1408802b0((uint)pfVar8[0xe] ^ uVar7);
  }
  return (undefined8 *)(ulonglong)param_1;
}

