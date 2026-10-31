/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400b4cc7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1400b4cc7(uint param_1,float *param_2,float param_3,float param_4,float param_5,
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
  
  lVar1 = DAT_140f2a910;
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
  if ((param_3 == 0.0 && bVar7 == 0) && (fVar15 < DAT_1402112e4)) {
    param_3 = *(float *)(DAT_140f2a910 + 0x285c) * fVar15;
  }
  uVar8 = (param_7 & 0x100000) >> 0x14;
  uVar9 = param_1 & 0xfffffffe;
  if (((*(int *)(DAT_140f2a910 + 0x169c) == 1) && (cVar2 = FUN_140081bec(0), cVar2 != '\0')) &&
     (cVar2 = FUN_1400920f5(0), cVar2 != '\0')) {
    fVar11 = *(float *)(lVar1 + 0x104 + (ulonglong)uVar8 * 4);
    fVar12 = fVar11;
    if (*(char *)(lVar1 + 0x13a) != '\0') {
      fVar12 = DAT_140211db4 * fVar11;
    }
    if (((param_7 & 0x800) == 0) && (fVar11 = fVar12, *(char *)(lVar1 + 0x139) != '\0')) {
      fVar11 = fVar12 * DAT_1401c86d0;
    }
  }
  else {
    fVar11 = 0.0;
    if ((*(uint *)(lVar1 + 0x169c) & 0xfffffffe) == 2) {
      uVar13 = 0;
      if (uVar9 == 8) {
        uVar13 = FUN_1400bad8a(param_6,3);
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
      fVar11 = (float)FUN_140095507(uVar8);
      fVar11 = fVar11 * fVar12;
      FUN_1400cffca(uVar13);
      param_3 = (float)FUN_14007b71f(param_3);
    }
  }
  fVar11 = fVar11 * param_3;
  if ((param_7 & 0x100000) != 0) {
    fVar11 = (float)((uint)fVar11 ^ _DAT_1401c8590);
  }
  if ((((param_7 & 0x20) != 0) && (fVar15 < DAT_1402112e4)) && (DAT_140211de0 < fVar15)) {
    fVar11 = fVar11 / fVar15;
  }
  if ((param_7 & 0x100) == 0 && bVar7 == 0) {
    if ((param_5 <= *param_2) && (0.0 < fVar11)) goto LAB_1400b4f9a;
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
      fVar14 = DAT_1401c86c8;
      if (uVar9 == 8) {
        iVar4 = FUN_1400bad8a(param_6,3);
        fVar14 = (float)iVar4;
      }
      uVar13 = FUN_1401a65a0(DAT_140210018,fVar14);
      fVar14 = (float)FUN_1400d16ef(param_1,fVar12,param_4,param_5,uVar13,0);
      fVar12 = (float)FUN_1400d1a78(param_1,fVar14 + *(float *)(lVar1 + 0x2858),param_4,param_5,
                                    uVar13,0);
    }
    if ((param_7 & 0x40) == 0 && uVar9 == 8) {
      FUN_1400d1dda(param_6,param_1);
      fVar12 = extraout_XMM0_Da;
    }
    *(undefined1 *)(lVar1 + 0x2855) = 0;
    if ((param_7 & 0x20) == 0) {
      fVar14 = fVar12 - *param_2;
    }
    else {
      FUN_1400d16ef(param_1,fVar12,param_4,param_5,uVar13,0);
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
          fVar11 = DAT_1401c86c8;
          if (uVar9 == 8) {
            fVar11 = 0.0;
          }
          fVar12 = fVar12 + fVar11 + fVar15;
        }
        if (param_5 < fVar12) {
          fVar11 = DAT_1401c86c8;
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
LAB_1400b4f9a:
  *(undefined4 *)(lVar1 + 0x2858) = 0;
  *(undefined1 *)(lVar1 + 0x2855) = 0;
  return 0;
}

