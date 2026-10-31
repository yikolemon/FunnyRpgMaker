/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401a5d80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401a5d80(double param_1)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  undefined1 in_XMM1 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  
  uVar11 = 0;
  uVar10 = 0;
  dVar16 = in_XMM1._0_8_;
  uVar8 = (uint)((ulonglong)param_1 >> 0x20);
  uVar3 = uVar8 >> 0x14;
  uVar2 = in_XMM1._4_4_;
  uVar7 = uVar2 >> 0x14;
  dVar13 = param_1;
  if ((0x7fd < uVar3 - 1) || (0x7f < (uVar7 & 0x7ff) - 0x3be)) {
    if (0xffdffffffffffffe < (longlong)dVar16 * 2 - 1U) {
      return;
    }
    if (0xffdffffffffffffe < (longlong)param_1 * 2 - 1U) {
      uVar3 = 0;
      if ((((((ulonglong)param_1 & 0x8000000000000000) != 0) &&
           (uVar8 = uVar2 >> 0x14 & 0x7ff, uVar3 = uVar10, uVar8 - 0x3ff < 0x35)) &&
          (uVar6 = 1L << (0x33U - (char)uVar8 & 0x3f), ((ulonglong)dVar16 & uVar6 - 1) == 0)) &&
         (((ulonglong)dVar16 & uVar6) != 0)) {
        uVar3 = 1;
      }
      if ((longlong)param_1 * 2 != 0) {
        return;
      }
      if (((ulonglong)dVar16 & 0x8000000000000000) == 0) {
        return;
      }
      FUN_1401be5c0(uVar3);
      return;
    }
    uVar11 = 0;
    if (((ulonglong)param_1 & 0x8000000000000000) != 0) {
      uVar3 = uVar2 >> 0x14 & 0x7ff;
      if (uVar3 < 0x3ff) {
LAB_1401a602b:
        FUN_1401be620();
        return;
      }
      if (uVar3 < 0x434) {
        uVar6 = 1L << (0x33U - (char)uVar3 & 0x3f);
        if (((ulonglong)dVar16 & uVar6 - 1) != 0) goto LAB_1401a602b;
        iVar4 = 2 - (uint)((uVar6 & (ulonglong)dVar16) != 0);
      }
      else {
        iVar4 = 2;
      }
      dVar13 = ABS(param_1);
      uVar3 = uVar8 >> 0x14 & 0x7ff;
      uVar11 = 0x80000;
      if (iVar4 != 1) {
        uVar11 = 0;
      }
    }
    if (0x7f < (uVar7 & 0x7ff) - 0x3be) {
      if (dVar13 == 1.0) {
        return;
      }
      if ((uVar7 & 0x7ff) < 0x3be) {
        return;
      }
      if (0x3ff0000000000000 < (ulonglong)dVar13 == uVar7 < 0x800) {
        FUN_1401be550();
        return;
      }
      FUN_1401be5a0(0);
      return;
    }
    if (uVar3 == 0) {
      dVar13 = (double)((longlong)ABS(param_1 * DAT_140eb6358) + 0xfcc0000000000000);
    }
  }
  if (dVar16 == 1.0) {
    return;
  }
  if (dVar13 == 1.0) {
    return;
  }
  uVar20 = SUB84(DAT_1401ced60,0);
  uVar21 = (undefined4)((ulonglong)DAT_1401ced60 >> 0x20);
  dVar9 = (double)((longlong)dVar13 - ((longlong)dVar13 + 0xc0196aab00000000U & 0xfff0000000000000))
  ;
  uVar3 = (uint)((longlong)dVar13 + 0xc0196aab00000000U >> 0x20);
  lVar5 = (ulonglong)(uVar3 >> 0xd & 0x7f) * 0x20;
  dVar17 = (double)((int)uVar3 >> 0x14);
  uVar6 = (longlong)dVar9 + 0x80000000;
  dVar19 = (dVar9 - (double)(uVar6 & 0xffffffff00000000)) * *(double *)(&DAT_140ebd398 + lVar5);
  dVar14 = (double)(uVar6 & 0xffffffff00000000) * *(double *)(&DAT_140ebd398 + lVar5) -
           DAT_1401ced60;
  dVar13 = dVar17 * DAT_140ebd350 + *(double *)(&DAT_140ebd3a8 + lVar5);
  dVar9 = dVar19 + dVar14;
  dVar15 = dVar13 + dVar9;
  dVar18 = dVar14 * DAT_140ebd360 * dVar14;
  dVar1 = dVar18 + dVar15;
  dVar12 = dVar9 * DAT_140ebd360 * dVar9;
  dVar13 = (((dVar9 * DAT_140ebd390 + DAT_140ebd388) * dVar12 +
            dVar9 * DAT_140ebd380 + DAT_140ebd378) * dVar12 + dVar9 * DAT_140ebd370 + DAT_140ebd368)
           * dVar12 * dVar9 +
           dVar17 * DAT_140ebd358 + *(double *)(&DAT_140ebd3b0 + lVar5) + (dVar13 - dVar15) + dVar9
           + (dVar14 * DAT_140ebd360 + dVar9 * DAT_140ebd360) * dVar19 + (dVar15 - dVar1) + dVar18;
  dVar15 = dVar13 + dVar1;
  dVar9 = (double)((ulonglong)dVar15 & 0xfffffffff8000000);
  dVar17 = (double)(CONCAT44((int)((ulonglong)dVar9 >> 0x20),SUB84(dVar15,0)) & 0xfffffffff8000000)
           * (double)((ulonglong)dVar16 & 0xfffffffff8000000);
  uVar8 = (uint)((ulonglong)dVar17 >> 0x34) & 0x7ff;
  uVar3 = uVar8;
  if (0x3e < uVar8 - 0x3c9) {
    if (0x7fffffff < uVar8 - 0x3c9) {
      return;
    }
    uVar3 = 0;
    if (0x408 < uVar8) {
      if (((ulonglong)dVar17 & 0x8000000000000000) != 0) {
        FUN_1401be5a0();
        return;
      }
      FUN_1401be550(uVar11);
      return;
    }
  }
  dVar12 = dVar17 * DAT_140ebc2e0 + DAT_140ebc2e8;
  uVar6 = (ulonglong)dVar12 >> 0x10;
  dVar12 = (double)(int)((ulonglong)dVar12 >> 0x10);
  lVar5 = (uVar11 + uVar6 << 0x2c) + *(longlong *)(&DAT_140ebc358 + (uVar6 & 0xff) * 0x10);
  dVar16 = dVar12 * DAT_140ebc2f0 + dVar17 + dVar12 * DAT_140ebc2f8 +
           ((dVar1 - dVar15) + dVar13 + (dVar15 - dVar9)) * dVar16 +
           (dVar16 - (double)((ulonglong)dVar16 & 0xfffffffff8000000)) * dVar9;
  dVar13 = dVar16 * dVar16;
  dVar13 = (dVar16 * DAT_140ebc308 + DAT_140ebc300) * dVar13 +
           *(double *)(&DAT_140ebc350 + (uVar6 & 0xff) * 0x10) + dVar16 +
           (dVar16 * DAT_140ebc318 + DAT_140ebc310) * dVar13 * dVar13;
  if (uVar3 == 0) {
    if ((uVar6 & 0x80000000) == 0) {
      FUN_1401be660(((double)(lVar5 + -0x3f10000000000000) * dVar13 +
                    (double)(lVar5 + -0x3f10000000000000)) * DAT_140eb6360);
    }
    else {
      dVar16 = (double)(lVar5 + 0x3fe0000000000000);
      dVar13 = dVar16 * dVar13;
      dVar9 = dVar16 + dVar13;
      if ((double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & _UNK_1401ced54,
                           SUB84(dVar9,0) & _DAT_1401ced50) < DAT_1401ced60) {
        if (dVar9 < 0.0) {
          uVar20 = (undefined4)DAT_140e8e150;
          uVar21 = (undefined4)((ulonglong)DAT_140e8e150 >> 0x20);
        }
        dVar15 = (double)CONCAT44(uVar21,uVar20) + dVar9;
        dVar9 = ((dVar16 - dVar9) + dVar13 + ((double)CONCAT44(uVar21,uVar20) - dVar15) + dVar9 +
                dVar15) - (double)CONCAT44(uVar21,uVar20);
        if (dVar9 == 0.0) {
          dVar9 = (double)((ulonglong)dVar16 & 0x8000000000000000);
        }
      }
      FUN_1401be6a0(lVar5,uVar6,dVar9 * DAT_140eb6350);
    }
  }
  return;
}

