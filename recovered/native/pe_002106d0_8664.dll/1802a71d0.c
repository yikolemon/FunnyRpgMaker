/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802a71d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1802a71d0(void)

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
  if (DAT_1804218b4 == 0) {
    if ((double)((ulonglong)dVar9 & (ulonglong)DAT_18035bed0) == DAT_18035bed0) {
      if (dVar9 == DAT_18035bed0) {
        return dVar9;
      }
      if (dVar9 != DAT_18035bec0) {
        return (double)((ulonglong)dVar9 | _DAT_18035bef0);
      }
    }
    else {
      dVar20 = (double)(int)(((ulonglong)dVar9 >> 0x34) - _DAT_18035bf00);
      if (0.0 < dVar9) {
        dVar13 = (double)((ulonglong)dVar9 & (ulonglong)DAT_18035bf20);
        dVar12 = dVar9;
        if (dVar20 == DAT_18035c040) {
          dVar20 = (double)((ulonglong)dVar13 | (ulonglong)DAT_18035bfb0) - DAT_18035bfb0;
          dVar12 = (double)((ulonglong)dVar20 & (ulonglong)DAT_18035bf20);
          dVar20 = (double)(int)((uint)((ulonglong)dVar20 >> 0x34) - _DAT_18035c050);
          dVar13 = dVar12;
        }
        uVar7 = ((ulonglong)dVar12 & _DAT_18035bf30) + ((ulonglong)dVar12 & _DAT_18035bf40) * 2;
        if ((double)((ulonglong)(dVar9 - DAT_18035bfb0) & _DAT_18035c0a0) < DAT_18035c060) {
          dVar9 = dVar9 - DAT_18035bfb0;
          dVar20 = dVar9 / (DAT_18035bfa0 + dVar9);
          dVar12 = dVar20 + dVar20;
          dVar13 = dVar12 * dVar12;
          dVar14 = dVar13 * dVar12;
          dVar16 = (double)((ulonglong)dVar9 & (ulonglong)DAT_18035c0f0);
          dVar9 = (((DAT_18035c0c0 * dVar13 + DAT_18035c0b0) * dVar14 +
                   (DAT_18035c0e0 * dVar13 + DAT_18035c0d0) * dVar14 * dVar14 * dVar12) -
                  dVar9 * dVar20) + (dVar9 - dVar16);
          return dVar16 * DAT_18035bf70 + dVar9 * DAT_18035bf70 + dVar9 * DAT_18035bf60 +
                 dVar16 * DAT_18035bf60;
        }
        uVar8 = uVar7 >> 0x2c;
        dVar12 = ((double)(uVar7 | (ulonglong)DAT_18035bfc0) -
                 (double)((ulonglong)dVar13 | (ulonglong)DAT_18035bfc0)) *
                 *(double *)(&DAT_1803571b0 + uVar8 * 8);
        dVar9 = dVar12 * dVar12;
        return *(double *)(&DAT_18035c110 + uVar8 * 8) + DAT_18035bf80 * dVar20 +
               *(double *)(&DAT_18035c920 + uVar8 * 8) +
               (DAT_18035bf90 * dVar20 -
               ((DAT_18035c000 * dVar12 + _DAT_18035bff0) * dVar9 + dVar12 +
               ((DAT_18035c030 * dVar12 + DAT_18035c020) * dVar12 + DAT_18035c010) * dVar9 * dVar9)
               * DAT_18035bf50);
      }
      if (dVar9 == 0.0) {
        dVar9 = (double)FUN_1802a0b90();
        return dVar9;
      }
    }
    dVar9 = (double)FUN_1802a0b90();
    return dVar9;
  }
  auVar17 = vpsrlq_avx(auVar10,0x34);
  auVar1._8_8_ = _UNK_18035bf08;
  auVar1._0_8_ = _DAT_18035bf00;
  auVar17 = vpsubq_avx(auVar17,auVar1);
  auVar17 = vcvtdq2pd_avx(auVar17);
  dVar20 = auVar17._0_8_;
  auVar17._8_8_ = _UNK_18035bed8;
  auVar17._0_8_ = DAT_18035bed0;
  auVar17 = vpand_avx(auVar10,auVar17);
  if (auVar17._0_8_ == DAT_18035bed0) {
    if (dVar9 != DAT_18035bed0) {
      if (dVar9 == DAT_18035bec0) goto LAB_1802a7720;
      dVar9 = (double)FUN_1802a0b90();
    }
    return dVar9;
  }
  if (0.0 < dVar9) {
    auVar17 = vpand_avx(auVar10,_DAT_18035bf20);
    if (dVar20 == DAT_18035c040) {
      auVar10._8_8_ = _UNK_18035bfb8;
      auVar10._0_8_ = DAT_18035bfb0;
      auVar10 = vpor_avx(auVar17,auVar10);
      auVar15._8_8_ = 0;
      auVar15._0_8_ = auVar10._0_8_ - DAT_18035bfb0;
      auVar17 = vpsrlq_avx(auVar15,0x34);
      auVar10 = vpand_avx(auVar15,_DAT_18035bf20);
      auVar18._4_12_ = _UNK_18035c054;
      auVar18._0_4_ = _DAT_18035c050;
      auVar17 = vpsubd_avx(auVar17,auVar18);
      auVar17 = vcvtdq2pd_avx(auVar17);
      dVar20 = auVar17._0_8_;
      auVar17 = auVar10;
    }
    auVar2._8_8_ = _UNK_18035bf38;
    auVar2._0_8_ = _DAT_18035bf30;
    auVar1 = vpand_avx(auVar10,auVar2);
    auVar3._8_8_ = _UNK_18035bf48;
    auVar3._0_8_ = _DAT_18035bf40;
    auVar18 = vpand_avx(auVar10,auVar3);
    auVar18 = vpsllq_avx(auVar18,1);
    auVar1 = vpaddq_avx(auVar18,auVar1);
    auVar19._8_8_ = 0;
    auVar19._0_8_ = dVar9 - DAT_18035bfb0;
    auVar6._8_8_ = _UNK_18035c0a8;
    auVar6._0_8_ = _DAT_18035c0a0;
    auVar18 = vpand_avx(auVar19,auVar6);
    if (auVar18._0_8_ < DAT_18035c060) {
      dVar13 = auVar10._0_8_ - DAT_18035bfb0;
      dVar14 = dVar13 / (DAT_18035bfa0 + dVar13);
      dVar9 = dVar14 + dVar14;
      dVar20 = dVar9 * dVar9;
      dVar12 = dVar20 * dVar9;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = dVar13;
      auVar10 = vpand_avx(auVar11,_DAT_18035c0f0);
      dVar16 = auVar10._0_8_;
      dVar9 = (((dVar20 * DAT_18035c0c0 + DAT_18035c0b0) * dVar12 +
               (dVar20 * DAT_18035c0e0 + DAT_18035c0d0) * dVar12 * dVar12 * dVar9) - dVar13 * dVar14
              ) + (dVar13 - dVar16);
      return dVar16 * DAT_18035bf70 + dVar9 * DAT_18035bf70 + dVar9 * DAT_18035bf60 +
             dVar16 * DAT_18035bf60;
    }
    uVar7 = auVar1._0_8_ >> 0x2c;
    auVar4._8_8_ = _UNK_18035bfc8;
    auVar4._0_8_ = DAT_18035bfc0;
    auVar10 = vpor_avx(auVar17,auVar4);
    auVar5._8_8_ = _UNK_18035bfc8;
    auVar5._0_8_ = DAT_18035bfc0;
    auVar17 = vpor_avx(auVar1,auVar5);
    dVar9 = (auVar17._0_8_ - auVar10._0_8_) * *(double *)(&DAT_1803571b0 + uVar7 * 8);
    dVar12 = dVar9 * dVar9;
    return dVar20 * DAT_18035bf80 + *(double *)(&DAT_18035c110 + uVar7 * 8) +
           *(double *)(&DAT_18035c920 + uVar7 * 8) +
           (dVar20 * DAT_18035bf90 -
           ((dVar9 * (dVar9 * DAT_18035c030 + DAT_18035c020) + DAT_18035c010) * dVar12 * dVar12 +
           (dVar9 * DAT_18035c000 + DAT_18035bfc0) * dVar12 + dVar9) * DAT_18035bf50);
  }
  if (dVar9 == 0.0) {
    dVar9 = (double)FUN_1802a0b90();
    return dVar9;
  }
LAB_1802a7720:
  dVar9 = (double)FUN_1802a0b90();
  return dVar9;
}

