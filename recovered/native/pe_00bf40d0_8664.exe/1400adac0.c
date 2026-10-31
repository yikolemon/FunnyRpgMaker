/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400adac0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1400adac0(double param_1)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  longlong lVar5;
  double dVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auVar15 [16];
  double dVar14;
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 in_ZMM1 [64];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 extraout_var [60];
  undefined1 extraout_var_00 [60];
  
  uVar11 = 0;
  uVar9 = 0;
  dVar4 = in_ZMM1._0_8_;
  uVar12 = (uint)((ulonglong)param_1 >> 0x20);
  uVar7 = uVar12 >> 0x14;
  uVar2 = in_ZMM1._4_4_;
  uVar13 = uVar2 >> 0x14;
  dVar14 = param_1;
  if ((0x7fd < uVar7 - 1) || (uVar10 = 0, 0x7f < (uVar13 & 0x7ff) - 0x3be)) {
    uVar8 = (longlong)dVar4 * 2;
    if (0xffdffffffffffffe < uVar8 - 1) {
      if ((uVar8 == 0) || (dVar14 = dVar4, param_1 == 1.0)) {
        if (((ulonglong)dVar14 ^ 0x8000000000000) * 2 < 0xfff0000000000001) {
          return DAT_1400b6b38;
        }
      }
      else {
        uVar1 = (longlong)param_1 * 2;
        if ((uVar1 < 0xffe0000000000001) && (uVar8 < 0xffe0000000000001)) {
          if (uVar1 == 0x7fe0000000000000) {
            return DAT_1400b6b38;
          }
          if ((uint)(uVar1 < 0x7fe0000000000000) == (uVar2 >> 0x1f ^ 1)) {
            return 0.0;
          }
          return dVar4 * dVar4;
        }
      }
      return param_1 + dVar4;
    }
    if (0xffdffffffffffffe < (longlong)param_1 * 2 - 1U) {
      dVar14 = param_1 * param_1;
      if ((((((ulonglong)param_1 & 0x8000000000000000) != 0) &&
           (uVar7 = uVar2 >> 0x14 & 0x7ff, uVar11 = uVar9, uVar7 - 0x3ff < 0x35)) &&
          (uVar8 = 1L << ((ulonglong)(0x433 - uVar7) & 0x3f), ((ulonglong)dVar4 & uVar8 - 1) == 0))
         && (((ulonglong)dVar4 & uVar8) != 0)) {
        dVar14 = (double)((ulonglong)dVar14 ^ _DAT_1400be870);
        uVar11 = 1;
      }
      if ((longlong)param_1 * 2 == 0) {
        if (((ulonglong)dVar4 & 0x8000000000000000) == 0) {
          return dVar14;
        }
        dVar14 = FUN_1400ae2c0(uVar11);
        return dVar14;
      }
      if (((ulonglong)dVar4 & 0x8000000000000000) == 0) {
        return dVar14;
      }
      return DAT_1400b6b38 / dVar14;
    }
    if (((ulonglong)param_1 & 0x8000000000000000) != 0) {
      uVar7 = uVar2 >> 0x14 & 0x7ff;
      if (uVar7 < 0x3ff) {
LAB_1400add94:
        dVar14 = FUN_1400ae320(param_1);
        return dVar14;
      }
      if (uVar7 < 0x434) {
        uVar8 = 1L << ((ulonglong)(0x433 - uVar7) & 0x3f);
        if (((ulonglong)dVar4 & uVar8 - 1) != 0) goto LAB_1400add94;
        iVar3 = 2 - (uint)((uVar8 & (ulonglong)dVar4) != 0);
      }
      else {
        iVar3 = 2;
      }
      dVar14 = ABS(param_1);
      uVar7 = uVar12 >> 0x14 & 0x7ff;
      uVar11 = 0x80000;
      if (iVar3 != 1) {
        uVar11 = 0;
      }
    }
    if (0x7f < (uVar13 & 0x7ff) - 0x3be) {
      if (dVar14 == 1.0) {
        return DAT_1400b6b38;
      }
      if ((uVar13 & 0x7ff) < 0x3be) {
        if (0x3ff0000000000000 < (ulonglong)dVar14) {
          return dVar4 + DAT_1400b6b38;
        }
        return DAT_1400b6b38 - dVar4;
      }
      if (0x3ff0000000000000 < (ulonglong)dVar14 == uVar13 < 0x800) {
        dVar14 = FUN_1400ae250(0);
        return dVar14;
      }
      dVar14 = (double)FUN_1400ae2a0(0);
      return dVar14;
    }
    uVar10 = uVar11;
    if (uVar7 == 0) {
      dVar14 = (double)((longlong)ABS(param_1 * DAT_14010e808) + 0xfcc0000000000000);
    }
  }
  if (dVar4 != 1.0) {
    if (dVar14 == 1.0) {
      auVar18._8_8_ = 0;
      auVar18._0_8_ = DAT_1400b6b38;
      auVar20._0_8_ = -(ulonglong)(uVar10 == 0);
      auVar20._8_8_ = 0xffffffffffffffff;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = DAT_1400e72b0;
      auVar15 = vblendvpd_avx(auVar15,auVar18,auVar20);
      param_1 = auVar15._0_8_;
    }
    else {
      auVar26._8_8_ = 0;
      auVar26._0_8_ = DAT_1400e72b0;
      uVar7 = (uint)((longlong)dVar14 + 0xc0196aab00000000U >> 0x20);
      lVar5 = (ulonglong)(uVar7 >> 0xd & 0x7f) * 0x20;
      dVar25 = (double)((int)uVar7 >> 0x14);
      dVar23 = dVar25 * DAT_140114fb0 + *(double *)(&DAT_140115008 + lVar5);
      dVar24 = (double)((longlong)dVar14 -
                       ((longlong)dVar14 + 0xc0196aab00000000U & 0xfff0000000000000)) *
               *(double *)(&DAT_140114ff8 + lVar5) + DAT_1400e72b0;
      dVar22 = dVar24 * DAT_140114fc0 * dVar24;
      dVar14 = dVar23 + dVar24;
      dVar6 = dVar22 + dVar14;
      dVar23 = dVar22 * dVar24 *
               (dVar22 * (dVar22 * (dVar24 * DAT_140114ff0 + DAT_140114fe8) +
                         dVar24 * DAT_140114fe0 + DAT_140114fd8) +
               DAT_140114fd0 * dVar24 + DAT_140114fc8) +
               dVar24 * dVar24 * DAT_140114fc0 + (double)((ulonglong)dVar22 ^ _DAT_1400be870) +
               dVar25 * DAT_140114fb8 + *(double *)(&DAT_140115010 + lVar5) +
               (dVar23 - dVar14) + dVar24 + (dVar14 - dVar6) + dVar22;
      dVar14 = dVar23 + dVar6;
      dVar22 = dVar14 * dVar4;
      uVar12 = (uint)((ulonglong)dVar22 >> 0x34) & 0x7ff;
      uVar7 = uVar12;
      if (0x3e < uVar12 - 0x3c9) {
        if (0x7fffffff < uVar12 - 0x3c9) {
          if (uVar10 == 0) {
            return dVar22 + DAT_1400b6b38;
          }
          return (double)((ulonglong)(dVar22 + DAT_1400b6b38) ^ _DAT_1400be870);
        }
        uVar7 = 0;
        if (0x408 < uVar12) {
          if (((ulonglong)dVar22 & 0x8000000000000000) != 0) {
            dVar14 = (double)FUN_1400ae2a0(uVar10);
            return dVar14;
          }
          dVar14 = FUN_1400ae250(uVar10);
          return dVar14;
        }
      }
      dVar24 = DAT_140113f40 * dVar22 + DAT_140113f48;
      uVar8 = (ulonglong)dVar24 >> 0x10;
      dVar24 = (double)(int)((ulonglong)dVar24 >> 0x10);
      dVar14 = dVar24 * DAT_140113f58 + dVar24 * DAT_140113f50 + dVar22 +
               dVar4 * ((dVar6 - dVar14) + dVar23) +
               dVar14 * dVar4 + (double)((ulonglong)dVar22 ^ _DAT_1400be870);
      dVar4 = dVar14 * dVar14;
      dVar6 = (double)((uVar10 + uVar8 << 0x2c) +
                      *(longlong *)(&DAT_140113fb8 + (uVar8 & 0xff) * 0x10));
      dVar14 = dVar4 * dVar4 * (DAT_140113f78 * dVar14 + DAT_140113f70) +
               dVar4 * (DAT_140113f68 * dVar14 + DAT_140113f60) +
               dVar14 + *(double *)(&DAT_140113fb0 + (uVar8 & 0xff) * 0x10);
      if (uVar7 == 0) {
        if ((uVar8 & 0x80000000) == 0) {
          auVar16._0_4_ =
               FUN_1400ae360((dVar14 * (double)((longlong)dVar6 + -0x3f10000000000000) +
                             (double)((longlong)dVar6 + -0x3f10000000000000)) * DAT_14010e810);
          auVar16._4_60_ = extraout_var;
          param_1 = auVar16._0_8_;
        }
        else {
          auVar21._8_8_ = 0;
          auVar21._0_8_ = DAT_1400b6b38;
          dVar6 = (double)((longlong)dVar6 + 0x3fe0000000000000);
          dVar4 = dVar6 + dVar6 * dVar14;
          if ((double)((ulonglong)dVar4 & _DAT_1400b6b00) < DAT_1400b6b38) {
            auVar19._8_8_ = 0;
            auVar19._0_8_ = dVar4;
            auVar15 = vcmpsd_avx(auVar19,ZEXT816(0),1);
            auVar15 = vblendvpd_avx(auVar21,auVar26,auVar15);
            dVar22 = auVar15._0_8_;
            dVar4 = ((dVar6 - dVar4) + dVar6 * dVar14 + (dVar22 - (dVar22 + dVar4)) + dVar4 +
                    dVar22 + dVar4) - dVar22;
            if (dVar4 == 0.0) {
              dVar4 = (double)((ulonglong)dVar6 & 0x8000000000000000);
            }
          }
          auVar17._0_4_ = FUN_1400ae3a0(dVar4 * DAT_14010e800);
          auVar17._4_60_ = extraout_var_00;
          param_1 = auVar17._0_8_;
        }
      }
      else {
        param_1 = dVar6 * dVar14 + dVar6;
      }
    }
  }
  return param_1;
}

