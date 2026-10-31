/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140495a60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140495a60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 uVar13;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 extraout_var [56];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 in_ZMM0 [64];
  undefined1 auVar14 [16];
  double dVar15;
  ulonglong uVar16;
  double dVar17;
  
  fVar4 = in_ZMM0._0_4_;
  auVar7._8_56_ = in_ZMM0._8_56_;
  auVar8._16_48_ = in_ZMM0._16_48_;
  if (DAT_140632d84 != 0) {
    fVar2 = ABS(fVar4);
    if (0x7f7fffff < (uint)fVar2) {
      uVar16 = FUN_1404aec50();
      return uVar16;
    }
    dVar17 = (double)fVar4;
    dVar3 = ABS(dVar17);
    if (0x3f490fdb < (uint)fVar2) {
      if ((uint)fVar2 < 0x4f490fdb) {
        auVar14._0_4_ =
             (int)((double)((ulonglong)dVar3 & _DAT_140562ff0) * DAT_140562f60 + DAT_140562f50);
        auVar14._4_4_ = (int)_UNK_140562f68;
        auVar14._8_8_ = 0;
        auVar14 = vpmovsxdq_avx(auVar14);
        uVar16 = auVar14._0_8_ & _DAT_140563000;
        auVar14 = vshufps_avx(auVar14,auVar14,8);
        auVar14 = vcvtdq2pd_avx(auVar14);
        dVar17 = (-(auVar14._0_8_ * DAT_140562f90) + dVar3) - auVar14._0_8_ * DAT_140562fa0;
        uVar13 = 0;
      }
      else if ((uint)fVar2 < 0x4f490fdb) {
        uVar16 = FUN_1404aea70(dVar3);
        dVar17 = extraout_XMM0_Qa_00;
        uVar13 = extraout_XMM0_Qb;
      }
      else {
        uVar16 = FUN_1404ae880();
        dVar17 = extraout_XMM0_Qa_01;
        uVar13 = extraout_XMM0_Qb_00;
      }
      if ((uVar16 & 1) == 0) {
        dVar17 = dVar17 * dVar17;
        dVar17 = (dVar17 * (dVar17 * (dVar17 * DAT_140566e30 + DAT_140566e28) + DAT_140566e20) +
                 DAT_140566e18) * dVar17 * dVar17 + (DAT_140562f40 - dVar17 * DAT_140562f50);
        uVar13 = 0;
      }
      else {
        dVar3 = dVar17 * dVar17;
        dVar17 = (dVar3 * (dVar3 * (dVar3 * DAT_140566e58 + DAT_140566e50) + DAT_140566e48) +
                 DAT_140566e40) * dVar17 * dVar3 + dVar17;
      }
      auVar5._0_8_ = (double)((ulonglong)dVar17 ^ (uVar16 + 1 >> 1) << 0x3f);
      auVar5._8_8_ = uVar13;
      auVar6._0_4_ = (float)auVar5._0_8_;
      auVar6._4_12_ = auVar5._4_12_;
      return auVar6._0_8_;
    }
    if (0x3bffffff < (uint)fVar2) {
      dVar17 = dVar17 * dVar17;
      dVar17 = (dVar17 * (dVar17 * (dVar17 * DAT_140566e30 + DAT_140566e28) + DAT_140566e20) +
               DAT_140566e18) * dVar17 * dVar17 + (DAT_140562f40 - dVar17 * DAT_140562f50);
      return CONCAT44((int)((ulonglong)dVar17 >> 0x20),(float)dVar17);
    }
    if ((uint)fVar2 < 0x39000000) {
      return (ulonglong)DAT_140563048;
    }
    dVar17 = -(dVar17 * dVar17 * DAT_140562f50) + DAT_140562f40;
    return CONCAT44((int)((ulonglong)dVar17 >> 0x20),(float)dVar17);
  }
  fVar2 = ABS(fVar4);
  if (0x7f7fffff < (uint)fVar2) {
    uVar16 = FUN_1404aec50();
    return uVar16;
  }
  auVar7._0_8_ = (double)fVar4;
  dVar17 = ABS(auVar7._0_8_);
  if ((uint)fVar2 < 0x3f490fdc) {
    uVar1 = 0;
  }
  else if ((uint)fVar2 < 0x48f42400) {
    uVar1 = (uint)(dVar17 * DAT_140562f60 + DAT_140562f50);
    dVar3 = (double)(int)uVar1;
    dVar15 = dVar17 - DAT_140562f90 * dVar3;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = dVar15;
    auVar7._8_56_ = auVar8._8_56_;
    auVar7._0_8_ = dVar15 - DAT_140562fa0 * dVar3;
    uVar16 = (ulonglong)ABS(auVar7._0_8_) >> 0x34;
    if (0xf < (longlong)(((ulonglong)dVar17 >> 0x34) - uVar16)) {
      dVar17 = dVar15 - DAT_140562fb0 * dVar3;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = dVar17;
      auVar9._16_48_ = auVar8._16_48_;
      auVar7._8_56_ = auVar9._8_56_;
      auVar7._0_8_ = dVar17 - (DAT_140562fc0 * dVar3 - ((dVar15 - dVar17) - DAT_140562fb0 * dVar3));
    }
    if (uVar16 < 0x3f2) {
      auVar10._16_48_ = auVar7._16_48_;
      if (uVar16 < 0x3df) {
        if ((uVar1 & 1) == 0) {
          auVar7._8_8_ = 0;
          auVar7._0_8_ = DAT_140562f40;
          auVar7._16_48_ = auVar10._16_48_;
        }
      }
      else {
        dVar17 = auVar7._0_8_;
        if ((uVar1 & 1) == 0) {
          auVar10._8_8_ = 0;
          auVar10._0_8_ = DAT_140562f40;
          auVar7._8_56_ = auVar10._8_56_;
          auVar7._0_8_ = DAT_140562f40 - dVar17 * dVar17 * DAT_140562f50;
        }
        else {
          auVar7._0_8_ = dVar17 - DAT_140562f70 * dVar17 * dVar17 * dVar17;
        }
      }
      goto LAB_140495a34;
    }
  }
  else {
    uVar1 = FUN_1404aed00(param_1,auVar7._0_8_,1,param_4,auVar7._0_8_);
    auVar7._8_56_ = extraout_var;
    auVar7._0_8_ = (double)extraout_XMM0_Qa;
  }
  dVar17 = auVar7._0_8_;
  dVar3 = dVar17 * dVar17;
  if ((uVar1 & 1) == 0) {
    auVar11._16_48_ = auVar7._16_48_;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = DAT_140566e10;
    auVar7._8_56_ = auVar11._8_56_;
    auVar7._0_8_ = DAT_140566e10 * dVar3 + DAT_140562f40 +
                   ((DAT_140566e30 * dVar3 + DAT_140566e28) * dVar3 * dVar3 +
                   DAT_140566e20 * dVar3 + DAT_140566e18) * dVar3 * dVar3;
  }
  else {
    auVar7._0_8_ = dVar17 + ((DAT_140566e58 * dVar3 + DAT_140566e50) * dVar3 * dVar3 +
                            DAT_140566e48 * dVar3 + DAT_140566e40) * dVar17 * dVar3;
  }
LAB_140495a34:
  if ((uVar1 + 1 & 2) != 0) {
    dVar17 = auVar7._0_8_;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = 0.0 - dVar17;
  }
  auVar12._4_60_ = auVar7._4_60_;
  auVar12._0_4_ = (float)auVar7._0_8_;
  return auVar12._0_8_;
}

