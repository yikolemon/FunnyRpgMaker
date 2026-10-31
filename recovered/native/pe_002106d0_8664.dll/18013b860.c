/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18013b860 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_18013b860(uint param_1,ulonglong *param_2,undefined8 param_3,ulonglong param_4,ulonglong param_5
             ,undefined8 param_6,uint param_7)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  bool bVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  
  lVar2 = DAT_180419160;
  uVar17 = (undefined4)((ulonglong)param_3 >> 0x20);
  fVar16 = (float)param_3;
  bVar12 = 1;
  uVar10 = param_5 - param_4;
  if (param_5 < param_4 || uVar10 == 0) {
    if (uVar10 != 0) {
      bVar12 = 0;
    }
    else {
      bVar12 = (byte)(param_7 >> 10) & 1 | param_4 != 0;
    }
  }
  bVar11 = bVar12 ^ 1;
  if (fVar16 == 0.0 && bVar11 == 0) {
    uVar17 = 0;
    fVar16 = (float)uVar10 * *(float *)(DAT_180419160 + 0x285c);
  }
  uVar13 = (param_7 & 0x100000) >> 0x14;
  uVar5 = param_1 & 0xfffffffe;
  if (((*(int *)(DAT_180419160 + 0x169c) == 1) && (cVar3 = FUN_1801088d4(0), cVar3 != '\0')) &&
     (cVar3 = FUN_180118ddd(0,*(float *)(lVar2 + 0xa4) * DAT_1802dbb2c), cVar3 != '\0')) {
    fVar15 = *(float *)(lVar2 + 0x104 + (ulonglong)uVar13 * 4);
    fVar14 = fVar15;
    if (*(char *)(lVar2 + 0x13a) != '\0') {
      fVar14 = DAT_1802df044 * fVar15;
    }
    if (((param_7 & 0x800) == 0) && (fVar15 = fVar14, *(char *)(lVar2 + 0x139) != '\0')) {
      fVar15 = fVar14 * DAT_1802dc2dc;
    }
  }
  else {
    fVar15 = 0.0;
    if ((*(uint *)(lVar2 + 0x169c) & 0xfffffffe) == 2) {
      uVar6 = 0;
      if (uVar5 == 8) {
        uVar6 = FUN_180141e5a(param_6,3);
      }
      uVar9 = 0x1000;
      if (*(int *)(lVar2 + 0x2250) == 3) {
        uVar9 = 0x282;
      }
      cVar3 = FUN_180118a7b(uVar9);
      uVar9 = 0x2000;
      if (*(int *)(lVar2 + 0x2250) == 3) {
        uVar9 = 0x283;
      }
      cVar4 = FUN_180118a7b(uVar9);
      fVar14 = DAT_1802dc2dc;
      if (cVar4 == '\0') {
        fVar14 = DAT_1802ac570;
      }
      if (cVar3 != '\0') {
        fVar14 = DAT_1802dc268;
      }
      if ((param_7 >> 0xb & 1) != 0) {
        fVar14 = DAT_1802ac570;
      }
      fVar15 = (float)FUN_18011c24b(uVar13);
      fVar15 = fVar15 * fVar14;
      uVar6 = FUN_18015709a(uVar6);
      fVar16 = (float)FUN_180102463(CONCAT44(uVar17,fVar16),uVar6);
    }
  }
  fVar15 = fVar15 * fVar16;
  if ((param_7 & 0x100000) != 0) {
    fVar15 = (float)((uint)fVar15 ^ _DAT_1802b0ce0);
  }
  fVar16 = fVar15;
  if ((param_7 & 0x20) != 0) {
    fVar16 = fVar15 / (float)uVar10;
  }
  if (param_5 != param_4) {
    fVar15 = fVar16;
  }
  if ((param_7 >> 8 & 1) == 0 && bVar11 == 0) {
    if ((param_5 <= *param_2) && (0.0 < fVar15)) goto LAB_18013bb36;
    bVar8 = fVar15 < 0.0 && *param_2 <= param_4;
  }
  else {
    bVar8 = false;
  }
  if ((*(char *)(lVar2 + 0x1688) == '\0') && (!bVar8)) {
    if ((fVar15 != 0.0) || (NAN(fVar15))) {
      *(float *)(lVar2 + 0x2858) = *(float *)(lVar2 + 0x2858) + fVar15;
      *(undefined1 *)(lVar2 + 0x2855) = 1;
    }
    else if (*(char *)(lVar2 + 0x2855) != '\x01') {
      return 0;
    }
    uVar10 = *param_2;
    if ((param_7 & 0x20) == 0) {
      uVar10 = uVar10 + (longlong)*(float *)(lVar2 + 0x2858);
      uVar17 = 0;
      fVar16 = 0.0;
    }
    else {
      fVar16 = DAT_1802ac570;
      if (uVar5 == 8) {
        iVar7 = FUN_180141e5a(param_6,3);
        fVar16 = (float)iVar7;
      }
      uVar17 = FUN_1802886b0(DAT_1802dc268,fVar16);
      fVar16 = (float)FUN_1801582cf(param_1,uVar10,param_4,param_5,uVar17,0);
      uVar10 = FUN_18015848d(param_1,*(float *)(lVar2 + 0x2858) + fVar16,param_4,param_5,uVar17,0);
    }
    if ((param_7 & 0x40) == 0 && uVar5 == 8) {
      uVar10 = FUN_180158684(param_6,param_1,uVar10);
    }
    *(undefined1 *)(lVar2 + 0x2855) = 0;
    if ((param_7 & 0x20) == 0) {
      fVar14 = (float)(longlong)(uVar10 - *param_2);
    }
    else {
      fVar14 = (float)FUN_1801582cf(param_1,uVar10,param_4,param_5,uVar17,0);
      fVar14 = fVar14 - fVar16;
    }
    *(float *)(lVar2 + 0x2858) = *(float *)(lVar2 + 0x2858) - fVar14;
    uVar1 = *param_2;
    if (bVar11 == 0 && uVar1 != uVar10) {
      if (((byte)(param_7 >> 8) & bVar12) == 0) {
        if ((uVar10 < param_4) || (((uVar5 != 8 && (uVar1 < uVar10)) && (fVar15 < 0.0)))) {
          uVar10 = param_4;
        }
        if ((param_5 < uVar10) || (((uVar5 != 8 && (uVar10 < uVar1)) && (0.0 < fVar15)))) {
          uVar10 = param_5;
        }
      }
      else {
        if (uVar10 < param_4) {
          uVar10 = uVar10 + ((uVar5 != 8) - param_4) + param_5;
        }
        if (param_5 < uVar10) {
          uVar10 = uVar10 + ((param_4 - (uVar5 != 8)) - param_5);
        }
      }
    }
    if (uVar1 == uVar10) {
      return 0;
    }
    *param_2 = uVar10;
    return CONCAT71((int7)(uVar1 >> 8),1);
  }
LAB_18013bb36:
  *(undefined4 *)(lVar2 + 0x2858) = 0;
  *(undefined1 *)(lVar2 + 0x2855) = 0;
  return 0;
}

