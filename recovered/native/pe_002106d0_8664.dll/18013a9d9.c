/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18013a9d9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_18013a9d9(uint param_1,int *param_2,float param_3,int param_4,int param_5,undefined8 param_6,
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
  
  lVar1 = DAT_180419160;
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
    param_3 = (float)iVar4 * *(float *)(DAT_180419160 + 0x285c);
  }
  uVar10 = (param_7 & 0x100000) >> 0x14;
  uVar8 = param_1 & 0xfffffffe;
  if (((*(int *)(DAT_180419160 + 0x169c) == 1) && (cVar2 = FUN_1801088d4(0), cVar2 != '\0')) &&
     (cVar2 = FUN_180118ddd(0,*(float *)(lVar1 + 0xa4) * DAT_1802dbb2c), cVar2 != '\0')) {
    fVar13 = *(float *)(lVar1 + 0x104 + (ulonglong)uVar10 * 4);
    fVar15 = fVar13;
    if (*(char *)(lVar1 + 0x13a) != '\0') {
      fVar15 = DAT_1802df044 * fVar13;
    }
    if (((param_7 & 0x800) == 0) && (fVar13 = fVar15, *(char *)(lVar1 + 0x139) != '\0')) {
      fVar13 = fVar15 * DAT_1802dc2dc;
    }
  }
  else {
    fVar13 = 0.0;
    if ((*(uint *)(lVar1 + 0x169c) & 0xfffffffe) == 2) {
      uVar14 = 0;
      if (uVar8 == 8) {
        uVar14 = FUN_180141e5a(param_6,3);
      }
      uVar7 = 0x1000;
      if (*(int *)(lVar1 + 0x2250) == 3) {
        uVar7 = 0x282;
      }
      cVar2 = FUN_180118a7b(uVar7);
      uVar7 = 0x2000;
      if (*(int *)(lVar1 + 0x2250) == 3) {
        uVar7 = 0x283;
      }
      cVar3 = FUN_180118a7b(uVar7);
      fVar15 = DAT_1802dc2dc;
      if (cVar3 == '\0') {
        fVar15 = DAT_1802ac570;
      }
      if (cVar2 != '\0') {
        fVar15 = DAT_1802dc268;
      }
      if ((param_7 >> 0xb & 1) != 0) {
        fVar15 = DAT_1802ac570;
      }
      fVar13 = (float)FUN_18011c24b(uVar10);
      fVar13 = fVar13 * fVar15;
      uVar14 = FUN_18015709a(uVar14);
      param_3 = (float)FUN_180102463(param_3,uVar14);
    }
  }
  fVar13 = fVar13 * param_3;
  if ((param_7 & 0x100000) != 0) {
    fVar13 = (float)((uint)fVar13 ^ _DAT_1802b0ce0);
  }
  if (((param_7 & 0x20) != 0) && (param_5 - param_4 != 0 && param_4 <= param_5)) {
    fVar13 = fVar13 / (float)(param_5 - param_4);
  }
  if ((param_7 & 0x100) == 0 && !bVar9) {
    if ((param_5 <= *param_2) && (0.0 < fVar13)) goto LAB_18013ac45;
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
      fVar15 = DAT_1802ac570;
      if (uVar8 == 8) {
        iVar5 = FUN_180141e5a(param_6,3);
        fVar15 = (float)iVar5;
      }
      uVar14 = FUN_1802886b0(DAT_1802dc268,fVar15);
      fVar15 = (float)FUN_1801570ce(param_1,iVar4,param_4,param_5,uVar14,0);
      iVar4 = FUN_1801573c0(param_1,fVar15 + *(float *)(lVar1 + 0x2858),param_4,param_5,uVar14,0);
    }
    if ((param_7 & 0x40) == 0 && uVar8 == 8) {
      iVar4 = FUN_1801576df(param_6,param_1,iVar4);
    }
    *(undefined1 *)(lVar1 + 0x2855) = 0;
    if ((param_7 & 0x20) == 0) {
      fVar12 = (float)(iVar4 - *param_2);
    }
    else {
      fVar12 = (float)FUN_1801570ce(param_1,iVar4,param_4,param_5,uVar14,0);
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
LAB_18013ac45:
  *(undefined4 *)(lVar1 + 0x2858) = 0;
  *(undefined1 *)(lVar1 + 0x2855) = 0;
  return 0;
}

