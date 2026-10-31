/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400b3dc3 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1400b3dc3(uint param_1,uint *param_2,float param_3,uint param_4,uint param_5,undefined8 param_6,
             uint param_7)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  
  lVar1 = DAT_140f2a910;
  bVar11 = true;
  uVar9 = param_5 - param_4;
  if (param_5 < param_4 || uVar9 == 0) {
    if (uVar9 != 0) {
      bVar11 = false;
    }
    else {
      bVar11 = (param_7 & 0x400) != 0 || param_4 != 0;
    }
  }
  bVar8 = (bool)(bVar11 ^ 1);
  if (param_3 == 0.0 && !bVar8) {
    param_3 = (float)uVar9 * *(float *)(DAT_140f2a910 + 0x285c);
  }
  uVar10 = (param_7 & 0x100000) >> 0x14;
  uVar7 = param_1 & 0xfffffffe;
  if (((*(int *)(DAT_140f2a910 + 0x169c) == 1) && (cVar2 = FUN_140081bec(0), cVar2 != '\0')) &&
     (cVar2 = FUN_1400920f5(0,*(float *)(lVar1 + 0xa4) * DAT_1401c86a0), cVar2 != '\0')) {
    fVar14 = *(float *)(lVar1 + 0x104 + (ulonglong)uVar10 * 4);
    fVar12 = fVar14;
    if (*(char *)(lVar1 + 0x13a) != '\0') {
      fVar12 = DAT_140211db4 * fVar14;
    }
    if (((param_7 & 0x800) == 0) && (fVar14 = fVar12, *(char *)(lVar1 + 0x139) != '\0')) {
      fVar14 = fVar12 * DAT_1401c86d0;
    }
  }
  else {
    fVar14 = 0.0;
    if ((*(uint *)(lVar1 + 0x169c) & 0xfffffffe) == 2) {
      uVar15 = 0;
      if (uVar7 == 8) {
        uVar15 = FUN_1400bad8a(param_6,3);
      }
      uVar6 = 0x1000;
      if (*(int *)(lVar1 + 0x2250) == 3) {
        uVar6 = 0x282;
      }
      cVar2 = FUN_140091d93(uVar6);
      uVar6 = 0x2000;
      if (*(int *)(lVar1 + 0x2250) == 3) {
        uVar6 = 0x283;
      }
      cVar3 = FUN_140091d93(uVar6);
      fVar12 = DAT_1401c86d0;
      if (cVar3 == '\0') {
        fVar12 = DAT_1401c86c8;
      }
      if (cVar2 != '\0') {
        fVar12 = DAT_140210018;
      }
      if ((param_7 >> 0xb & 1) != 0) {
        fVar12 = DAT_1401c86c8;
      }
      fVar14 = (float)FUN_140095507(uVar10);
      fVar14 = fVar14 * fVar12;
      uVar15 = FUN_1400cffca(uVar15);
      param_3 = (float)FUN_14007b71f(param_3,uVar15);
    }
  }
  fVar14 = fVar14 * param_3;
  if ((param_7 & 0x100000) != 0) {
    fVar14 = (float)((uint)fVar14 ^ _DAT_1401c8590);
  }
  fVar12 = fVar14;
  if ((param_7 & 0x20) != 0) {
    fVar12 = fVar14 / (float)uVar9;
  }
  if (param_5 != param_4) {
    fVar14 = fVar12;
  }
  if ((param_7 >> 8 & 1) == 0 && !bVar8) {
    if ((param_5 <= *param_2) && (0.0 < fVar14)) goto LAB_1400b404c;
    bVar5 = fVar14 < 0.0 && *param_2 <= param_4;
  }
  else {
    bVar5 = false;
  }
  if ((*(char *)(lVar1 + 0x1688) == '\0') && (!bVar5)) {
    if ((fVar14 != 0.0) || (NAN(fVar14))) {
      *(float *)(lVar1 + 0x2858) = *(float *)(lVar1 + 0x2858) + fVar14;
      *(undefined1 *)(lVar1 + 0x2855) = 1;
    }
    else if (*(char *)(lVar1 + 0x2855) != '\x01') {
      return 0;
    }
    uVar9 = *param_2;
    if ((param_7 & 0x20) == 0) {
      uVar9 = uVar9 + (int)*(float *)(lVar1 + 0x2858);
      fVar12 = 0.0;
      uVar15 = 0;
    }
    else {
      fVar12 = DAT_1401c86c8;
      if (uVar7 == 8) {
        iVar4 = FUN_1400bad8a(param_6,3);
        fVar12 = (float)iVar4;
      }
      uVar15 = FUN_1401a65a0(DAT_140210018,fVar12);
      fVar12 = (float)FUN_1400d06ae(param_1,uVar9,param_4,param_5,uVar15,0);
      uVar9 = FUN_1400d080c(param_1,fVar12 + *(float *)(lVar1 + 0x2858),param_4,param_5,uVar15,0);
    }
    if ((param_7 & 0x40) == 0 && uVar7 == 8) {
      uVar9 = FUN_1400d099d(param_6,param_1,uVar9);
    }
    *(undefined1 *)(lVar1 + 0x2855) = 0;
    if ((param_7 & 0x20) == 0) {
      fVar13 = (float)(int)(uVar9 - *param_2);
    }
    else {
      fVar13 = (float)FUN_1400d06ae(param_1,uVar9,param_4,param_5,uVar15,0);
      fVar13 = fVar13 - fVar12;
    }
    *(float *)(lVar1 + 0x2858) = *(float *)(lVar1 + 0x2858) - fVar13;
    uVar10 = *param_2;
    if (!bVar8 && uVar10 != uVar9) {
      if (((byte)(param_7 >> 8) & bVar11) == 0) {
        if ((uVar9 < param_4) || (((uVar7 != 8 && (uVar10 < uVar9)) && (fVar14 < 0.0)))) {
          uVar9 = param_4;
        }
        if ((param_5 < uVar9) || (((uVar7 != 8 && (uVar9 < uVar10)) && (0.0 < fVar14)))) {
          uVar9 = param_5;
        }
      }
      else {
        if (uVar9 < param_4) {
          uVar9 = uVar9 + ((uVar7 != 8) - param_4) + param_5;
        }
        if (param_5 < uVar9) {
          uVar9 = uVar9 + ((param_4 - (uVar7 != 8)) - param_5);
        }
      }
    }
    if (uVar10 == uVar9) {
      return 0;
    }
    *param_2 = uVar9;
    return CONCAT71((uint7)(uint3)(uVar10 >> 8),1);
  }
LAB_1400b404c:
  *(undefined4 *)(lVar1 + 0x2858) = 0;
  *(undefined1 *)(lVar1 + 0x2855) = 0;
  return 0;
}

