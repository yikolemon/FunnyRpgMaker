/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401c4190 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1401c4190(void)

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
  if (DAT_140f33260 == 0) {
    if ((double)((ulonglong)dVar9 & (ulonglong)DAT_140ec01a0) == DAT_140ec01a0) {
      if (dVar9 == DAT_140ec01a0) {
        return dVar9;
      }
      if (dVar9 != DAT_140ec0190) {
        return (double)((ulonglong)dVar9 | _DAT_140ec01c0);
      }
    }
    else {
      dVar20 = (double)(int)(((ulonglong)dVar9 >> 0x34) - _DAT_140ec01d0);
      if (0.0 < dVar9) {
        dVar13 = (double)((ulonglong)dVar9 & (ulonglong)DAT_140ec01f0);
        dVar12 = dVar9;
        if (dVar20 == DAT_140ec0310) {
          dVar20 = (double)((ulonglong)dVar13 | (ulonglong)DAT_140ec0280) - DAT_140ec0280;
          dVar12 = (double)((ulonglong)dVar20 & (ulonglong)DAT_140ec01f0);
          dVar20 = (double)(int)((uint)((ulonglong)dVar20 >> 0x34) - _DAT_140ec0320);
          dVar13 = dVar12;
        }
        uVar7 = ((ulonglong)dVar12 & _DAT_140ec0200) + ((ulonglong)dVar12 & _DAT_140ec0210) * 2;
        if ((double)((ulonglong)(dVar9 - DAT_140ec0280) & _DAT_140ec0370) < DAT_140ec0330) {
          dVar9 = dVar9 - DAT_140ec0280;
          dVar20 = dVar9 / (DAT_140ec0270 + dVar9);
          dVar12 = dVar20 + dVar20;
          dVar13 = dVar12 * dVar12;
          dVar14 = dVar13 * dVar12;
          dVar16 = (double)((ulonglong)dVar9 & (ulonglong)DAT_140ec03c0);
          dVar9 = (((DAT_140ec0390 * dVar13 + DAT_140ec0380) * dVar14 +
                   (DAT_140ec03b0 * dVar13 + DAT_140ec03a0) * dVar14 * dVar14 * dVar12) -
                  dVar9 * dVar20) + (dVar9 - dVar16);
          return dVar16 * DAT_140ec0240 + dVar9 * DAT_140ec0240 + dVar9 * DAT_140ec0230 +
                 dVar16 * DAT_140ec0230;
        }
        uVar8 = uVar7 >> 0x2c;
        dVar12 = ((double)(uVar7 | (ulonglong)DAT_140ec0290) -
                 (double)((ulonglong)dVar13 | (ulonglong)DAT_140ec0290)) *
                 *(double *)(&DAT_140ebb480 + uVar8 * 8);
        dVar9 = dVar12 * dVar12;
        return *(double *)(&DAT_140ec03e0 + uVar8 * 8) + DAT_140ec0250 * dVar20 +
               *(double *)(&DAT_140ec0bf0 + uVar8 * 8) +
               (DAT_140ec0260 * dVar20 -
               ((DAT_140ec02d0 * dVar12 + _DAT_140ec02c0) * dVar9 + dVar12 +
               ((DAT_140ec0300 * dVar12 + DAT_140ec02f0) * dVar12 + DAT_140ec02e0) * dVar9 * dVar9)
               * DAT_140ec0220);
      }
      if (dVar9 == 0.0) {
        dVar9 = (double)FUN_1401bdda0();
        return dVar9;
      }
    }
    dVar9 = (double)FUN_1401bdda0();
    return dVar9;
  }
  auVar17 = vpsrlq_avx(auVar10,0x34);
  auVar1._8_8_ = _UNK_140ec01d8;
  auVar1._0_8_ = _DAT_140ec01d0;
  auVar17 = vpsubq_avx(auVar17,auVar1);
  auVar17 = vcvtdq2pd_avx(auVar17);
  dVar20 = auVar17._0_8_;
  auVar17._8_8_ = _UNK_140ec01a8;
  auVar17._0_8_ = DAT_140ec01a0;
  auVar17 = vpand_avx(auVar10,auVar17);
  if (auVar17._0_8_ == DAT_140ec01a0) {
    if (dVar9 != DAT_140ec01a0) {
      if (dVar9 == DAT_140ec0190) goto LAB_1401c46e0;
      dVar9 = (double)FUN_1401bdda0();
    }
    return dVar9;
  }
  if (0.0 < dVar9) {
    auVar17 = vpand_avx(auVar10,_DAT_140ec01f0);
    if (dVar20 == DAT_140ec0310) {
      auVar10._8_8_ = _UNK_140ec0288;
      auVar10._0_8_ = DAT_140ec0280;
      auVar10 = vpor_avx(auVar17,auVar10);
      auVar15._8_8_ = 0;
      auVar15._0_8_ = auVar10._0_8_ - DAT_140ec0280;
      auVar17 = vpsrlq_avx(auVar15,0x34);
      auVar10 = vpand_avx(auVar15,_DAT_140ec01f0);
      auVar18._4_12_ = _UNK_140ec0324;
      auVar18._0_4_ = _DAT_140ec0320;
      auVar17 = vpsubd_avx(auVar17,auVar18);
      auVar17 = vcvtdq2pd_avx(auVar17);
      dVar20 = auVar17._0_8_;
      auVar17 = auVar10;
    }
    auVar2._8_8_ = _UNK_140ec0208;
    auVar2._0_8_ = _DAT_140ec0200;
    auVar1 = vpand_avx(auVar10,auVar2);
    auVar3._8_8_ = _UNK_140ec0218;
    auVar3._0_8_ = _DAT_140ec0210;
    auVar18 = vpand_avx(auVar10,auVar3);
    auVar18 = vpsllq_avx(auVar18,1);
    auVar1 = vpaddq_avx(auVar18,auVar1);
    auVar19._8_8_ = 0;
    auVar19._0_8_ = dVar9 - DAT_140ec0280;
    auVar6._8_8_ = _UNK_140ec0378;
    auVar6._0_8_ = _DAT_140ec0370;
    auVar18 = vpand_avx(auVar19,auVar6);
    if (auVar18._0_8_ < DAT_140ec0330) {
      dVar13 = auVar10._0_8_ - DAT_140ec0280;
      dVar14 = dVar13 / (DAT_140ec0270 + dVar13);
      dVar9 = dVar14 + dVar14;
      dVar20 = dVar9 * dVar9;
      dVar12 = dVar20 * dVar9;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = dVar13;
      auVar10 = vpand_avx(auVar11,_DAT_140ec03c0);
      dVar16 = auVar10._0_8_;
      dVar9 = (((dVar20 * DAT_140ec0390 + DAT_140ec0380) * dVar12 +
               (dVar20 * DAT_140ec03b0 + DAT_140ec03a0) * dVar12 * dVar12 * dVar9) - dVar13 * dVar14
              ) + (dVar13 - dVar16);
      return dVar16 * DAT_140ec0240 + dVar9 * DAT_140ec0240 + dVar9 * DAT_140ec0230 +
             dVar16 * DAT_140ec0230;
    }
    uVar7 = auVar1._0_8_ >> 0x2c;
    auVar4._8_8_ = _UNK_140ec0298;
    auVar4._0_8_ = DAT_140ec0290;
    auVar10 = vpor_avx(auVar17,auVar4);
    auVar5._8_8_ = _UNK_140ec0298;
    auVar5._0_8_ = DAT_140ec0290;
    auVar17 = vpor_avx(auVar1,auVar5);
    dVar9 = (auVar17._0_8_ - auVar10._0_8_) * *(double *)(&DAT_140ebb480 + uVar7 * 8);
    dVar12 = dVar9 * dVar9;
    return dVar20 * DAT_140ec0250 + *(double *)(&DAT_140ec03e0 + uVar7 * 8) +
           *(double *)(&DAT_140ec0bf0 + uVar7 * 8) +
           (dVar20 * DAT_140ec0260 -
           ((dVar9 * (dVar9 * DAT_140ec0300 + DAT_140ec02f0) + DAT_140ec02e0) * dVar12 * dVar12 +
           (dVar9 * DAT_140ec02d0 + DAT_140ec0290) * dVar12 + dVar9) * DAT_140ec0220);
  }
  if (dVar9 == 0.0) {
    dVar9 = (double)FUN_1401bdda0();
    return dVar9;
  }
LAB_1401c46e0:
  dVar9 = (double)FUN_1401bdda0();
  return dVar9;
}

