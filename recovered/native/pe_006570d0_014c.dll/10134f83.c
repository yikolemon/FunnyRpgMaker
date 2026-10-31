/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10134f83 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_10134f83(uint param_1,int *param_2,float param_3,int param_4,int param_5,undefined4 param_6,
            uint param_7)

{
  int iVar1;
  double dVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  byte bVar9;
  undefined4 uVar8;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  float10 fVar13;
  float fVar14;
  float fVar15;
  float local_40;
  float local_3c;
  
  iVar1 = DAT_1039d74c;
  bVar12 = true;
  iVar5 = param_5 - param_4;
  if (iVar5 == 0 || param_5 < param_4) {
    if (iVar5 != 0) {
      bVar12 = false;
    }
    else {
      bVar12 = (param_7 & 0x400) != 0 || param_4 != 0;
    }
  }
  bVar9 = bVar12 ^ 1;
  if (param_3 == 0.0 && bVar9 == 0) {
    param_3 = (float)iVar5 * *(float *)(DAT_1039d74c + 0x25e0);
  }
  uVar10 = (param_7 & 0x100000) >> 0x14;
  uVar11 = param_1 & 0xfffffffe;
  if (((*(int *)(DAT_1039d74c + 0x1548) == 1) && (cVar3 = FUN_10103c30(0), cVar3 != '\0')) &&
     (cVar3 = FUN_10113fae(0,*(float *)(iVar1 + 0x90) * DAT_102b70e0), cVar3 != '\0')) {
    fVar15 = *(float *)(iVar1 + 0xd8 + uVar10 * 4);
    fVar14 = fVar15;
    if (*(char *)(iVar1 + 0x106) != '\0') {
      fVar14 = DAT_102b94f4 * fVar15;
    }
    if (((param_7 & 0x800) == 0) && (fVar15 = fVar14, *(char *)(iVar1 + 0x105) != '\0')) {
      fVar15 = fVar14 * DAT_102b710c;
    }
  }
  else {
    fVar15 = 0.0;
    if ((*(uint *)(iVar1 + 0x1548) & 0xfffffffe) == 2) {
      if (uVar11 == 8) {
        FUN_1013db7c(param_6,3);
      }
      uVar8 = 0x1000;
      if (*(int *)(iVar1 + 0x208c) == 3) {
        uVar8 = 0x282;
      }
      cVar3 = FUN_10113c70(uVar8);
      uVar8 = 0x2000;
      if (*(int *)(iVar1 + 0x208c) == 3) {
        uVar8 = 0x283;
      }
      cVar4 = FUN_10113c70(uVar8);
      fVar15 = DAT_102b710c;
      if (cVar4 == '\0') {
        fVar15 = DAT_1028b430;
      }
      if (cVar3 != '\0') {
        fVar15 = DAT_102b71b8;
      }
      if ((param_7 >> 0xb & 1) != 0) {
        fVar15 = DAT_1028b430;
      }
      fVar13 = (float10)FUN_10117386(uVar10);
      fVar15 = fVar15 * (float)fVar13;
      fVar14 = fVar15;
      FUN_10152e0a();
      fVar13 = (float10)FUN_100fdbca(param_3,fVar14);
      param_3 = (float)fVar13;
    }
  }
  fVar15 = fVar15 * param_3;
  if ((param_7 & 0x100000) != 0) {
    fVar15 = (float)((uint)fVar15 ^ _DAT_1028f620);
  }
  if (((param_7 & 0x20) != 0) && (param_5 - param_4 != 0 && param_4 <= param_5)) {
    fVar15 = fVar15 / (float)(param_5 - param_4);
  }
  if ((param_7 & 0x100) == 0 && bVar9 == 0) {
    if ((param_5 <= *param_2) && (0.0 < fVar15)) goto LAB_1013520c;
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
    iVar5 = *param_2;
    if ((param_7 & 0x20) == 0) {
      iVar5 = iVar5 + (int)*(float *)(iVar1 + 0x25dc);
      local_3c = 0.0;
      local_40 = 0.0;
    }
    else {
      dVar2 = DAT_1028b438;
      if (uVar11 == 8) {
        iVar6 = FUN_1013db7c(param_6,3);
        dVar2 = (double)iVar6;
      }
      fVar13 = (float10)FUN_1026fab0(0xa0000000,0x3fb99999,dVar2);
      local_40 = (float)fVar13;
      fVar13 = (float10)FUN_10152e5b(param_1,iVar5,param_4,param_5,local_40,0);
      local_3c = (float)fVar13;
      iVar5 = FUN_101531fa(param_1,*(float *)(iVar1 + 0x25dc) + local_3c,param_4,param_5,local_40,0)
      ;
    }
    if ((param_7 & 0x40) == 0 && uVar11 == 8) {
      iVar5 = FUN_10153542(param_6,param_1,iVar5);
    }
    *(undefined1 *)(iVar1 + 0x25d9) = 0;
    if ((param_7 & 0x20) == 0) {
      local_3c = (float)(iVar5 - *param_2);
    }
    else {
      fVar13 = (float10)FUN_10152e5b(param_1,iVar5,param_4,param_5,local_40,0);
      local_3c = (float)fVar13 - local_3c;
    }
    *(float *)(iVar1 + 0x25dc) = *(float *)(iVar1 + 0x25dc) - local_3c;
    iVar1 = *param_2;
    if (bVar9 == 0 && iVar1 != iVar5) {
      if (((byte)(param_7 >> 8) & bVar12) == 0) {
        if ((iVar5 < param_4) || (((uVar11 != 8 && (iVar1 < iVar5)) && (fVar15 < 0.0)))) {
          iVar5 = param_4;
        }
        if ((param_5 < iVar5) || (((uVar11 != 8 && (iVar5 < iVar1)) && (0.0 < fVar15)))) {
          iVar5 = param_5;
        }
      }
      else {
        if (iVar5 < param_4) {
          iVar5 = iVar5 + ((uint)(uVar11 != 8) - param_4) + param_5;
        }
        if (param_5 < iVar5) {
          iVar5 = iVar5 + ((param_4 - (uint)(uVar11 != 8)) - param_5);
        }
      }
    }
    if (iVar1 == iVar5) {
      return 0;
    }
    *param_2 = iVar5;
    return 1;
  }
LAB_1013520c:
  *(undefined4 *)(iVar1 + 0x25dc) = 0;
  *(undefined1 *)(iVar1 + 0x25d9) = 0;
  return 0;
}

