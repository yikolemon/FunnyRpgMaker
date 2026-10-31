/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101368df */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_101368df(uint param_1,float *param_2,float param_3,float param_4,float param_5,
            undefined4 param_6,uint param_7)

{
  float fVar1;
  double dVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  bool bVar8;
  undefined4 uVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  float10 fVar13;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_5c;
  float local_54;
  
  iVar3 = DAT_1039d74c;
  bVar4 = 1;
  if (param_5 <= param_4) {
    if ((param_4 != param_5) || (NAN(param_4) || NAN(param_5))) {
      bVar4 = 0;
    }
    else {
      bVar4 = (byte)(param_7 >> 10) & 1 | param_4 != 0.0;
    }
  }
  bVar10 = bVar4 ^ 1;
  fVar14 = param_5 - param_4;
  if ((param_3 == 0.0 && bVar10 == 0) && (fVar14 < DAT_102b89b4)) {
    param_3 = *(float *)(DAT_1039d74c + 0x25e0) * fVar14;
  }
  uVar11 = (param_7 & 0x100000) >> 0x14;
  uVar12 = param_1 & 0xfffffffe;
  if (((*(int *)(DAT_1039d74c + 0x1548) == 1) && (cVar5 = FUN_10103c30(0), cVar5 != '\0')) &&
     (cVar5 = FUN_10113fae(0,*(float *)(iVar3 + 0x90) * DAT_102b70e0), cVar5 != '\0')) {
    fVar16 = *(float *)(iVar3 + 0xd8 + uVar11 * 4);
    fVar15 = fVar16;
    if (*(char *)(iVar3 + 0x106) != '\0') {
      fVar15 = DAT_102b94f4 * fVar16;
    }
    if (((param_7 & 0x800) == 0) && (fVar16 = fVar15, *(char *)(iVar3 + 0x105) != '\0')) {
      fVar16 = fVar15 * DAT_102b710c;
    }
  }
  else {
    fVar16 = 0.0;
    if ((*(uint *)(iVar3 + 0x1548) & 0xfffffffe) == 2) {
      if (uVar12 == 8) {
        FUN_1013db7c(param_6,3);
      }
      uVar9 = 0x1000;
      if (*(int *)(iVar3 + 0x208c) == 3) {
        uVar9 = 0x282;
      }
      cVar5 = FUN_10113c70(uVar9);
      uVar9 = 0x2000;
      if (*(int *)(iVar3 + 0x208c) == 3) {
        uVar9 = 0x283;
      }
      cVar6 = FUN_10113c70(uVar9);
      fVar16 = DAT_102b710c;
      if (cVar6 == '\0') {
        fVar16 = DAT_1028b430;
      }
      if (cVar5 != '\0') {
        fVar16 = DAT_102b71b8;
      }
      if ((param_7 >> 0xb & 1) != 0) {
        fVar16 = DAT_1028b430;
      }
      fVar13 = (float10)FUN_10117386(uVar11);
      fVar16 = fVar16 * (float)fVar13;
      fVar15 = fVar16;
      FUN_10152e0a();
      fVar13 = (float10)FUN_100fdbca(param_3,fVar15);
      param_3 = (float)fVar13;
    }
  }
  fVar16 = fVar16 * param_3;
  if ((param_7 & 0x100000) != 0) {
    fVar16 = (float)((uint)fVar16 ^ _DAT_1028f620);
  }
  if ((((param_7 & 0x20) != 0) && (fVar14 < DAT_102b89b4)) && (DAT_102b9528 < fVar14)) {
    fVar16 = fVar16 / fVar14;
  }
  if ((param_7 & 0x100) == 0 && bVar10 == 0) {
    if ((param_5 <= *param_2) && (0.0 < fVar16)) goto LAB_10136bf7;
    bVar8 = *param_2 <= param_4 && fVar16 < 0.0;
  }
  else {
    bVar8 = false;
  }
  if ((*(char *)(iVar3 + 0x1534) == '\0') && (!bVar8)) {
    if ((fVar16 != 0.0) || (NAN(fVar16))) {
      *(float *)(iVar3 + 0x25dc) = *(float *)(iVar3 + 0x25dc) + fVar16;
      *(undefined1 *)(iVar3 + 0x25d9) = 1;
    }
    else if (*(char *)(iVar3 + 0x25d9) != '\x01') {
      return 0;
    }
    fVar15 = *param_2;
    if ((param_7 & 0x20) == 0) {
      fVar15 = fVar15 + *(float *)(iVar3 + 0x25dc);
      local_54 = 0.0;
      local_5c = 0.0;
    }
    else {
      dVar2 = DAT_1028b438;
      if (uVar12 == 8) {
        iVar7 = FUN_1013db7c(param_6,3);
        dVar2 = (double)iVar7;
      }
      fVar13 = (float10)FUN_1026fab0(0xa0000000,0x3fb99999,dVar2);
      local_5c = (float)fVar13;
      fVar13 = (float10)FUN_10154e41(param_1,fVar15,param_4,param_5,local_5c,0);
      local_54 = (float)fVar13;
      fVar13 = (float10)FUN_10155274(param_1,*(float *)(iVar3 + 0x25dc) + local_54,param_4,param_5,
                                     local_5c,0);
      fVar15 = (float)fVar13;
    }
    if ((param_7 & 0x40) == 0 && uVar12 == 8) {
      FUN_10155601(param_6,param_1,fVar15);
      fVar15 = (float)extraout_ST0;
    }
    *(undefined1 *)(iVar3 + 0x25d9) = 0;
    if ((param_7 & 0x20) == 0) {
      local_54 = fVar15 - *param_2;
    }
    else {
      FUN_10154e41(param_1,fVar15,param_4,param_5,local_5c,0);
      local_54 = (float)extraout_ST0_00 - local_54;
    }
    *(float *)(iVar3 + 0x25dc) = *(float *)(iVar3 + 0x25dc) - local_54;
    fVar15 = (float)(~-(uint)(fVar15 == 0.0) & (uint)fVar15);
    fVar1 = *param_2;
    if (bVar10 == 0 && fVar15 != fVar1) {
      if (((byte)(param_7 >> 8) & bVar4) == 0) {
        if ((fVar15 < param_4) || (((uVar12 != 8 && (fVar1 < fVar15)) && (fVar16 < 0.0)))) {
          fVar15 = param_4;
        }
        if ((param_5 < fVar15) || (((uVar12 != 8 && (fVar15 < fVar1)) && (0.0 < fVar16)))) {
          fVar15 = param_5;
        }
      }
      else {
        if (fVar15 < param_4) {
          fVar16 = DAT_1028b430;
          if (uVar12 == 8) {
            fVar16 = 0.0;
          }
          fVar15 = fVar15 + fVar16 + fVar14;
        }
        if (param_5 < fVar15) {
          fVar16 = DAT_1028b430;
          if (uVar12 == 8) {
            fVar16 = 0.0;
          }
          fVar15 = fVar15 - (fVar14 + fVar16);
        }
      }
    }
    if ((fVar1 == fVar15) && (!NAN(fVar1) && !NAN(fVar15))) {
      return 0;
    }
    *param_2 = fVar15;
    return 1;
  }
LAB_10136bf7:
  *(undefined4 *)(iVar3 + 0x25dc) = 0;
  *(undefined1 *)(iVar3 + 0x25d9) = 0;
  return 0;
}

