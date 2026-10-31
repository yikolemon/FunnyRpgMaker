/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401a5d60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1401a5d60(double param_1)

{
  double dVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  double dVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  
  if (((byte)DAT_140f33260 & 3) != 3) {
    dVar12 = (double)FUN_1401a5d80();
    return dVar12;
  }
  lVar9 = 0;
  lVar8 = 0;
  dVar5 = in_ZMM1._0_8_;
  uVar10 = (uint)((ulonglong)param_1 >> 0x20);
  uVar6 = uVar10 >> 0x14;
  uVar3 = in_ZMM1._4_4_;
  uVar11 = uVar3 >> 0x14;
  dVar12 = param_1;
  if ((0x7fd < uVar6 - 1) || (0x7f < (uVar11 & 0x7ff) - 0x3be)) {
    uVar7 = (longlong)dVar5 * 2;
    if (0xffdffffffffffffe < uVar7 - 1) {
      if ((uVar7 == 0) || (dVar12 = dVar5, param_1 == 1.0)) {
        if (((ulonglong)dVar12 ^ 0x8000000000000) * 2 < 0xfff0000000000001) {
          return DAT_1401ced60;
        }
      }
      else {
        uVar2 = (longlong)param_1 * 2;
        if ((uVar2 < 0xffe0000000000001) && (uVar7 < 0xffe0000000000001)) {
          if (uVar2 == 0x7fe0000000000000) {
            return DAT_1401ced60;
          }
          if ((uint)(uVar2 < 0x7fe0000000000000) == (uVar3 >> 0x1f ^ 1)) {
            return 0.0;
          }
          return dVar5 * dVar5;
        }
      }
      return param_1 + dVar5;
    }
    if (0xffdffffffffffffe < (longlong)param_1 * 2 - 1U) {
      dVar12 = param_1 * param_1;
      if ((((((ulonglong)param_1 & 0x8000000000000000) != 0) &&
           (uVar6 = uVar3 >> 0x14 & 0x7ff, lVar9 = lVar8, uVar6 - 0x3ff < 0x35)) &&
          (uVar7 = 1L << ((ulonglong)(0x433 - uVar6) & 0x3f), ((ulonglong)dVar5 & uVar7 - 1) == 0))
         && (((ulonglong)dVar5 & uVar7) != 0)) {
        dVar12 = (double)((ulonglong)dVar12 ^ DAT_1401c8630);
        lVar9 = 1;
      }
      if ((longlong)param_1 * 2 == 0) {
        if (((ulonglong)dVar5 & 0x8000000000000000) == 0) {
          return dVar12;
        }
        dVar12 = (double)FUN_1401be5c0(lVar9);
        return dVar12;
      }
      if (((ulonglong)dVar5 & 0x8000000000000000) == 0) {
        return dVar12;
      }
      return DAT_1401ced60 / dVar12;
    }
    if (((ulonglong)param_1 & 0x8000000000000000) != 0) {
      uVar6 = uVar3 >> 0x14 & 0x7ff;
      if (uVar6 < 0x3ff) {
LAB_1401be094:
        dVar12 = (double)FUN_1401be620();
        return dVar12;
      }
      if (uVar6 < 0x434) {
        uVar7 = 1L << ((ulonglong)(0x433 - uVar6) & 0x3f);
        if (((ulonglong)dVar5 & uVar7 - 1) != 0) goto LAB_1401be094;
        iVar4 = 2 - (uint)((uVar7 & (ulonglong)dVar5) != 0);
      }
      else {
        iVar4 = 2;
      }
      dVar12 = ABS(param_1);
      uVar6 = uVar10 >> 0x14 & 0x7ff;
      lVar9 = 0x80000;
      if (iVar4 != 1) {
        lVar9 = 0;
      }
    }
    if (0x7f < (uVar11 & 0x7ff) - 0x3be) {
      if (dVar12 == 1.0) {
        return DAT_1401ced60;
      }
      if ((uVar11 & 0x7ff) < 0x3be) {
        if (0x3ff0000000000000 < (ulonglong)dVar12) {
          return dVar5 + DAT_1401ced60;
        }
        return DAT_1401ced60 - dVar5;
      }
      if (0x3ff0000000000000 < (ulonglong)dVar12 == uVar11 < 0x800) {
        dVar12 = (double)FUN_1401be550();
        return dVar12;
      }
      dVar12 = (double)FUN_1401be5a0(0);
      return dVar12;
    }
    if (uVar6 == 0) {
      dVar12 = (double)((longlong)ABS(param_1 * DAT_140eb6358) + 0xfcc0000000000000);
    }
  }
  if (dVar5 != 1.0) {
    if (dVar12 == 1.0) {
      auVar14._8_8_ = 0;
      auVar14._0_8_ = DAT_1401ced60;
      auVar16._0_8_ = -(ulonglong)(lVar9 == 0);
      auVar16._8_8_ = 0xffffffffffffffff;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = DAT_140e8e150;
      auVar13 = vblendvpd_avx(auVar13,auVar14,auVar16);
      param_1 = auVar13._0_8_;
    }
    else {
      auVar22._8_8_ = 0;
      auVar22._0_8_ = DAT_140e8e150;
      uVar6 = (uint)((longlong)dVar12 + 0xc0196aab00000000U >> 0x20);
      lVar8 = (ulonglong)(uVar6 >> 0xd & 0x7f) * 0x20;
      dVar21 = (double)((int)uVar6 >> 0x14);
      dVar19 = dVar21 * DAT_140ebd350 + *(double *)(&DAT_140ebd3a8 + lVar8);
      dVar20 = (double)((longlong)dVar12 -
                       ((longlong)dVar12 + 0xc0196aab00000000U & 0xfff0000000000000)) *
               *(double *)(&DAT_140ebd398 + lVar8) + DAT_140e8e150;
      dVar1 = dVar20 * DAT_140ebd360 * dVar20;
      dVar12 = dVar19 + dVar20;
      dVar18 = dVar1 + dVar12;
      dVar19 = dVar1 * dVar20 *
               (dVar1 * (dVar1 * (dVar20 * DAT_140ebd390 + DAT_140ebd388) +
                        dVar20 * DAT_140ebd380 + DAT_140ebd378) +
               DAT_140ebd370 * dVar20 + DAT_140ebd368) +
               dVar20 * dVar20 * DAT_140ebd360 + (double)((ulonglong)dVar1 ^ DAT_1401c8630) +
               dVar21 * DAT_140ebd358 + *(double *)(&DAT_140ebd3b0 + lVar8) +
               (dVar19 - dVar12) + dVar20 + (dVar12 - dVar18) + dVar1;
      dVar12 = dVar19 + dVar18;
      dVar1 = dVar12 * dVar5;
      uVar10 = (uint)((ulonglong)dVar1 >> 0x34) & 0x7ff;
      uVar6 = uVar10;
      if (0x3e < uVar10 - 0x3c9) {
        if (0x7fffffff < uVar10 - 0x3c9) {
          if ((int)lVar9 == 0) {
            return dVar1 + DAT_1401ced60;
          }
          return (double)((ulonglong)(dVar1 + DAT_1401ced60) ^ DAT_1401c8630);
        }
        uVar6 = 0;
        if (0x408 < uVar10) {
          if (((ulonglong)dVar1 & 0x8000000000000000) != 0) {
            dVar12 = (double)FUN_1401be5a0();
            return dVar12;
          }
          dVar12 = (double)FUN_1401be550(lVar9);
          return dVar12;
        }
      }
      dVar20 = DAT_140ebc2e0 * dVar1 + DAT_140ebc2e8;
      uVar7 = (ulonglong)dVar20 >> 0x10;
      dVar20 = (double)(int)((ulonglong)dVar20 >> 0x10);
      dVar12 = dVar20 * DAT_140ebc2f8 + dVar20 * DAT_140ebc2f0 + dVar1 +
               dVar5 * ((dVar18 - dVar12) + dVar19) +
               dVar12 * dVar5 + (double)((ulonglong)dVar1 ^ DAT_1401c8630);
      dVar5 = dVar12 * dVar12;
      param_1 = (double)((lVar9 + uVar7 << 0x2c) +
                        *(longlong *)(&DAT_140ebc358 + (uVar7 & 0xff) * 0x10));
      dVar12 = dVar5 * dVar5 * (DAT_140ebc318 * dVar12 + DAT_140ebc310) +
               dVar5 * (DAT_140ebc308 * dVar12 + DAT_140ebc300) +
               dVar12 + *(double *)(&DAT_140ebc350 + (uVar7 & 0xff) * 0x10);
      if (uVar6 == 0) {
        if ((uVar7 & 0x80000000) == 0) {
          param_1 = (double)FUN_1401be660((dVar12 * (double)((longlong)param_1 + -0x3f10000000000000
                                                            ) +
                                          (double)((longlong)param_1 + -0x3f10000000000000)) *
                                          DAT_140eb6360);
        }
        else {
          auVar17._8_8_ = 0;
          auVar17._0_8_ = DAT_1401ced60;
          param_1 = (double)((longlong)param_1 + 0x3fe0000000000000);
          dVar5 = param_1 + param_1 * dVar12;
          if ((double)((ulonglong)dVar5 & _DAT_1401ced50) < DAT_1401ced60) {
            auVar15._8_8_ = 0;
            auVar15._0_8_ = dVar5;
            auVar13 = vcmpsd_avx(auVar15,ZEXT816(0),1);
            auVar13 = vblendvpd_avx(auVar17,auVar22,auVar13);
            dVar18 = auVar13._0_8_;
            dVar5 = ((param_1 - dVar5) + param_1 * dVar12 + (dVar18 - (dVar18 + dVar5)) + dVar5 +
                    dVar18 + dVar5) - dVar18;
            if (dVar5 == 0.0) {
              dVar5 = (double)((ulonglong)param_1 & 0x8000000000000000);
            }
          }
          param_1 = (double)FUN_1401be6a0(dVar5 * DAT_140eb6350);
        }
      }
      else {
        param_1 = param_1 * dVar12 + param_1;
      }
    }
  }
  return param_1;
}

