/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401a86e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1401a86e0(void)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  sbyte sVar12;
  byte bVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  double dVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  float fVar23;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uVar24;
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  undefined1 extraout_var [56];
  undefined1 auVar33 [64];
  undefined1 auVar34 [64];
  undefined1 auVar35 [64];
  undefined1 in_ZMM0 [64];
  double dVar36;
  undefined1 auVar37 [16];
  double dVar38;
  undefined1 auVar39 [16];
  double dVar40;
  uint auStack_38 [2];
  undefined1 auStack_30 [48];
  
  fVar23 = in_ZMM0._0_4_;
  if (DAT_140f33260 != 0) {
    fVar9 = ABS(fVar23);
    if (0x7f7fffff < (uint)fVar9) {
      uVar24 = FUN_1401baad0();
      return uVar24;
    }
    dVar40 = (double)fVar23;
    dVar18 = ABS(dVar40);
    if ((uint)fVar9 < 0x3f490fdc) {
      if ((uint)fVar9 < 0x3c000000) {
        if ((uint)fVar9 < 0x39000000) {
          return in_ZMM0._0_8_;
        }
        auVar25._0_8_ = -(dVar40 * dVar40 * dVar40 * DAT_140eb6dc0) + dVar40;
        auVar25._8_8_ = 0;
      }
      else {
        dVar18 = dVar40 * dVar40;
        auVar25._8_8_ = in_ZMM0._8_8_;
        auVar25._0_8_ =
             (dVar18 * (dVar18 * (dVar18 * DAT_140eb9c58 + DAT_140eb9c50) + DAT_140eb9c48) +
             DAT_140eb9c40) * dVar40 * dVar18 + dVar40;
      }
    }
    else {
      if ((uint)fVar9 < 0x4b800456) {
        auVar37._0_4_ = (int)(dVar18 * DAT_140eb6da0 + DAT_140eb6d90);
        auVar37._4_4_ = (int)_UNK_140eb6da8;
        auVar37._8_8_ = 0;
        auVar7 = vpmovsxdq_avx(auVar37);
        auVar39._0_8_ = auVar7._0_8_ & _DAT_140eb6d80;
        auVar39._8_8_ = auVar7._8_8_ & _UNK_140eb6d88;
        auVar7 = vshufps_avx(auVar7,auVar7,8);
        auVar7 = vcvtdq2pd_avx(auVar7);
        dVar18 = (-(auVar7._0_8_ * DAT_140eb6db0) + dVar18) - auVar7._0_8_ * DAT_140eb6dd0;
      }
      else {
        uVar22 = ((ulonglong)dVar18 >> 0x34) - 0x3ff;
        lVar19 = -((uVar22 >> 3) - 0x86);
        uVar14 = (ulonglong)dVar18 & 0xfffffffffffff | 0x10000000000000;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = *(ulonglong *)(&DAT_140ebe3c0 + lVar19);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar14;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = SUB168(auVar7 * auVar4,8);
        uVar10 = SUB168(auVar7 * auVar4,0);
        auVar2._8_8_ = 0;
        auVar2._0_8_ = *(ulonglong *)(&UNK_140ebe3c8 + lVar19);
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar14;
        uVar22 = uVar22 & 7;
        auVar8 = auVar2 * auVar5 + auVar8;
        uVar11 = auVar8._0_8_;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = *(ulonglong *)(&UNK_140ebe3d0 + lVar19);
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar14;
        uVar20 = auVar8._8_8_ + SUB168(auVar3 * auVar6,0);
        uVar17 = 0;
        bVar13 = (byte)(0x36 - uVar22) & 0x3f;
        uVar14 = uVar20 >> bVar13;
        bVar1 = (bool)(((0x36 - uVar22 & 0x3f) != 0) * ((uVar20 >> bVar13 - 1 & 1) != 0));
        if (bVar1) {
          uVar20 = ~uVar20;
          uVar11 = ~uVar11;
          uVar10 = ~uVar10;
          uVar17 = 0x8000000000000000;
        }
        auVar39 = ZEXT416((int)uVar14 + (uint)bVar1 & 3);
        sVar12 = (char)uVar22 + 10;
        uVar14 = (uVar20 << sVar12) >> sVar12;
        lVar15 = uVar22 - 0x36;
        lVar19 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        uVar20 = uVar11;
        if (uVar14 == 0) {
          lVar19 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          lVar15 = uVar22 - 0x76;
          uVar20 = uVar10;
          uVar14 = uVar11;
        }
        lVar16 = lVar19 + -0x34;
        if (lVar16 < 0) {
          bVar13 = -(byte)lVar16;
          uVar14 = uVar14 << (bVar13 & 0x3f) | uVar20 >> (-(bVar13 - 0x40) & 0x3f);
        }
        else if (lVar16 != 0) {
          uVar14 = uVar14 >> ((byte)lVar16 & 0x3f);
        }
        dVar18 = (double)(uVar14 & 0xffefffffffffffff | uVar17 | lVar15 + lVar19 + 0x3ff << 0x34) *
                 DAT_140eb6e20;
      }
      uVar10 = auVar39._0_8_;
      if ((uVar10 & 1) == 1) {
        dVar18 = dVar18 * dVar18;
        dVar18 = (dVar18 * (dVar18 * (dVar18 * DAT_140eb9c30 + DAT_140eb9c28) + DAT_140eb9c20) +
                 DAT_140eb9c18) * dVar18 * dVar18 + dVar18 * DAT_140eb9c10 + DAT_140eb6d70;
        uVar11 = _UNK_140eb6d78;
      }
      else {
        dVar36 = dVar18 * dVar18;
        dVar18 = (dVar36 * (dVar36 * (dVar36 * DAT_140eb9c58 + DAT_140eb9c50) + DAT_140eb9c48) +
                 DAT_140eb9c40) * dVar18 * dVar36 + dVar18;
        uVar11 = 0;
      }
      auVar25._0_8_ =
           (double)(~(ulonglong)dVar40 & _DAT_140eb6d50 ^
                   (ulonglong)dVar18 ^
                   ~-(ulonglong)(uVar10 == _DAT_140eb6e10 || uVar10 == _DAT_140eb6d80) &
                   _DAT_140eb6d50);
      auVar25._8_8_ =
           ~in_ZMM0._8_8_ & _UNK_140eb6d58 ^
           uVar11 ^ ~-(ulonglong)
                      (auVar39._8_8_ == _UNK_140eb6e18 || auVar39._8_8_ == _UNK_140eb6d88) &
                    _UNK_140eb6d58;
    }
    auVar26._0_4_ = (float)auVar25._0_8_;
    auVar26._4_12_ = auVar25._4_12_;
    return auVar26._0_8_;
  }
  fVar9 = ABS(fVar23);
  if (0x7f7fffff < (uint)fVar9) {
    uVar24 = FUN_1401baad0();
    return uVar24;
  }
  auVar27._8_56_ = in_ZMM0._8_56_;
  auVar27._0_8_ = (double)fVar23;
  dVar18 = ABS(auVar27._0_8_);
  auVar29._16_48_ = in_ZMM0._16_48_;
  if ((uint)fVar9 < 0x3f490fdc) {
    if ((uint)fVar9 < 0x3c000000) {
      if ((uint)fVar9 < 0x39000000) {
        return in_ZMM0._0_8_;
      }
      auVar28._0_8_ = auVar27._0_8_ - auVar27._0_8_ * auVar27._0_8_ * auVar27._0_8_ * DAT_140eb6dc0;
      auVar28._8_56_ = auVar27._8_56_;
    }
    else {
      dVar18 = auVar27._0_8_ * auVar27._0_8_;
      auVar28._0_8_ =
           auVar27._0_8_ +
           ((DAT_140eb9c58 * dVar18 + DAT_140eb9c50) * dVar18 * dVar18 +
           DAT_140eb9c48 * dVar18 + DAT_140eb9c40) * auVar27._0_8_ * dVar18;
      auVar28._8_56_ = auVar27._8_56_;
    }
    goto LAB_1401a86c6;
  }
  auVar31 = auVar27;
  if (auVar27._0_8_ != dVar18) {
    auVar29._8_8_ = 0;
    auVar29._0_8_ = 0.0 - auVar27._0_8_;
    auVar31 = auVar29;
  }
  dVar40 = auVar31._0_8_;
  if ((uint)fVar9 < 0x4b742400) {
    auStack_38[0] = (uint)(dVar40 * DAT_140eb6da0 + DAT_140eb6d90);
    auVar30._16_48_ = auVar31._16_48_;
    dVar36 = (double)(int)auStack_38[0];
    dVar40 = dVar40 - DAT_140eb6db0 * dVar36;
    auVar30._8_8_ = auVar31._8_8_;
    auVar30._0_8_ = dVar40;
    auVar28._8_56_ = auVar30._8_56_;
    auVar28._0_8_ = dVar40 - DAT_140eb6dd0 * dVar36;
    uVar10 = (ulonglong)ABS(auVar28._0_8_) >> 0x34;
    if (0xf < (longlong)(((ulonglong)dVar18 >> 0x34) - uVar10)) {
      dVar38 = dVar40 - DAT_140eb6de0 * dVar36;
      auVar31._8_8_ = auVar31._8_8_;
      auVar31._0_8_ = dVar38;
      auVar31._16_48_ = auVar30._16_48_;
      auVar28._8_56_ = auVar31._8_56_;
      auVar28._0_8_ =
           dVar38 - (DAT_140eb6df0 * dVar36 - ((dVar40 - dVar38) - DAT_140eb6de0 * dVar36));
    }
    if (0x3f1 < uVar10) goto LAB_1401a85ee;
    auVar32._16_48_ = auVar28._16_48_;
    if (uVar10 < 0x3df) {
      if ((auStack_38[0] & 1) != 0) {
        auVar28._8_8_ = 0;
        auVar28._0_8_ = DAT_140eb6d70;
        auVar28._16_48_ = auVar32._16_48_;
      }
    }
    else {
      dVar40 = auVar28._0_8_;
      if ((auStack_38[0] & 1) == 0) {
        auVar28._0_8_ = dVar40 - DAT_140eb6dc0 * dVar40 * dVar40 * dVar40;
      }
      else {
        auVar32._8_8_ = 0;
        auVar32._0_8_ = DAT_140eb6d70;
        auVar28._8_56_ = auVar32._8_56_;
        auVar28._0_8_ = DAT_140eb6d70 - dVar40 * dVar40 * DAT_140eb6d90;
      }
    }
  }
  else {
    auVar28._0_8_ = (double)__remainder_piby2d2f_forC(dVar40,auStack_30,auStack_38);
    auVar28._8_56_ = extraout_var;
LAB_1401a85ee:
    dVar40 = auVar28._0_8_;
    dVar36 = dVar40 * dVar40;
    if ((auStack_38[0] & 1) == 0) {
      auVar28._0_8_ =
           dVar40 + ((DAT_140eb9c58 * dVar36 + DAT_140eb9c50) * dVar36 * dVar36 +
                    DAT_140eb9c48 * dVar36 + DAT_140eb9c40) * dVar40 * dVar36;
    }
    else {
      auVar33._16_48_ = auVar28._16_48_;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = DAT_140eb9c10;
      auVar28._8_56_ = auVar33._8_56_;
      auVar28._0_8_ =
           DAT_140eb9c10 * dVar36 + DAT_140eb6d70 +
           ((DAT_140eb9c30 * dVar36 + DAT_140eb9c28) * dVar36 * dVar36 +
           DAT_140eb9c20 * dVar36 + DAT_140eb9c18) * dVar36 * dVar36;
    }
  }
  uVar21 = (uint)(auVar27._0_8_ != dVar18);
  if ((auStack_38[0] >> 1 & uVar21) == 0 && (~(auStack_38[0] >> 1) & ~uVar21 & 1) == 0) {
    dVar18 = auVar28._0_8_;
    auVar34._16_48_ = auVar28._16_48_;
    auVar34._0_16_ = ZEXT816(0);
    auVar28._8_56_ = auVar34._8_56_;
    auVar28._0_8_ = 0.0 - dVar18;
  }
LAB_1401a86c6:
  auVar35._4_60_ = auVar28._4_60_;
  auVar35._0_4_ = (float)auVar28._0_8_;
  return auVar35._0_8_;
}

