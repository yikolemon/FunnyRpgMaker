/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10114bb2 */

void FUN_10114bb2(void)

{
  float *pfVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  float10 fVar9;
  float fVar10;
  float fVar11;
  float local_48;
  float local_44;
  float local_40;
  int local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  uint local_14;
  
  iVar4 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_48;
  fVar2 = *(float *)(DAT_1039d74c + 0x14cc);
  iVar7 = *(int *)(DAT_1039d74c + 0x1e80);
  uVar3 = *(uint *)(DAT_1039d74c + 0x1e84);
  local_24 = *(float *)(DAT_1039d74c + 0x1e9c);
  fStack_20 = *(float *)(DAT_1039d74c + 0x1ea0);
  fStack_1c = *(float *)(DAT_1039d74c + 0x1ea4);
  fStack_18 = *(float *)(DAT_1039d74c + 0x1ea8);
  if (*(char *)((int)fVar2 + 0x1a4) == '\0') {
    local_44 = *(float *)((int)fVar2 + 0x28c);
    local_40 = *(float *)((int)fVar2 + 0x294);
    local_48 = local_24;
    fVar9 = (float10)FUN_10112cc4();
    local_24 = (float)fVar9;
    local_44 = *(float *)((int)fVar2 + 0x28c);
    local_40 = *(float *)((int)fVar2 + 0x294);
    local_48 = fStack_1c;
    fVar9 = (float10)FUN_10112cc4();
    fStack_1c = (float)fVar9;
  }
  if (*(char *)(iVar4 + 0x209a) == '\0') {
    uVar8 = uVar3 & 0x40;
  }
  else {
    uVar8 = uVar3 & 0x40;
    if (*(int *)(iVar4 + 0x2050) == *(int *)((int)fVar2 + 0x19c) && uVar8 == 0) {
      if ((uVar3 & 4) == 0) {
        local_3c = iVar7;
        FUN_10112734();
        *(undefined1 *)(iVar4 + 0x209a) = 0;
        uVar6 = 1;
        if (*(char *)(DAT_1039d74c + 0x20d9) == '\0') {
          uVar6 = *(undefined1 *)(DAT_1039d74c + 0x209a);
        }
        *(undefined1 *)(DAT_1039d74c + 0x2099) = uVar6;
      }
      else {
        uVar8 = 0;
        if (*(int *)(iVar4 + 0x20a4) != 0) goto LAB_10114cd3;
        local_3c = iVar7;
        FUN_10112734();
      }
      uVar8 = 0;
      iVar7 = local_3c;
    }
  }
LAB_10114cd3:
  if (((uVar8 == 0 & *(byte *)(iVar4 + 0x20d9)) == 1) &&
     ((fVar10 = *(float *)(iVar4 + 0x20dc), ((uint)fVar10 >> 9 & 1) != 0 ||
      ((*(byte *)((int)fVar2 + 0xe) & 1) == 0)))) {
    if (((uint)fVar10 >> 10 & 1) == 0) {
      if ((((uint)fVar10 & 0x10) != 0) || (*(int *)(iVar4 + 0x2044) != iVar7)) {
        local_3c = iVar7;
        cVar5 = FUN_1012724c();
        if (cVar5 != '\0') {
          FUN_10112734();
        }
        iVar7 = local_3c;
        if (((((*(byte *)(iVar4 + 0x20dc) & 0x20) != 0) &&
             (fStack_20 < *(float *)((int)fVar2 + 600))) &&
            (*(float *)((int)fVar2 + 0x250) < fStack_18)) &&
           ((local_24 < *(float *)((int)fVar2 + 0x254) &&
            (*(float *)((int)fVar2 + 0x24c) <= fStack_1c &&
             fStack_1c != *(float *)((int)fVar2 + 0x24c))))) {
          local_48 = fStack_18;
          local_38 = fStack_20;
          local_30 = fStack_18;
          local_44 = *(float *)((int)fVar2 + 0x250);
          local_40 = *(float *)((int)fVar2 + 600);
          fVar9 = (float10)FUN_10112cc4();
          local_34 = (float)fVar9;
          local_44 = *(float *)((int)fVar2 + 0x250);
          local_40 = *(float *)((int)fVar2 + 600);
          local_48 = local_38;
          local_28 = local_34;
          fVar9 = (float10)FUN_10112cc4();
          local_2c = (float)fVar9;
          iVar7 = local_3c;
          if (((local_30 - local_38) * DAT_102b71d4 <= local_34 - local_2c) &&
             (cVar5 = FUN_1012724c(), iVar7 = local_3c, cVar5 != '\0')) {
            FUN_10112734();
            iVar7 = local_3c;
          }
        }
      }
    }
    else {
      local_48 = fVar10;
      FUN_1012712e();
    }
  }
  if (*(int *)(iVar4 + 0x2044) == iVar7) {
    if (*(float *)(iVar4 + 0x2048) != fVar2) {
      local_48 = fVar2;
      FUN_1011238c();
    }
    *(undefined4 *)(iVar4 + 0x2050) = *(undefined4 *)((int)fVar2 + 0x19c);
    local_48 = *(float *)(iVar4 + 0x1e3c);
    FUN_101120d9();
    *(undefined4 *)(iVar4 + 0x204c) = *(undefined4 *)(iVar4 + 0x1e3c);
    *(undefined1 *)(iVar4 + 0x2043) = 1;
    *(uint *)(iVar4 + 0x2054) = uVar3;
    if ((*(byte *)(iVar4 + 0x1e86) & 0x20) != 0) {
      *(undefined4 *)(iVar4 + 0x2094) = *(undefined4 *)(iVar4 + 0x1e5c);
      *(undefined4 *)(iVar4 + 0x2090) = *(undefined4 *)(iVar4 + 0x1e58);
    }
    fVar10 = (float)*(undefined8 *)((int)fVar2 + 0x154);
    fVar11 = (float)((ulonglong)*(undefined8 *)((int)fVar2 + 0x154) >> 0x20);
    pfVar1 = (float *)((int)fVar2 + 0x3cc + *(int *)((int)fVar2 + 0x19c) * 0x10);
    *pfVar1 = local_24 - fVar10;
    pfVar1[1] = fStack_20 - fVar11;
    pfVar1[2] = fStack_1c - fVar10;
    pfVar1[3] = fStack_18 - fVar11;
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

