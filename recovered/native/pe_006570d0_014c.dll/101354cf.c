/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101354cf */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_101354cf(uint param_1,uint *param_2,float param_3,uint param_4,uint param_5,undefined4 param_6,
            uint param_7)

{
  int iVar1;
  char cVar2;
  char cVar3;
  byte bVar6;
  uint uVar4;
  int iVar5;
  bool bVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  float10 fVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  float local_44;
  float local_3c;
  
  iVar1 = DAT_1039d74c;
  bVar11 = true;
  uVar10 = param_5 - param_4;
  if (param_5 < param_4 || uVar10 == 0) {
    if (uVar10 != 0) {
      bVar11 = false;
    }
    else {
      bVar11 = (param_7 & 0x400) != 0 || param_4 != 0;
    }
  }
  bVar6 = bVar11 ^ 1;
  if (param_3 == 0.0 && bVar6 == 0) {
    param_3 = (float)((double)((ulonglong)uVar10 | (ulonglong)DAT_1028f6c0) - DAT_1028f6b0) *
              *(float *)(DAT_1039d74c + 0x25e0);
  }
  uVar9 = (param_7 & 0x100000) >> 0x14;
  uVar4 = param_1 & 0xfffffffe;
  if (((*(int *)(DAT_1039d74c + 0x1548) == 1) && (cVar2 = FUN_10103c30(0), cVar2 != '\0')) &&
     (cVar2 = FUN_10113fae(0,*(float *)(iVar1 + 0x90) * DAT_102b70e0), cVar2 != '\0')) {
    fVar15 = *(float *)(iVar1 + 0xd8 + uVar9 * 4);
    fVar13 = fVar15;
    if (*(char *)(iVar1 + 0x106) != '\0') {
      fVar13 = DAT_102b94f4 * fVar15;
    }
    if (((param_7 & 0x800) == 0) && (fVar15 = fVar13, *(char *)(iVar1 + 0x105) != '\0')) {
      fVar15 = fVar13 * DAT_102b710c;
    }
  }
  else {
    fVar15 = 0.0;
    if ((*(uint *)(iVar1 + 0x1548) & 0xfffffffe) == 2) {
      if (uVar4 == 8) {
        FUN_1013db7c(param_6,3);
      }
      uVar8 = 0x1000;
      if (*(int *)(iVar1 + 0x208c) == 3) {
        uVar8 = 0x282;
      }
      cVar2 = FUN_10113c70(uVar8);
      uVar8 = 0x2000;
      if (*(int *)(iVar1 + 0x208c) == 3) {
        uVar8 = 0x283;
      }
      cVar3 = FUN_10113c70(uVar8);
      fVar15 = DAT_102b710c;
      if (cVar3 == '\0') {
        fVar15 = DAT_1028b430;
      }
      if (cVar2 != '\0') {
        fVar15 = DAT_102b71b8;
      }
      if ((param_7 >> 0xb & 1) != 0) {
        fVar15 = DAT_1028b430;
      }
      fVar12 = (float10)FUN_10117386(uVar9);
      fVar15 = fVar15 * (float)fVar12;
      fVar13 = fVar15;
      FUN_10152e0a();
      fVar12 = (float10)FUN_100fdbca(param_3,fVar13);
      param_3 = (float)fVar12;
    }
  }
  fVar15 = fVar15 * param_3;
  if ((param_7 & 0x100000) != 0) {
    fVar15 = (float)((uint)fVar15 ^ _DAT_1028f620);
  }
  fVar13 = fVar15;
  if ((param_7 & 0x20) != 0) {
    fVar13 = fVar15 / (float)((double)((ulonglong)uVar10 | (ulonglong)DAT_1028f6c0) - DAT_1028f6b0);
  }
  if (param_5 != param_4) {
    fVar15 = fVar13;
  }
  if ((param_7 & 0x100) == 0 && bVar6 == 0) {
    if ((param_5 <= *param_2) && (0.0 < fVar15)) goto LAB_10135788;
    bVar7 = fVar15 < 0.0 && *param_2 <= param_4;
  }
  else {
    bVar7 = false;
  }
  if ((*(char *)(iVar1 + 0x1534) == '\0') && (!bVar7)) {
    if ((fVar15 != 0.0) || (NAN(fVar15))) {
      *(float *)(iVar1 + 0x25dc) = *(float *)(iVar1 + 0x25dc) + fVar15;
      *(undefined1 *)(iVar1 + 0x25d9) = 1;
    }
    else if (*(char *)(iVar1 + 0x25d9) != '\x01') {
      return 0;
    }
    uVar10 = *param_2;
    if ((param_7 & 0x20) == 0) {
      uVar10 = uVar10 + (int)*(float *)(iVar1 + 0x25dc);
      local_44 = 0.0;
      local_3c = 0.0;
    }
    else {
      dVar14 = DAT_1028b438;
      if (uVar4 == 8) {
        iVar5 = FUN_1013db7c(param_6,3);
        dVar14 = (double)iVar5;
      }
      fVar12 = (float10)FUN_1026fab0(0xa0000000,0x3fb99999,dVar14);
      local_3c = (float)fVar12;
      fVar12 = (float10)FUN_101535d7(param_1,uVar10,param_4,param_5,local_3c,0);
      local_44 = (float)fVar12;
      uVar10 = FUN_10153772(param_1,*(float *)(iVar1 + 0x25dc) + local_44,param_4,param_5,local_3c,0
                           );
    }
    if ((param_7 & 0x40) == 0 && uVar4 == 8) {
      uVar10 = FUN_10153915(param_6,param_1,uVar10);
    }
    *(undefined1 *)(iVar1 + 0x25d9) = 0;
    if ((param_7 & 0x20) == 0) {
      local_44 = (float)(int)(uVar10 - *param_2);
    }
    else {
      fVar12 = (float10)FUN_101535d7(param_1,uVar10,param_4,param_5,local_3c,0);
      local_44 = (float)fVar12 - local_44;
    }
    *(float *)(iVar1 + 0x25dc) = *(float *)(iVar1 + 0x25dc) - local_44;
    uVar9 = *param_2;
    if (bVar6 == 0 && uVar9 != uVar10) {
      if (((byte)(param_7 >> 8) & bVar11) == 0) {
        if ((uVar10 < param_4) || (((uVar4 != 8 && (uVar9 < uVar10)) && (fVar15 < 0.0)))) {
          uVar10 = param_4;
        }
        if ((param_5 < uVar10) || (((uVar4 != 8 && (uVar10 < uVar9)) && (0.0 < fVar15)))) {
          uVar10 = param_5;
        }
      }
      else {
        if (uVar10 < param_4) {
          uVar10 = uVar10 + ((uVar4 != 8) - param_4) + param_5;
        }
        if (param_5 < uVar10) {
          uVar10 = uVar10 + ((param_4 - (uVar4 != 8)) - param_5);
        }
      }
    }
    if (uVar9 == uVar10) {
      return 0;
    }
    *param_2 = uVar10;
    return 1;
  }
LAB_10135788:
  *(undefined4 *)(iVar1 + 0x25dc) = 0;
  *(undefined1 *)(iVar1 + 0x25d9) = 0;
  return 0;
}

