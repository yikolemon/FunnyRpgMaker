/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404b86a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1404b86a0(void)

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
  if (DAT_140632d84 == 0) {
    if ((double)((ulonglong)dVar9 & (ulonglong)DAT_14056d3a0) == DAT_14056d3a0) {
      if (dVar9 == DAT_14056d3a0) {
        return dVar9;
      }
      if (dVar9 != DAT_14056d390) {
        return (double)((ulonglong)dVar9 | _DAT_14056d3c0);
      }
    }
    else {
      dVar20 = (double)(int)(((ulonglong)dVar9 >> 0x34) - _DAT_14056d3d0);
      if (0.0 < dVar9) {
        dVar13 = (double)((ulonglong)dVar9 & (ulonglong)DAT_14056d3f0);
        dVar12 = dVar9;
        if (dVar20 == DAT_14056d510) {
          dVar20 = (double)((ulonglong)dVar13 | (ulonglong)DAT_14056d480) - DAT_14056d480;
          dVar12 = (double)((ulonglong)dVar20 & (ulonglong)DAT_14056d3f0);
          dVar20 = (double)(int)((uint)((ulonglong)dVar20 >> 0x34) - _DAT_14056d520);
          dVar13 = dVar12;
        }
        uVar7 = ((ulonglong)dVar12 & _DAT_14056d400) + ((ulonglong)dVar12 & _DAT_14056d410) * 2;
        if ((double)((ulonglong)(dVar9 - DAT_14056d480) & _DAT_14056d570) < DAT_14056d530) {
          dVar9 = dVar9 - DAT_14056d480;
          dVar20 = dVar9 / (DAT_14056d470 + dVar9);
          dVar12 = dVar20 + dVar20;
          dVar13 = dVar12 * dVar12;
          dVar14 = dVar13 * dVar12;
          dVar16 = (double)((ulonglong)dVar9 & (ulonglong)DAT_14056d5c0);
          dVar9 = (((DAT_14056d590 * dVar13 + DAT_14056d580) * dVar14 +
                   (DAT_14056d5b0 * dVar13 + DAT_14056d5a0) * dVar14 * dVar14 * dVar12) -
                  dVar9 * dVar20) + (dVar9 - dVar16);
          return dVar16 * DAT_14056d440 + dVar9 * DAT_14056d440 + dVar9 * DAT_14056d430 +
                 dVar16 * DAT_14056d430;
        }
        uVar8 = uVar7 >> 0x2c;
        dVar12 = ((double)(uVar7 | (ulonglong)DAT_14056d490) -
                 (double)((ulonglong)dVar13 | (ulonglong)DAT_14056d490)) *
                 *(double *)(&DAT_140568680 + uVar8 * 8);
        dVar9 = dVar12 * dVar12;
        return *(double *)(&DAT_14056d5e0 + uVar8 * 8) + DAT_14056d450 * dVar20 +
               *(double *)(&DAT_14056ddf0 + uVar8 * 8) +
               (DAT_14056d460 * dVar20 -
               ((DAT_14056d4d0 * dVar12 + _DAT_14056d4c0) * dVar9 + dVar12 +
               ((DAT_14056d500 * dVar12 + DAT_14056d4f0) * dVar12 + DAT_14056d4e0) * dVar9 * dVar9)
               * DAT_14056d420);
      }
      if (dVar9 == 0.0) {
        dVar9 = (double)FUN_1404b2060();
        return dVar9;
      }
    }
    dVar9 = (double)FUN_1404b2060();
    return dVar9;
  }
  auVar17 = vpsrlq_avx(auVar10,0x34);
  auVar1._8_8_ = _UNK_14056d3d8;
  auVar1._0_8_ = _DAT_14056d3d0;
  auVar17 = vpsubq_avx(auVar17,auVar1);
  auVar17 = vcvtdq2pd_avx(auVar17);
  dVar20 = auVar17._0_8_;
  auVar17._8_8_ = _UNK_14056d3a8;
  auVar17._0_8_ = DAT_14056d3a0;
  auVar17 = vpand_avx(auVar10,auVar17);
  if (auVar17._0_8_ == DAT_14056d3a0) {
    if (dVar9 != DAT_14056d3a0) {
      if (dVar9 == DAT_14056d390) goto LAB_1404b8bf0;
      dVar9 = (double)FUN_1404b2060();
    }
    return dVar9;
  }
  if (0.0 < dVar9) {
    auVar17 = vpand_avx(auVar10,_DAT_14056d3f0);
    if (dVar20 == DAT_14056d510) {
      auVar10._8_8_ = _UNK_14056d488;
      auVar10._0_8_ = DAT_14056d480;
      auVar10 = vpor_avx(auVar17,auVar10);
      auVar15._8_8_ = 0;
      auVar15._0_8_ = auVar10._0_8_ - DAT_14056d480;
      auVar17 = vpsrlq_avx(auVar15,0x34);
      auVar10 = vpand_avx(auVar15,_DAT_14056d3f0);
      auVar18._4_12_ = _UNK_14056d524;
      auVar18._0_4_ = _DAT_14056d520;
      auVar17 = vpsubd_avx(auVar17,auVar18);
      auVar17 = vcvtdq2pd_avx(auVar17);
      dVar20 = auVar17._0_8_;
      auVar17 = auVar10;
    }
    auVar2._8_8_ = _UNK_14056d408;
    auVar2._0_8_ = _DAT_14056d400;
    auVar1 = vpand_avx(auVar10,auVar2);
    auVar3._8_8_ = _UNK_14056d418;
    auVar3._0_8_ = _DAT_14056d410;
    auVar18 = vpand_avx(auVar10,auVar3);
    auVar18 = vpsllq_avx(auVar18,1);
    auVar1 = vpaddq_avx(auVar18,auVar1);
    auVar19._8_8_ = 0;
    auVar19._0_8_ = dVar9 - DAT_14056d480;
    auVar6._8_8_ = _UNK_14056d578;
    auVar6._0_8_ = _DAT_14056d570;
    auVar18 = vpand_avx(auVar19,auVar6);
    if (auVar18._0_8_ < DAT_14056d530) {
      dVar13 = auVar10._0_8_ - DAT_14056d480;
      dVar14 = dVar13 / (DAT_14056d470 + dVar13);
      dVar9 = dVar14 + dVar14;
      dVar20 = dVar9 * dVar9;
      dVar12 = dVar20 * dVar9;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = dVar13;
      auVar10 = vpand_avx(auVar11,_DAT_14056d5c0);
      dVar16 = auVar10._0_8_;
      dVar9 = (((dVar20 * DAT_14056d590 + DAT_14056d580) * dVar12 +
               (dVar20 * DAT_14056d5b0 + DAT_14056d5a0) * dVar12 * dVar12 * dVar9) - dVar13 * dVar14
              ) + (dVar13 - dVar16);
      return dVar16 * DAT_14056d440 + dVar9 * DAT_14056d440 + dVar9 * DAT_14056d430 +
             dVar16 * DAT_14056d430;
    }
    uVar7 = auVar1._0_8_ >> 0x2c;
    auVar4._8_8_ = _UNK_14056d498;
    auVar4._0_8_ = DAT_14056d490;
    auVar10 = vpor_avx(auVar17,auVar4);
    auVar5._8_8_ = _UNK_14056d498;
    auVar5._0_8_ = DAT_14056d490;
    auVar17 = vpor_avx(auVar1,auVar5);
    dVar9 = (auVar17._0_8_ - auVar10._0_8_) * *(double *)(&DAT_140568680 + uVar7 * 8);
    dVar12 = dVar9 * dVar9;
    return dVar20 * DAT_14056d450 + *(double *)(&DAT_14056d5e0 + uVar7 * 8) +
           *(double *)(&DAT_14056ddf0 + uVar7 * 8) +
           (dVar20 * DAT_14056d460 -
           ((dVar9 * (dVar9 * DAT_14056d500 + DAT_14056d4f0) + DAT_14056d4e0) * dVar12 * dVar12 +
           (dVar9 * DAT_14056d4d0 + DAT_14056d490) * dVar12 + dVar9) * DAT_14056d420);
  }
  if (dVar9 == 0.0) {
    dVar9 = (double)FUN_1404b2060();
    return dVar9;
  }
LAB_1404b8bf0:
  dVar9 = (double)FUN_1404b2060();
  return dVar9;
}

