/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401a5490 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1401a5490(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong uVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 in_ZMM0 [64];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  
  dVar8 = in_ZMM0._0_8_;
  auVar9 = in_ZMM0._0_16_;
  if (DAT_140f33260 == 0) {
    dVar7 = ABS(dVar8);
    if ((ulonglong)dVar7 < (ulonglong)DAT_140eb6010) {
      dVar16 = (double)(int)(((ulonglong)dVar8 >> 0x34) - _DAT_140eb6060);
      dVar11 = (double)((ulonglong)dVar8 & (ulonglong)DAT_140eb6050);
      dVar10 = dVar8;
      if (dVar16 == DAT_140eb6160) {
        dVar11 = (double)((ulonglong)dVar11 | (ulonglong)DAT_140eb60b0) - DAT_140eb60b0;
        dVar10 = (double)((ulonglong)dVar11 & (ulonglong)DAT_140eb6050);
        dVar16 = (double)(int)((uint)((ulonglong)dVar11 >> 0x34) - _DAT_140eb6170);
        dVar11 = dVar10;
      }
      uVar5 = ((ulonglong)dVar10 & _DAT_140eb6080) + ((ulonglong)dVar10 & _DAT_140eb6090) * 2;
      if ((double)((ulonglong)(dVar8 - DAT_140eb60b0) & _DAT_140eb6190) < DAT_140eb6180) {
        dVar8 = dVar8 - DAT_140eb60b0;
        dVar7 = dVar8 / (DAT_140eb60a0 + dVar8);
        dVar10 = dVar7 + dVar7;
        dVar11 = dVar10 * dVar10;
        dVar16 = dVar11 * dVar10;
        return dVar8 + (((DAT_140eb61b0 * dVar11 + DAT_140eb61a0) * dVar16 +
                        (DAT_140eb61d0 * dVar11 + DAT_140eb61c0) * dVar16 * dVar16 * dVar10) -
                       dVar8 * dVar7);
      }
      uVar6 = uVar5 >> 0x2c;
      if (0.0 < dVar8) {
        dVar7 = ((double)(uVar5 | (ulonglong)DAT_140eb60e0) -
                (double)((ulonglong)dVar11 | (ulonglong)DAT_140eb60e0)) *
                *(double *)(&DAT_140ebb480 + uVar6 * 8);
        dVar8 = dVar7 * dVar7;
        return *(double *)(&DAT_140eba460 + uVar6 * 8) + DAT_140eb61e0 * dVar16 +
               *(double *)(&DAT_140ebac70 + uVar6 * 8) +
               (DAT_140eb61f0 * dVar16 -
               ((DAT_140eb6120 * dVar7 + DAT_140eb6110) * dVar8 + dVar7 +
               ((DAT_140eb6150 * dVar7 + DAT_140eb6140) * dVar7 + DAT_140eb6130) * dVar8 * dVar8));
      }
      if (dVar8 == 0.0) {
        dVar8 = (double)FUN_1401bdd80(dVar7,param_2,DAT_140eb6200);
        return dVar8;
      }
    }
    else {
      if (dVar8 == DAT_140eb6010) {
        return dVar8;
      }
      if (dVar8 != DAT_140eb6000) {
        return (double)((ulonglong)dVar8 | _DAT_140eb6030);
      }
    }
    dVar8 = (double)FUN_1401bdd80(dVar7,param_2,DAT_140eb6204);
    return dVar8;
  }
  auVar13 = vpsrlq_avx(auVar9,0x34);
  auVar1._8_8_ = _UNK_140eb6068;
  auVar1._0_8_ = _DAT_140eb6060;
  auVar13 = vpsubq_avx(auVar13,auVar1);
  auVar13 = vcvtdq2pd_avx(auVar13);
  dVar7 = auVar13._0_8_;
  auVar13._8_8_ = _UNK_140eb6018;
  auVar13._0_8_ = DAT_140eb6010;
  auVar13 = vpand_avx(auVar9,auVar13);
  if (auVar13._0_8_ == DAT_140eb6010) {
    if (dVar8 != DAT_140eb6010) {
      if (dVar8 == DAT_140eb6000) goto LAB_1401a5960;
      dVar8 = (double)FUN_1401bdd80(param_1,(ulonglong)dVar8 | _DAT_140eb6030,DAT_140eb6208);
    }
    return dVar8;
  }
  if (0.0 < dVar8) {
    auVar13 = vpand_avx(auVar9,_DAT_140eb6050);
    if (dVar7 == DAT_140eb6160) {
      auVar9._8_8_ = _UNK_140eb60b8;
      auVar9._0_8_ = DAT_140eb60b0;
      auVar9 = vpor_avx(auVar13,auVar9);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = auVar9._0_8_ - DAT_140eb60b0;
      auVar13 = vpsrlq_avx(auVar12,0x34);
      auVar9 = vpand_avx(auVar12,_DAT_140eb6050);
      auVar14._4_12_ = _UNK_140eb6174;
      auVar14._0_4_ = _DAT_140eb6170;
      auVar13 = vpsubd_avx(auVar13,auVar14);
      auVar13 = vcvtdq2pd_avx(auVar13);
      dVar7 = auVar13._0_8_;
      auVar13 = auVar9;
    }
    auVar2._8_8_ = _UNK_140eb6088;
    auVar2._0_8_ = _DAT_140eb6080;
    auVar1 = vpand_avx(auVar9,auVar2);
    auVar3._8_8_ = _UNK_140eb6098;
    auVar3._0_8_ = _DAT_140eb6090;
    auVar14 = vpand_avx(auVar9,auVar3);
    auVar14 = vpsllq_avx(auVar14,1);
    auVar1 = vpaddq_avx(auVar14,auVar1);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = dVar8 - DAT_140eb60b0;
    auVar4._8_8_ = _UNK_140eb6198;
    auVar4._0_8_ = _DAT_140eb6190;
    auVar14 = vpand_avx(auVar15,auVar4);
    if (auVar14._0_8_ < DAT_140eb6180) {
      dVar11 = auVar9._0_8_ - DAT_140eb60b0;
      dVar16 = dVar11 / (DAT_140eb60a0 + dVar11);
      dVar8 = dVar16 + dVar16;
      dVar7 = dVar8 * dVar8;
      dVar10 = dVar7 * dVar8;
      return dVar11 + (((dVar7 * DAT_140eb61d0 + DAT_140eb61c0) * dVar10 * dVar10 * dVar8 +
                       (dVar7 * DAT_140eb61b0 + DAT_140eb61a0) * dVar10) - dVar11 * dVar16);
    }
    uVar5 = auVar1._0_8_ >> 0x2c;
    auVar9 = vpor_avx(auVar13,_DAT_140eb60e0);
    auVar13 = vpor_avx(auVar1,_DAT_140eb60e0);
    dVar8 = (auVar13._0_8_ - auVar9._0_8_) * *(double *)(&DAT_140ebb480 + uVar5 * 8);
    dVar10 = dVar8 * dVar8;
    return dVar7 * DAT_140eb61e0 + *(double *)(&DAT_140eba460 + uVar5 * 8) +
           *(double *)(&DAT_140ebac70 + uVar5 * 8) +
           (dVar7 * DAT_140eb61f0 -
           ((dVar8 * (dVar8 * DAT_140eb6150 + DAT_140eb6140) + DAT_140eb6130) * dVar10 * dVar10 +
           (dVar8 * DAT_140eb6120 + DAT_140eb6110) * dVar10 + dVar8));
  }
  if (dVar8 == 0.0) {
    dVar8 = (double)FUN_1401bdd80(param_1,DAT_140eb6000,DAT_140eb6200);
    return dVar8;
  }
LAB_1401a5960:
  dVar8 = (double)FUN_1401bdd80(param_1,DAT_140eb6020,DAT_140eb6204);
  return dVar8;
}

