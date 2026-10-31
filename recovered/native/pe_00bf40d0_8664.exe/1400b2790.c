/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400b2790 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1400b2790(void)

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
  if (DAT_140143820 == 0) {
    if ((double)((ulonglong)dVar9 & (ulonglong)DAT_140117e00) == DAT_140117e00) {
      if (dVar9 == DAT_140117e00) {
        return dVar9;
      }
      if (dVar9 != DAT_140117df0) {
        return (double)((ulonglong)dVar9 | _DAT_140117e20);
      }
    }
    else {
      dVar20 = (double)(int)(((ulonglong)dVar9 >> 0x34) - _DAT_140117e30);
      if (0.0 < dVar9) {
        dVar13 = (double)((ulonglong)dVar9 & (ulonglong)DAT_140117e50);
        dVar12 = dVar9;
        if (dVar20 == DAT_140117f70) {
          dVar20 = (double)((ulonglong)dVar13 | (ulonglong)DAT_140117ee0) - DAT_140117ee0;
          dVar12 = (double)((ulonglong)dVar20 & (ulonglong)DAT_140117e50);
          dVar20 = (double)(int)((uint)((ulonglong)dVar20 >> 0x34) - _DAT_140117f80);
          dVar13 = dVar12;
        }
        uVar7 = ((ulonglong)dVar12 & _DAT_140117e60) + ((ulonglong)dVar12 & _DAT_140117e70) * 2;
        if ((double)((ulonglong)(dVar9 - DAT_140117ee0) & _DAT_140117fd0) < DAT_140117f90) {
          dVar9 = dVar9 - DAT_140117ee0;
          dVar20 = dVar9 / (DAT_140117ed0 + dVar9);
          dVar12 = dVar20 + dVar20;
          dVar13 = dVar12 * dVar12;
          dVar14 = dVar13 * dVar12;
          dVar16 = (double)((ulonglong)dVar9 & (ulonglong)DAT_140118020);
          dVar9 = (((DAT_140117ff0 * dVar13 + DAT_140117fe0) * dVar14 +
                   (DAT_140118010 * dVar13 + DAT_140118000) * dVar14 * dVar14 * dVar12) -
                  dVar9 * dVar20) + (dVar9 - dVar16);
          return dVar16 * DAT_140117ea0 + dVar9 * DAT_140117ea0 + dVar9 * DAT_140117e90 +
                 dVar16 * DAT_140117e90;
        }
        uVar8 = uVar7 >> 0x2c;
        dVar12 = ((double)(uVar7 | (ulonglong)DAT_140117ef0) -
                 (double)((ulonglong)dVar13 | (ulonglong)DAT_140117ef0)) *
                 *(double *)(&DAT_1401130e0 + uVar8 * 8);
        dVar9 = dVar12 * dVar12;
        return *(double *)(&DAT_140118040 + uVar8 * 8) + DAT_140117eb0 * dVar20 +
               *(double *)(&DAT_140118850 + uVar8 * 8) +
               (DAT_140117ec0 * dVar20 -
               ((DAT_140117f30 * dVar12 + _DAT_140117f20) * dVar9 + dVar12 +
               ((DAT_140117f60 * dVar12 + DAT_140117f50) * dVar12 + DAT_140117f40) * dVar9 * dVar9)
               * DAT_140117e80);
      }
      if (dVar9 == 0.0) {
        dVar9 = (double)FUN_1400adaa0(dVar9,DAT_140117df0,DAT_140118030);
        return dVar9;
      }
    }
    dVar9 = (double)FUN_1400adaa0(dVar9,DAT_140117e10,DAT_140118034);
    return dVar9;
  }
  auVar17 = vpsrlq_avx(auVar10,0x34);
  auVar1._8_8_ = _UNK_140117e38;
  auVar1._0_8_ = _DAT_140117e30;
  auVar17 = vpsubq_avx(auVar17,auVar1);
  auVar17 = vcvtdq2pd_avx(auVar17);
  dVar20 = auVar17._0_8_;
  auVar17._8_8_ = _UNK_140117e08;
  auVar17._0_8_ = DAT_140117e00;
  auVar17 = vpand_avx(auVar10,auVar17);
  if (auVar17._0_8_ == DAT_140117e00) {
    if (dVar9 != DAT_140117e00) {
      if (dVar9 == DAT_140117df0) goto LAB_1400b2ce0;
      dVar9 = (double)FUN_1400adaa0(dVar9,(ulonglong)dVar9 | _DAT_140117e20,DAT_140118038);
    }
    return dVar9;
  }
  if (0.0 < dVar9) {
    auVar17 = vpand_avx(auVar10,_DAT_140117e50);
    if (dVar20 == DAT_140117f70) {
      auVar10._8_8_ = _UNK_140117ee8;
      auVar10._0_8_ = DAT_140117ee0;
      auVar10 = vpor_avx(auVar17,auVar10);
      auVar15._8_8_ = 0;
      auVar15._0_8_ = auVar10._0_8_ - DAT_140117ee0;
      auVar17 = vpsrlq_avx(auVar15,0x34);
      auVar10 = vpand_avx(auVar15,_DAT_140117e50);
      auVar18._4_12_ = _UNK_140117f84;
      auVar18._0_4_ = _DAT_140117f80;
      auVar17 = vpsubd_avx(auVar17,auVar18);
      auVar17 = vcvtdq2pd_avx(auVar17);
      dVar20 = auVar17._0_8_;
      auVar17 = auVar10;
    }
    auVar2._8_8_ = _UNK_140117e68;
    auVar2._0_8_ = _DAT_140117e60;
    auVar1 = vpand_avx(auVar10,auVar2);
    auVar3._8_8_ = _UNK_140117e78;
    auVar3._0_8_ = _DAT_140117e70;
    auVar18 = vpand_avx(auVar10,auVar3);
    auVar18 = vpsllq_avx(auVar18,1);
    auVar1 = vpaddq_avx(auVar18,auVar1);
    auVar19._8_8_ = 0;
    auVar19._0_8_ = dVar9 - DAT_140117ee0;
    auVar6._8_8_ = _UNK_140117fd8;
    auVar6._0_8_ = _DAT_140117fd0;
    auVar18 = vpand_avx(auVar19,auVar6);
    if (auVar18._0_8_ < DAT_140117f90) {
      dVar13 = auVar10._0_8_ - DAT_140117ee0;
      dVar14 = dVar13 / (DAT_140117ed0 + dVar13);
      dVar9 = dVar14 + dVar14;
      dVar20 = dVar9 * dVar9;
      dVar12 = dVar20 * dVar9;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = dVar13;
      auVar10 = vpand_avx(auVar11,_DAT_140118020);
      dVar16 = auVar10._0_8_;
      dVar9 = (((dVar20 * DAT_140117ff0 + DAT_140117fe0) * dVar12 +
               (dVar20 * DAT_140118010 + DAT_140118000) * dVar12 * dVar12 * dVar9) - dVar13 * dVar14
              ) + (dVar13 - dVar16);
      return dVar16 * DAT_140117ea0 + dVar9 * DAT_140117ea0 + dVar9 * DAT_140117e90 +
             dVar16 * DAT_140117e90;
    }
    uVar7 = auVar1._0_8_ >> 0x2c;
    auVar4._8_8_ = _UNK_140117ef8;
    auVar4._0_8_ = DAT_140117ef0;
    auVar10 = vpor_avx(auVar17,auVar4);
    auVar5._8_8_ = _UNK_140117ef8;
    auVar5._0_8_ = DAT_140117ef0;
    auVar17 = vpor_avx(auVar1,auVar5);
    dVar9 = (auVar17._0_8_ - auVar10._0_8_) * *(double *)(&DAT_1401130e0 + uVar7 * 8);
    dVar12 = dVar9 * dVar9;
    return dVar20 * DAT_140117eb0 + *(double *)(&DAT_140118040 + uVar7 * 8) +
           *(double *)(&DAT_140118850 + uVar7 * 8) +
           (dVar20 * DAT_140117ec0 -
           ((dVar9 * (dVar9 * DAT_140117f60 + DAT_140117f50) + DAT_140117f40) * dVar12 * dVar12 +
           (dVar9 * DAT_140117f30 + DAT_140117ef0) * dVar12 + dVar9) * DAT_140117e80);
  }
  if (dVar9 == 0.0) {
    dVar9 = (double)FUN_1400adaa0(dVar9,DAT_140117df0,DAT_140118030);
    return dVar9;
  }
LAB_1400b2ce0:
  dVar9 = (double)FUN_1400adaa0(dVar9,DAT_140117e10,DAT_140118034);
  return dVar9;
}

