/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18029c780 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_18029c780(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  int iVar5;
  double dVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 in_ZMM0 [64];
  ulonglong uVar13;
  undefined1 auVar14 [16];
  undefined1 in_ZMM1 [64];
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  ulonglong uVar20;
  undefined1 auVar19 [64];
  undefined1 auVar21 [16];
  undefined1 auVar22 [64];
  
  uVar13 = in_ZMM1._0_8_;
  dVar11 = in_ZMM0._0_8_;
  uVar9 = in_ZMM0._4_4_ >> 0x14 & 0x7ff;
  uVar4 = in_ZMM1._4_4_ >> 0x14 & 0x7ff;
  iVar5 = uVar9 - uVar4;
  uVar8 = uVar13 & 0x7fffffffffffffff;
  dVar10 = ABS(dVar11);
  auVar14 = in_ZMM1._0_16_;
  auVar22 = ZEXT1664(auVar14);
  auVar12 = in_ZMM0._0_16_;
  auVar19 = ZEXT1664(auVar12);
  if (0x7ff0000000000000 < uVar8) {
    dVar10 = (double)FUN_1802a6bc0(uVar13,param_2,0);
    return dVar10;
  }
  if (0x7ff0000000000000 < (ulonglong)dVar10) {
    dVar10 = (double)FUN_1802a6bc0(dVar11,param_2,0);
    return dVar10;
  }
  if (dVar10 == 0.0) {
    if (-1 < (longlong)uVar13) {
      return dVar11;
    }
  }
  else {
    if (uVar8 == 0) {
      FUN_18029c2e0();
      auVar12 = auVar19._0_16_;
      auVar14 = auVar22._0_16_;
      if ((longlong)dVar11 < 0) {
        return DAT_180351180;
      }
    }
    if ((uVar4 < 0x3fd) && (uVar9 < 0x3fd)) {
      if ((uVar13 & 0x7ff0000000000000) == 0) {
        if ((longlong)uVar13 < 0) {
          dVar15 = (double)(uVar13 | 0x4010000000000000) + DAT_1803290d8;
        }
        else {
          dVar15 = (double)(uVar13 | 0x4010000000000000) + DAT_180351198;
        }
      }
      else {
        dVar15 = (double)(uVar13 + 0x4000000000000000);
      }
      if (((ulonglong)dVar11 & 0x7ff0000000000000) == 0) {
        if ((longlong)dVar11 < 0) {
          dVar6 = (double)((ulonglong)dVar11 | 0x4010000000000000) + DAT_1803290d8;
        }
        else {
          dVar6 = (double)((ulonglong)dVar11 | 0x4010000000000000) + DAT_180351198;
        }
      }
      else {
        dVar6 = (double)((longlong)dVar11 + 0x4000000000000000);
      }
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulonglong)dVar6;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = dVar15;
      iVar5 = ((uint)((ulonglong)dVar6 >> 0x34) & 0x7ff) -
              ((uint)((ulonglong)dVar15 >> 0x34) & 0x7ff);
    }
    if (0x38 < iVar5) {
      FUN_18029c2e0(0x20);
      if ((longlong)dVar11 < 0) {
        return DAT_180351180;
      }
      return DAT_180350190;
    }
    dVar15 = auVar14._0_8_;
    dVar6 = auVar12._0_8_;
    uVar20 = auVar12._8_8_;
    if ((iVar5 < -0x1c) && (-1 < (longlong)uVar13)) {
      if (iVar5 < -0x432) {
        FUN_18029c2e0(0x20);
        if ((longlong)dVar11 < 0) {
          return DAT_180351170;
        }
        return 0.0;
      }
      if (-0x3ff < iVar5) {
        return dVar6 / dVar15;
      }
      dVar15 = (dVar6 * 1.2676506002282294e+30) / dVar15;
      uVar8 = (ulonglong)ABS(dVar15) >> 0x34;
      uVar4 = (uint)((ulonglong)ABS(dVar15) >> 0x34);
      if (uVar4 < 0x65) {
        if ((int)(0x65 - uVar4) < 0x37) {
          uVar8 = ((ulonglong)dVar15 & 0x1fffffffffffff | 0x10000000000000) >> (100 - uVar8 & 0x3f);
          uVar8 = (uVar8 >> 1) + (ulonglong)((uint)uVar8 & 1);
        }
        else {
          uVar8 = 0;
        }
      }
      else {
        uVar8 = uVar8 - 100 << 0x34 | (ulonglong)dVar15 & 0xfffffffffffff;
      }
      dVar10 = (double)((ulonglong)dVar15 & 0x8000000000000000 | uVar8);
      if ((uVar8 & 0x7ff0000000000000) != 0) {
        return dVar10;
      }
      FUN_18029c2e0(0x20);
      return dVar10;
    }
    if ((-0x39 < iVar5) || (-1 < (longlong)uVar13)) {
      if ((dVar10 != INFINITY) || (uVar8 != 0x7ff0000000000000)) {
        auVar21 = auVar14;
        if ((longlong)uVar13 < 0) {
          auVar21._0_8_ = (ulonglong)dVar15 ^ DAT_1802b0dc0;
          auVar21._8_8_ = auVar14._8_8_ ^ _UNK_1802b0dc8;
        }
        if ((longlong)dVar11 < 0) {
          auVar12._0_8_ = (ulonglong)dVar6 ^ DAT_1802b0dc0;
          auVar12._8_8_ = uVar20 ^ _UNK_1802b0dc8;
        }
        bVar1 = auVar21._0_8_ < auVar12._0_8_;
        auVar16._0_8_ = -(ulonglong)!bVar1;
        auVar16._8_8_ = 0xffffffffffffffff;
        auVar14 = vblendvpd_avx(auVar21,auVar12,auVar16);
        auVar17._0_8_ = -(ulonglong)!bVar1;
        auVar17._8_8_ = 0xffffffffffffffff;
        auVar12 = vblendvpd_avx(auVar12,auVar21,auVar17);
        dVar15 = auVar12._0_8_;
        dVar6 = auVar14._0_8_;
        dVar10 = dVar6 / dVar15;
        if (dVar10 <= DAT_180351110) {
          dVar18 = 0.0;
          if (DAT_1803510f8 <= dVar10) {
            dVar2 = dVar10 * dVar10;
            dVar3 = (double)((ulonglong)dVar10 & 0xffffffff00000000);
            dVar10 = -(dVar2 * dVar10 *
                      (-(dVar2 * (-(dVar2 * (-(dVar2 * (-(dVar2 * DAT_180351118) + DAT_180351120)) +
                                            DAT_180351128)) + DAT_180351138)) + DAT_180351148)) +
                     (-(dVar15 * (dVar10 - dVar3)) +
                     -(dVar3 * (dVar15 - (double)((ulonglong)dVar15 & 0xffffffff00000000))) +
                     -((double)((ulonglong)dVar15 & 0xffffffff00000000) * dVar3) + dVar6) / dVar15 +
                     dVar10;
          }
        }
        else {
          uVar9 = (uint)(dVar10 * DAT_180351168 + DAT_1802df1c8);
          uVar4 = uVar9 - 0x10;
          dVar18 = *(double *)(&DAT_180353e60 + (ulonglong)uVar4 * 8);
          dVar10 = (double)uVar9 * DAT_180351108;
          iVar7 = 0x3ff - (auVar12._4_4_ >> 0x14 & 0x7ff);
          iVar5 = iVar7 / 2;
          dVar3 = (double)((longlong)iVar5 + 0x3ff << 0x34);
          dVar2 = (double)((longlong)(iVar7 - iVar5) + 0x3ff << 0x34);
          dVar15 = dVar15 * dVar3 * dVar2;
          dVar2 = dVar6 * dVar3 * dVar2;
          dVar10 = (-(dVar10 * (dVar15 - (double)((ulonglong)dVar15 & 0xfffffffff8000000))) +
                   -((double)((ulonglong)dVar15 & 0xfffffffff8000000) * dVar10) + dVar2) /
                   (dVar2 * dVar10 + dVar15);
          dVar10 = -(dVar10 * (-(dVar10 * dVar10 * DAT_180351130) + DAT_180351140) * dVar10 * dVar10
                    ) + dVar10 + *(double *)(&DAT_1803545f0 + (ulonglong)uVar4 * 8);
        }
        if (bVar1) {
          dVar18 = DAT_180350190 - dVar18;
          dVar10 = DAT_180350178 - dVar10;
        }
        if ((longlong)uVar13 < 0) {
          dVar18 = DAT_180351160 - dVar18;
          dVar10 = DAT_180351100 - dVar10;
        }
        if (-1 < (longlong)dVar11) {
          return dVar18 + dVar10;
        }
        return (double)((ulonglong)(dVar18 + dVar10) ^ DAT_1802b0dc0);
      }
      FUN_18029c2e0(0x20);
      if (-1 < (longlong)uVar13) {
        if (-1 < (longlong)dVar11) {
          return DAT_180351150;
        }
        return DAT_180351178;
      }
      if (-1 < (longlong)dVar11) {
        return DAT_180351158;
      }
      return DAT_180351188;
    }
  }
  FUN_18029c2e0(0x20);
  dVar10 = DAT_18032a280;
  if ((longlong)dVar11 < 0) {
    dVar10 = DAT_180351190;
  }
  return dVar10;
}

