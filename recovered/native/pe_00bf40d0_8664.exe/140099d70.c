/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140099d70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_140099d70(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong uVar5;
  ulonglong uVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 in_ZMM0 [64];
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  
  dVar7 = in_ZMM0._0_8_;
  auVar8 = in_ZMM0._0_16_;
  if (DAT_140143820 == 0) {
    if ((ulonglong)ABS(dVar7) < (ulonglong)DAT_14010e4c0) {
      dVar16 = (double)(int)(((ulonglong)dVar7 >> 0x34) - _DAT_14010e510);
      dVar10 = (double)((ulonglong)dVar7 & (ulonglong)DAT_14010e500);
      dVar9 = dVar7;
      if (dVar16 == DAT_14010e610) {
        dVar10 = (double)((ulonglong)dVar10 | (ulonglong)DAT_14010e560) - DAT_14010e560;
        dVar9 = (double)((ulonglong)dVar10 & (ulonglong)DAT_14010e500);
        dVar16 = (double)(int)((uint)((ulonglong)dVar10 >> 0x34) - _DAT_14010e620);
        dVar10 = dVar9;
      }
      uVar5 = ((ulonglong)dVar9 & _DAT_14010e530) + ((ulonglong)dVar9 & _DAT_14010e540) * 2;
      if ((double)((ulonglong)(dVar7 - DAT_14010e560) & _DAT_14010e640) < DAT_14010e630) {
        dVar7 = dVar7 - DAT_14010e560;
        dVar9 = dVar7 / (DAT_14010e550 + dVar7);
        dVar10 = dVar9 + dVar9;
        dVar16 = dVar10 * dVar10;
        dVar11 = dVar16 * dVar10;
        return dVar7 + (((DAT_14010e660 * dVar16 + DAT_14010e650) * dVar11 +
                        (DAT_14010e680 * dVar16 + DAT_14010e670) * dVar11 * dVar11 * dVar10) -
                       dVar7 * dVar9);
      }
      uVar6 = uVar5 >> 0x2c;
      if (0.0 < dVar7) {
        dVar9 = ((double)(uVar5 | (ulonglong)DAT_14010e590) -
                (double)((ulonglong)dVar10 | (ulonglong)DAT_14010e590)) *
                *(double *)(&DAT_1401130e0 + uVar6 * 8);
        dVar7 = dVar9 * dVar9;
        return *(double *)(&DAT_1401120c0 + uVar6 * 8) + DAT_14010e690 * dVar16 +
               *(double *)(&DAT_1401128d0 + uVar6 * 8) +
               (DAT_14010e6a0 * dVar16 -
               ((DAT_14010e5d0 * dVar9 + DAT_14010e5c0) * dVar7 + dVar9 +
               ((DAT_14010e600 * dVar9 + DAT_14010e5f0) * dVar9 + DAT_14010e5e0) * dVar7 * dVar7));
      }
      if (dVar7 == 0.0) {
        dVar7 = (double)FUN_1400ada80(dVar7,DAT_14010e4b0,DAT_14010e6b0);
        return dVar7;
      }
    }
    else {
      if (dVar7 == DAT_14010e4c0) {
        return dVar7;
      }
      if (dVar7 != DAT_14010e4b0) {
        return (double)((ulonglong)dVar7 | _DAT_14010e4e0);
      }
    }
    dVar7 = (double)FUN_1400ada80(dVar7,DAT_14010e4d0,DAT_14010e6b4);
    return dVar7;
  }
  auVar13 = vpsrlq_avx(auVar8,0x34);
  auVar1._8_8_ = _UNK_14010e518;
  auVar1._0_8_ = _DAT_14010e510;
  auVar13 = vpsubq_avx(auVar13,auVar1);
  auVar13 = vcvtdq2pd_avx(auVar13);
  dVar9 = auVar13._0_8_;
  auVar13._8_8_ = _UNK_14010e4c8;
  auVar13._0_8_ = DAT_14010e4c0;
  auVar13 = vpand_avx(auVar8,auVar13);
  if (auVar13._0_8_ == DAT_14010e4c0) {
    if (dVar7 != DAT_14010e4c0) {
      if (dVar7 == DAT_14010e4b0) goto LAB_14009a240;
      dVar7 = (double)FUN_1400ada80(dVar7,(ulonglong)dVar7 | _DAT_14010e4e0,DAT_14010e6b8);
    }
    return dVar7;
  }
  if (0.0 < dVar7) {
    auVar13 = vpand_avx(auVar8,_DAT_14010e500);
    if (dVar9 == DAT_14010e610) {
      auVar8._8_8_ = _UNK_14010e568;
      auVar8._0_8_ = DAT_14010e560;
      auVar8 = vpor_avx(auVar13,auVar8);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = auVar8._0_8_ - DAT_14010e560;
      auVar13 = vpsrlq_avx(auVar12,0x34);
      auVar8 = vpand_avx(auVar12,_DAT_14010e500);
      auVar14._4_12_ = _UNK_14010e624;
      auVar14._0_4_ = _DAT_14010e620;
      auVar13 = vpsubd_avx(auVar13,auVar14);
      auVar13 = vcvtdq2pd_avx(auVar13);
      dVar9 = auVar13._0_8_;
      auVar13 = auVar8;
    }
    auVar2._8_8_ = _UNK_14010e538;
    auVar2._0_8_ = _DAT_14010e530;
    auVar1 = vpand_avx(auVar8,auVar2);
    auVar3._8_8_ = _UNK_14010e548;
    auVar3._0_8_ = _DAT_14010e540;
    auVar14 = vpand_avx(auVar8,auVar3);
    auVar14 = vpsllq_avx(auVar14,1);
    auVar1 = vpaddq_avx(auVar14,auVar1);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = dVar7 - DAT_14010e560;
    auVar4._8_8_ = _UNK_14010e648;
    auVar4._0_8_ = _DAT_14010e640;
    auVar14 = vpand_avx(auVar15,auVar4);
    if (auVar14._0_8_ < DAT_14010e630) {
      dVar16 = auVar8._0_8_ - DAT_14010e560;
      dVar11 = dVar16 / (DAT_14010e550 + dVar16);
      dVar7 = dVar11 + dVar11;
      dVar9 = dVar7 * dVar7;
      dVar10 = dVar9 * dVar7;
      return dVar16 + (((dVar9 * DAT_14010e680 + DAT_14010e670) * dVar10 * dVar10 * dVar7 +
                       (dVar9 * DAT_14010e660 + DAT_14010e650) * dVar10) - dVar16 * dVar11);
    }
    uVar5 = auVar1._0_8_ >> 0x2c;
    auVar8 = vpor_avx(auVar13,_DAT_14010e590);
    auVar13 = vpor_avx(auVar1,_DAT_14010e590);
    dVar7 = (auVar13._0_8_ - auVar8._0_8_) * *(double *)(&DAT_1401130e0 + uVar5 * 8);
    dVar10 = dVar7 * dVar7;
    return dVar9 * DAT_14010e690 + *(double *)(&DAT_1401120c0 + uVar5 * 8) +
           *(double *)(&DAT_1401128d0 + uVar5 * 8) +
           (dVar9 * DAT_14010e6a0 -
           ((dVar7 * (dVar7 * DAT_14010e600 + DAT_14010e5f0) + DAT_14010e5e0) * dVar10 * dVar10 +
           (dVar7 * DAT_14010e5d0 + DAT_14010e5c0) * dVar10 + dVar7));
  }
  if (dVar7 == 0.0) {
    dVar7 = (double)FUN_1400ada80(dVar7,DAT_14010e4b0,DAT_14010e6b0);
    return dVar7;
  }
LAB_14009a240:
  dVar7 = (double)FUN_1400ada80(dVar7,DAT_14010e4d0,DAT_14010e6b4);
  return dVar7;
}

