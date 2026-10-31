/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014a0eb */

int FUN_1014a0eb(uint param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  char *pcVar14;
  int *unaff_FS_OFFSET;
  undefined1 auStack_a0 [4];
  int local_9c;
  uint local_98;
  int local_94;
  undefined4 *local_90;
  int local_8c;
  int local_88;
  int *local_84;
  undefined1 local_80 [8];
  int local_78;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_a0;
  local_18 = 0xffffffff;
  local_1c = &LAB_10156210;
  local_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_20;
  local_9c = DAT_1039d74c;
  local_90 = *(undefined4 **)(DAT_1039d74c + 0x14cc);
  iVar9 = *(int *)(DAT_1039d74c + 0x2418);
  iVar13 = iVar9 + 1;
  *(int *)(DAT_1039d74c + 0x2418) = iVar13;
  puVar4 = &stack0xfffffffc;
  puVar5 = auStack_a0;
  if (*(int *)(local_9c + 0x241c) <= iVar9) {
    FUN_1014a69a();
    local_18 = 2;
    local_98 = *(int *)(local_9c + 0x2418);
    iVar13 = *(int *)(local_9c + 0x2420);
    if (iVar13 < (int)local_98) {
      if (iVar13 == 0) {
        local_8c = 8;
      }
      else {
        local_8c = iVar13 / 2 + iVar13;
      }
      if (local_8c <= (int)local_98) {
        local_8c = local_98;
      }
      iVar9 = FUN_100fa1fa(local_8c * 0x58);
      iVar13 = local_9c;
      if (*(int *)(local_9c + 0x2424) != 0) {
        FUN_1025b2d0(iVar9,*(int *)(local_9c + 0x2424),*(int *)(local_9c + 0x241c) * 0x58);
        local_88 = iVar9;
        FUN_100fa2cb(*(undefined4 *)(iVar13 + 0x2424));
        iVar9 = local_88;
      }
      *(int *)(local_9c + 0x2424) = iVar9;
      *(int *)(local_9c + 0x2420) = local_8c;
    }
    iVar13 = *(int *)(local_9c + 0x241c);
    iVar9 = local_98 - iVar13;
    if (iVar9 != 0 && iVar13 <= (int)local_98) {
      iVar13 = iVar13 * 0x58;
      do {
        FUN_1025b2d0(*(int *)(local_9c + 0x2424) + iVar13,local_80,0x58);
        iVar13 = iVar13 + 0x58;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    *(uint *)(local_9c + 0x241c) = local_98;
    local_18 = 0xffffffff;
    if (local_78 != 0) {
      FUN_100fa2cb(local_78);
    }
    iVar13 = *(int *)(local_9c + 0x2418);
    puVar4 = local_28;
    puVar5 = local_24;
  }
  local_24 = puVar5;
  local_28 = puVar4;
  uVar10 = param_1 | 0x800;
  if ((param_1 & 0x1800) != 0) {
    uVar10 = param_1;
  }
  uVar12 = uVar10 & 0xffffff3f;
  if ((uVar10 & 1) == 0) {
    uVar12 = uVar10;
  }
  local_98 = uVar12 & 0xffffffbf;
  if (-1 < (char)uVar12) {
    local_98 = uVar12;
  }
  local_88 = *(int *)(local_9c + 0x2424) + iVar13 * 0x58;
  local_8c = *(int *)(local_9c + 0x2424) + iVar13 * 0x58 + -0x58;
  iVar13 = *(int *)(local_9c + 0x2308);
  *(int *)(local_9c + 0x2414) = local_8c;
  if (iVar13 != 0) {
    if (*(char *)(iVar13 + 0x1ed) == '\0') {
      FUN_10161186(iVar13);
    }
    else if (*(int *)(iVar13 + 0x48) != -1) {
      FUN_101654f7(iVar13);
    }
  }
  puVar3 = local_90;
  iVar13 = *(int *)(local_90[0x50] + -4 + local_90[0x4e] * 4);
  local_94 = iVar13;
  FUN_101527b6();
  iVar9 = local_88;
  *(undefined4 *)(local_88 + -0x30) = 0;
  *(undefined4 *)(local_88 + -0x2c) = 0;
  *(undefined4 *)(local_88 + -0x28) = 0;
  *(undefined4 *)(local_88 + -0x24) = 0;
  *(undefined4 *)(local_88 + -0x10) = 0;
  *(undefined4 *)(local_88 + -0xc) = 0;
  *(undefined4 *)(local_88 + -8) = 0;
  *(undefined4 *)(local_88 + -4) = 0;
  *(undefined4 *)(local_88 + -0x20) = 0;
  *(undefined4 *)(local_88 + -0x1c) = 0;
  *(undefined4 *)(local_88 + -0x18) = 0;
  *(undefined4 *)(local_88 + -0x14) = 0;
  *(int *)(local_88 + -0x2c) = iVar13;
  *(uint *)(local_88 + -0x28) = local_98;
  *(undefined8 *)(local_88 + -0x1c) = *(undefined8 *)(puVar3 + 0x57);
  uVar11 = puVar3[0x51];
  uVar1 = puVar3[0x52];
  *(undefined4 *)(local_88 + -0x20) = uVar1;
  *(undefined4 *)(local_88 + -0x24) = uVar11;
  iVar13 = local_94;
  if ((local_98 >> 0xc & 1) != 0) {
    local_90[0x57] = uVar11;
    local_90[0x58] = uVar1;
    iVar13 = *(int *)(local_88 + -0x2c);
  }
  FUN_1010dc71(iVar13);
  uVar6 = FUN_10112095(*(undefined4 *)(local_9c + 0x1e3c));
  iVar2 = local_94;
  iVar13 = local_9c;
  *(undefined1 *)(iVar9 + -10) = uVar6;
  if ((local_98 >> 0xb & 1) != 0) {
    *(byte *)(local_90 + 0x68) = *(byte *)(local_90 + 0x68) | 1;
  }
  if (*(int *)(local_9c + 0x2204) == 0) {
    uVar10 = *(uint *)(local_9c + 0x108);
  }
  else {
    uVar10 = 0;
    if (*(char *)(local_9c + 0x2210) == '\0') {
      uVar10 = *(uint *)(local_9c + 0x220c);
    }
  }
  uVar12 = uVar10 & 0xffffdfff;
  if ((local_98 & 4) == 0) {
    uVar12 = uVar10;
  }
  *(uint *)(iVar9 + -0x10) = uVar12;
  local_84 = (int *)FUN_1014a7d2(local_94);
  iVar9 = local_88;
  local_84[1] = iVar2;
  local_84[2] = *(int *)(iVar13 + 4);
  local_84[3] = param_2;
  *local_84 = (int)local_90;
  *(int **)(local_88 + -0x30) = local_84;
  if (*(int *)(local_88 + -0x54) < 0) {
    uVar11 = FUN_100fa1fa(0);
    if (*(int *)(iVar9 + -0x50) != 0) {
      FUN_1025b2d0(uVar11,*(int *)(iVar9 + -0x50),*(int *)(iVar9 + -0x58) * 0x18);
      FUN_100fa2cb(*(undefined4 *)(iVar9 + -0x50));
    }
    *(undefined4 *)(iVar9 + -0x50) = uVar11;
    *(undefined4 *)(iVar9 + -0x54) = 0;
    iVar13 = local_9c;
  }
  *(undefined4 *)(iVar9 + -0x58) = 0;
  *(undefined8 *)(iVar9 + -0x48) = *(undefined8 *)(local_84 + 6);
  *(undefined8 *)(iVar9 + -0x40) = *(undefined8 *)(local_84 + 8);
  *(bool *)(iVar9 + -0x38) = *(char *)((int)local_84 + 0x11) == '\x01';
  *(undefined4 *)(iVar9 + -0x34) = param_3;
  if (((*(int *)(iVar13 + 0x2204) == 0) || (*(int *)(iVar13 + 0x2208) != *(int *)(iVar9 + -0x2c)))
     || (*(char *)(iVar13 + 0x2211) != '\x01')) {
    if (*(int *)(iVar13 + 0x2200) == *(int *)(iVar9 + -0x2c)) {
      uVar10 = *(uint *)(iVar9 + -0x10) & 0x3000;
      local_94._0_1_ = (local_98 & 0x18) == 0 && uVar10 == 0;
      local_94._1_3_ = (undefined3)(uVar10 >> 8);
    }
    else {
      local_94._0_1_ = false;
      local_94._1_3_ = 0;
    }
  }
  else {
    if ((*(uint *)(iVar9 + -0x10) >> 0xd & 1) != 0) {
      *(undefined1 *)(iVar9 + -9) = 1;
    }
    uVar10 = *(uint *)(iVar9 + -0x10) & 0x3000;
    local_94._0_1_ = (local_98 & 0x18) == 0 && uVar10 == 0;
    local_94._1_3_ = (undefined3)(uVar10 >> 8);
  }
  if ((local_98 & 0xc0) != 0) {
    uVar11 = FUN_10113594("##BoxSelect");
    puVar3 = local_90;
    *(undefined4 *)(iVar9 + -0x14) = uVar11;
    FUN_1014a807(local_90);
    cVar7 = FUN_10149729(local_80,puVar3,uVar11,local_98);
    iVar9 = local_88;
    if (cVar7 != '\0') {
      local_94._0_1_ = (byte)local_94 | *(byte *)(local_9c + 0x239c);
    }
  }
  if (*(char *)(iVar9 + -10) == '\x01') {
    if ((local_98 >> 9 & 1) != 0) {
      local_90 = (undefined4 *)(local_9c + 0x2394);
      if (param_2 == 0) {
        if (*(char *)(local_9c + 0x2398) != '\0') goto code_r0x1014a594;
      }
      else {
        uVar11 = 0;
        if (*(char *)(local_9c + 0x2398) != '\0') {
code_r0x1014a594:
          uVar11 = *local_90;
        }
        pcVar14 = (char *)(local_9c + 0x2398);
        uVar11 = FUN_101065b0(0x20e,0,uVar11);
        if ((char)uVar11 != '\0') {
          local_94._1_3_ = (undefined3)((uint)uVar11 >> 8);
          local_94._0_1_ = 1;
          if (*pcVar14 == '\x01') {
            FUN_10149ce7();
          }
        }
      }
    }
    if ((local_98 & 3) != 0) goto LAB_1014a5c7;
    cVar7 = FUN_10110653(0x1222,0);
  }
  else {
LAB_1014a5c7:
    cVar7 = '\0';
  }
  if ((cVar7 != '\0') || ((byte)local_94 != 0)) {
    FUN_1014a86a(local_8c,cVar7);
    cVar8 = '\x01';
    if (cVar7 != '\0') goto code_r0x1014a5f9;
    local_84[3] = 0;
  }
  cVar8 = (byte)local_94 - 1;
code_r0x1014a5f9:
  *(char *)(iVar9 + -0xc) = cVar8;
  if ((*(byte *)(local_9c + 0x27b4) & 0x40) != 0) {
    FUN_1014a928();
  }
  *unaff_FS_OFFSET = local_20;
  return local_8c;
}

