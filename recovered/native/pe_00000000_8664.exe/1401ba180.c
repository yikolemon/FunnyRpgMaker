/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401ba180 */

ulonglong FUN_1401ba180(float param_1,float param_2)

{
  bool bVar1;
  undefined1 auVar2 [12];
  uint uVar3;
  double dVar4;
  int iVar5;
  ulonglong uVar6;
  double dVar7;
  ulonglong uVar8;
  undefined8 in_XMM0_Qb;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 in_XMM1_Qb;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar23 [64];
  undefined1 auVar26 [64];
  
  auVar24._0_8_ = (double)param_2;
  auVar24._8_8_ = in_XMM1_Qb;
  auVar26 = ZEXT1664(auVar24);
  auVar20._0_8_ = (double)param_1;
  auVar20._8_8_ = in_XMM0_Qb;
  auVar23 = ZEXT1664(auVar20);
  iVar5 = ((uint)((ulonglong)auVar20._0_8_ >> 0x34) & 0x7ff) -
          ((uint)((ulonglong)auVar24._0_8_ >> 0x34) & 0x7ff);
  dVar7 = ABS(auVar24._0_8_);
  dVar4 = ABS(auVar20._0_8_);
  if ((0x7ff0000000000000 < (ulonglong)dVar7) ||
     (param_2 = param_1, 0x7ff0000000000000 < (ulonglong)dVar4)) {
    auVar2._4_8_ = SUB128(ZEXT812(0),4);
    auVar2._0_4_ = param_2;
    uVar8 = FUN_1401c3b70(0,auVar2._0_8_,0);
    return uVar8;
  }
  if (dVar4 == 0.0) {
    if (-1 < (longlong)auVar24._0_8_) {
      auVar9._4_12_ = auVar20._4_12_;
      auVar9._0_4_ = param_1;
      return auVar9._0_8_;
    }
LAB_1401ba229:
    FUN_1401b96e0(0x20);
    if ((longlong)auVar20._0_8_ < 0) {
      uVar8 = (ulonglong)DAT_140eb5c30;
    }
    else {
      uVar8 = (ulonglong)DAT_140211e84;
    }
  }
  else {
    auVar22 = auVar20;
    auVar11 = auVar24;
    if (dVar7 == 0.0) {
      FUN_1401b96e0();
      auVar11 = auVar26._0_16_;
      auVar22 = auVar23._0_16_;
      if (-1 < (longlong)auVar20._0_8_) goto LAB_1401ba27b;
    }
    else {
LAB_1401ba27b:
      if (iVar5 < 0x1b) {
        dVar19 = auVar22._0_8_;
        dVar14 = auVar11._0_8_;
        if ((iVar5 < -0xd) && (-1 < (longlong)auVar24._0_8_)) {
          if (-0x97 < iVar5) {
            if (iVar5 < -0x7e) {
              dVar14 = (dVar19 * 1.2676506002282294e+30) / dVar14;
              uVar8 = (ulonglong)ABS(dVar14) >> 0x34;
              uVar3 = (uint)((ulonglong)ABS(dVar14) >> 0x34);
              if (uVar3 < 0x65) {
                if ((int)(0x65 - uVar3) < 0x37) {
                  uVar8 = ((ulonglong)dVar14 & 0x1fffffffffffff | 0x10000000000000) >>
                          (100 - uVar8 & 0x3f);
                  uVar8 = (uVar8 >> 1) + (ulonglong)((uint)uVar8 & 1);
                }
                else {
                  uVar8 = 0;
                }
              }
              else {
                uVar8 = uVar8 - 100 << 0x34 | (ulonglong)dVar14 & 0xfffffffffffff;
              }
              uVar6 = (ulonglong)dVar14 & 0x8000000000000000 | uVar8;
              auVar23 = ZEXT864(uVar6);
              auVar21._8_8_ = 0;
              auVar21._0_8_ = uVar6;
              if ((uVar8 & 0x7ff0000000000000) == 0) {
                FUN_1401b96e0(0x30);
                auVar21 = auVar23._0_16_;
              }
              auVar10._0_4_ = (float)auVar21._0_8_;
              auVar10._4_12_ = auVar21._4_12_;
              return auVar10._0_8_;
            }
            auVar11._0_8_ = dVar19 / dVar14;
            auVar11._8_8_ = auVar22._8_8_;
            auVar12._0_4_ = (float)auVar11._0_8_;
            auVar12._4_12_ = auVar11._4_12_;
            return auVar12._0_8_;
          }
          FUN_1401b96e0(0x30);
          if ((longlong)auVar20._0_8_ < 0) {
            return (ulonglong)DAT_140211ec4;
          }
          return 0;
        }
        if ((-0x1b < iVar5) || (-1 < (longlong)auVar24._0_8_)) {
          if ((dVar4 != INFINITY) || (dVar7 != INFINITY)) {
            auVar25 = auVar11;
            if ((longlong)auVar24._0_8_ < 0) {
              auVar25._0_8_ = (ulonglong)dVar14 ^ DAT_1401c8630;
              auVar25._8_8_ = auVar11._8_8_;
            }
            if ((longlong)auVar20._0_8_ < 0) {
              auVar22._0_8_ = (ulonglong)dVar19 ^ DAT_1401c8630;
            }
            bVar1 = auVar25._0_8_ < auVar22._0_8_;
            auVar15._0_8_ = -(ulonglong)!bVar1;
            auVar15._8_8_ = 0xffffffffffffffff;
            auVar11 = vblendvpd_avx(auVar25,auVar22,auVar15);
            auVar16._0_8_ = -(ulonglong)!bVar1;
            auVar16._8_8_ = 0xffffffffffffffff;
            auVar22 = vblendvpd_avx(auVar22,auVar25,auVar16);
            dVar4 = auVar22._0_8_;
            dVar7 = auVar11._0_8_;
            auVar17._0_8_ = dVar7 / dVar4;
            auVar17._8_8_ = auVar11._8_8_;
            if (auVar17._0_8_ <= DAT_140eb53f0) {
              if (DAT_140e8e260 <= auVar17._0_8_) {
                dVar4 = auVar17._0_8_ * auVar17._0_8_;
                auVar17._0_8_ =
                     -(dVar4 * auVar17._0_8_ *
                      (-(dVar4 * (-(dVar4 * DAT_140eb5408) + DAT_140eb5418)) + DAT_140eb5428)) +
                     auVar17._0_8_;
              }
            }
            else {
              uVar3 = (uint)(auVar17._0_8_ * DAT_140eb5448 + DAT_140211f38);
              dVar14 = (double)uVar3;
              dVar4 = (dVar7 * DAT_140eb5448 - dVar4 * dVar14) /
                      (dVar7 * dVar14 + dVar4 * DAT_140eb5448);
              auVar17._0_8_ =
                   -(dVar4 * dVar4 * dVar4 * DAT_140eb5420) +
                   dVar4 + *(double *)(&DAT_140eb9050 + (ulonglong)(uVar3 - 0x10) * 8);
              auVar17._8_8_ = 0;
            }
            if (bVar1) {
              dVar4 = auVar17._0_8_;
              auVar17._8_8_ = 0;
              auVar17._0_8_ = DAT_140eb4468 - dVar4;
            }
            if ((longlong)auVar24._0_8_ < 0) {
              dVar4 = auVar17._0_8_;
              auVar17._8_8_ = 0;
              auVar17._0_8_ = DAT_140e8e270 - dVar4;
            }
            auVar18 = auVar17;
            if ((longlong)auVar20._0_8_ < 0) {
              auVar18._0_8_ = auVar17._0_8_ ^ DAT_1401c8630;
              auVar18._8_8_ = auVar17._8_8_;
            }
            auVar13._0_4_ = (float)auVar18._0_8_;
            auVar13._4_12_ = auVar18._4_12_;
            return auVar13._0_8_;
          }
          FUN_1401b96e0(0x20);
          if (-1 < (longlong)auVar24._0_8_) {
            if ((longlong)auVar20._0_8_ < 0) {
              return (ulonglong)DAT_140211844;
            }
            return (ulonglong)DAT_140211848;
          }
          if ((longlong)auVar20._0_8_ < 0) {
            return (ulonglong)DAT_140eb5c2c;
          }
          return (ulonglong)DAT_140eb5c28;
        }
        goto LAB_1401ba229;
      }
      FUN_1401b96e0(0x20);
      if (-1 < (longlong)auVar20._0_8_) {
        return (ulonglong)DAT_140e8c804;
      }
    }
    uVar8 = (ulonglong)DAT_140e8d804;
  }
  return uVar8;
}

