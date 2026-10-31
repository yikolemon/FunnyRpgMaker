/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009a2d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14009a2d0(double param_1)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  undefined1 in_XMM1 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  
  uVar12 = 0;
  uVar10 = 0;
  dVar17 = in_XMM1._0_8_;
  uVar8 = (uint)((ulonglong)param_1 >> 0x20);
  uVar7 = uVar8 >> 0x14;
  uVar2 = in_XMM1._4_4_;
  uVar6 = uVar2 >> 0x14;
  dVar14 = param_1;
  if ((0x7fd < uVar7 - 1) || (uVar11 = 0, 0x7f < (uVar6 & 0x7ff) - 0x3be)) {
    if (0xffdffffffffffffe < (longlong)dVar17 * 2 - 1U) {
      return;
    }
    if (0xffdffffffffffffe < (longlong)param_1 * 2 - 1U) {
      if ((((((ulonglong)param_1 & 0x8000000000000000) != 0) &&
           (uVar7 = uVar2 >> 0x14 & 0x7ff, uVar12 = uVar10, uVar7 - 0x3ff < 0x35)) &&
          (uVar5 = 1L << (0x33U - (char)uVar7 & 0x3f), ((ulonglong)dVar17 & uVar5 - 1) == 0)) &&
         (((ulonglong)dVar17 & uVar5) != 0)) {
        uVar12 = 1;
      }
      if ((longlong)param_1 * 2 != 0) {
        return;
      }
      if (((ulonglong)dVar17 & 0x8000000000000000) == 0) {
        return;
      }
      FUN_1400ae2c0(uVar12);
      return;
    }
    if (((ulonglong)param_1 & 0x8000000000000000) != 0) {
      uVar7 = uVar2 >> 0x14 & 0x7ff;
      if (uVar7 < 0x3ff) {
LAB_14009a57b:
        FUN_1400ae320(param_1);
        return;
      }
      if (uVar7 < 0x434) {
        uVar5 = 1L << (0x33U - (char)uVar7 & 0x3f);
        if (((ulonglong)dVar17 & uVar5 - 1) != 0) goto LAB_14009a57b;
        iVar3 = 2 - (uint)((uVar5 & (ulonglong)dVar17) != 0);
      }
      else {
        iVar3 = 2;
      }
      dVar14 = ABS(param_1);
      uVar7 = uVar8 >> 0x14 & 0x7ff;
      uVar12 = 0x80000;
      if (iVar3 != 1) {
        uVar12 = 0;
      }
    }
    if (0x7f < (uVar6 & 0x7ff) - 0x3be) {
      if (dVar14 == 1.0) {
        return;
      }
      if ((uVar6 & 0x7ff) < 0x3be) {
        return;
      }
      if (0x3ff0000000000000 < (ulonglong)dVar14 == uVar6 < 0x800) {
        FUN_1400ae250(0);
        return;
      }
      FUN_1400ae2a0(0);
      return;
    }
    uVar11 = uVar12;
    if (uVar7 == 0) {
      dVar14 = (double)((longlong)ABS(param_1 * DAT_14010e808) + 0xfcc0000000000000);
    }
  }
  if (dVar17 == 1.0) {
    return;
  }
  if (dVar14 == 1.0) {
    return;
  }
  uVar21 = SUB84(DAT_1400b6b38,0);
  uVar22 = (undefined4)((ulonglong)DAT_1400b6b38 >> 0x20);
  dVar9 = (double)((longlong)dVar14 - ((longlong)dVar14 + 0xc0196aab00000000U & 0xfff0000000000000))
  ;
  uVar7 = (uint)((longlong)dVar14 + 0xc0196aab00000000U >> 0x20);
  lVar4 = (ulonglong)(uVar7 >> 0xd & 0x7f) * 0x20;
  dVar18 = (double)((int)uVar7 >> 0x14);
  uVar5 = (longlong)dVar9 + 0x80000000;
  dVar20 = (dVar9 - (double)(uVar5 & 0xffffffff00000000)) * *(double *)(&DAT_140114ff8 + lVar4);
  dVar15 = (double)(uVar5 & 0xffffffff00000000) * *(double *)(&DAT_140114ff8 + lVar4) -
           DAT_1400b6b38;
  dVar14 = dVar18 * DAT_140114fb0 + *(double *)(&DAT_140115008 + lVar4);
  dVar9 = dVar20 + dVar15;
  dVar16 = dVar14 + dVar9;
  dVar19 = dVar15 * DAT_140114fc0 * dVar15;
  dVar1 = dVar19 + dVar16;
  dVar13 = dVar9 * DAT_140114fc0 * dVar9;
  dVar14 = (((dVar9 * DAT_140114ff0 + DAT_140114fe8) * dVar13 +
            dVar9 * DAT_140114fe0 + DAT_140114fd8) * dVar13 + dVar9 * DAT_140114fd0 + DAT_140114fc8)
           * dVar13 * dVar9 +
           dVar18 * DAT_140114fb8 + *(double *)(&DAT_140115010 + lVar4) + (dVar14 - dVar16) + dVar9
           + (dVar15 * DAT_140114fc0 + dVar9 * DAT_140114fc0) * dVar20 + (dVar16 - dVar1) + dVar19;
  dVar16 = dVar14 + dVar1;
  dVar9 = (double)((ulonglong)dVar16 & 0xfffffffff8000000);
  dVar18 = (double)(CONCAT44((int)((ulonglong)dVar9 >> 0x20),SUB84(dVar16,0)) & 0xfffffffff8000000)
           * (double)((ulonglong)dVar17 & 0xfffffffff8000000);
  uVar8 = (uint)((ulonglong)dVar18 >> 0x34) & 0x7ff;
  uVar7 = uVar8;
  if (0x3e < uVar8 - 0x3c9) {
    if (0x7fffffff < uVar8 - 0x3c9) {
      return;
    }
    uVar7 = 0;
    if (0x408 < uVar8) {
      if (((ulonglong)dVar18 & 0x8000000000000000) != 0) {
        FUN_1400ae2a0(uVar11);
        return;
      }
      FUN_1400ae250(uVar11);
      return;
    }
  }
  dVar13 = dVar18 * DAT_140113f40 + DAT_140113f48;
  uVar5 = (ulonglong)dVar13 >> 0x10;
  dVar13 = (double)(int)((ulonglong)dVar13 >> 0x10);
  lVar4 = (uVar11 + uVar5 << 0x2c) + *(longlong *)(&DAT_140113fb8 + (uVar5 & 0xff) * 0x10);
  dVar17 = dVar13 * DAT_140113f50 + dVar18 + dVar13 * DAT_140113f58 +
           ((dVar1 - dVar16) + dVar14 + (dVar16 - dVar9)) * dVar17 +
           (dVar17 - (double)((ulonglong)dVar17 & 0xfffffffff8000000)) * dVar9;
  dVar14 = dVar17 * dVar17;
  dVar14 = (dVar17 * DAT_140113f68 + DAT_140113f60) * dVar14 +
           *(double *)(&DAT_140113fb0 + (uVar5 & 0xff) * 0x10) + dVar17 +
           (dVar17 * DAT_140113f78 + DAT_140113f70) * dVar14 * dVar14;
  if (uVar7 == 0) {
    if ((uVar5 & 0x80000000) == 0) {
      dVar17 = (double)(lVar4 + -0x3f10000000000000);
      FUN_1400ae360((dVar17 * dVar14 + dVar17) * DAT_14010e810);
    }
    else {
      dVar17 = (double)(lVar4 + 0x3fe0000000000000);
      dVar14 = dVar17 * dVar14;
      dVar9 = dVar17 + dVar14;
      if ((double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & _UNK_1400b6b04,
                           SUB84(dVar9,0) & _DAT_1400b6b00) < DAT_1400b6b38) {
        if (dVar9 < 0.0) {
          uVar21 = (undefined4)DAT_1400e72b0;
          uVar22 = (undefined4)((ulonglong)DAT_1400e72b0 >> 0x20);
        }
        dVar16 = (double)CONCAT44(uVar22,uVar21) + dVar9;
        dVar9 = ((dVar17 - dVar9) + dVar14 + ((double)CONCAT44(uVar22,uVar21) - dVar16) + dVar9 +
                dVar16) - (double)CONCAT44(uVar22,uVar21);
        if (dVar9 == 0.0) {
          dVar9 = (double)((ulonglong)dVar17 & 0x8000000000000000);
        }
      }
      FUN_1400ae3a0(dVar9 * DAT_14010e800);
    }
  }
  return;
}

