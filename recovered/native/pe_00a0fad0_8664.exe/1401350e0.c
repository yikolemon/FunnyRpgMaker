/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401350e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1401350e0(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong uVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 in_ZMM0 [64];
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  
  dVar9 = in_ZMM0._0_8_;
  auVar10 = in_ZMM0._0_16_;
  if (DAT_14035565c == 0) {
    if ((double)((ulonglong)dVar9 & (ulonglong)DAT_14016aed0) == DAT_14016aed0) {
      if (dVar9 == DAT_14016aed0) {
        return dVar9;
      }
      if (dVar9 != DAT_14016aec0) {
        return (double)((ulonglong)dVar9 | _DAT_14016aef0);
      }
    }
    else {
      dVar20 = (double)(int)(((ulonglong)dVar9 >> 0x34) - _DAT_14016af00);
      if (0.0 < dVar9) {
        dVar13 = (double)((ulonglong)dVar9 & (ulonglong)DAT_14016af20);
        dVar12 = dVar9;
        if (dVar20 == DAT_14016b040) {
          dVar20 = (double)((ulonglong)dVar13 | (ulonglong)DAT_14016afb0) - DAT_14016afb0;
          dVar12 = (double)((ulonglong)dVar20 & (ulonglong)DAT_14016af20);
          dVar20 = (double)(int)((uint)((ulonglong)dVar20 >> 0x34) - _DAT_14016b050);
          dVar13 = dVar12;
        }
        uVar7 = ((ulonglong)dVar12 & _DAT_14016af30) + ((ulonglong)dVar12 & _DAT_14016af40) * 2;
        if ((double)((ulonglong)(dVar9 - DAT_14016afb0) & _DAT_14016b0a0) < DAT_14016b060) {
          dVar9 = dVar9 - DAT_14016afb0;
          dVar20 = dVar9 / (DAT_14016afa0 + dVar9);
          dVar12 = dVar20 + dVar20;
          dVar13 = dVar12 * dVar12;
          dVar14 = dVar13 * dVar12;
          dVar16 = (double)((ulonglong)dVar9 & (ulonglong)DAT_14016b0f0);
          dVar9 = (((DAT_14016b0c0 * dVar13 + DAT_14016b0b0) * dVar14 +
                   (DAT_14016b0e0 * dVar13 + DAT_14016b0d0) * dVar14 * dVar14 * dVar12) -
                  dVar9 * dVar20) + (dVar9 - dVar16);
          return dVar16 * DAT_14016af70 + dVar9 * DAT_14016af70 + dVar9 * DAT_14016af60 +
                 dVar16 * DAT_14016af60;
        }
        uVar8 = uVar7 >> 0x2c;
        dVar12 = ((double)(uVar7 | (ulonglong)DAT_14016afc0) -
                 (double)((ulonglong)dVar13 | (ulonglong)DAT_14016afc0)) *
                 *(double *)(&DAT_14016c170 + uVar8 * 8);
        dVar9 = dVar12 * dVar12;
        return *(double *)(&DAT_14016b150 + uVar8 * 8) + DAT_14016af80 * dVar20 +
               *(double *)(&DAT_14016b960 + uVar8 * 8) +
               (DAT_14016af90 * dVar20 -
               ((DAT_14016b000 * dVar12 + _DAT_14016aff0) * dVar9 + dVar12 +
               ((DAT_14016b030 * dVar12 + DAT_14016b020) * dVar12 + DAT_14016b010) * dVar9 * dVar9)
               * DAT_14016af50);
      }
      if (dVar9 == 0.0) {
        dVar9 = (double)FUN_140135dc0();
        return dVar9;
      }
    }
    dVar9 = (double)FUN_140135dc0();
    return dVar9;
  }
  auVar17 = vpsrlq_avx(auVar10,0x34);
  auVar1._8_8_ = _UNK_14016af08;
  auVar1._0_8_ = _DAT_14016af00;
  auVar17 = vpsubq_avx(auVar17,auVar1);
  auVar17 = vcvtdq2pd_avx(auVar17);
  dVar20 = auVar17._0_8_;
  auVar17._8_8_ = _UNK_14016aed8;
  auVar17._0_8_ = DAT_14016aed0;
  auVar17 = vpand_avx(auVar10,auVar17);
  if (auVar17._0_8_ == DAT_14016aed0) {
    if (dVar9 != DAT_14016aed0) {
      if (dVar9 == DAT_14016aec0) goto LAB_140135630;
      dVar9 = (double)FUN_140135dc0();
    }
    return dVar9;
  }
  if (0.0 < dVar9) {
    auVar17 = vpand_avx(auVar10,_DAT_14016af20);
    if (dVar20 == DAT_14016b040) {
      auVar10._8_8_ = _UNK_14016afb8;
      auVar10._0_8_ = DAT_14016afb0;
      auVar10 = vpor_avx(auVar17,auVar10);
      auVar15._8_8_ = 0;
      auVar15._0_8_ = auVar10._0_8_ - DAT_14016afb0;
      auVar17 = vpsrlq_avx(auVar15,0x34);
      auVar10 = vpand_avx(auVar15,_DAT_14016af20);
      auVar18._4_12_ = _UNK_14016b054;
      auVar18._0_4_ = _DAT_14016b050;
      auVar17 = vpsubd_avx(auVar17,auVar18);
      auVar17 = vcvtdq2pd_avx(auVar17);
      dVar20 = auVar17._0_8_;
      auVar17 = auVar10;
    }
    auVar2._8_8_ = _UNK_14016af38;
    auVar2._0_8_ = _DAT_14016af30;
    auVar1 = vpand_avx(auVar10,auVar2);
    auVar3._8_8_ = _UNK_14016af48;
    auVar3._0_8_ = _DAT_14016af40;
    auVar18 = vpand_avx(auVar10,auVar3);
    auVar18 = vpsllq_avx(auVar18,1);
    auVar1 = vpaddq_avx(auVar18,auVar1);
    auVar19._8_8_ = 0;
    auVar19._0_8_ = dVar9 - DAT_14016afb0;
    auVar6._8_8_ = _UNK_14016b0a8;
    auVar6._0_8_ = _DAT_14016b0a0;
    auVar18 = vpand_avx(auVar19,auVar6);
    if (auVar18._0_8_ < DAT_14016b060) {
      dVar13 = auVar10._0_8_ - DAT_14016afb0;
      dVar14 = dVar13 / (DAT_14016afa0 + dVar13);
      dVar9 = dVar14 + dVar14;
      dVar20 = dVar9 * dVar9;
      dVar12 = dVar20 * dVar9;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = dVar13;
      auVar10 = vpand_avx(auVar11,_DAT_14016b0f0);
      dVar16 = auVar10._0_8_;
      dVar9 = (((dVar20 * DAT_14016b0c0 + DAT_14016b0b0) * dVar12 +
               (dVar20 * DAT_14016b0e0 + DAT_14016b0d0) * dVar12 * dVar12 * dVar9) - dVar13 * dVar14
              ) + (dVar13 - dVar16);
      return dVar16 * DAT_14016af70 + dVar9 * DAT_14016af70 + dVar9 * DAT_14016af60 +
             dVar16 * DAT_14016af60;
    }
    uVar7 = auVar1._0_8_ >> 0x2c;
    auVar4._8_8_ = _UNK_14016afc8;
    auVar4._0_8_ = DAT_14016afc0;
    auVar10 = vpor_avx(auVar17,auVar4);
    auVar5._8_8_ = _UNK_14016afc8;
    auVar5._0_8_ = DAT_14016afc0;
    auVar17 = vpor_avx(auVar1,auVar5);
    dVar9 = (auVar17._0_8_ - auVar10._0_8_) * *(double *)(&DAT_14016c170 + uVar7 * 8);
    dVar12 = dVar9 * dVar9;
    return dVar20 * DAT_14016af80 + *(double *)(&DAT_14016b150 + uVar7 * 8) +
           *(double *)(&DAT_14016b960 + uVar7 * 8) +
           (dVar20 * DAT_14016af90 -
           ((dVar9 * (dVar9 * DAT_14016b030 + DAT_14016b020) + DAT_14016b010) * dVar12 * dVar12 +
           (dVar9 * DAT_14016b000 + DAT_14016afc0) * dVar12 + dVar9) * DAT_14016af50);
  }
  if (dVar9 == 0.0) {
    dVar9 = (double)FUN_140135dc0();
    return dVar9;
  }
LAB_140135630:
  dVar9 = (double)FUN_140135dc0();
  return dVar9;
}

