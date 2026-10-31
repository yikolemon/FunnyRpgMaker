/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18013bd97 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_18013bd97(uint param_1,float *param_2,float param_3,float param_4,float param_5,
             undefined8 param_6,uint param_7)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  
  lVar1 = DAT_180419160;
  bVar10 = 1;
  if (param_5 <= param_4) {
    if ((param_4 != param_5) || (NAN(param_4) || NAN(param_5))) {
      bVar10 = 0;
    }
    else {
      bVar10 = (byte)(param_7 >> 10) & 1 | param_4 != 0.0;
    }
  }
  bVar7 = bVar10 ^ 1;
  fVar15 = param_5 - param_4;
  if ((param_3 == 0.0 && bVar7 == 0) && (fVar15 < DAT_1802de564)) {
    param_3 = *(float *)(DAT_180419160 + 0x285c) * fVar15;
  }
  uVar8 = (param_7 & 0x100000) >> 0x14;
  uVar9 = param_1 & 0xfffffffe;
  if (((*(int *)(DAT_180419160 + 0x169c) == 1) && (cVar2 = FUN_1801088d4(0), cVar2 != '\0')) &&
     (cVar2 = FUN_180118ddd(0), cVar2 != '\0')) {
    fVar11 = *(float *)(lVar1 + 0x104 + (ulonglong)uVar8 * 4);
    fVar12 = fVar11;
    if (*(char *)(lVar1 + 0x13a) != '\0') {
      fVar12 = DAT_1802df044 * fVar11;
    }
    if (((param_7 & 0x800) == 0) && (fVar11 = fVar12, *(char *)(lVar1 + 0x139) != '\0')) {
      fVar11 = fVar12 * DAT_1802dc2dc;
    }
  }
  else {
    fVar11 = 0.0;
    if ((*(uint *)(lVar1 + 0x169c) & 0xfffffffe) == 2) {
      uVar13 = 0;
      if (uVar9 == 8) {
        uVar13 = FUN_180141e5a(param_6,3);
      }
      uVar6 = 0x1000;
      if (*(int *)(lVar1 + 0x2250) == 3) {
        uVar6 = 0x282;
      }
      cVar2 = FUN_180118a7b(uVar6);
      uVar6 = 0x2000;
      if (*(int *)(lVar1 + 0x2250) == 3) {
        uVar6 = 0x283;
      }
      cVar3 = FUN_180118a7b(uVar6);
      fVar12 = DAT_1802dc2dc;
      if (cVar3 == '\0') {
        fVar12 = DAT_1802ac570;
      }
      if (cVar2 != '\0') {
        fVar12 = DAT_1802dc268;
      }
      if ((param_7 >> 0xb & 1) != 0) {
        fVar12 = DAT_1802ac570;
      }
      fVar11 = (float)FUN_18011c24b(uVar8);
      fVar11 = fVar11 * fVar12;
      FUN_18015709a(uVar13);
      param_3 = (float)FUN_180102463(param_3);
    }
  }
  fVar11 = fVar11 * param_3;
  if ((param_7 & 0x100000) != 0) {
    fVar11 = (float)((uint)fVar11 ^ _DAT_1802b0ce0);
  }
  if ((((param_7 & 0x20) != 0) && (fVar15 < DAT_1802de564)) && (DAT_1802df070 < fVar15)) {
    fVar11 = fVar11 / fVar15;
  }
  if ((param_7 & 0x100) == 0 && bVar7 == 0) {
    if ((param_5 <= *param_2) && (0.0 < fVar11)) goto LAB_18013c06a;
    bVar5 = *param_2 <= param_4 && fVar11 < 0.0;
  }
  else {
    bVar5 = false;
  }
  if ((*(char *)(lVar1 + 0x1688) == '\0') && (!bVar5)) {
    if ((fVar11 != 0.0) || (NAN(fVar11))) {
      *(float *)(lVar1 + 0x2858) = *(float *)(lVar1 + 0x2858) + fVar11;
      *(undefined1 *)(lVar1 + 0x2855) = 1;
    }
    else if (*(char *)(lVar1 + 0x2855) != '\x01') {
      return 0;
    }
    fVar12 = *param_2;
    if ((param_7 & 0x20) == 0) {
      fVar12 = fVar12 + *(float *)(lVar1 + 0x2858);
      fVar14 = 0.0;
      uVar13 = 0;
    }
    else {
      fVar14 = DAT_1802ac570;
      if (uVar9 == 8) {
        iVar4 = FUN_180141e5a(param_6,3);
        fVar14 = (float)iVar4;
      }
      uVar13 = FUN_1802886b0(DAT_1802dc268,fVar14);
      fVar14 = (float)FUN_1801587bf(param_1,fVar12,param_4,param_5,uVar13,0);
      fVar12 = (float)FUN_180158b48(param_1,fVar14 + *(float *)(lVar1 + 0x2858),param_4,param_5,
                                    uVar13,0);
    }
    if ((param_7 & 0x40) == 0 && uVar9 == 8) {
      FUN_180158eaa(param_6,param_1);
      fVar12 = extraout_XMM0_Da;
    }
    *(undefined1 *)(lVar1 + 0x2855) = 0;
    if ((param_7 & 0x20) == 0) {
      fVar14 = fVar12 - *param_2;
    }
    else {
      FUN_1801587bf(param_1,fVar12,param_4,param_5,uVar13,0);
      fVar14 = extraout_XMM0_Da_00 - fVar14;
    }
    *(float *)(lVar1 + 0x2858) = *(float *)(lVar1 + 0x2858) - fVar14;
    fVar12 = (float)(~-(uint)(fVar12 == 0.0) & (uint)fVar12);
    fVar14 = *param_2;
    if (bVar7 == 0 && fVar12 != fVar14) {
      if (((byte)(param_7 >> 8) & bVar10) == 0) {
        if ((fVar12 < param_4) || (((uVar9 != 8 && (fVar14 < fVar12)) && (fVar11 < 0.0)))) {
          fVar12 = param_4;
        }
        if ((param_5 < fVar12) || (((uVar9 != 8 && (fVar12 < fVar14)) && (0.0 < fVar11)))) {
          fVar12 = param_5;
        }
      }
      else {
        if (fVar12 < param_4) {
          fVar11 = DAT_1802ac570;
          if (uVar9 == 8) {
            fVar11 = 0.0;
          }
          fVar12 = fVar12 + fVar11 + fVar15;
        }
        if (param_5 < fVar12) {
          fVar11 = DAT_1802ac570;
          if (uVar9 == 8) {
            fVar11 = 0.0;
          }
          fVar12 = fVar12 - (fVar15 + fVar11);
        }
      }
    }
    if ((fVar14 == fVar12) && (!NAN(fVar14) && !NAN(fVar12))) {
      return 0;
    }
    *param_2 = fVar12;
    return 1;
  }
LAB_18013c06a:
  *(undefined4 *)(lVar1 + 0x2858) = 0;
  *(undefined1 *)(lVar1 + 0x2855) = 0;
  return 0;
}

