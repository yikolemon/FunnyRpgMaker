/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101066e2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101066e2(void)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  byte bVar5;
  float fVar6;
  int iVar7;
  undefined4 uVar8;
  byte bVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  float10 fVar13;
  undefined4 local_40;
  float local_3c;
  float local_38;
  byte local_31;
  float local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float local_20;
  float local_1c;
  float local_18;
  uint local_14;
  
  iVar2 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_40;
  *(undefined1 *)(DAT_1039d74c + 0xbf) = 0;
  uVar1 = *(uint *)(iVar2 + 0x30);
  if (((uVar1 & 2) == 0) || ((*(byte *)(iVar2 + 0x34) & 1) == 0)) {
    local_3c = 0.0;
  }
  else {
    local_3c = (float)CONCAT31((int3)(local_14 >> 8),1);
    if (*(int *)(iVar2 + 0x208c) != 3) {
      iVar10 = -0x20;
      do {
        cVar3 = FUN_10113c70(*(undefined4 *)((int)&DAT_102b869c + iVar10));
        if (cVar3 != '\0') {
          *(undefined4 *)(iVar2 + 0x208c) = 3;
        }
        iVar10 = iVar10 + 4;
      } while (iVar10 != 0);
    }
  }
  if (((uVar1 & 1) != 0) && (*(int *)(iVar2 + 0x208c) != 2)) {
    iVar10 = -0x1c;
    do {
      cVar3 = FUN_10113c70(*(undefined4 *)((int)&DAT_102b86b8 + iVar10));
      if (cVar3 != '\0') {
        *(undefined4 *)(iVar2 + 0x208c) = 2;
      }
      iVar10 = iVar10 + 4;
    } while (iVar10 != 0);
  }
  *(undefined4 *)(iVar2 + 0x2204) = 0;
  *(undefined4 *)(iVar2 + 0x2200) = 0;
  *(undefined4 *)(iVar2 + 0x2208) = 0;
  if (*(int *)(iVar2 + 0x20a4) != 0) {
    FUN_101174ba();
  }
  *(undefined2 *)(iVar2 + 0x209a) = 0;
  *(undefined4 *)(iVar2 + 0x20a4) = 0;
  if (*(char *)(iVar2 + 0x20d8) == '\x01') {
    FUN_1011759c();
  }
  *(undefined4 *)(iVar2 + 0x211c) = 0;
  *(undefined2 *)(iVar2 + 0x20d8) = 0;
  if (('\0' < *(char *)(iVar2 + 0x2098)) &&
     (cVar3 = *(char *)(iVar2 + 0x2098) + -1, *(char *)(iVar2 + 0x2098) = cVar3, cVar3 == '\0')) {
    *(undefined1 *)(iVar2 + 0x2040) = 1;
  }
  if ((((*(char *)(iVar2 + 0x2042) == '\x01') && (*(char *)(iVar2 + 0x2043) == '\x01')) &&
      (*(char *)(iVar2 + 0x2040) == '\x01')) && (*(char *)(iVar2 + 0x2041) == '\x01')) {
    bVar11 = *(int *)(iVar2 + 0x2048) != 0;
  }
  else {
    bVar11 = false;
  }
  *(undefined1 *)(iVar2 + 0x2042) = 0;
  if (*(int *)(iVar2 + 0x2048) != 0) {
    FUN_101276a0();
    iVar10 = *(int *)(iVar2 + 0x2048);
    if (((iVar10 != 0) && (*(int *)(iVar10 + 0x3c0) != 0)) && (*(int *)(iVar2 + 0x2050) == 0)) {
      *(undefined4 *)(iVar10 + 0x3c0) = 0;
    }
  }
  FUN_101276c6();
  local_31 = (byte)uVar1 | local_3c._0_1_;
  if (((local_31 & 1) == 0) || (*(int *)(iVar2 + 0x2048) == 0)) {
    *(undefined1 *)(iVar2 + 0xc1) = 0;
LAB_10106879:
    bVar12 = *(int *)(iVar2 + 0x221c) != 0;
  }
  else {
    bVar12 = (*(uint *)(*(int *)(iVar2 + 0x2048) + 0xc) & 0x10000) == 0;
    *(bool *)(iVar2 + 0xc1) = bVar12;
    if (((!bVar12) || (*(int *)(iVar2 + 0x2044) == 0)) ||
       (bVar12 = true, *(char *)(iVar2 + 0x2040) == '\0')) goto LAB_10106879;
  }
  *(bool *)(iVar2 + 0xc2) = bVar12;
  FUN_10127ea0();
  FUN_1012808e();
  *(undefined4 *)(iVar2 + 0x2058) = 0;
  *(undefined4 *)(iVar2 + 0x205c) = 0;
  *(undefined4 *)(iVar2 + 0x2060) = 0;
  *(undefined4 *)(iVar2 + 0x2064) = 0;
  iVar10 = *(int *)(iVar2 + 0x2044);
  if (((iVar10 == 0) || (*(char *)(iVar2 + 0x2040) != '\x01')) || (*(int *)(iVar2 + 0x221c) != 0))
  goto LAB_101068bd;
  if (*(int *)(iVar2 + 0x2048) == 0) {
LAB_101068cd:
    if ((*(char *)(iVar2 + 0x6b) == '\x01') && (*(char *)(iVar2 + 0x2098) == '\0')) {
      uVar4 = 1;
      goto LAB_101068e2;
    }
  }
  else {
    if ((*(byte *)(*(int *)(iVar2 + 0x2048) + 0xe) & 1) != 0) goto LAB_101068bd;
    if ((uVar1 & 1) == 0) {
      if (local_3c._0_1_ != '\0') {
        iVar7 = (*(byte *)(iVar2 + 0x65) ^ 1) * 2 + 0x27b;
        uVar8 = FUN_10113c7f(iVar7,0xffffffff);
        if ((char)uVar8 != '\0') {
          local_38 = (float)CONCAT31((int3)((uint)uVar8 >> 8),1);
          local_40 = 0;
          local_30 = (float)FUN_10113d60(iVar7,0,0xffffffff);
          goto LAB_10106d95;
        }
      }
      iVar7 = *(int *)(iVar2 + 0x1528);
      uVar8 = 0;
      local_30 = 0.0;
      local_38 = 0.0;
      bVar9 = 0;
LAB_10106e2e:
      if (iVar7 == 0) goto LAB_10106e4d;
      if (((byte)((byte)uVar8 | bVar9) == 1) && (local_40 = uVar8, iVar7 == iVar10))
      goto LAB_10106e56;
LAB_10106e86:
      bVar5 = (byte)uVar8;
      local_40 = uVar8;
      if (((byte)(SUB41(local_38,0) | bVar9 | bVar5) == 1) && (iVar7 == iVar10)) goto LAB_10106e9e;
LAB_10106ec6:
      if (((byte)(bVar9 | local_30._0_1_ | bVar5) == 1) && (iVar7 == iVar10)) goto LAB_10106edd;
    }
    else {
      fVar6 = (float)FUN_10113c7f(0x20c,0xffffffff);
      bVar9 = SUB41(local_3c,0) ^ 1;
      if (SUB41(fVar6,0) == '\0' && bVar9 == 0) {
        fVar6 = (float)FUN_10113c7f((*(byte *)(iVar2 + 0x65) ^ 1) * 2 + 0x27b,0xffffffff);
      }
      if (SUB41(fVar6,0) == '\0') {
        local_30 = 0.0;
        local_38 = 0.0;
      }
      else {
        local_30 = (float)FUN_10113d60(0x20c,0,0xffffffff);
        fVar6 = (float)CONCAT31((int3)((uint)local_30 >> 8),1);
        local_38 = fVar6;
        if (bVar9 == 0 && SUB41(local_30,0) == '\0') {
          fVar6 = (float)FUN_10113d60((*(byte *)(iVar2 + 0x65) ^ 1) * 2 + 0x27b,0,0xffffffff);
          local_30 = fVar6;
        }
      }
      local_40 = CONCAT31((int3)((uint)fVar6 >> 8),1);
      cVar3 = FUN_10113d60(0x20d,0,0xffffffff);
      if (cVar3 == '\0') {
        local_40 = FUN_10113d60(0x273,0,0xffffffff);
      }
LAB_10106d95:
      if ((SUB41(local_3c,0) & local_38._0_1_) == 1) {
        iVar7 = (*(byte *)(iVar2 + 0x65) ^ 1) * 2 + 0x27b;
        cVar3 = FUN_10113c7f(iVar7,0xffffffff);
        if (((cVar3 == '\0') || ((*(byte *)(iVar2 + 0x2056) & 0x10) == 0)) ||
           ((iVar7 = FUN_100f9590(DAT_1039d74c,iVar7),
            DAT_102b71d8 < *(float *)(iVar7 + 8) || DAT_102b71d8 == *(float *)(iVar7 + 8) ||
            (*(float *)(iVar7 + 4) < DAT_102b71d8)))) goto LAB_10106df6;
        uVar8 = CONCAT31((int3)((uint)iVar7 >> 8),1);
      }
      else {
LAB_10106df6:
        uVar8 = 0;
      }
      iVar7 = *(int *)(iVar2 + 0x1528);
      bVar9 = (byte)local_40;
      if (SUB41(local_30,0) != '\x01' || iVar7 != 0) goto LAB_10106e2e;
      *(int *)(iVar2 + 0x2058) = iVar10;
      *(undefined4 *)(iVar2 + 0x2064) = 2;
      local_30 = (float)CONCAT31((int3)((uint)iVar7 >> 8),1);
LAB_10106e4d:
      if ((byte)((byte)uVar8 | bVar9) == 1) {
LAB_10106e56:
        *(int *)(iVar2 + 0x2058) = iVar10;
        *(undefined4 *)(iVar2 + 0x2064) = 1;
        iVar7 = *(int *)(iVar2 + 0x1528);
        if (iVar7 != 0) goto LAB_10106e86;
      }
      bVar5 = (byte)uVar8;
      if ((bVar5 != 0) || ((local_38._0_1_ != '\0' || (bVar9 != 0)))) {
LAB_10106e9e:
        *(int *)(iVar2 + 0x205c) = iVar10;
        iVar7 = *(int *)(iVar2 + 0x1528);
        if (iVar7 != 0) goto LAB_10106ec6;
      }
      if ((bVar5 != 0) || ((local_30._0_1_ != '\0' || (bVar9 != 0)))) {
LAB_10106edd:
        *(int *)(iVar2 + 0x2060) = iVar10;
        FUN_10117108(iVar10);
      }
    }
LAB_101068bd:
    if ((*(int *)(iVar2 + 0x2048) == 0) || ((*(byte *)(*(int *)(iVar2 + 0x2048) + 0xe) & 1) == 0))
    goto LAB_101068cd;
    uVar4 = 0;
LAB_101068e2:
    *(undefined1 *)(iVar2 + 0x2040) = uVar4;
  }
  fVar6 = *(float *)(iVar2 + 0x2078);
  if (0.0 < fVar6) {
    fVar13 = (float10)FUN_100fdbca(0,fVar6 - *(float *)(iVar2 + 0x48));
    fVar6 = (float)fVar13;
    *(float *)(iVar2 + 0x2078) = fVar6;
    local_20 = fVar6;
  }
  if ((fVar6 == 0.0) && (!NAN(fVar6))) {
    *(undefined4 *)(iVar2 + 0x2074) = 0;
  }
  iVar10 = *(int *)(iVar2 + 0x2084);
  if (iVar10 != 0) {
    *(int *)(iVar2 + 0x2060) = iVar10;
    *(int *)(iVar2 + 0x205c) = iVar10;
    *(int *)(iVar2 + 0x2058) = iVar10;
    *(undefined4 *)(iVar2 + 0x2064) = *(undefined4 *)(iVar2 + 0x2088);
  }
  *(undefined4 *)(iVar2 + 0x2084) = 0;
  FUN_1012817e();
  if (*(int *)(iVar2 + 0x20e8) == -1) {
    FUN_101287fe();
  }
  uVar4 = 1;
  if (*(char *)(DAT_1039d74c + 0x20d9) == '\0') {
    uVar4 = *(undefined1 *)(DAT_1039d74c + 0x209a);
  }
  *(undefined1 *)(DAT_1039d74c + 0x2099) = uVar4;
  *(undefined1 *)(iVar2 + 0x2043) = 0;
  iVar10 = *(int *)(iVar2 + 0x2048);
  if (((iVar10 == 0) || ((*(byte *)(iVar10 + 0xe) & 1) != 0)) || (*(int *)(iVar2 + 0x221c) != 0)) {
LAB_10106ae2:
    if ((local_31 & 1) == 0) {
      *(undefined2 *)(iVar2 + 0x2040) = 0;
      goto LAB_10106b1f;
    }
  }
  else {
    local_30 = (float)(int)(*(float *)(iVar10 + 0x2e0) * DAT_102b8c10 * *(float *)(iVar2 + 0x48) +
                           DAT_102b70e0);
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    if ((*(short *)(iVar10 + 0x1a0) == 0) &&
       (uVar1 = *(uint *)(iVar2 + 0x20e8), (uVar1 != 0xffffffff & *(byte *)(iVar10 + 0x1a6)) == 1))
    {
      if (uVar1 < 2) {
        FUN_10115911(iVar10,(float)(int)(*(float *)(&DAT_102b8c18 + (uint)(uVar1 == 0) * 4) *
                                         local_30 + *(float *)(iVar10 + 0xc4)));
      }
      if ((uVar1 & 0xfffffffe) == 2) {
        FUN_10115932(iVar10,(float)(int)(*(float *)(&DAT_102b8c18 + (uint)(uVar1 == 2) * 4) *
                                         local_30 + *(float *)(iVar10 + 200)));
      }
    }
    if (local_3c._0_1_ == '\0') goto LAB_10106ae2;
    FUN_101137c8(&local_1c,_DAT_102b8c20,_UNK_102b8c24,_UNK_102b8c28,_UNK_102b8c2c);
    cVar3 = FUN_10113c70(0x282);
    fVar6 = DAT_102b71b8;
    if ((cVar3 == '\0') && (cVar3 = FUN_10113c70(0x283), fVar6 = DAT_102b710c, cVar3 == '\0')) {
      fVar6 = DAT_1028b430;
    }
    if (((local_1c != 0.0) || (NAN(local_1c))) && (*(char *)(iVar10 + 0xf4) == '\x01')) {
      local_3c = fVar6;
      FUN_10115911(iVar10,(float)(int)(local_1c * local_30 * fVar6 + *(float *)(iVar10 + 0xc4)));
      fVar6 = local_3c;
    }
    if ((local_18 != 0.0) || (NAN(local_18))) {
      FUN_10115932(iVar10,(float)(int)(local_18 * local_30 * fVar6 + *(float *)(iVar10 + 200)));
    }
  }
  if (((bVar11) && (*(char *)(iVar2 + 0x66) == '\x01')) && ((*(byte *)(iVar2 + 0x34) & 4) != 0)) {
    FUN_10116108();
    FUN_10113ff9(&local_1c);
  }
LAB_10106b1f:
  *(undefined4 *)(iVar2 + 0x2114) = 0;
  if (DAT_10388d00 != (local_14 ^ (uint)&local_40)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

