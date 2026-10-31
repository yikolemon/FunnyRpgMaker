/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140046d12 */

undefined8 FUN_140046d12(uint param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  bool bVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  
  uVar1 = param_1 | 0x800000;
  if (param_2 == 0) {
    uVar1 = param_1;
  }
  iVar16 = -0x97;
  if (param_2 != 0) {
    iVar16 = param_2 - 0x98;
  }
  uVar6 = uVar1 * 4;
  uVar20 = uVar1 * 4 + 2;
  uVar11 = (ulonglong)uVar20;
  bVar9 = param_2 < 2 || param_1 != 0;
  uVar18 = ~(uint)bVar9 + uVar1 * 4;
  uVar19 = (ulonglong)uVar18;
  if (iVar16 < 0) {
    uVar20 = iVar16 * -0xb2efb;
    uVar18 = uVar20 >> 0x14;
    uVar10 = iVar16 + uVar18;
    uVar5 = *(ulonglong *)(&DAT_14013ce70 + (ulonglong)-uVar10 * 8) & 0xffffffff;
    uVar17 = *(ulonglong *)(&DAT_14013ce70 + (ulonglong)-uVar10 * 8) >> 0x20;
    uVar15 = (ulonglong)uVar6;
    cVar2 = (char)uVar18;
    bVar3 = (cVar2 - (char)(uVar10 * -0x12934f >> 0x13)) + 0x1c;
    uVar14 = (uVar5 * uVar15 >> 0x20) + uVar17 * uVar15 >> (bVar3 & 0x3f);
    uVar8 = (uVar5 * uVar11 >> 0x20) + uVar11 * uVar17 >> (bVar3 & 0x3f);
    uVar5 = (uVar5 * uVar19 >> 0x20) + uVar17 * uVar19 >> (bVar3 & 0x3f);
    if (uVar20 >> 0x14 != 0) {
      if ((uint)((uVar5 & 0xffffffff) / 10) < ((int)uVar8 - 1U) / 10) {
        iVar12 = 0;
      }
      else {
        uVar19 = ((*(ulonglong *)(&DAT_14013ce70 + (ulonglong)(1 - uVar10) * 8) & 0xffffffff) *
                  uVar15 >> 0x20) +
                 (*(ulonglong *)(&DAT_14013ce70 + (ulonglong)(1 - uVar10) * 8) >> 0x20) * uVar15 >>
                 ((char)(~((1 - uVar10) * 0x12934f) >> 0x13) + cVar2 + '\x1c' & 0x3fU);
        iVar12 = (int)uVar19 + (int)((uVar19 & 0xffffffff) / 10) * -10;
      }
      if (uVar18 == 1) goto LAB_1400470d5;
      if (uVar20 < 0x1f00000) {
        bVar4 = (uVar6 & ~(-1 << (cVar2 - 1U & 0x1f))) == 0;
      }
      else {
        bVar4 = false;
      }
      bVar9 = false;
      goto LAB_140046fea;
    }
    iVar12 = 0;
LAB_1400470d5:
    bVar9 = (uVar1 & 1) == 0 && bVar9;
    uVar6 = (int)uVar8 - (uVar1 & 1);
    bVar4 = true;
  }
  else {
    uVar10 = (uint)(iVar16 * 0x13441) >> 0x12;
    cVar2 = (char)uVar10 - (char)iVar16;
    uVar5 = *(ulonglong *)(&DAT_14013cd70 + (ulonglong)uVar10 * 8) & 0xffffffff;
    uVar17 = *(ulonglong *)(&DAT_14013cd70 + (ulonglong)uVar10 * 8) >> 0x20;
    uVar15 = (ulonglong)uVar6;
    bVar3 = (char)(uVar10 * 0x12934f >> 0x13) + cVar2 + 0x1b;
    uVar14 = (uVar5 * uVar15 >> 0x20) + uVar17 * uVar15 >> (bVar3 & 0x3f);
    uVar8 = (uVar5 * uVar11 >> 0x20) + uVar11 * uVar17 >> (bVar3 & 0x3f);
    uVar5 = (uVar5 * uVar19 >> 0x20) + uVar17 * uVar19 >> (bVar3 & 0x3f);
    if (uVar10 == 0) {
      iVar12 = 0;
LAB_140046f29:
      if (0x33333333 < uVar1 * 0x33333334) {
        if ((uVar1 & 1) == 0) {
          uVar6 = 0;
          if (uVar18 * -0x33333333 < 0x33333334) {
            uVar6 = 0;
            do {
              uVar6 = uVar6 + 1;
              uVar11 = uVar19 / 5;
              uVar19 = uVar19 / 5;
            } while ((uint)((int)uVar11 * -0x33333333) < 0x33333334);
          }
          bVar9 = uVar10 <= uVar6;
          bVar4 = false;
          goto LAB_140046fea;
        }
        uVar6 = 0;
        if (uVar20 * -0x33333333 < 0x33333334) {
          uVar6 = 0;
          do {
            uVar6 = uVar6 + 1;
            uVar19 = uVar11 / 5;
            uVar11 = uVar11 / 5;
          } while ((uint)((int)uVar19 * -0x33333333) < 0x33333334);
        }
        uVar8 = (ulonglong)((int)uVar8 + -1 + (uint)(uVar6 < uVar10));
        goto LAB_140046fe6;
      }
      uVar18 = 0;
      do {
        uVar18 = uVar18 + 1;
        uVar20 = uVar6 / 5;
        uVar6 = uVar6 / 5;
      } while (uVar20 * -0x33333333 < 0x33333334);
      bVar4 = uVar10 <= uVar18;
    }
    else {
      if ((uint)((uVar5 & 0xffffffff) / 10) < ((int)uVar8 - 1U) / 10) {
        iVar12 = 0;
      }
      else {
        uVar15 = ((*(ulonglong *)(&DAT_14013cd70 + (ulonglong)(uVar10 - 1) * 8) & 0xffffffff) *
                  uVar15 >> 0x20) +
                 (*(ulonglong *)(&DAT_14013cd70 + (ulonglong)(uVar10 - 1) * 8) >> 0x20) * uVar15 >>
                 (cVar2 + (char)((uVar10 - 1) * 0x12934f >> 0x13) + 0x1aU & 0x3f);
        iVar12 = (int)uVar15 + (int)((uVar15 & 0xffffffff) / 10) * -10;
      }
      if ((uint)(iVar16 * 0x13441) < 0x280000) goto LAB_140046f29;
LAB_140046fe6:
      bVar4 = false;
    }
    bVar9 = false;
LAB_140046fea:
    bVar3 = (byte)iVar12;
    iVar13 = (int)uVar14;
    uVar6 = (uint)uVar8;
    iVar16 = (int)uVar5;
    if ((bVar9 == false) && (bVar4 == false)) {
      uVar8 = uVar8 & 0xffffffff;
      uVar5 = uVar5 & 0xffffffff;
      iVar7 = 0;
      if ((uint)(uVar5 / 10) < (uint)(uVar8 / 10)) {
        iVar7 = 0;
        do {
          uVar19 = uVar14;
          uVar5 = uVar5 / 10;
          uVar8 = uVar8 / 10;
          iVar16 = (int)uVar5;
          uVar11 = uVar19 & 0xffffffff;
          uVar14 = uVar11 / 10;
          iVar13 = (int)uVar14;
          iVar7 = iVar7 + 1;
        } while ((uint)(uVar5 / 10) < (uint)(uVar8 / 10));
        bVar3 = (char)uVar19 + (char)(uVar11 / 10) * -10;
      }
      bVar9 = 4 < bVar3 || iVar13 == iVar16;
      goto LAB_1400471f9;
    }
  }
  uVar19 = (ulonglong)uVar6;
  iVar7 = 0;
  if ((uint)((uVar5 & 0xffffffff) / 10) < uVar6 / 10) {
    iVar7 = 0;
    uVar8 = uVar5;
    uVar5 = uVar5 & 0xffffffff;
    do {
      uVar5 = uVar5 / 10;
      uVar19 = uVar19 / 10;
      bVar9 = (bool)(bVar9 & (int)uVar5 * 10 == (int)uVar8);
      bVar4 = (bool)(bVar4 & (char)iVar12 == '\0');
      uVar8 = uVar14 & 0xffffffff;
      uVar11 = uVar8 / 10;
      iVar12 = (int)uVar14 + (int)(uVar8 / 10) * -10;
      iVar7 = iVar7 + 1;
      uVar14 = uVar8 / 10;
      uVar8 = uVar5;
    } while ((uint)(uVar5 / 10) < (uint)(uVar19 / 10));
  }
  else {
    uVar11 = uVar14 & 0xffffffff;
  }
  bVar3 = (byte)iVar12;
  iVar16 = (int)uVar5;
  if ((bVar9 == false) || (iVar16 + (int)((uVar5 & 0xffffffff) / 10) * -10 != 0)) {
    iVar13 = (int)uVar11;
  }
  else {
    do {
      bVar4 = (bool)(bVar4 & (char)iVar12 == '\0');
      iVar13 = (int)(uVar11 / 10);
      iVar12 = (int)uVar11 + (int)(uVar11 / 10) * -10;
      bVar3 = (byte)iVar12;
      uVar19 = uVar5 & 0xffffffff;
      uVar5 = uVar19 / 10;
      iVar16 = (int)uVar5;
      iVar7 = iVar7 + 1;
      uVar6 = (int)(uVar19 / 10) * -0x33333333;
      uVar11 = uVar11 / 10;
    } while ((uVar6 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f) < 0x1999999a);
  }
  bVar9 = (bool)(((byte)iVar13 | ~bVar4 | bVar3 != 5) & 4 < bVar3 |
                (~bVar9 | (byte)uVar1) & iVar13 == iVar16);
LAB_1400471f9:
  return CONCAT44(uVar10 + iVar7,(uint)bVar9 + iVar13);
}

