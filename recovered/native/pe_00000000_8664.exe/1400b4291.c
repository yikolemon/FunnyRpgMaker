/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400b4291 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1400b4291(uint param_1,longlong *param_2,undefined8 param_3,longlong param_4,longlong param_5,
             undefined8 param_6,uint param_7)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  undefined8 uVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  
  lVar1 = DAT_140f2a910;
  uVar16 = (undefined4)((ulonglong)param_3 >> 0x20);
  fVar15 = (float)param_3;
  bVar11 = 1;
  lVar7 = param_5 - param_4;
  if (lVar7 == 0 || param_5 < param_4) {
    if (lVar7 != 0) {
      bVar11 = 0;
    }
    else {
      bVar11 = (byte)(param_7 >> 10) & 1 | param_4 != 0;
    }
  }
  bVar10 = bVar11 ^ 1;
  if (fVar15 == 0.0 && bVar10 == 0) {
    uVar16 = 0;
    fVar15 = (float)lVar7 * *(float *)(DAT_140f2a910 + 0x285c);
  }
  uVar12 = (param_7 & 0x100000) >> 0x14;
  uVar4 = param_1 & 0xfffffffe;
  if (((*(int *)(DAT_140f2a910 + 0x169c) == 1) && (cVar2 = FUN_140081bec(0), cVar2 != '\0')) &&
     (cVar2 = FUN_1400920f5(0,*(float *)(lVar1 + 0xa4) * DAT_1401c86a0), cVar2 != '\0')) {
    fVar14 = *(float *)(lVar1 + 0x104 + (ulonglong)uVar12 * 4);
    fVar13 = fVar14;
    if (*(char *)(lVar1 + 0x13a) != '\0') {
      fVar13 = DAT_140211db4 * fVar14;
    }
    if (((param_7 & 0x800) == 0) && (fVar14 = fVar13, *(char *)(lVar1 + 0x139) != '\0')) {
      fVar14 = fVar13 * DAT_1401c86d0;
    }
  }
  else {
    fVar14 = 0.0;
    if ((*(uint *)(lVar1 + 0x169c) & 0xfffffffe) == 2) {
      uVar5 = 0;
      if (uVar4 == 8) {
        uVar5 = FUN_1400bad8a(param_6,3);
      }
      uVar9 = 0x1000;
      if (*(int *)(lVar1 + 0x2250) == 3) {
        uVar9 = 0x282;
      }
      cVar2 = FUN_140091d93(uVar9);
      uVar9 = 0x2000;
      if (*(int *)(lVar1 + 0x2250) == 3) {
        uVar9 = 0x283;
      }
      cVar3 = FUN_140091d93(uVar9);
      fVar13 = DAT_1401c86d0;
      if (cVar3 == '\0') {
        fVar13 = DAT_1401c86c8;
      }
      if (cVar2 != '\0') {
        fVar13 = DAT_140210018;
      }
      if ((param_7 >> 0xb & 1) != 0) {
        fVar13 = DAT_1401c86c8;
      }
      fVar14 = (float)FUN_140095507(uVar12);
      fVar14 = fVar14 * fVar13;
      uVar5 = FUN_1400cffca(uVar5);
      fVar15 = (float)FUN_14007b71f(CONCAT44(uVar16,fVar15),uVar5);
    }
  }
  fVar14 = fVar14 * fVar15;
  if ((param_7 & 0x100000) != 0) {
    fVar14 = (float)((uint)fVar14 ^ _DAT_1401c8590);
  }
  if (((param_7 & 0x20) != 0) && (param_5 - param_4 != 0 && param_4 <= param_5)) {
    fVar14 = fVar14 / (float)(param_5 - param_4);
  }
  if ((param_7 >> 8 & 1) == 0 && bVar10 == 0) {
    if ((param_5 <= *param_2) && (0.0 < fVar14)) goto LAB_1400b4527;
    bVar8 = fVar14 < 0.0 && *param_2 <= param_4;
  }
  else {
    bVar8 = false;
  }
  if ((*(char *)(lVar1 + 0x1688) == '\0') && (!bVar8)) {
    if ((fVar14 != 0.0) || (NAN(fVar14))) {
      *(float *)(lVar1 + 0x2858) = *(float *)(lVar1 + 0x2858) + fVar14;
      *(undefined1 *)(lVar1 + 0x2855) = 1;
    }
    else if (*(char *)(lVar1 + 0x2855) != '\x01') {
      return 0;
    }
    lVar7 = *param_2;
    if ((param_7 & 0x20) == 0) {
      lVar7 = lVar7 + (longlong)*(float *)(lVar1 + 0x2858);
      uVar16 = 0;
      fVar15 = 0.0;
    }
    else {
      fVar15 = DAT_1401c86c8;
      if (uVar4 == 8) {
        iVar6 = FUN_1400bad8a(param_6,3);
        fVar15 = (float)iVar6;
      }
      uVar16 = FUN_1401a65a0(DAT_140210018,fVar15);
      fVar15 = (float)FUN_1400d0a68(param_1,lVar7,param_4,param_5,uVar16,0);
      lVar7 = FUN_1400d0de1(param_1,*(float *)(lVar1 + 0x2858) + fVar15,param_4,param_5,uVar16,0);
    }
    if ((param_7 & 0x40) == 0 && uVar4 == 8) {
      lVar7 = FUN_1400d1127(param_6,param_1,lVar7);
    }
    *(undefined1 *)(lVar1 + 0x2855) = 0;
    if ((param_7 & 0x20) == 0) {
      fVar13 = (float)(lVar7 - *param_2);
    }
    else {
      fVar13 = (float)FUN_1400d0a68(param_1,lVar7,param_4,param_5,uVar16,0);
      fVar13 = fVar13 - fVar15;
    }
    *(float *)(lVar1 + 0x2858) = *(float *)(lVar1 + 0x2858) - fVar13;
    lVar1 = *param_2;
    if (bVar10 == 0 && lVar1 != lVar7) {
      if (((byte)(param_7 >> 8) & bVar11) == 0) {
        if ((lVar7 < param_4) || (((uVar4 != 8 && (lVar1 < lVar7)) && (fVar14 < 0.0)))) {
          lVar7 = param_4;
        }
        if ((param_5 < lVar7) || (((uVar4 != 8 && (lVar7 < lVar1)) && (0.0 < fVar14)))) {
          lVar7 = param_5;
        }
      }
      else {
        if (lVar7 < param_4) {
          lVar7 = lVar7 + ((ulonglong)(uVar4 != 8) - param_4) + param_5;
        }
        if (param_5 < lVar7) {
          lVar7 = lVar7 + ((param_4 - (ulonglong)(uVar4 != 8)) - param_5);
        }
      }
    }
    if (lVar1 == lVar7) {
      return 0;
    }
    *param_2 = lVar7;
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
LAB_1400b4527:
  *(undefined4 *)(lVar1 + 0x2858) = 0;
  *(undefined1 *)(lVar1 + 0x2855) = 0;
  return 0;
}

