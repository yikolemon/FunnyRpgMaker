/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400b3909 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1400b3909(uint param_1,int *param_2,float param_3,int param_4,int param_5,undefined8 param_6,
             uint param_7)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined8 uVar7;
  uint uVar8;
  bool bVar9;
  uint uVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  
  lVar1 = DAT_140f2a910;
  bVar11 = true;
  iVar4 = param_5 - param_4;
  if (iVar4 == 0 || param_5 < param_4) {
    if (iVar4 != 0) {
      bVar11 = false;
    }
    else {
      bVar11 = (param_7 & 0x400) != 0 || param_4 != 0;
    }
  }
  bVar9 = (bool)(bVar11 ^ 1);
  if (param_3 == 0.0 && !bVar9) {
    param_3 = (float)iVar4 * *(float *)(DAT_140f2a910 + 0x285c);
  }
  uVar10 = (param_7 & 0x100000) >> 0x14;
  uVar8 = param_1 & 0xfffffffe;
  if (((*(int *)(DAT_140f2a910 + 0x169c) == 1) && (cVar2 = FUN_140081bec(0), cVar2 != '\0')) &&
     (cVar2 = FUN_1400920f5(0,*(float *)(lVar1 + 0xa4) * DAT_1401c86a0), cVar2 != '\0')) {
    fVar13 = *(float *)(lVar1 + 0x104 + (ulonglong)uVar10 * 4);
    fVar15 = fVar13;
    if (*(char *)(lVar1 + 0x13a) != '\0') {
      fVar15 = DAT_140211db4 * fVar13;
    }
    if (((param_7 & 0x800) == 0) && (fVar13 = fVar15, *(char *)(lVar1 + 0x139) != '\0')) {
      fVar13 = fVar15 * DAT_1401c86d0;
    }
  }
  else {
    fVar13 = 0.0;
    if ((*(uint *)(lVar1 + 0x169c) & 0xfffffffe) == 2) {
      uVar14 = 0;
      if (uVar8 == 8) {
        uVar14 = FUN_1400bad8a(param_6,3);
      }
      uVar7 = 0x1000;
      if (*(int *)(lVar1 + 0x2250) == 3) {
        uVar7 = 0x282;
      }
      cVar2 = FUN_140091d93(uVar7);
      uVar7 = 0x2000;
      if (*(int *)(lVar1 + 0x2250) == 3) {
        uVar7 = 0x283;
      }
      cVar3 = FUN_140091d93(uVar7);
      fVar15 = DAT_1401c86d0;
      if (cVar3 == '\0') {
        fVar15 = DAT_1401c86c8;
      }
      if (cVar2 != '\0') {
        fVar15 = DAT_140210018;
      }
      if ((param_7 >> 0xb & 1) != 0) {
        fVar15 = DAT_1401c86c8;
      }
      fVar13 = (float)FUN_140095507(uVar10);
      fVar13 = fVar13 * fVar15;
      uVar14 = FUN_1400cffca(uVar14);
      param_3 = (float)FUN_14007b71f(param_3,uVar14);
    }
  }
  fVar13 = fVar13 * param_3;
  if ((param_7 & 0x100000) != 0) {
    fVar13 = (float)((uint)fVar13 ^ _DAT_1401c8590);
  }
  if (((param_7 & 0x20) != 0) && (param_5 - param_4 != 0 && param_4 <= param_5)) {
    fVar13 = fVar13 / (float)(param_5 - param_4);
  }
  if ((param_7 & 0x100) == 0 && !bVar9) {
    if ((param_5 <= *param_2) && (0.0 < fVar13)) goto LAB_1400b3b75;
    bVar6 = fVar13 < 0.0 && *param_2 <= param_4;
  }
  else {
    bVar6 = false;
  }
  if ((*(char *)(lVar1 + 0x1688) == '\0') && (!bVar6)) {
    if ((fVar13 != 0.0) || (NAN(fVar13))) {
      *(float *)(lVar1 + 0x2858) = *(float *)(lVar1 + 0x2858) + fVar13;
      *(undefined1 *)(lVar1 + 0x2855) = 1;
    }
    else if (*(char *)(lVar1 + 0x2855) != '\x01') {
      return 0;
    }
    iVar4 = *param_2;
    if ((param_7 & 0x20) == 0) {
      iVar4 = iVar4 + (int)*(float *)(lVar1 + 0x2858);
      fVar15 = 0.0;
      uVar14 = 0;
    }
    else {
      fVar15 = DAT_1401c86c8;
      if (uVar8 == 8) {
        iVar5 = FUN_1400bad8a(param_6,3);
        fVar15 = (float)iVar5;
      }
      uVar14 = FUN_1401a65a0(DAT_140210018,fVar15);
      fVar15 = (float)FUN_1400cfffe(param_1,iVar4,param_4,param_5,uVar14,0);
      iVar4 = FUN_1400d02f0(param_1,fVar15 + *(float *)(lVar1 + 0x2858),param_4,param_5,uVar14,0);
    }
    if ((param_7 & 0x40) == 0 && uVar8 == 8) {
      iVar4 = FUN_1400d060f(param_6,param_1,iVar4);
    }
    *(undefined1 *)(lVar1 + 0x2855) = 0;
    if ((param_7 & 0x20) == 0) {
      fVar12 = (float)(iVar4 - *param_2);
    }
    else {
      fVar12 = (float)FUN_1400cfffe(param_1,iVar4,param_4,param_5,uVar14,0);
      fVar12 = fVar12 - fVar15;
    }
    *(float *)(lVar1 + 0x2858) = *(float *)(lVar1 + 0x2858) - fVar12;
    iVar5 = *param_2;
    if (!bVar9 && iVar5 != iVar4) {
      if (((byte)(param_7 >> 8) & bVar11) == 0) {
        if ((iVar4 < param_4) || (((uVar8 != 8 && (iVar5 < iVar4)) && (fVar13 < 0.0)))) {
          iVar4 = param_4;
        }
        if ((param_5 < iVar4) || (((uVar8 != 8 && (iVar4 < iVar5)) && (0.0 < fVar13)))) {
          iVar4 = param_5;
        }
      }
      else {
        if (iVar4 < param_4) {
          iVar4 = iVar4 + ((uint)(uVar8 != 8) - param_4) + param_5;
        }
        if (param_5 < iVar4) {
          iVar4 = iVar4 + ((param_4 - (uint)(uVar8 != 8)) - param_5);
        }
      }
    }
    if (iVar5 == iVar4) {
      return 0;
    }
    *param_2 = iVar4;
    return CONCAT71((uint7)(uint3)((uint)iVar5 >> 8),1);
  }
LAB_1400b3b75:
  *(undefined4 *)(lVar1 + 0x2858) = 0;
  *(undefined1 *)(lVar1 + 0x2855) = 0;
  return 0;
}

