/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802875a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1802875a0(undefined8 param_1,undefined8 param_2)

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
  if (DAT_1804218b4 == 0) {
    dVar7 = ABS(dVar8);
    if ((ulonglong)dVar7 < (ulonglong)DAT_180351d30) {
      dVar16 = (double)(int)(((ulonglong)dVar8 >> 0x34) - _DAT_180351d80);
      dVar11 = (double)((ulonglong)dVar8 & (ulonglong)DAT_180351d70);
      dVar10 = dVar8;
      if (dVar16 == DAT_180351e80) {
        dVar11 = (double)((ulonglong)dVar11 | (ulonglong)DAT_180351dd0) - DAT_180351dd0;
        dVar10 = (double)((ulonglong)dVar11 & (ulonglong)DAT_180351d70);
        dVar16 = (double)(int)((uint)((ulonglong)dVar11 >> 0x34) - _DAT_180351e90);
        dVar11 = dVar10;
      }
      uVar5 = ((ulonglong)dVar10 & _DAT_180351da0) + ((ulonglong)dVar10 & _DAT_180351db0) * 2;
      if ((double)((ulonglong)(dVar8 - DAT_180351dd0) & _DAT_180351eb0) < DAT_180351ea0) {
        dVar8 = dVar8 - DAT_180351dd0;
        dVar7 = dVar8 / (DAT_180351dc0 + dVar8);
        dVar10 = dVar7 + dVar7;
        dVar11 = dVar10 * dVar10;
        dVar16 = dVar11 * dVar10;
        return dVar8 + (((DAT_180351ed0 * dVar11 + DAT_180351ec0) * dVar16 +
                        (DAT_180351ef0 * dVar11 + DAT_180351ee0) * dVar16 * dVar16 * dVar10) -
                       dVar8 * dVar7);
      }
      uVar6 = uVar5 >> 0x2c;
      if (0.0 < dVar8) {
        dVar7 = ((double)(uVar5 | (ulonglong)DAT_180351e00) -
                (double)((ulonglong)dVar11 | (ulonglong)DAT_180351e00)) *
                *(double *)(&DAT_1803571b0 + uVar6 * 8);
        dVar8 = dVar7 * dVar7;
        return *(double *)(&DAT_180356190 + uVar6 * 8) + DAT_180351f00 * dVar16 +
               *(double *)(&DAT_1803569a0 + uVar6 * 8) +
               (DAT_180351f10 * dVar16 -
               ((DAT_180351e40 * dVar7 + DAT_180351e30) * dVar8 + dVar7 +
               ((DAT_180351e70 * dVar7 + DAT_180351e60) * dVar7 + DAT_180351e50) * dVar8 * dVar8));
      }
      if (dVar8 == 0.0) {
        dVar8 = (double)FUN_1802a0b70(dVar7,param_2,DAT_180351f20);
        return dVar8;
      }
    }
    else {
      if (dVar8 == DAT_180351d30) {
        return dVar8;
      }
      if (dVar8 != DAT_180351d20) {
        return (double)((ulonglong)dVar8 | _DAT_180351d50);
      }
    }
    dVar8 = (double)FUN_1802a0b70(dVar7,param_2,DAT_180351f24);
    return dVar8;
  }
  auVar13 = vpsrlq_avx(auVar9,0x34);
  auVar1._8_8_ = _UNK_180351d88;
  auVar1._0_8_ = _DAT_180351d80;
  auVar13 = vpsubq_avx(auVar13,auVar1);
  auVar13 = vcvtdq2pd_avx(auVar13);
  dVar7 = auVar13._0_8_;
  auVar13._8_8_ = _UNK_180351d38;
  auVar13._0_8_ = DAT_180351d30;
  auVar13 = vpand_avx(auVar9,auVar13);
  if (auVar13._0_8_ == DAT_180351d30) {
    if (dVar8 != DAT_180351d30) {
      if (dVar8 == DAT_180351d20) goto LAB_180287a70;
      dVar8 = (double)FUN_1802a0b70(param_1,(ulonglong)dVar8 | _DAT_180351d50,DAT_180351f28);
    }
    return dVar8;
  }
  if (0.0 < dVar8) {
    auVar13 = vpand_avx(auVar9,_DAT_180351d70);
    if (dVar7 == DAT_180351e80) {
      auVar9._8_8_ = _UNK_180351dd8;
      auVar9._0_8_ = DAT_180351dd0;
      auVar9 = vpor_avx(auVar13,auVar9);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = auVar9._0_8_ - DAT_180351dd0;
      auVar13 = vpsrlq_avx(auVar12,0x34);
      auVar9 = vpand_avx(auVar12,_DAT_180351d70);
      auVar14._4_12_ = _UNK_180351e94;
      auVar14._0_4_ = _DAT_180351e90;
      auVar13 = vpsubd_avx(auVar13,auVar14);
      auVar13 = vcvtdq2pd_avx(auVar13);
      dVar7 = auVar13._0_8_;
      auVar13 = auVar9;
    }
    auVar2._8_8_ = _UNK_180351da8;
    auVar2._0_8_ = _DAT_180351da0;
    auVar1 = vpand_avx(auVar9,auVar2);
    auVar3._8_8_ = _UNK_180351db8;
    auVar3._0_8_ = _DAT_180351db0;
    auVar14 = vpand_avx(auVar9,auVar3);
    auVar14 = vpsllq_avx(auVar14,1);
    auVar1 = vpaddq_avx(auVar14,auVar1);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = dVar8 - DAT_180351dd0;
    auVar4._8_8_ = _UNK_180351eb8;
    auVar4._0_8_ = _DAT_180351eb0;
    auVar14 = vpand_avx(auVar15,auVar4);
    if (auVar14._0_8_ < DAT_180351ea0) {
      dVar11 = auVar9._0_8_ - DAT_180351dd0;
      dVar16 = dVar11 / (DAT_180351dc0 + dVar11);
      dVar8 = dVar16 + dVar16;
      dVar7 = dVar8 * dVar8;
      dVar10 = dVar7 * dVar8;
      return dVar11 + (((dVar7 * DAT_180351ef0 + DAT_180351ee0) * dVar10 * dVar10 * dVar8 +
                       (dVar7 * DAT_180351ed0 + DAT_180351ec0) * dVar10) - dVar11 * dVar16);
    }
    uVar5 = auVar1._0_8_ >> 0x2c;
    auVar9 = vpor_avx(auVar13,_DAT_180351e00);
    auVar13 = vpor_avx(auVar1,_DAT_180351e00);
    dVar8 = (auVar13._0_8_ - auVar9._0_8_) * *(double *)(&DAT_1803571b0 + uVar5 * 8);
    dVar10 = dVar8 * dVar8;
    return dVar7 * DAT_180351f00 + *(double *)(&DAT_180356190 + uVar5 * 8) +
           *(double *)(&DAT_1803569a0 + uVar5 * 8) +
           (dVar7 * DAT_180351f10 -
           ((dVar8 * (dVar8 * DAT_180351e70 + DAT_180351e60) + DAT_180351e50) * dVar10 * dVar10 +
           (dVar8 * DAT_180351e40 + DAT_180351e30) * dVar10 + dVar8));
  }
  if (dVar8 == 0.0) {
    dVar8 = (double)FUN_1802a0b70(param_1,DAT_180351d20,DAT_180351f20);
    return dVar8;
  }
LAB_180287a70:
  dVar8 = (double)FUN_1802a0b70(param_1,DAT_180351d40,DAT_180351f24);
  return dVar8;
}

