/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1013dd9a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1013dd9a(undefined4 param_1,char *param_2,char *param_3,int param_4,undefined4 *param_5,
                 uint param_6,code *param_7,undefined4 param_8)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined1 *puVar3;
  float *pfVar4;
  byte bVar5;
  char cVar6;
  undefined1 uVar7;
  byte bVar8;
  float fVar9;
  undefined3 uVar15;
  size_t sVar10;
  undefined4 uVar11;
  uint uVar12;
  char **ppcVar13;
  char *pcVar14;
  float extraout_ECX;
  float extraout_ECX_00;
  float extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  int *piVar16;
  int iVar17;
  int iVar18;
  int *unaff_FS_OFFSET;
  bool bVar19;
  float10 fVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  char *pcVar25;
  char *pcVar26;
  char *pcVar27;
  float fVar28;
  float fVar29;
  char *pcVar30;
  char *pcVar31;
  float local_200;
  uint local_1fc;
  float local_1f8;
  float local_1f4;
  char *local_1f0;
  uint local_1ec;
  uint local_1e8;
  char *local_1e4;
  uint local_1e0;
  uint local_1dc;
  uint local_1d8;
  int local_1d4;
  byte local_1ce;
  byte local_1cd;
  int *local_1cc;
  float local_1c8;
  char local_1c1;
  char *local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  float local_1b0;
  int local_1ac;
  char *local_1a8;
  uint local_1a4;
  int *local_1a0;
  char *pcStack_19c;
  char *pcStack_198;
  char *pcStack_194;
  uint local_18c;
  float local_188;
  uint local_184;
  int local_180;
  undefined8 local_17c;
  char local_173;
  byte local_172;
  byte local_171;
  char *local_170;
  char *pcStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  char *local_158;
  undefined8 local_154;
  float fStack_14c;
  float fStack_148;
  float local_144;
  float local_140;
  undefined1 local_13a;
  char local_139;
  char *local_138;
  int local_134;
  int local_130;
  int local_12c;
  undefined4 local_128;
  undefined4 local_124;
  char *local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  char *local_110;
  char *pcStack_10c;
  char *pcStack_108;
  char *pcStack_104;
  undefined4 local_f4;
  char *local_f0;
  float fStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  float local_dc;
  float fStack_d8;
  undefined8 uStack_d4;
  undefined4 local_cc;
  undefined4 local_c8;
  uint local_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined4 local_98;
  int local_94;
  char *local_90;
  char *pcStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_74;
  char *local_70;
  float local_6c;
  char *local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined8 local_48;
  double local_40;
  float local_38 [2];
  char *local_30;
  char *pcStack_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)&local_200;
  local_18 = 0xffffffff;
  local_1c = &LAB_101561e0;
  local_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_20;
  local_1fc = DAT_1039d74c;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  local_180 = *(int *)(local_1fc + 0x14cc);
  if (*(char *)(local_180 + 0xfe) != '\0') {
    local_18c = 0;
    goto code_r0x10140a5a;
  }
  puVar3 = &stack0xfffffffc;
  pfVar4 = &local_200;
  if ((param_6 >> 0x1a & 1) != 0) {
    FUN_10115649();
    puVar3 = local_28;
    pfVar4 = (float *)local_24;
  }
  local_24 = (undefined1 *)pfVar4;
  local_28 = puVar3;
  local_1f8 = (float)FUN_101021d4(param_1,0);
  local_74 = FUN_100fd57d(param_1,0);
  FUN_100fdb2e(&local_58,param_1,local_74,0,0xbf800000);
  uVar21 = local_1fc;
  if ((param_6 >> 0x1a & 1) != 0) {
    local_54 = *(float *)(local_1fc + 0x1228) * DAT_102b8f18;
  }
  local_200 = *(float *)(local_1fc + 0xd10) + *(float *)(local_1fc + 0xd10) + local_54;
  fVar20 = (float10)FUN_10115533();
  FUN_1010c427(&local_30,*param_5,param_5[1],(float)fVar20,local_200);
  local_170 = local_30;
  pcStack_16c = pcStack_2c;
  uStack_168 = 0;
  uStack_164 = 0;
  fVar24 = 0.0;
  if (0.0 < local_58) {
    fVar24 = local_58 + *(float *)(uVar21 + 0xd24);
  }
  fVar9 = *(float *)(local_180 + 0x144);
  local_200 = *(float *)(local_180 + 0x148);
  fVar29 = (float)*(undefined8 *)(local_180 + 0x144);
  fVar28 = (float)((ulonglong)*(undefined8 *)(local_180 + 0x144) >> 0x20);
  uStack_d4 = CONCAT44((float)pcStack_2c + fVar28,(float)local_30 + fVar29);
  fVar24 = (float)local_30 + fVar24 + fVar29;
  local_48 = CONCAT44((float)pcStack_2c + fVar28,fVar24);
  fVar24 = fVar24 - fVar29;
  fVar28 = ((float)pcStack_2c + fVar28) - fVar28;
  local_dc = fVar9;
  fStack_d8 = local_200;
  local_50 = fVar9;
  local_4c = local_200;
  if ((param_6 >> 0x1a & 1) == 0) {
    local_154 = CONCAT44(fVar28,fVar24);
    FUN_1010c810(&local_154,*(undefined4 *)(uVar21 + 0xd10));
    local_18c = 0;
    if ((param_6 >> 0x1b & 1) == 0) {
      local_18c = 0;
      cVar6 = FUN_1010c9d8(&local_50,local_1f8,&local_dc,0x100000);
      local_f4 = 0;
      local_90 = local_170;
      pcStack_8c = pcStack_16c;
      uStack_88 = uStack_168;
      uStack_84 = uStack_164;
      local_1d4 = local_180;
      if (cVar6 == '\0') goto code_r0x10140a5a;
    }
    else {
      local_f4 = 0;
      local_90 = local_170;
      pcStack_8c = pcStack_16c;
      uStack_88 = uStack_168;
      uStack_84 = uStack_164;
      local_1d4 = local_180;
    }
  }
  else {
    local_154 = CONCAT44(fVar28,fVar24);
    FUN_1010c810(&local_154,*(undefined4 *)(uVar21 + 0xd10));
    fVar24 = local_1f8;
    if ((*(float *)(uVar21 + 0x24e4) == local_1f8) || (*(float *)(uVar21 + 0x1528) == local_1f8)) {
      FUN_1010c9d8(&local_50,local_1f8,&local_dc,0x100000);
      local_1e4 = (char *)CONCAT31(local_1e4._1_3_,1);
    }
    else {
      local_1e4 = (char *)CONCAT31(local_1e4._1_3_,local_1f8 == *(float *)(uVar21 + 0x2058));
      cVar6 = FUN_1010c9d8(&local_50,local_1f8,&local_dc,0x100000);
      if (cVar6 == '\0' && (byte)local_1e4 == '\0') {
        FUN_1011462f();
        local_18c = 0;
        goto code_r0x10140a5a;
      }
    }
    uVar21 = local_1fc;
    local_f4 = *(undefined4 *)(local_1fc + 0x1e84);
    local_18c = *(uint *)(local_1fc + 0x1e88);
    *(float *)(local_180 + 0x148) = local_200;
    *(float *)(local_180 + 0x144) = fVar9;
    local_200 = *(float *)(local_1fc + 0x2058);
    if (((*(float *)(local_1fc + 0x2058) == fVar24) && (local_200 = fVar24, (param_6 & 0x20) != 0))
       && ((*(uint *)(local_1fc + 0x2064) & 0x28) == 8)) {
      *(undefined4 *)(local_1fc + 0x2058) = 0;
      local_200 = 0.0;
    }
    if (*(float *)(local_1fc + 0x1528) == fVar24) {
      *(undefined4 *)(local_1fc + 0x2058) = 0;
    }
    FUN_100fcd80(3,local_1fc + 0xe70);
    FUN_100fd0a3(7,*(undefined4 *)(uVar21 + 0xd14));
    FUN_100fd0a3(8,*(undefined4 *)(uVar21 + 0xd18));
    local_154 = 0;
    FUN_100fd3bc(2,&local_154);
    local_154 = CONCAT44((float)((ulonglong)uStack_d4 >> 0x20) - fStack_d8,
                         (float)uStack_d4 - local_dc);
    bVar5 = FUN_1010c0c7(param_1,local_1f8,&local_154,1,4);
    *(float *)(uVar21 + 0x2058) = local_200;
    FUN_100fd4c4(3);
    FUN_100fce8e(1);
    if (((bVar5 | (byte)local_1e4) & 1) == 0) {
      FUN_1010c644();
      FUN_1011462f();
      local_18c = 0;
      goto code_r0x10140a5a;
    }
    local_1d4 = *(int *)(uVar21 + 0x14cc);
    *(ushort *)(local_1d4 + 0x1a2) =
         *(ushort *)(local_1d4 + 0x1a2) | (ushort)(1 << (*(byte *)(local_1d4 + 0x19c) & 0x1f));
    *(float *)(local_1d4 + 0x144) = *(float *)(uVar21 + 0xd0c) + *(float *)(local_1d4 + 0x144);
    *(float *)(local_1d4 + 0x148) = *(float *)(uVar21 + 0xd10) + *(float *)(local_1d4 + 0x148);
    local_90 = (char *)((float)local_170 - *(float *)(local_1d4 + 0xec));
    pcStack_8c = pcStack_16c;
    uStack_88 = uStack_168;
    uStack_84 = uStack_164;
    *(float *)(uVar21 + 0x1e80) = local_1f8;
    *(undefined4 *)(uVar21 + 0x1e84) = local_f4;
    *(uint *)(uVar21 + 0x1e88) = local_18c;
  }
  local_200 = 0.0;
  pcStack_16c = pcStack_8c;
  uStack_168 = uStack_88;
  uStack_164 = uStack_84;
  cVar6 = FUN_10102cf2();
  local_1a0 = (int *)0x0;
  fVar24 = extraout_ECX;
  if (cVar6 != '\0') {
    FUN_10114115(1);
    local_1a0 = (int *)(CONCAT31((int3)(local_1fc >> 8),*(undefined1 *)(local_1fc + 0x2041)) ^ 1);
    fVar24 = extraout_ECX_00;
  }
  if (local_1f8 != 0.0) {
    fVar24 = (float)(DAT_1039d74c + 0x2470);
    local_200 = 0.0;
    if (*(float *)(DAT_1039d74c + 0x247c) == local_1f8) {
      local_200 = fVar24;
    }
  }
  local_1e8 = *(uint *)(local_1fc + 0x1e84);
  local_b0 = (float)CONCAT31(local_b0._1_3_,(param_6 >> 10 & 1) == 0);
  local_1ec = CONCAT31(local_1ec._1_3_,(param_6 >> 0x10 & 1) == 0);
  local_188 = 0.0;
  if ((param_6 >> 0x18 & 1) != 0) {
    FUN_1010c3e4(&local_154);
    fVar24 = 0.0;
    if (*(char *)(local_1d4 + 0xf5) == '\0') {
      fVar24 = (float)(*(uint *)(local_1fc + 0xd44) ^ _DAT_1028f620);
    }
    fVar20 = (float10)FUN_100fdbca(0x3f800000,(float)local_154 + fVar24);
    local_188 = (float)fVar20;
    fVar24 = extraout_ECX_01;
    local_5c = local_188;
  }
  if ((char)local_1a0 == '\0') {
    local_1cc = (int *)0x0;
  }
  else {
    local_1cc = (int *)CONCAT31((int3)((uint)fVar24 >> 8),*(undefined1 *)(local_1fc + 0xb18));
  }
  fVar24 = *(float *)(local_1fc + 0x1528);
  if (fVar24 == local_1f8) {
    local_120 = (char *)0x0;
  }
  else {
    local_120 = (char *)CONCAT31((int3)(local_1fc >> 8),*(float *)(local_1fc + 0x2058) == local_1f8)
    ;
  }
  bVar5 = 1;
  if ((char)local_1cc == '\0') {
    bVar5 = (byte)(param_6 >> 0x1b) & fVar24 == 0.0 | (byte)local_120 |
            *(float *)(local_1fc + 0x2548) == local_1f8;
  }
  local_1e8 = local_1e8 >> 2 & 0x200;
  if (((param_6 >> 0x1a & 1) == 0) || (local_200 == 0.0)) {
    local_1dc = 0;
    if ((param_6 >> 0x1a & 1) != 0) {
      local_1c0 = (char *)0x0;
      goto code_r0x1013e488;
    }
    local_f0 = DAT_102b89b4;
    local_1c0 = (char *)0x0;
  }
  else {
    fVar9 = (float)FUN_1012ea9f(local_1d4,1);
    fVar24 = *(float *)(local_1fc + 0x1528);
    if (fVar24 == 0.0) {
      local_1c0 = (char *)CONCAT31((int3)(local_1fc >> 8),*(float *)(local_1fc + 0x1550) == fVar9);
    }
    else {
      local_1c0 = (char *)0x0;
    }
    local_1dc = CONCAT31((int3)((uint)fVar9 >> 8),fVar24 == fVar9);
code_r0x1013e488:
    local_f0 = *(char **)(local_1d4 + 200);
  }
  uVar21 = local_1fc;
  fVar9 = local_200;
  local_1e8 = local_1e8 | param_6;
  local_1e4 = param_3;
  cVar6 = (char)local_1c0;
  if (local_200 == 0.0) {
    local_110 = (char *)0x0;
    local_1e0 = 0;
    if (bVar5 == 0 && (char)local_1c0 == '\0') goto LAB_1013e569;
LAB_1013e50e:
    uVar15 = (undefined3)((uint)local_110 >> 8);
    local_1d8 = CONCAT31(uVar15,1);
    if (((fVar24 == local_1f8) && ((char)local_110 == '\0')) && ((byte)local_1e0 == '\0')) {
      local_1f4 = (float)CONCAT31(uVar15,*(undefined1 *)(local_1fc + 0x79));
      local_1f0 = (char *)0x0;
      goto code_r0x1013e98f;
    }
code_r0x1013e59c:
    local_200 = (float)(local_1fc + 0x2470);
    FUN_101424e4();
    FUN_10142ab7(*(undefined4 *)(uVar21 + 0x247c));
    local_1f4 = (float)_strlen(param_3);
    if ((char)local_1c0 == '\0') {
      pcVar31 = (char *)((int)local_1f4 + 1);
      iVar18 = *(int *)(uVar21 + 0x2498);
      if (iVar18 <= (int)local_1f4) {
        if (iVar18 == 0) {
          iVar18 = 8;
        }
        else {
          iVar18 = iVar18 / 2 + iVar18;
        }
        if (iVar18 <= (int)pcVar31) {
          iVar18 = (int)pcVar31;
        }
        local_1c0 = pcVar31;
        pcVar31 = (char *)FUN_100fa1fa(iVar18);
        uVar21 = local_1fc;
        if (*(int *)(local_1fc + 0x249c) != 0) {
          local_1f0 = pcVar31;
          FUN_1025b2d0();
          FUN_100fa2cb(*(undefined4 *)(uVar21 + 0x249c));
          pcVar31 = local_1f0;
        }
        *(char **)(uVar21 + 0x249c) = pcVar31;
        *(int *)(uVar21 + 0x2498) = iVar18;
        pcVar31 = local_1c0;
      }
      *(char **)(uVar21 + 0x2494) = pcVar31;
      FUN_1025b2d0();
    }
    bVar5 = ((byte)local_110 ^ 1) & *(float *)(uVar21 + 0x247c) == local_1f8;
    local_110 = (char *)CONCAT31((int3)((uint)local_110 >> 8),bVar5);
    if (((~bVar5 | (byte)local_1e0) & 1) == 0) {
      if ((((float)*(size_t *)(uVar21 + 0x2480) == local_1f4) &&
          (*(char **)(local_1fc + 0x2490) != (char *)0x0)) &&
         (iVar18 = _strncmp(*(char **)(local_1fc + 0x2490),param_3,(size_t)local_1f4), iVar18 == 0))
      {
        local_110 = (char *)0x1;
        uVar21 = local_1fc;
      }
      else {
        local_110 = (char *)0x0;
        uVar21 = local_1fc;
      }
    }
    *(float *)(uVar21 + 0x247c) = local_1f8;
    *(float *)(uVar21 + 0x2480) = local_1f4;
    *(undefined1 *)(uVar21 + 0x24c7) = 0;
    if ((local_1e8 >> 9 & 1) == 0) {
      pcVar31 = (char *)(param_4 + 1);
      iVar18 = *(int *)(uVar21 + 0x248c);
      if (iVar18 <= param_4) {
        if (iVar18 == 0) {
          iVar18 = 8;
        }
        else {
          iVar18 = iVar18 / 2 + iVar18;
        }
        if (iVar18 <= (int)pcVar31) {
          iVar18 = (int)pcVar31;
        }
        local_1c0 = pcVar31;
        uVar12 = FUN_100fa1fa(iVar18);
        uVar21 = local_1fc;
        if (*(int *)(local_1fc + 0x2490) != 0) {
          local_1e0 = uVar12;
          FUN_1025b2d0();
          FUN_100fa2cb(*(undefined4 *)(uVar21 + 0x2490));
          uVar12 = local_1e0;
        }
        *(uint *)(uVar21 + 0x2490) = uVar12;
        *(int *)(uVar21 + 0x248c) = iVar18;
        pcVar31 = local_1c0;
      }
      *(char **)(uVar21 + 0x2488) = pcVar31;
      FUN_1025b2d0();
    }
    *(undefined4 *)(uVar21 + 0x24b0) = 0;
    *(undefined4 *)(uVar21 + 0x24b4) = 0;
    if ((param_6 >> 0x11 & 1) != 0) {
      FUN_100fdb2e(&local_154,param_3,0,0,0xbf800000);
      uVar21 = local_1fc;
      fVar20 = (float10)FUN_100fdbca(0,*(float *)(local_1fc + 0xd0c) + *(float *)(local_1fc + 0xd0c)
                                       + ((float)local_154 - (float)local_30));
      local_60 = (float)fVar20;
      *(float *)(uVar21 + 0x24b0) = local_60 + *(float *)(uVar21 + 0x24b0);
    }
    if ((char)local_110 == '\0') {
      thunk_FUN_10152477();
    }
    if ((param_6 >> 0x1a & 1) == 0) {
      local_1f0 = (char *)(param_6 >> 0xc & 1);
      uVar21 = (uint)local_1f0;
      if (((byte)local_120 != '\0') &&
         (((char)local_110 == '\0' || (uVar21 = local_1fc, (*(byte *)(local_1fc + 0x2064) & 4) == 0)
          ))) {
        uVar21 = CONCAT31((int3)(uVar21 >> 8),1);
        local_1f0 = (char *)uVar21;
      }
      if ((char)local_1cc != '\0') {
        local_1f0 = (char *)CONCAT31((int3)((uint)local_1f0 >> 8),
                                     (byte)local_1f0 | *(byte *)(local_1fc + 0x104));
        uVar21 = local_1fc;
      }
    }
    else {
      local_1f0 = (char *)0x0;
      uVar21 = param_6;
    }
    if ((param_6 >> 0xb & 1) == 0) {
      uVar15 = (undefined3)(uVar21 >> 8);
      local_1f4 = (float)CONCAT31(uVar15,*(undefined1 *)(local_1fc + 0x79));
    }
    else {
      iVar18 = *(int *)(local_1fc + 0x2474);
      *(undefined1 *)(iVar18 + 0xc) = 1;
      uVar15 = (undefined3)((uint)iVar18 >> 8);
      local_1f4 = (float)CONCAT31(uVar15,*(undefined1 *)(local_1fc + 0x79));
    }
    local_1c0 = (char *)CONCAT31(uVar15,1);
    if ((byte)local_1d8 != '\0') {
code_r0x1013e98f:
      iVar18 = local_180;
      fVar24 = local_1f8;
      if (*(float *)(local_1fc + 0x1528) != local_1f8) {
        FUN_101026ba(local_1f8,local_180);
        FUN_101171b7(fVar24,iVar18);
        FUN_101034e2(iVar18,0);
        if ((byte)local_120 != '\0') {
          FUN_101170bb();
        }
      }
      local_1c0 = (char *)0x0;
    }
  }
  else if (*(char *)((int)local_200 + 0x59) == '\x01') {
    local_1c0 = (char *)_strlen(param_3);
    *(undefined1 *)((int)fVar9 + 0x59) = 0;
    FUN_10142bdd();
    pcVar31 = (char *)(param_4 + 1);
    iVar18 = *(int *)((int)fVar9 + 0x1c);
    if (iVar18 <= param_4) {
      if (iVar18 == 0) {
        local_1e0 = 8;
      }
      else {
        local_1e0 = iVar18 / 2 + iVar18;
      }
      if ((int)local_1e0 <= (int)pcVar31) {
        local_1e0 = (uint)pcVar31;
      }
      local_110 = pcVar31;
      fVar24 = (float)FUN_100fa1fa(local_1e0);
      fVar9 = local_200;
      if (*(int *)((int)local_200 + 0x20) != 0) {
        local_1f4 = fVar24;
        FUN_1025b2d0();
        FUN_100fa2cb(*(undefined4 *)((int)fVar9 + 0x20));
        fVar24 = local_1f4;
      }
      *(float *)((int)fVar9 + 0x20) = fVar24;
      *(uint *)((int)fVar9 + 0x1c) = local_1e0;
      pcVar31 = local_110;
    }
    *(char **)((int)fVar9 + 0x18) = pcVar31;
    *(char **)((int)fVar9 + 0x10) = local_1c0;
    FUN_1025b2d0();
    *(undefined4 *)(*(int *)((int)fVar9 + 4) + 4) = *(undefined4 *)((int)fVar9 + 0x5c);
    uVar11 = *(undefined4 *)((int)fVar9 + 0x60);
    *(undefined4 *)(*(int *)((int)fVar9 + 4) + 8) = uVar11;
    puVar1 = *(undefined4 **)((int)fVar9 + 4);
    *puVar1 = uVar11;
    uVar15 = (undefined3)((uint)puVar1 >> 8);
    local_1f4 = (float)CONCAT31(uVar15,*(undefined1 *)(local_1fc + 0x79));
    local_1f0 = (char *)0x0;
    local_1c0 = (char *)CONCAT31(uVar15,1);
    if (bVar5 != 0 || cVar6 != '\0') goto code_r0x1013e98f;
  }
  else {
    local_1e0 = (*(uint *)((int)local_200 + 8) ^ local_1e8) >> 9 & 1;
    local_110 = (char *)CONCAT31((int3)((uint)param_3 >> 8),
                                 (bool)*(char *)(*(int *)((int)local_200 + 4) + 0x17) !=
                                 ((param_6 >> 0x1a & 1) == 0));
    if (bVar5 != 0 || (char)local_1c0 != '\0') goto LAB_1013e50e;
LAB_1013e569:
    local_1d8 = 0;
    if (((char)local_110 != '\0') || ((byte)local_1e0 != '\0')) goto code_r0x1013e59c;
    uVar15 = (undefined3)((uint)local_110 >> 8);
    local_1f4 = (float)CONCAT31(uVar15,*(undefined1 *)(local_1fc + 0x79));
    local_1c0 = (char *)CONCAT31(uVar15,1);
    local_1f0 = (char *)0x0;
  }
  if (*(float *)(local_1fc + 0x1528) == local_1f8) {
    iVar18 = -0x18;
    do {
      FUN_101143b4();
      iVar18 = iVar18 + 4;
    } while (iVar18 != 0);
    if ((char)local_1cc != '\0') {
      FUN_101143b4();
    }
    uVar21 = *(uint *)(local_1fc + 0x1e30);
    *(uint *)(local_1fc + 0x1e30) = uVar21 | 3;
    if ((param_6 & 0x4080000) != 0) {
      *(uint *)(local_1fc + 0x1e30) = uVar21 | 0xf;
      FUN_101143b4();
      FUN_101143b4();
      if ((param_6 >> 0x1a & 1) != 0) {
        FUN_101143b4();
        FUN_101143b4();
      }
    }
    if (local_1f4._0_1_ != '\0') {
      FUN_101143b4();
    }
    fVar24 = local_200;
    if (((param_6 >> 0x1a & 1) != 0) && (local_200 != 0.0)) {
      *(undefined4 *)((int)local_200 + 0x44) = *(undefined4 *)(local_1d4 + 200);
    }
    if (((local_1e8 >> 9 & 1) == 0) || (local_200 == 0.0)) {
      if (local_200 == 0.0) {
        if (*(float *)(local_1fc + 0x1528) != local_1f8) goto LAB_1013eafa;
        FUN_101028d8();
        local_1e0 = 0;
        goto code_r0x1013eb2e;
      }
    }
    else {
      sVar10 = _strlen(param_3);
      *(size_t *)((int)fVar24 + 0x10) = sVar10;
    }
    FUN_10142600();
LAB_1013eb12:
    pcVar31 = param_3;
    if ((local_1e8 >> 9 & 1) == 0) {
      pcVar31 = *(char **)((int)local_200 + 0x20);
    }
    *(char **)((int)local_200 + 0x14) = pcVar31;
    local_1e0 = CONCAT31((int3)((uint)pcVar31 >> 8),1);
  }
  else {
    if (local_200 != 0.0) goto LAB_1013eb12;
LAB_1013eafa:
    local_1e0 = 0;
  }
code_r0x1013eb2e:
  if (*(float *)(local_1fc + 0x1528) == local_1f8) {
    local_1c0 = (char *)CONCAT31((int3)((uint)local_1c0 >> 8),
                                 (byte)local_1c0 & *(byte *)(local_1fc + 0xb18));
  }
  else {
    local_1c0 = (char *)0x0;
  }
  bVar5 = (byte)local_1dc & (byte)local_1e0 | *(float *)(local_1fc + 0x1528) == local_1f8;
  uVar21 = CONCAT31((int3)(local_1dc >> 8),bVar5);
  if ((byte)local_1e0 == 0) {
    local_1d8 = 0;
  }
  else {
    uVar11 = FUN_10142648();
    local_1d8 = CONCAT31((int3)((uint)uVar11 >> 8),((byte)uVar11 | (byte)local_1f0) & bVar5);
  }
  bVar19 = (local_1e8 >> 9 & 1) == 0;
  local_1a4 = CONCAT31(local_1a4._1_3_,bVar19);
  bVar5 = (byte)local_1e0 & bVar19 & bVar5;
  local_184 = CONCAT31(local_184._1_3_,bVar5);
  if (param_2 == (char *)0x0) {
    local_1cc = (int *)0x0;
  }
  else {
    pcVar31 = param_3;
    if (bVar5 != 0) {
      pcVar31 = *(char **)((int)local_200 + 0x20);
    }
    local_1cc = (int *)CONCAT31((int3)((uint)pcVar31 >> 8),*pcVar31 == '\0');
  }
  local_1c8 = (float)(local_1e8 >> 9 & 1);
  bVar19 = (param_6 >> 10 & 1) == 0;
  local_c4 = CONCAT31(local_c4._1_3_,bVar19 | (byte)local_1cc);
  local_1dc = uVar21;
  if (!bVar19 && ((uint)local_1cc & 1) == 0) {
    FUN_10142924();
  }
  uVar21 = local_1fc;
  fVar24 = local_200;
  local_110 = pcStack_16c;
  pcStack_10c = pcStack_16c;
  pcStack_108 = pcStack_16c;
  pcStack_104 = pcStack_16c;
  if ((((byte)local_1e0 != '\0') && (*(float *)((int)local_200 + 0xc) == local_1f8)) &&
     (*(uint *)((int)local_200 + 8) = local_1e8, (param_6 >> 0x18 & 1) != 0)) {
    if ((*(float *)((int)local_200 + 0x4c) != local_188) ||
       (NAN(*(float *)((int)local_200 + 0x4c)) || NAN(local_188))) {
      *(undefined1 *)((int)local_200 + 0x55) = 1;
      *(float *)((int)local_200 + 0x4c) = local_188;
      local_1dc = CONCAT31((int3)((uint)local_200 >> 8),1);
    }
  }
  if (*(float *)(local_1fc + 0x1528) == local_1f8) {
    *(undefined1 *)((int)local_200 + 0x58) = 0;
    *(int *)((int)local_200 + 0x3c) = param_4;
    *(float *)((int)local_200 + 0x4c) = local_188;
    *(byte *)(local_1fc + 0x1535) = *(byte *)(local_1fc + 0xec) ^ 1;
    if ((byte)local_1f0 == '\0') {
      if ((((char)local_1a0 == '\0') || (*(ushort *)(local_1fc + 0xb22) < 2)) ||
         (*(char *)(local_1fc + 0x105) != '\0')) {
        if ((*(char *)(local_1fc + 0xb18) == '\x01') && (*(char *)((int)local_200 + 0x56) == '\0'))
        {
          if ((char)local_1a0 != '\0') {
            if (*(char *)(local_1fc + 0x105) == '\x01') {
              FUN_10142dbe();
            }
            else {
              FUN_10142cc0();
            }
            FUN_101424e4();
          }
        }
        else if (((*(byte *)(local_1fc + 0xec) != 0) && (*(char *)((int)local_200 + 0x56) == '\0'))
                && ((((*(float *)(local_1fc + 0xd8) != 0.0 || (NAN(*(float *)(local_1fc + 0xd8))))
                     || (*(float *)(local_1fc + 0xdc) != 0.0)) ||
                    (NAN(*(float *)(local_1fc + 0xdc)))))) {
          FUN_10142dbe();
          FUN_101424e4();
          *(undefined1 *)((int)fVar24 + 0x54) = 1;
        }
      }
      else {
        FUN_10142cc0();
        local_1a0 = *(int **)((int)fVar24 + 4);
        if ((*(byte *)(uVar21 + 0xb22) & 1) == 0) {
          if (*local_1a0 == 0) {
            bVar19 = true;
          }
          else {
            cVar6 = FUN_10142d40();
            bVar19 = cVar6 == '\n';
          }
          fVar24 = local_200;
          if (((bVar19) && (local_1a0[1] == local_1a0[2])) ||
             (FUN_10141dfc(0x20000c),
             *(int *)(*(int *)((int)fVar24 + 4) + 4) == *(int *)(*(int *)((int)fVar24 + 4) + 8))) {
            FUN_10142d47();
          }
          fVar24 = local_200;
          uVar11 = FUN_10142d5b();
          **(undefined4 **)((int)fVar24 + 4) = uVar11;
          (*(undefined4 **)((int)fVar24 + 4))[2] = **(undefined4 **)((int)fVar24 + 4);
          FUN_10142d8c();
        }
        else {
          cVar6 = FUN_10142d40();
          *(undefined4 *)((int)fVar24 + 0x4c) = 0;
          FUN_10141dfc(0x200004);
          FUN_10141dfc(0x600005);
          FUN_10141dfc(0x600001);
          fVar9 = local_200;
          *(float *)((int)fVar24 + 0x4c) = local_188;
          if (((param_6 >> 0x1a & 1) != 0) && (cVar6 != '\n')) {
            FUN_101412d9(*(int *)((int)local_200 + 4) + 4,*(int *)((int)local_200 + 4) + 8);
            **(undefined4 **)((int)fVar9 + 4) = (*(undefined4 **)((int)fVar9 + 4))[2];
          }
          *(undefined1 *)((int)local_200 + 0x54) = 0;
          fVar24 = local_200;
        }
        FUN_101424e4();
      }
    }
    else {
      FUN_10142666();
      *(undefined1 *)((int)fVar24 + 0x56) = 1;
    }
    if ((*(char *)((int)fVar24 + 0x56) == '\x01') && (*(char *)(local_1fc + 0xec) == '\0')) {
      *(undefined1 *)((int)local_200 + 0x56) = 0;
    }
    if (((local_1e8 & 0x220) == 0x20) && (cVar6 = FUN_101065b0(), cVar6 != '\0')) {
      local_154 = CONCAT44(local_154._4_4_,9);
      cVar6 = FUN_10142e44(&local_154,param_7,param_8,0);
      if (cVar6 != '\0') {
        FUN_101424ec((float)local_154);
      }
    }
    uVar21 = local_1fc;
    if (*(byte *)(local_1fc + 0x104) == 1) {
      if ((local_1f4._0_1_ & *(byte *)(local_1fc + 0x106)) == 0) {
        bVar5 = *(byte *)(local_1fc + 0x106) ^ 1 | local_1c8._0_1_;
      }
      else {
LAB_1013ef82:
        bVar5 = *(byte *)(local_1fc + 0x104) | local_1c8._0_1_;
      }
    }
    else {
      if (local_1f4._0_1_ != 0) goto LAB_1013ef82;
      local_1f4 = 0.0;
      bVar5 = local_1c8._0_1_;
    }
    if (0 < *(int *)(local_1fc + 0xbe0)) {
      if (((bVar5 | (byte)local_120) & 1) == 0) {
        iVar18 = 0;
        do {
          uVar12 = (uint)*(ushort *)(*(int *)(uVar21 + 0xbe8) + iVar18 * 2);
          local_154 = CONCAT44(local_154._4_4_,uVar12);
          if (uVar12 != 9) {
            local_18 = 0xffffffff;
            cVar6 = FUN_10142e44(&local_154,param_7,param_8,0);
            if (cVar6 != '\0') {
              FUN_101424ec((float)local_154);
            }
          }
          iVar18 = iVar18 + 1;
        } while (iVar18 < *(int *)(uVar21 + 0xbe0));
      }
      if (*(int *)(uVar21 + 0xbe4) < 0) {
        local_18 = 0xffffffff;
        uVar11 = FUN_100fa1fa(0);
        if (*(int *)(uVar21 + 0xbe8) != 0) {
          FUN_1025b2d0();
          FUN_100fa2cb(*(undefined4 *)(uVar21 + 0xbe8));
        }
        *(undefined4 *)(uVar21 + 0xbe8) = uVar11;
        *(undefined4 *)(uVar21 + 0xbe4) = 0;
      }
      *(undefined4 *)(uVar21 + 0xbe0) = 0;
    }
  }
  uVar21 = local_1fc;
  if (*(float *)(local_1fc + 0x1528) == local_1f8) {
    if (*(char *)(local_1fc + 0x1534) == '\0' && (char)local_1c0 == '\0') {
      local_94 = FUN_100fbc6a((int)(((float)local_110 - *(float *)(local_1fc + 0xd10)) /
                                   *(float *)(local_1fc + 0x1228)),1);
      *(int *)(*(int *)((int)local_200 + 4) + 0x10) = local_94;
      local_120 = (char *)CONCAT31(local_120._1_3_,
                                   *(undefined1 *)(uVar21 + 0x104 + ((uint)local_1f4 & 0xff) * 2));
      if (((SUB41(local_1f4,0) == '\0') || (*(char *)(uVar21 + 0x104) != '\x01')) ||
         (*(char *)(uVar21 + 0x107) != '\0')) {
        local_1f0 = (char *)0x0;
      }
      else {
        local_1f0 = (char *)(uint)(*(byte *)(uVar21 + 0x106) ^ 1);
      }
      local_1a0 = (int *)(uint)*(byte *)(local_1fc + 0x105);
      local_18 = 0xffffffff;
      cVar6 = FUN_101065b0();
      if (cVar6 == '\0') {
        bVar5 = FUN_101065b0();
        bVar5 = bVar5 ^ 1 | (byte)(param_6 >> 10) & 1 | local_1c8._0_1_;
        local_1b0 = (float)(CONCAT31(local_1b0._1_3_,bVar5) ^ 1);
        if (bVar5 == 0) goto joined_r0x1013f2a6;
      }
      else {
        bVar19 = (local_1e8 & 0x200) == 0;
        bVar2 = (param_6 & 0x400) == 0;
        local_1b0 = (float)CONCAT31(local_1b0._1_3_,bVar19 && bVar2);
        if (bVar19 && bVar2) {
joined_r0x1013f2a6:
          if ((param_6 & 0x4000000) != 0) {
            uVar7 = FUN_10142648();
            local_1b0 = (float)CONCAT31(local_1b0._1_3_,uVar7);
          }
        }
      }
      cVar6 = FUN_101065b0();
      if (cVar6 == '\0') {
        local_b0._0_1_ = (param_6 >> 10 & 1) == 0;
        bVar5 = FUN_101065b0();
        bVar5 = bVar5 & local_b0._0_1_;
        local_b0 = (float)CONCAT31(local_b0._1_3_,bVar5);
        if (((param_6 >> 0x1a & 1) != 0) && (bVar5 != 0)) goto code_r0x1013f313;
      }
      else if ((param_6 & 0x4000400) == 0x4000000) {
code_r0x1013f313:
        uVar7 = FUN_10142648();
        local_b0 = (float)CONCAT31(local_b0._1_3_,uVar7);
      }
      uVar11 = FUN_101065b0();
      if (((char)uVar11 == '\0') && (uVar11 = FUN_101065b0(), (char)uVar11 == '\0')) {
        local_98 = 0;
      }
      else {
        local_98 = CONCAT31((int3)((uint)uVar11 >> 8),(byte)local_1a4);
      }
      local_171 = (param_6 >> 0x10 & 1) == 0;
      local_172 = FUN_101065b0();
      uVar11 = FUN_101065b0();
      if ((char)uVar11 == '\0') {
        uVar11 = FUN_101065b0();
        local_c8 = 0;
        if (((local_1e8 >> 9 & 1) == 0) && ((char)uVar11 != '\0')) goto LAB_1013f49f;
      }
      else if ((local_1e8 >> 9 & 1) == 0) {
LAB_1013f49f:
        local_c8 = CONCAT31((int3)((uint)uVar11 >> 8),(byte)local_1ec);
      }
      else {
        local_c8 = 0;
      }
      local_173 = FUN_101065b0();
      if ((*(byte *)(local_1fc + 0x30) & 2) == 0) {
        bVar5 = 0;
      }
      else {
        bVar5 = *(byte *)(local_1fc + 0x34) & 1;
      }
      local_1cd = 1;
      cVar6 = FUN_101065b0();
      local_1ce = 1;
      if (cVar6 == '\0') {
        local_1ce = FUN_101065b0();
      }
      cVar6 = FUN_101065b0();
      if (cVar6 == '\0') {
        local_1cd = FUN_101065b0();
      }
      local_1ec._0_1_ = 1;
      cVar6 = FUN_101065b0();
      if (cVar6 == '\0') {
        local_1ec._0_1_ = FUN_101065b0();
      }
      if (bVar5 == 0) {
        local_cc = 0;
code_r0x1013f5c1:
        local_1c1 = FUN_101065b0();
      }
      else {
        local_cc = FUN_10113d4b((*(byte *)(local_1fc + 0x65) ^ 1) * 2 + 0x27b,0);
        local_1c1 = '\x01';
        cVar6 = FUN_101065b0();
        if (cVar6 == '\0') goto code_r0x1013f5c1;
      }
      uVar21 = (int)local_1a0 << 0x16;
      cVar6 = FUN_10113d4b(0x201,1);
      if (cVar6 == '\0') {
        cVar6 = FUN_10113d4b(0x202,1);
        if (cVar6 == '\0') {
          cVar6 = FUN_10113d4b(0x203,1);
          iVar18 = local_1d4;
          if (((param_6 >> 0x1a & 1) == 0) || (cVar6 == '\0')) {
            cVar6 = FUN_10113d4b(0x204,1);
            uVar12 = local_1fc;
            if (((param_6 >> 0x1a & 1) == 0) || (cVar6 == '\0')) {
              cVar6 = FUN_10113d4b(0x205,1);
              if (((param_6 >> 0x1a & 1) == 0) || (cVar6 == '\0')) {
                cVar6 = FUN_10113d4b(0x206,1);
                if (((param_6 >> 0x1a & 1) == 0) || (cVar6 == '\0')) {
                  cVar6 = FUN_10113d4b(0x207,1);
                  if (cVar6 == '\0') {
                    cVar6 = FUN_10113d4b(0x208,1);
                    if (cVar6 == '\0') {
                      cVar6 = FUN_10113d4b(0x20a,1);
                      if ((cVar6 == '\x01' && local_1c8._0_1_ == '\0') && local_1b0._0_1_ == '\0') {
                        cVar6 = FUN_10142648();
                        if ((cVar6 == '\0') && ((byte)local_120 != '\0')) {
                          FUN_10141dfc(0x60000d);
                        }
                        FUN_10141dfc(uVar21 | 0x200008);
                        bVar5 = 1;
                        local_1ec = 0;
                      }
                      else {
                        cVar6 = FUN_10113d4b(0x20b,1);
                        fVar24 = local_200;
                        if (((local_1e8 >> 9 & 1) == 0) && (cVar6 != '\0')) {
                          cVar6 = FUN_10142648();
                          if (cVar6 == '\0') {
                            uVar11 = 0x60000c;
                            if (((byte)local_120 != '\0') ||
                               ((((local_1f4._0_1_ != '\0' &&
                                  (*(char *)(local_1fc + 0x104) == '\x01')) &&
                                 (*(char *)(local_1fc + 0x106) == '\0')) &&
                                (uVar11 = 0x600004, *(char *)(local_1fc + 0x107) == '\0')))) {
                              FUN_10141dfc(uVar11);
                            }
                          }
                          FUN_10141dfc(uVar21 | 0x200009);
                          bVar5 = 1;
                          local_1ec = 0;
                        }
                        else if ((byte)((byte)local_1ec | (byte)local_cc | local_1ce | local_1cd) ==
                                 1) {
                          uVar15 = (undefined3)((uint)local_cc >> 8);
                          bVar5 = (byte)local_cc | (param_6 >> 0x1a & 1) == 0;
                          local_1ec._0_1_ = (byte)local_1ec | bVar5;
                          if ((byte)local_1ec == 0) {
                            bVar5 = local_1cd;
                            if ((param_6 >> 8 & 1) == 0) {
                              bVar5 = local_1ce;
                            }
                            uVar12 = (uint)bVar5;
                            pcVar31 = (char *)0x1;
                            if (bVar5 != 0) {
                              pcVar31 = (char *)((uint)local_1c0 & 0xff);
                            }
                            if (((local_1e8 >> 9 & 1) == 0) && (bVar5 != 0)) {
LAB_10140f5e:
                              local_154 = CONCAT44(local_154._4_4_,10);
                              cVar6 = FUN_10142e44(&local_154,param_7,param_8,0);
                              uVar11 = extraout_ECX_02;
                              if (cVar6 != '\0') {
                                FUN_101424ec((float)local_154);
                                uVar11 = extraout_ECX_03;
                              }
                              uVar15 = (undefined3)((uint)uVar11 >> 8);
                              goto LAB_10140f94;
                            }
                          }
                          else if (bVar5 == 0) {
                            if ((local_1e8 >> 9 & 1) == 0) goto LAB_10140f5e;
LAB_10140f94:
                            uVar12 = CONCAT31(uVar15,1);
                            pcVar31 = local_1c0;
                          }
                          else {
                            uVar12 = 0;
                            pcVar31 = (char *)CONCAT31((int3)(uVar21 >> 8),1);
                            if (((param_6 >> 0x1a & 1) == 0) &&
                               (*(char *)(local_1fc + 0x7c) != '\0')) {
                              FUN_10142666();
                              *(float *)(local_1fc + 0x2548) = local_1f8;
                              uVar12 = 0;
                            }
                          }
                          local_1ec = uVar12 ^ 1;
                          bVar5 = 1;
                          local_1c0 = pcVar31;
                        }
                        else if (local_1c1 == '\0') {
                          bVar5 = local_171 & local_172 & (byte)local_1a4;
                          if ((byte)((byte)local_c8 | bVar5) == 1) {
                            FUN_10141dfc(bVar5 ^ 0x20000b);
                            FUN_10142656();
                            bVar5 = 1;
                            local_1ec = 0;
                          }
                          else if (local_173 == '\0') {
                            if ((local_b0._0_1_ | local_1b0._0_1_) == 1) {
                              if (*(int *)(local_1fc + 0xc04) != 0) {
                                cVar6 = FUN_10142648();
                                local_1a0 = (int *)0x0;
                                if (cVar6 != '\0') {
                                  local_1a0 = (int *)FUN_100fa683(*(undefined4 *)
                                                                   (*(int *)((int)local_200 + 4) + 4
                                                                   ),*(undefined4 *)
                                                                      (*(int *)((int)local_200 + 4)
                                                                      + 8));
                                }
                                cVar6 = FUN_10142648();
                                if (cVar6 == '\0') {
                                  iVar18 = *(int *)((int)local_200 + 0x10);
                                }
                                else {
                                  iVar18 = FUN_100fbc6a(*(undefined4 *)
                                                         (*(int *)((int)local_200 + 4) + 4),
                                                        *(undefined4 *)
                                                         (*(int *)((int)local_200 + 4) + 8));
                                }
                                iVar18 = iVar18 - (int)local_1a0;
                                FUN_10129280(iVar18 + 1);
                                uVar21 = local_1fc;
                                FUN_1025b2d0();
                                *(undefined1 *)(*(int *)(uVar21 + 0x29a8) + iVar18) = 0;
                                FUN_101032f2(*(undefined4 *)(uVar21 + 0x29a8));
                              }
                              if (local_1b0._0_1_ != '\0') {
                                cVar6 = FUN_10142648();
                                if (cVar6 == '\0') {
                                  FUN_10142666();
                                }
                                *(undefined1 *)((int)local_200 + 0x54) = 1;
                                FUN_101430db();
                              }
                            }
                            else if ((char)local_98 != '\0') {
                              local_1a0 = (int *)FUN_101032d8();
                              local_1ec = 0;
                              if (local_1a0 != (int *)0x0) {
                                local_1f4 = (float)_strlen((char *)local_1a0);
                                local_154 = 0;
                                fStack_14c = 0.0;
                                local_18 = 0;
                                FUN_10129280((int)local_1f4 + 1);
                                local_1f0 = (char *)((int)local_1a0 + (int)local_1f4);
                                for (; (char)*local_1a0 != '\0';
                                    local_1a0 = (int *)((int)local_1a0 + (int)local_1f4)) {
                                  local_1f4 = (float)FUN_100f90d5();
                                  cVar6 = FUN_10142e44(&local_17c,param_7,param_8,1);
                                  if (cVar6 != '\0') {
                                    FUN_100faa51(&local_c0,(float)local_17c);
                                    local_120 = (char *)_strlen((char *)&local_c0);
                                    FUN_101428c0(local_120 + (int)(float)local_154);
                                    FUN_1025b2d0();
                                  }
                                }
                                if (0 < (int)(float)local_154) {
                                  local_c0 = (float)((uint)local_c0 & 0xffffff00);
                                  FUN_101430f2(&local_c0);
                                  thunk_FUN_1015273b(fStack_14c,(int)(float)local_154 + -1);
                                  *(undefined1 *)((int)local_200 + 0x54) = 1;
                                }
                                local_18 = 0xffffffff;
                                if (fStack_14c != 0.0) {
                                  FUN_100fa2cb(fStack_14c);
                                }
                              }
                            }
                            local_1ec = 0;
                            bVar5 = 1;
                          }
                          else {
                            FUN_10142666();
                            *(undefined1 *)((int)fVar24 + 0x54) = 1;
                            bVar5 = 1;
                            local_1ec = 0;
                          }
                        }
                        else {
                          local_1ec = 0;
                          bVar5 = SUB41(local_1c8,0);
                          if ((char)param_6 < '\0') {
                            bVar19 = **(char **)((int)local_200 + 0x20) == '\0';
                            local_1c0 = (char *)((uint)local_1c0 & 0xff);
                            if (bVar19) {
                              local_1c0 = (char *)0x1;
                            }
                            local_1dc = local_1dc & 0xff;
                            local_1ec = 0;
                            if (bVar19) {
                              local_1dc = 0;
                            }
                            local_1d8 = (uint)(!bVar19 & (byte)local_1d8);
                            bVar5 = bVar5 | bVar19;
                          }
                          else {
                            local_1c0 = (char *)CONCAT31((int3)(param_6 >> 8),1);
                            local_1d8 = 0;
                            local_1dc = 0;
                          }
                        }
                      }
                    }
                    else {
                      FUN_10141dfc((uint)*(byte *)(local_1fc + 0x104) * 2 | uVar21 | 0x200005);
                      bVar5 = 1;
                      local_1ec = 0;
                    }
                  }
                  else {
                    FUN_10141dfc((uint)*(byte *)(local_1fc + 0x104) * 2 | uVar21 | 0x200004);
                    bVar5 = 1;
                    local_1ec = 0;
                  }
                }
                else {
                  FUN_10141dfc(uVar21 | 0x20000f);
                  local_f0 = (char *)((float)local_f0 +
                                     (float)local_94 * *(float *)(local_1fc + 0x1228));
                  bVar5 = 1;
                  local_1ec = 0;
                }
              }
              else {
                FUN_10141dfc(uVar21 | 0x20000e);
                local_f0 = (char *)((float)local_f0 -
                                   (float)local_94 * *(float *)(local_1fc + 0x1228));
                bVar5 = 1;
                local_1ec = 0;
              }
            }
            else if (*(char *)(local_1fc + 0x104) == '\x01') {
              fVar20 = (float10)FUN_101158ff();
              iVar18 = local_1d4;
              fVar20 = (float10)FUN_100ea38a(*(float *)(local_1d4 + 200) +
                                             *(float *)(uVar12 + 0x1228),(float)fVar20);
              FUN_10115932(iVar18,(float)fVar20);
              bVar5 = 1;
              local_1ec = 0;
            }
            else {
              FUN_10141dfc(((uint)local_1f0 & 0xff) << 2 | uVar21 | 0x200003);
              bVar5 = 1;
              local_1ec = 0;
            }
          }
          else if (*(char *)(local_1fc + 0x104) == '\x01') {
            fVar20 = (float10)FUN_100fdbca(*(float *)(local_1d4 + 200) -
                                           *(float *)(local_1fc + 0x1228),0);
            FUN_10115932(iVar18,(float)fVar20);
            bVar5 = 1;
            local_1ec = 0;
          }
          else {
            FUN_10141dfc(((uint)local_1f0 & 0xff) << 2 | uVar21 | 0x200002);
            bVar5 = 1;
            local_1ec = 0;
          }
        }
        else {
          uVar12 = 0x200001;
          if ((byte)local_120 != '\0') {
            uVar12 = 0x20000d;
          }
          uVar22 = 0x200005;
          if ((byte)local_1f0 == '\0') {
            uVar22 = uVar12;
          }
          FUN_10141dfc(uVar22 | uVar21);
          bVar5 = 1;
          local_1ec = 0;
        }
      }
      else {
        uVar12 = 0x200000;
        if ((byte)local_120 != '\0') {
          uVar12 = 0x20000c;
        }
        uVar22 = 0x200004;
        if ((byte)local_1f0 == '\0') {
          uVar22 = uVar12;
        }
        FUN_10141dfc(uVar22 | uVar21);
        bVar5 = 1;
        local_1ec = 0;
      }
      bVar8 = (byte)local_1d8;
      uVar11 = FUN_10142648();
      fVar24 = local_200;
      local_1d8 = CONCAT31((int3)((uint)uVar11 >> 8),(byte)uVar11 & (byte)local_1dc | bVar8);
      if (*(float *)(local_1fc + 0x1528) != local_1f8) goto LAB_1013f0ff;
      local_1f4 = 0.0;
      if (bVar5 != 0) goto LAB_1013f09e;
      if ((char)param_6 < '\0') {
        local_154 = local_154 & 0xffffffffffffff00;
        uVar11 = FUN_1014316a(&local_154,0);
        local_1f0 = (char *)CONCAT31((int3)((uint)uVar11 >> 8),1);
        local_120 = "";
      }
      else {
        pcVar31 = *(char **)((int)local_200 + 0x2c);
        iVar18 = _strcmp(*(char **)((int)local_200 + 0x20),pcVar31);
        if (iVar18 == 0) goto LAB_1013f09e;
        local_1f4 = (float)(*(int *)((int)fVar24 + 0x24) + -1);
        local_120 = pcVar31;
        uVar11 = FUN_1014316a(pcVar31,local_1f4);
        local_1f0 = (char *)CONCAT31((int3)((uint)uVar11 >> 8),1);
      }
    }
    else {
      local_1ec = 0;
LAB_1013f09e:
      local_1f4 = 0.0;
      local_120 = (char *)0x0;
      local_1f0 = (char *)0x0;
    }
    if ((param_6 & 0x9c0000) != 0) {
      if ((param_6 >> 0x12 & 1) == 0) {
LAB_1013f119:
        if ((param_6 >> 0x13 & 1) == 0) {
LAB_1013f124:
          if (((param_6 >> 0x17 & 1) == 0) || (*(char *)((int)local_200 + 0x58) == '\0')) {
            if ((param_6 >> 0x14 & 1) == 0) goto LAB_1013f857;
            uVar11 = 0x100000;
          }
          else {
            uVar11 = 0x800000;
          }
          local_b0 = 0.0;
        }
        else {
          local_18 = 0xffffffff;
          uVar11 = 0x80000;
          local_b0 = 7.21669e-43;
          cVar6 = FUN_10113d4b(0x203,1);
          if (cVar6 == '\0') {
            local_b0 = 7.2307e-43;
            cVar6 = FUN_10113d4b(0x204,1);
            if (cVar6 == '\0') goto LAB_1013f124;
          }
        }
      }
      else {
        local_18 = 0xffffffff;
        cVar6 = FUN_101065b0();
        if (cVar6 == '\0') goto LAB_1013f119;
        uVar11 = 0x40000;
        local_b0 = 7.17465e-43;
      }
      FUN_10142686();
      local_144 = local_1f8;
      fStack_14c = (float)local_1e8;
      local_154 = CONCAT44(uVar11,local_1fc);
      if (*(int *)(local_1fc + 0x1528) == *(int *)((int)local_200 + 0xc)) {
        local_13a = *(undefined1 *)(local_1fc + 0x1534);
      }
      else {
        local_13a = 0;
      }
      fStack_148 = (float)param_8;
      local_1a0 = (int *)param_3;
      if ((local_1e8 >> 9 & 1) == 0) {
        local_1a0 = *(int **)((int)local_200 + 0x20);
      }
      iVar18 = *(int *)((int)local_200 + 0x34);
      uVar21 = *(int *)((int)local_200 + 0x10) + 1;
      if (*(int *)((int)local_200 + 0x10) < iVar18) {
        local_18 = 0xffffffff;
        fVar24 = local_200;
      }
      else {
        if (iVar18 == 0) {
          iVar18 = 8;
        }
        else {
          iVar18 = iVar18 / 2 + iVar18;
        }
        if (iVar18 <= (int)uVar21) {
          iVar18 = uVar21;
        }
        local_18 = 0xffffffff;
        local_1a4 = uVar21;
        fVar9 = (float)FUN_100fa1fa(iVar18);
        fVar24 = local_200;
        if (*(int *)((int)local_200 + 0x38) != 0) {
          local_1b0 = fVar9;
          FUN_1025b2d0();
          FUN_100fa2cb(*(undefined4 *)((int)fVar24 + 0x38));
          fVar9 = local_1b0;
        }
        *(float *)((int)fVar24 + 0x38) = fVar9;
        *(int *)((int)fVar24 + 0x34) = iVar18;
        uVar21 = local_1a4;
      }
      piVar16 = local_1a0;
      *(uint *)((int)fVar24 + 0x30) = uVar21;
      FUN_1025b2d0();
      local_140 = local_b0;
      local_138 = (char *)piVar16;
      local_134 = *(int *)((int)fVar24 + 0x10);
      local_130 = *(int *)((int)fVar24 + 0x3c);
      local_139 = '\0';
      local_12c = **(int **)((int)fVar24 + 4);
      local_128 = *(undefined4 *)(*(int *)((int)fVar24 + 4) + 4);
      local_124 = *(undefined4 *)(*(int *)((int)fVar24 + 4) + 8);
      (*param_7)(&local_154);
      if ((local_139 != '\0') || (local_12c != **(int **)((int)fVar24 + 4))) {
        *(undefined1 *)((int)fVar24 + 0x54) = 1;
      }
      uVar11 = FUN_10125d9a();
      **(undefined4 **)((int)fVar24 + 4) = uVar11;
      uVar11 = FUN_10125d9a();
      *(undefined4 *)(*(int *)((int)fVar24 + 4) + 4) = uVar11;
      uVar11 = FUN_10125d9a();
      fVar9 = local_200;
      *(undefined4 *)(*(int *)((int)fVar24 + 4) + 8) = uVar11;
      if (local_139 == '\x01') {
        FUN_10142bdd();
        *(int *)((int)fVar9 + 0x10) = local_134;
        FUN_101424e4();
      }
    }
LAB_1013f857:
    fVar24 = local_200;
    if ((local_1e8 >> 9 & 1) == 0) {
      local_1a0 = *(int **)((int)local_200 + 0x14);
      iVar18 = _strcmp((char *)local_1a0,param_3);
      if (iVar18 != 0) {
        local_1f4 = *(float *)((int)fVar24 + 0x10);
        local_1f0 = (char *)CONCAT31((int3)((uint)local_1f4 >> 8),1);
        goto code_r0x1013f88f;
      }
    }
    local_1a0 = (int *)local_120;
  }
  else {
    local_1ec = 0;
LAB_1013f0ff:
    local_1f4 = 0.0;
    local_1a0 = (int *)0x0;
    local_1f0 = (char *)0x0;
  }
code_r0x1013f88f:
  if (*(float *)(local_1fc + 0x24e4) == local_1f8) {
    uVar21 = local_1fc;
    if (*(float *)(local_1fc + 0x1528) != local_1f8) {
      local_18 = 0xffffffff;
      cVar6 = FUN_1010bf61();
      uVar21 = local_1fc;
      if (cVar6 == '\x01' && local_1c8._0_1_ == '\0') {
        pcVar31 = *(char **)(local_1fc + 0x24f0);
        iVar18 = _strcmp(pcVar31,param_3);
        if (iVar18 != 0) {
          local_1f4 = (float)(*(int *)(uVar21 + 0x24e8) + -1);
          local_1f0 = (char *)CONCAT31((int3)((uint)local_1f4 >> 8),1);
          local_1a0 = (int *)pcVar31;
        }
      }
    }
    *(undefined4 *)(uVar21 + 0x24e4) = 0;
  }
  if (local_1a0 != (int *)0x0) {
    fVar24 = local_1f4;
    if ((param_6 >> 0x16 & 1) != 0) {
      FUN_10142686();
      local_144 = local_1f8;
      fStack_14c = (float)local_1e8;
      local_154 = CONCAT44(0x400000,local_1fc);
      if (((byte)local_1e0 == '\0') ||
         (*(int *)(local_1fc + 0x1528) != *(int *)((int)local_200 + 0xc))) {
        local_13a = 0;
      }
      else {
        local_13a = *(undefined1 *)(local_1fc + 0x1534);
        local_18 = 0xffffffff;
      }
      local_138 = param_3;
      local_134 = (int)local_1f4;
      local_130 = FUN_100fbc6a(param_4,(int)local_1f4 + 1);
      fStack_148 = (float)param_8;
      local_18 = 0xffffffff;
      (*param_7)(&local_154);
      param_4 = local_130;
      param_3 = local_138;
      fVar24 = (float)FUN_100fa683(local_134,local_130 + -1);
    }
    FUN_100fa683((int)fVar24 + 1,param_4);
    local_18 = 0xffffffff;
    local_1e4 = param_3;
    FUN_100fa19f();
  }
  if ((*(float *)(local_1fc + 0x1528) == local_1f8) && ((char)local_1c0 != '\0')) {
    local_18 = 0xffffffff;
    FUN_101028d8();
  }
  if ((param_6 >> 0x1a & 1) == 0) {
    local_18 = 0xffffffff;
    FUN_100fe25e();
    uVar21 = local_1fc;
    local_1c0 = *(char **)(local_1fc + 0xd14);
    uVar11 = FUN_100fcb39(7,0x3f800000);
    FUN_100fdee9(local_dc,fStack_d8,(char *)uStack_d4,uStack_d4._4_4_,uVar11,1,local_1c0);
    local_17c = CONCAT44((float)((ulonglong)*(undefined8 *)(uVar21 + 0xd0c) >> 0x20) + fStack_d8,
                         (float)*(undefined8 *)(uVar21 + 0xd0c) + local_dc);
    fStack_14c = (float)local_90 + local_dc;
    fStack_148 = (float)pcStack_16c + fStack_d8;
    local_154 = CONCAT44(fStack_d8,local_dc);
  }
  else {
    local_17c = *(undefined8 *)(local_1d4 + 0x144);
    uVar21 = -(uint)(*(float *)(local_1d4 + 0x28c) <= local_dc);
    uVar12 = -(uint)(*(float *)(local_1d4 + 0x290) <= fStack_d8);
    uVar22 = -(uint)((float)local_90 + local_dc < *(float *)(local_1d4 + 0x294));
    uVar23 = -(uint)((float)local_110 + fStack_d8 < *(float *)(local_1d4 + 0x298));
    fStack_14c = (float)(~uVar22 & (uint)*(float *)(local_1d4 + 0x294) |
                        (uint)((float)local_90 + local_dc) & uVar22);
    fStack_148 = (float)(~uVar23 & (uint)*(float *)(local_1d4 + 0x298) |
                        (uint)((float)local_110 + fStack_d8) & uVar23);
    local_154 = CONCAT44(~uVar12 & (uint)*(float *)(local_1d4 + 0x290) | (uint)fStack_d8 & uVar12,
                         ~uVar21 & (uint)*(float *)(local_1d4 + 0x28c) | (uint)local_dc & uVar21);
  }
  if ((byte)local_184 == '\0') {
    if (param_2 != (char *)0x0) goto code_r0x1013fb1e;
LAB_1013fb3e:
    local_1a8 = (char *)0x0;
    if ((char)local_1cc != '\0') {
      bVar19 = false;
LAB_1013fb46:
      cVar6 = bVar19;
      local_1a8 = (char *)0x0;
      if ((local_c4 & 1) == 0) {
        FUN_10142a08();
      }
      if ((param_6 >> 10 & 1) == 0 || (bool)cVar6 != false) goto LAB_1013fb62;
      local_18 = 0xffffffff;
      FUN_10142924();
    }
LAB_1013fb92:
    pcVar31 = local_1e4;
    if (((((byte)local_1dc | (byte)local_1d8) & 1) != 0) ||
       (*(float *)(local_1fc + 0x1528) == local_1f8)) {
      local_1a8 = local_1e4 + *(int *)((int)local_200 + 0x10);
      local_184 = 0;
      goto code_r0x1013fbc0;
    }
    if ((param_6 & 0x5000000) != 0x4000000) {
      sVar10 = _strlen(local_1e4);
      local_1a8 = pcVar31 + sVar10;
      local_184 = 0;
      goto code_r0x1013fbc0;
    }
    local_170 = (char *)0x0;
    local_184 = 0;
code_r0x1013fbe6:
    uVar21 = local_1fc;
    local_158 = (char *)0x0;
    local_1ac = 1;
    local_18 = 0xffffffff;
    local_1a8 = local_170;
    FUN_100fcab4(&local_154,&local_17c,*(undefined4 *)(local_1fc + 0x1228),&local_158,&local_1ac);
  }
  else {
    local_1e4 = *(char **)((int)local_200 + 0x20);
    if (param_2 == (char *)0x0) goto LAB_1013fb3e;
code_r0x1013fb1e:
    local_1a8 = (char *)0x0;
    cVar6 = (char)local_1cc;
    bVar19 = *local_1e4 == '\0';
    if ((bool)(char)local_1cc != (*local_1e4 == '\0')) goto LAB_1013fb46;
LAB_1013fb62:
    if (cVar6 == '\0') goto LAB_1013fb92;
    sVar10 = _strlen(param_2);
    local_1a8 = param_2 + sVar10;
    local_184 = CONCAT31((int3)(sVar10 >> 8),1);
    local_1e4 = param_2;
code_r0x1013fbc0:
    local_158 = (char *)0x0;
    local_1ac = 1;
    uVar21 = local_1fc;
    local_170 = local_1a8;
    if ((param_6 >> 0x1a & 1) != 0) goto code_r0x1013fbe6;
  }
  local_1cc = (int *)(uVar21 + 0x24d4);
  if (*(int *)(uVar21 + 0x24d8) < 0) {
    local_18 = 0xffffffff;
    uVar11 = FUN_100fa1fa(0);
    uVar21 = local_1fc;
    if (*(int *)(local_1fc + 0x24dc) != 0) {
      FUN_1025b2d0();
      FUN_100fa2cb(*(undefined4 *)(uVar21 + 0x24dc));
    }
    *(undefined4 *)(uVar21 + 0x24dc) = uVar11;
    *(undefined4 *)(uVar21 + 0x24d8) = 0;
  }
  pcVar31 = local_1e4;
  *local_1cc = 0;
  if ((param_6 >> 0x1a & 1) == 0) {
    pcVar14 = (char *)0x1;
  }
  else {
    if ((byte)local_1e0 == '\0') {
      ppcVar13 = &local_1a8;
      if (local_170 != (char *)0x0) {
        ppcVar13 = (char **)0x0;
      }
      iVar18 = local_1ac + 1;
    }
    else if ((*(char *)((int)local_200 + 0x54) == '\x01') && ((byte)local_1dc != 0)) {
      ppcVar13 = &local_1a8;
      if (local_170 != (char *)0x0) {
        ppcVar13 = (char **)0x0;
      }
      iVar18 = 0x7fffffff;
    }
    else {
      ppcVar13 = &local_1a8;
      if (local_170 != (char *)0x0) {
        ppcVar13 = (char **)0x0;
      }
      iVar18 = 0x7fffffff;
      if ((((byte)local_1dc | (byte)local_1d8) & 1) == 0) {
        iVar18 = local_1ac + 1;
      }
      if ((*(byte *)((int)local_200 + 0x55) & 1) == 0) {
        iVar18 = local_1ac + 1;
      }
    }
    local_18 = 0xffffffff;
    pcVar14 = (char *)FUN_101431c6(local_1e4,local_170,iVar18,ppcVar13);
    local_170 = local_1a8;
  }
  uVar21 = local_1fc;
  *(int *)(local_1fc + 0x24e0) = (int)local_170 - (int)pcVar31;
  local_1e4 = pcVar31;
  local_1ac = FUN_100fa683(local_1ac,pcVar14);
  fVar24 = local_200;
  bVar5 = (byte)local_1dc;
  local_1b0 = (float)(int)pcVar14 * *(float *)(uVar21 + 0x1228);
  local_18 = 0xffffffff;
  if (((byte)local_1e0 & bVar5) == 1) {
    local_1c0 = pcVar14;
    local_1a0 = (int *)(local_184 & 0xff);
    FUN_101435be(local_200,local_1cc,local_1e4,local_170,**(undefined4 **)((int)local_200 + 4));
    local_1a4 = FUN_100fcb39(local_1a0,0x3f800000);
    *(char **)((int)fVar24 + 0x48) = local_1c0;
code_r0x1013fe60:
    fVar9 = local_200;
    pcVar31 = local_f0;
    if (*(char *)((int)fVar24 + 0x54) == '\x01') {
      if ((short)param_6 < 0) {
        *(undefined4 *)((int)local_200 + 0x40) = 0;
      }
      else if (*(float *)((int)local_200 + 0x40) <= (float)local_a0) {
        fVar24 = (float)local_a0 - ((float)local_90 - *(float *)(local_1fc + 0xd0c));
        if (*(float *)((int)local_200 + 0x40) <= fVar24) {
          *(float *)((int)local_200 + 0x40) = (float)(int)(DAT_102b9570 * (float)local_90 + fVar24);
        }
      }
      else {
        fVar20 = (float10)FUN_100fdbca(0,(float)local_a0 - DAT_102b9570 * (float)local_90);
        local_64 = (float)fVar20;
        *(float *)((int)fVar9 + 0x40) = (float)(int)fVar20;
      }
      pcVar31 = local_f0;
      if ((param_6 >> 0x1a & 1) != 0) {
        fVar24 = local_a0._4_4_ - *(float *)(local_1fc + 0x1228);
        if ((float)local_f0 <= fVar24) {
          fVar24 = *(float *)(local_1fc + 0xd10) + *(float *)(local_1fc + 0xd10);
          if ((float)local_f0 <= local_a0._4_4_ - ((float)local_110 - fVar24)) {
            pcVar31 = (char *)(fVar24 + (local_a0._4_4_ - (float)local_110));
          }
        }
        else {
          fVar20 = (float10)FUN_100fdbca(0,fVar24);
          local_68 = (char *)(float)fVar20;
          pcVar31 = local_68;
        }
      }
      *(undefined1 *)((int)local_200 + 0x54) = 0;
    }
code_r0x10140076:
    uVar21 = local_1fc;
    if (*(char *)((int)local_200 + 0x55) == '\x01') {
      if ((param_6 >> 0x1a & 1) != 0) {
        pcVar31 = (char *)((local_a0._4_4_ - *(float *)(local_1fc + 0x1228)) -
                          (DAT_102b70e0 * (float)local_110 - *(float *)(local_1fc + 0xd10)));
      }
      *(undefined1 *)((int)local_200 + 0x55) = 0;
      local_1dc = 0;
    }
    if (((float)pcVar31 != (float)local_f0) || (NAN((float)pcVar31) || NAN((float)local_f0))) {
      local_170 = pcVar31;
      FUN_100fdbca((*(float *)(local_1fc + 0xd10) + *(float *)(local_1fc + 0xd10) + local_1b0) -
                   (float)local_110,0);
      fVar20 = (float10)FUN_10112cc4();
      local_6c = (float)fVar20;
      local_17c = CONCAT44((*(float *)(local_1d4 + 200) - local_6c) + local_17c._4_4_,
                           (float)local_17c);
      *(float *)(local_1d4 + 200) = local_6c;
      FUN_100fcab4(&local_154,&local_17c,*(undefined4 *)(uVar21 + 0x1228),&local_158,&local_1ac);
      local_1ac = FUN_100fa683(local_1ac,local_1c0);
    }
    local_1f4 = *(float *)((int)local_200 + 0x40);
    if ((byte)local_1d8 != '\0') {
      fVar24 = DAT_1028b430;
      if ((byte)local_1dc == '\0') {
        fVar24 = DAT_102b71d8;
      }
      local_c4 = FUN_100fcb39(0x36,fVar24);
      local_1c8 = 0.0;
      if ((param_6 & 0x4000000) == 0) {
        local_1c8 = DAT_102b8ac0;
      }
      fVar20 = (float10)FUN_10192fb8(0x20);
      fVar24 = local_200;
      local_1a0 = (int *)(float)fVar20;
      pcStack_19c = (char *)0x0;
      pcStack_198 = (char *)0x0;
      pcStack_194 = (char *)0x0;
      local_70 = (char *)local_1a0;
      local_170 = (char *)FUN_100fa683(*(undefined4 *)(*(int *)((int)local_200 + 4) + 4),
                                       *(undefined4 *)(*(int *)((int)local_200 + 4) + 8));
      local_1c0 = (char *)FUN_100fbc6a(*(undefined4 *)(*(int *)((int)fVar24 + 4) + 4),
                                       *(undefined4 *)(*(int *)((int)fVar24 + 4) + 8));
      if ((int)local_158 < local_1ac) {
        local_120 = (char *)(float)(int)((float)local_1a0 * DAT_102b70e0);
        fStack_11c = (float)(int)(float)pcStack_19c;
        fStack_118 = (float)(int)(float)pcStack_198;
        fStack_114 = (float)(int)(float)pcStack_194;
        local_b0 = 0.0;
        if ((param_6 & 0x4000000) == 0) {
          local_b0 = DAT_102b8a50;
        }
        uStack_a4 = 0;
        uStack_a8 = 0;
        uStack_ac = 0;
        local_170 = local_170 + (int)local_1e4;
        local_1c0 = local_1c0 + (int)local_1e4;
        piVar16 = (int *)local_158;
        do {
          iVar18 = 0;
          if (*local_1cc != 0) {
            iVar18 = *(int *)(*(int *)(local_1fc + 0x24dc) + (int)piVar16 * 4);
          }
          local_1a0 = (int *)((int)piVar16 + 1);
          if ((int)local_1a0 < *local_1cc) {
            iVar17 = *(int *)(*(int *)(local_1fc + 0x24dc) + (int)local_1a0 * 4) + -1;
          }
          else {
            iVar17 = *(int *)(local_1fc + 0x24e0);
          }
          local_90 = local_1e4 + iVar18;
          pcVar31 = local_1e4 + iVar17;
          if (pcVar31 < local_1a8) {
            local_f0 = (char *)(uint)(*pcVar31 != '\n');
            pcVar31 = pcVar31 + (int)local_f0;
          }
          else {
            local_f0 = (char *)0x0;
          }
          pcVar14 = local_90;
          if (local_90 < local_170) {
            pcVar14 = local_170;
          }
          pcVar27 = pcVar31;
          if (local_1c0 < pcVar31) {
            pcVar27 = local_1c0;
          }
          pcVar30 = (char *)0x0;
          local_110 = (char *)piVar16;
          if (pcVar14 < pcVar27) {
            local_18 = 0xffffffff;
            FUN_100fdb2e(&local_c0,pcVar14,pcVar27,0,0xbf800000);
            pcVar30 = (char *)(local_c0 + 0.0);
          }
          pcVar27 = local_90;
          pcVar25 = pcVar30;
          if (pcVar31 < local_1c0) {
            pcVar25 = (char *)((float)pcVar30 + (float)local_120);
          }
          pcVar26 = pcVar30;
          if (((uint)local_f0 & 1) == 0) {
            pcVar26 = pcVar25;
          }
          if (local_170 <= pcVar31) {
            pcVar30 = pcVar26;
          }
          if (((float)pcVar30 != 0.0) || (NAN((float)pcVar30))) {
            local_c0 = 0.0;
            fStack_bc = 0.0;
            fStack_b8 = 0.0;
            fStack_b4 = 0.0;
            local_f0 = (char *)((float)local_17c - local_1f4);
            fStack_ec = local_b0;
            uStack_e8 = 0;
            uStack_e4 = uStack_ac;
            local_18 = 0xffffffff;
            local_90 = pcVar30;
            FUN_100fdb2e(local_38,pcVar27,pcVar14,0,0xbf800000);
            fVar9 = (float)(int)local_110 * *(float *)(local_1fc + 0x1228) + local_17c._4_4_;
            fStack_b4 = local_1c8 + fVar9 + *(float *)(local_1fc + 0x1228);
            fVar24 = local_38[0] + (float)local_f0;
            fVar9 = fVar9 + fStack_ec;
            uVar21 = -(uint)(local_154._4_4_ <= fVar9);
            local_c0 = (float)(~-(uint)((float)local_154 <= fVar24) & (uint)(float)local_154 |
                              (uint)fVar24 & -(uint)((float)local_154 <= fVar24));
            fStack_bc = (float)(~uVar21 & (uint)local_154._4_4_ | (uint)fVar9 & uVar21);
            if (fStack_148 <= fStack_b4) {
              fStack_b4 = fStack_148;
            }
            fStack_b8 = (float)local_90 + fVar24;
            if (fStack_14c <= (float)local_90 + fVar24) {
              fStack_b8 = fStack_14c;
            }
            FUN_1018b85a(&local_c0,&fStack_b8,local_c4,0,0);
          }
          piVar16 = local_1a0;
        } while ((int)local_1a0 < local_1ac);
      }
    }
  }
  else {
    local_a0 = 0;
    local_1a4 = FUN_100fcb39((char *)(local_184 & 0xff),0x3f800000);
    if (((bVar5 | (byte)local_1d8) & 1) != 0) {
      *(char **)((int)local_200 + 0x48) = pcVar14;
      fVar24 = local_200;
      pcVar31 = local_f0;
      local_1c0 = pcVar14;
      if (bVar5 != 0) goto code_r0x1013fe60;
      goto code_r0x10140076;
    }
    local_1f4 = 0.0;
    local_1dc = 0;
  }
  if ((*(float *)(local_1fc + 0x1528) != local_1f8) &&
     ((((byte)local_1d8 | (byte)local_1dc) & 1) == 0 && (param_6 >> 0x11 & 1) != 0)) {
    local_170 = (char *)uStack_d4;
    local_18 = 0xffffffff;
    FUN_100fdb2e(&local_c0,local_1e4,0,0,0xbf800000);
    fVar20 = (float10)FUN_100ea38a((float)local_17c,
                                   ((float)local_170 - local_c0) - *(float *)(local_1fc + 0xd0c));
    local_17c = CONCAT44(local_17c._4_4_,(float)fVar20);
  }
  if ((param_6 >> 0x1a & 1) == 0) {
    if ((0xffffff < local_1a4) && ((int)local_1a8 - (int)local_1e4 < 0x200000))
    goto code_r0x101405a9;
  }
  else if (0xffffff < local_1a4) {
code_r0x101405a9:
    if ((int)local_158 < local_1ac) {
      if (local_1ac < *(int *)(local_1fc + 0x24d4)) {
        iVar18 = *(int *)(*(int *)(local_1fc + 0x24dc) + local_1ac * 4) + -1;
      }
      else {
        iVar18 = *(int *)(local_1fc + 0x24e0);
      }
      if (*(int *)(local_1fc + 0x24d4) == 0) {
        iVar17 = 0;
      }
      else {
        iVar17 = *(int *)(*(int *)(local_1fc + 0x24dc) + (int)local_158 * 4);
      }
      fStack_bc = (float)(int)local_158 * *(float *)(local_1fc + 0x1228) + local_17c._4_4_;
      local_c0 = ((float)local_17c - local_1f4) + 0.0;
      local_18 = 0xffffffff;
      FUN_1018c814(*(undefined4 *)(local_1d4 + 0x2e8),*(float *)(local_1fc + 0x1228),&local_c0,
                   local_1a4,&local_154,local_1e4 + iVar17,local_1e4 + iVar18,local_188,3);
    }
  }
  if ((byte)local_1dc != '\0') {
    fVar24 = *(float *)(local_1fc + 0x48) + *(float *)((int)local_200 + 0x50);
    *(float *)((int)local_200 + 0x50) = fVar24;
    bVar19 = true;
    if ((*(char *)(local_1fc + 0x7b) == '\x01') && (0.0 < fVar24)) {
      fVar20 = (float10)FUN_1026dec0((double)fVar24,0x40000000,0x3ff33333);
      local_40 = (double)fVar20;
      bVar19 = local_40 <= DAT_102b9578;
    }
    pcVar31 = (char *)(float)(int)(((float)local_17c + (float)local_a0) - local_1f4);
    pcVar14 = (char *)(float)(int)(local_17c._4_4_ + local_a0._4_4_);
    if (bVar19) {
      if ((((local_154._4_4_ < DAT_102b9580 + (float)pcVar14) &&
           (pcVar27 = (char *)(((float)pcVar14 - *(float *)(local_1fc + 0x1228)) + DAT_102b70e0),
           (float)pcVar27 < fStack_148)) && ((float)local_154 < DAT_1028b430 + (float)pcVar31)) &&
         ((float)pcVar31 < fStack_14c)) {
        local_1c0 = (char *)(float)(int)*(float *)(local_1fc + 0x1204);
        uStack_1bc = 0;
        uStack_1b8 = 0;
        uStack_1b4 = 0;
        local_18 = 0xffffffff;
        uStack_168 = 0;
        uStack_164 = 0;
        local_1a0 = (int *)pcVar27;
        pcStack_19c = pcVar14;
        pcStack_198 = pcVar14;
        pcStack_194 = pcVar14;
        local_170 = pcVar31;
        pcStack_16c = pcVar14;
        local_f0 = (char *)(DAT_102b9580 + (float)pcVar14);
        uVar11 = FUN_100fcb39(0x22,0x3f800000);
        FUN_1018b5da(local_170,local_1a0,local_f0,uVar11,local_1c0);
        pcVar31 = local_170;
        pcVar14 = pcStack_16c;
      }
    }
    if (((local_1e8 >> 9 & 1) == 0) && (*(float *)(local_1fc + 0x1528) == local_1f8)) {
      *(undefined2 *)(local_1fc + 0x2668) = 0x101;
      *(ulonglong *)(local_1fc + 0x266c) =
           CONCAT44((float)pcVar14 - *(float *)(local_1fc + 0x1228),(float)pcVar31 + DAT_102b8a50);
      *(float *)(local_1fc + 0x2674) = *(float *)(local_1fc + 0x1228);
      *(undefined4 *)(local_1fc + 0x2678) = **(undefined4 **)(local_180 + 0x3c);
    }
  }
  bVar5 = (param_6 >> 10 & 1) == 0 | (byte)local_184;
  if (bVar5 == 0) {
    FUN_10142a08();
  }
  uVar21 = local_1fc;
  if ((param_6 >> 0x1a & 1) != 0) {
    fStack_bc = local_1b0 + *(float *)(local_1fc + 0xd10);
    local_c0 = 0.0;
    local_18 = 0xffffffff;
    FUN_10131d8e(&local_c0);
    *(uint *)(uVar21 + 0x1e4c) = *(uint *)(uVar21 + 0x1e4c) | 0x100001;
    FUN_1010c644();
    local_170 = (char *)(*(uint *)(uVar21 + 0x1e88) & 0x80);
    FUN_1011462f();
    iVar18 = *(int *)(uVar21 + 0x1e80);
    if ((iVar18 == 0) || (iVar17 = FUN_1012ea9f(local_1d4,1), iVar18 != iVar17)) {
      *(float *)(local_1fc + 0x1e80) = local_1f8;
      *(undefined4 *)(local_1fc + 0x1e84) = local_f4;
      *(uint *)(local_1fc + 0x1e88) = (uint)local_170 | local_18c;
    }
  }
  if ((char)local_1e0 == '\x01' && (local_1e8 >> 9 & 1) != 0) {
    *(undefined4 *)((int)local_200 + 0x14) = 0;
  }
  if ((bVar5 & *(byte *)(local_1fc + 0x2748)) == 1) {
    local_18 = 0xffffffff;
    FUN_10118366("{","}");
    FUN_100fd6a8();
  }
  if (0.0 < local_58) {
    local_18 = 0xffffffff;
    FUN_100fd5ae((float)(char *)uStack_d4 + *(float *)(local_1fc + 0xd24),
                 fStack_d8 + *(float *)(local_1fc + 0xd10),param_1,local_74,0);
  }
  if ((byte)local_1f0 != '\0') {
    local_18 = 0xffffffff;
    FUN_10102913(local_1f8);
  }
  if ((param_6 & 0x40) == 0) {
    local_1ec._0_1_ = (byte)local_1f0;
  }
  local_18c = (uint)(byte)local_1ec;
code_r0x10140a5a:
  *unaff_FS_OFFSET = local_20;
  return local_18c;
}

