/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000215e */

undefined4 FUN_14000215e(undefined4 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 ******ppppppuVar3;
  uint uVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined8 uVar15;
  int *piVar16;
  undefined8 *******pppppppuVar17;
  char cVar18;
  ulonglong uVar19;
  bool bVar20;
  undefined1 local_8f0 [976];
  undefined8 *****local_520 [4];
  undefined8 *****local_500 [34];
  undefined1 local_3ee;
  undefined1 local_3ed;
  undefined1 local_3ec;
  undefined1 local_3e8 [32];
  undefined1 local_3c8 [32];
  undefined1 local_3a8 [32];
  undefined1 local_388 [32];
  undefined1 local_368 [32];
  undefined1 local_348 [32];
  undefined1 local_328 [32];
  undefined1 local_308 [32];
  undefined1 local_2e8 [32];
  undefined1 local_2c8 [32];
  undefined1 local_2a8 [32];
  undefined1 local_288 [32];
  undefined1 local_268 [32];
  undefined1 local_248 [32];
  undefined1 local_228 [32];
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 ******local_1e8 [2];
  longlong local_1d8;
  ulonglong local_1d0;
  int local_1c8;
  undefined4 uStack_1c4;
  undefined8 local_1c0;
  ulonglong local_1b0;
  undefined8 ******local_1a8;
  undefined8 local_1a0;
  ulonglong local_190;
  undefined8 ******local_188;
  int local_180;
  longlong local_178;
  ulonglong local_170;
  longlong local_168;
  longlong lStack_160;
  undefined8 local_158;
  undefined8 local_148;
  int local_140;
  undefined8 ******local_138;
  ulonglong uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 ******local_118;
  ulonglong local_110;
  ulonglong local_100;
  longlong local_f8;
  longlong lStack_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  ulonglong uStack_d0;
  undefined8 ******local_c8;
  ulonglong local_c0;
  ulonglong local_b0;
  undefined8 ******local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_81;
  char local_80;
  char local_7f;
  char local_7e;
  undefined1 local_7d;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  char local_79;
  char local_78;
  undefined1 local_77;
  char local_76;
  char local_75;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  char local_71;
  char local_70;
  char local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  uint local_6c;
  char local_65;
  char local_64;
  char local_63;
  char local_62;
  char local_61;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  setlocale(0,".UTF-8");
  cVar10 = FUN_140004097();
  if (cVar10 != '\0') {
    FUN_140052c16(local_8f0,0,0);
    FUN_14000414e(local_8f0);
    return 0;
  }
  FUN_14000169c(local_3e8,"Copyright (c) 2023 Sinflower");
  FUN_14000169c(local_3c8,&DAT_1401728de);
  FUN_140004236(local_8f0,local_3e8,local_3c8);
  puVar13 = (undefined8 *)FUN_140004470(local_8f0,param_2);
  local_f8 = 0;
  lStack_f0 = 0;
  local_e8 = 0;
  FUN_14000169c(local_3a8,"<Game[Pro].exe>\n<data_folder>\n<.wolf-files>");
  FUN_14000169c(local_388,"FILE[s]");
  lVar14 = FUN_1400045ac(local_8f0,local_388,&local_f8,local_3a8);
  *(undefined1 *)(lVar14 + 0x20) = 1;
  local_7d = 0;
  FUN_14000169c(local_368,"Override existing files");
  FUN_14000169c(local_348,"-o,--override");
  FUN_1400047e6(local_8f0,local_348,&local_7d,local_368);
  local_7c = 0;
  FUN_14000169c(local_328,"Unprotect Pro files");
  FUN_14000169c(local_308,"-u,--unprotect");
  FUN_1400047e6(local_8f0,local_308,&local_7c,local_328);
  local_7b = 0;
  FUN_14000169c(local_2e8,"Decrypt WolfX files if present");
  FUN_14000169c(local_2c8,"-x,--wolfx");
  FUN_1400047e6(local_8f0,local_2c8,&local_7b,local_2e8);
  FUN_14000169c(local_1e8,&DAT_1401728de);
  FUN_140001f3f(local_2a8);
  FUN_14000169c(local_288,"-p,--pack");
  uVar15 = FUN_1400049e0(local_8f0,local_288,local_1e8,local_2a8);
  FUN_14000169c(local_268,"VER_IDX");
  FUN_140004c14(uVar15,local_268);
  FUN_1400326a4(local_8f0,param_1,puVar13);
  FUN_14000169c(&local_a8,*puVar13);
  FUN_140005131(local_520,&local_a8);
  local_c8 = local_500;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  local_1a8 = local_520;
  FUN_1400411ce(&local_208,1);
  FUN_140005242(local_520);
  FUN_1400017de(&local_a8);
  FUN_140051e90(local_520,&local_208);
  if (local_f8 == lStack_f0) {
    uVar15 = FUN_1400052b8(&PTR_DAT_1401c97b0,"No files specified.");
    local_6c = 0xffffffff;
    FUN_1400054d7(uVar15);
    goto LAB_140003055;
  }
  local_3ee = local_7d;
  local_3ed = local_7c;
  local_3ec = local_7b;
  FUN_14000550c(&local_c8,local_f8,0);
  FUN_140007025();
  local_188 = (undefined8 *******)0xffff00000000;
  pppppppuVar17 = &local_c8;
  if (7 < local_b0) {
    pppppppuVar17 = (undefined8 *******)local_c8;
  }
  local_180 = FUN_1400dcbb0(pppppppuVar17,&local_a8,3,0xffffffff);
  FUN_140007276(&local_188,local_180,&local_a8);
  iVar2 = local_180;
  local_1a0 = FUN_140007025();
  local_1a8 = (undefined8 ******)CONCAT44(local_1a8._4_4_,iVar2);
  iVar12 = (uint)local_188;
  if ((uint)local_188 == 0) {
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14004137b("exists",&local_1a8,&local_c8);
    }
    cVar10 = '\0';
LAB_140002725:
    cVar18 = '\0';
    bVar20 = false;
  }
  else {
    FUN_140007025();
    if (iVar12 == 1) {
      cVar10 = '\0';
      goto LAB_140002725;
    }
    local_74 = 1;
    FUN_14000550c(&local_1a8,local_f8,0);
    local_64 = '\x01';
    local_65 = '\0';
    local_188 = (undefined8 *******)0xffff00000000;
    pppppppuVar17 = &local_1a8;
    if (7 < local_190) {
      pppppppuVar17 = (undefined8 *******)local_1a8;
    }
    local_180 = FUN_1400dcbb0(pppppppuVar17,&local_a8,3,0xffffffff);
    FUN_140007276(&local_188,local_180,&local_a8);
    if ((local_180 != 0) && (((uint)local_188 & 0xfffffff7) != 1)) {
      local_64 = 1;
      local_65 = 1;
                    /* WARNING: Subroutine does not return */
      FUN_140041f39("status",local_180,&local_1a8);
    }
    if ((uint)local_188 != 2) {
      cVar10 = '\x01';
      goto LAB_140002725;
    }
    local_72 = 1;
    local_73 = 1;
    FUN_140005554(&local_188,&DAT_14016fecb,0);
    local_6f = '\x01';
    local_70 = '\x01';
    local_71 = '\0';
    local_6d = 1;
    local_6e = 1;
    FUN_14000550c(local_228,local_f8,0);
    local_61 = '\x01';
    local_62 = '\x01';
    local_63 = '\x01';
    FUN_14000559c(local_228,local_248);
    local_7e = 1;
    local_7f = 1;
    local_80 = 0;
    local_a8 = &local_188;
    if (7 < local_170) {
      local_a8 = local_188;
    }
    lStack_a0 = local_178;
    iVar12 = FUN_140041fc4(local_248);
    bVar20 = iVar12 == 0;
    cVar10 = '\x01';
    cVar18 = '\x01';
  }
  local_80 = cVar18;
  local_7f = cVar18;
  local_7e = cVar10;
  cVar5 = cVar18;
  cVar6 = cVar10;
  cVar7 = cVar18;
  cVar8 = cVar18;
  cVar9 = cVar10;
  if (cVar18 != '\0') {
    FUN_140005690(local_248);
    local_63 = cVar18;
    local_62 = cVar18;
    local_61 = cVar10;
    FUN_140005690(local_228);
    local_71 = cVar18;
    local_70 = cVar18;
    local_6f = cVar10;
    FUN_140005690(&local_188);
    cVar18 = local_71;
    cVar5 = local_70;
    cVar6 = local_6f;
    cVar7 = local_63;
    cVar8 = local_62;
    cVar9 = local_61;
  }
  local_61 = cVar9;
  local_62 = cVar8;
  local_63 = cVar7;
  local_6f = cVar6;
  local_70 = cVar5;
  local_71 = cVar18;
  local_65 = cVar10;
  local_64 = cVar10;
  if (cVar10 != '\0') {
    FUN_140005690(&local_1a8);
  }
  FUN_140005690(&local_c8);
  if (bVar20) {
    cVar10 = FUN_14005273c(local_520,local_f8);
    if (cVar10 == '\0') {
      uVar15 = FUN_1400052b8(&PTR_DAT_1401c9740,
                             "Failed to initialize game with the provided executable.");
      local_6c = 0xffffffff;
      FUN_1400054d7(uVar15);
      goto LAB_140003055;
    }
    if (local_1d8 == 0) {
      iVar12 = FUN_1400543e2(local_520);
      if (iVar12 != 0) {
        uVar15 = FUN_1400052b8(&PTR_DAT_1401c9740,"UnpackData failed with exit code: ");
        uVar15 = FUN_1400056d6(uVar15,iVar12);
        local_6c = 0xffffffff;
        FUN_1400054d7(uVar15);
        goto LAB_140003055;
      }
      local_a8 = (undefined8 *******)0x0;
      lStack_a0 = 0;
      local_98 = 0;
      local_90 = 0xf;
      iVar12 = FUN_1400558e4(local_520,&local_a8);
      if (iVar12 == 0) {
        uVar15 = FUN_1400052b8(&PTR_DAT_1401c97b0,"Protection key: ");
        uVar15 = FUN_1400058b9(uVar15,&local_a8);
        FUN_1400054d7(uVar15);
      }
      iVar12 = FUN_140055d18(local_520);
      if (iVar12 == 0) {
        local_6c = 0;
      }
      else {
        uVar15 = FUN_1400052b8(&PTR_DAT_1401c9740,"DecryptWolfXFiles failed with exit code: ");
        uVar15 = FUN_1400056d6(uVar15,iVar12);
        local_6c = 0xffffffff;
        FUN_1400054d7(uVar15);
      }
      FUN_1400017de(&local_a8);
      if (iVar12 != 0) goto LAB_140003055;
LAB_1400030cc:
      local_6c = 0;
    }
    else {
      local_c8._0_4_ = 0xffffffff;
      piVar16 = (int *)FUN_140113dd4();
      pppppppuVar17 = local_1e8;
      if (0xf < local_1d0) {
        pppppppuVar17 = (undefined8 *******)local_1e8[0];
      }
      *piVar16 = 0;
      local_6c = FUN_14011b85c(pppppppuVar17,&local_a8,10);
      if (pppppppuVar17 == (undefined8 *******)local_a8) {
        FUN_1400d9cd0("invalid stoi argument");
LAB_140003162:
                    /* WARNING: Subroutine does not return */
        FUN_1400d9d30("stoi argument out of range");
      }
      if (*piVar16 == 0x22) goto LAB_140003162;
      local_c8 = (undefined8 ******)CONCAT44(local_c8._4_4_,local_6c);
      bVar20 = (int)local_6c >= 0;
      if ((int)local_6c < 0) {
        bVar1 = true;
      }
      else {
        FUN_1400786ec(&local_a8);
        bVar1 = (ulonglong)(lStack_a0 - (longlong)local_a8 >> 5) <= (ulonglong)local_6c;
      }
      local_81 = bVar20;
      if (-1 < (int)local_6c) {
        FUN_14000eeca(&local_a8);
      }
      if (bVar1) {
        uVar15 = FUN_1400052b8(&PTR_DAT_1401c97b0,"Invalid package version index");
        FUN_1400054d7(uVar15);
      }
      else {
        iVar12 = FUN_14005368c(local_520,&local_c8);
        if (iVar12 == 0) goto LAB_1400030cc;
        uVar15 = FUN_1400052b8(&PTR_DAT_1401c9740,"PackData failed with exit code: ");
        uVar15 = FUN_1400056d6(uVar15,iVar12);
        FUN_1400054d7(uVar15);
      }
      local_6c = 0xffffffff;
    }
    goto LAB_140003055;
  }
  if (local_1d8 != 0) {
    uVar15 = FUN_1400052b8(&PTR_DAT_1401c9740,
                           "[ERROR] Currently, packing can only be used with an executable");
    local_6c = 0xffffffff;
    FUN_1400054d7(uVar15);
    goto LAB_140003055;
  }
  local_168 = 0;
  lStack_160 = 0;
  local_158 = 0;
  FUN_14000550c(&local_c8,local_f8,0);
  FUN_140007025();
  local_118 = (undefined8 *******)0xffff00000000;
  pppppppuVar17 = &local_c8;
  if (7 < local_b0) {
    pppppppuVar17 = (undefined8 *******)local_c8;
  }
  uVar11 = FUN_1400dcbb0(pppppppuVar17,&local_a8,3,0xffffffff);
  local_110 = CONCAT44(local_110._4_4_,uVar11);
  FUN_140007276(&local_118,uVar11,&local_a8);
  iVar2 = (int)local_110;
  local_1c0 = FUN_140007025();
  local_1c8 = iVar2;
  iVar12 = (uint)local_118;
  if ((uint)local_118 == 0) {
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14004137b("exists",&local_1c8,&local_c8);
    }
LAB_140002a1f:
    local_76 = '\0';
    bVar20 = false;
  }
  else {
    FUN_140007025();
    if (iVar12 == 1) goto LAB_140002a1f;
    local_77 = 1;
    piVar16 = &local_1c8;
    FUN_14000550c(piVar16,local_f8,0);
    local_75 = 1;
    local_76 = 0;
    local_118 = (undefined8 *******)0xffff00000000;
    if (7 < local_1b0) {
      piVar16 = (int *)CONCAT44(uStack_1c4,local_1c8);
    }
    uVar11 = FUN_1400dcbb0(piVar16,&local_a8,3,0xffffffff);
    local_110 = CONCAT44(local_110._4_4_,uVar11);
    FUN_140007276(&local_118,uVar11,&local_a8);
    if (((int)local_110 != 0) && (((uint)local_118 & 0xfffffff7) != 1)) {
      local_75 = 1;
      local_76 = 1;
                    /* WARNING: Subroutine does not return */
      FUN_140041f39("status",local_110 & 0xffffffff,&local_1c8);
    }
    bVar20 = (uint)local_118 == 3;
    local_76 = '\x01';
  }
  local_75 = local_76;
  if (local_76 != '\0') {
    FUN_140005690(&local_1c8);
  }
  FUN_140005690(&local_c8);
  if (bVar20) {
    FUN_14000550c(&local_a8,local_f8,0);
    FUN_1400058d0(&local_c8,&local_a8);
    FUN_140005690(&local_a8);
    if (local_c0 == 0) {
      local_110 = 0;
    }
    else {
      LOCK();
      *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
      UNLOCK();
      local_110 = local_c0;
    }
    local_118 = local_c8;
    local_128 = 0;
    uStack_120 = 0;
    FUN_140005942(&local_128);
    if (local_c0 == 0) {
      local_c0 = 0;
    }
    else {
      LOCK();
      *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
      UNLOCK();
    }
    local_138 = local_c8;
    local_d8 = 0;
    uStack_d0 = 0;
    uStack_130 = local_c0;
    FUN_140005942(&local_138);
    while (cVar10 = FUN_14004351d(&local_118,&local_d8), ppppppuVar3 = local_118, cVar10 == '\0') {
      FUN_140043528(local_118,&local_a8);
      if ((int)local_a8 == 2) {
        FUN_14000892c(&local_a8,ppppppuVar3 + 4);
        FUN_1400436a6(&local_168,&local_a8);
        FUN_140005242(&local_a8);
      }
      FUN_140005988(&local_118);
    }
    FUN_140005942(&local_d8);
    FUN_140005942(&local_118);
    FUN_140005942(&local_c8);
  }
  else {
    for (uVar19 = 0; uVar19 < (ulonglong)(lStack_f0 - local_f8 >> 5); uVar19 = uVar19 + 1) {
      lVar14 = uVar19 * 0x20;
      FUN_14000550c(&local_c8,local_f8 + lVar14,0);
      FUN_140007025();
      local_148 = 0xffff00000000;
      pppppppuVar17 = &local_c8;
      if (7 < local_b0) {
        pppppppuVar17 = (undefined8 *******)local_c8;
      }
      local_140 = FUN_1400dcbb0(pppppppuVar17,&local_a8,3,0xffffffff);
      FUN_140007276(&local_148,local_140);
      iVar2 = local_140;
      uStack_d0 = FUN_140007025();
      local_d8 = CONCAT44(local_d8._4_4_,iVar2);
      iVar12 = (int)local_148;
      if ((int)local_148 == 0) {
        if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_14004137b("exists",&local_d8,&local_c8);
        }
LAB_140002c3e:
        local_79 = '\0';
        bVar20 = false;
      }
      else {
        FUN_140007025();
        if (iVar12 == 1) goto LAB_140002c3e;
        local_7a = 1;
        FUN_14000550c(&local_118,local_f8 + lVar14,0);
        local_78 = 1;
        local_79 = 0;
        local_d8 = 0xffff00000000;
        pppppppuVar17 = &local_118;
        if (7 < local_100) {
          pppppppuVar17 = (undefined8 *******)local_118;
        }
        uVar11 = FUN_1400dcbb0(pppppppuVar17,&local_a8,3,0xffffffff);
        uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar11);
        FUN_140007276(&local_d8,uVar11);
        if (((int)uStack_d0 != 0) && (((uint)local_d8 & 0xfffffff7) != 1)) {
          local_78 = 1;
          local_79 = 1;
                    /* WARNING: Subroutine does not return */
          FUN_140041f39("status",uStack_d0 & 0xffffffff,&local_118);
        }
        bVar20 = (uint)local_d8 == 2;
        local_79 = '\x01';
      }
      local_78 = local_79;
      if (local_79 != '\0') {
        FUN_140005690(&local_118);
      }
      FUN_140005690(&local_c8);
      if (bVar20) {
        FUN_140043d28(&local_168,lVar14 + local_f8);
      }
    }
  }
  if (local_168 == lStack_160) {
    uVar15 = FUN_1400052b8(&PTR_DAT_1401c97b0,"No valid files found.");
    local_6c = 0xffffffff;
    FUN_1400054d7(uVar15);
  }
  else {
    iVar12 = FUN_140054968(local_520,&local_168);
    if (iVar12 == 0) {
      local_6c = 0;
    }
    else {
      uVar15 = FUN_1400052b8(&PTR_DAT_1401c9740,"UnpackDataVec failed with exit code: ");
      uVar15 = FUN_1400056d6(uVar15,iVar12);
      local_6c = 0xffffffff;
      FUN_1400054d7(uVar15);
    }
  }
  FUN_140041304(&local_168);
LAB_140003055:
  FUN_14000414e(local_520);
  FUN_140041304(&local_208);
  FUN_1400017de(local_1e8);
  uVar4 = local_6c;
  FUN_140041304(&local_f8);
  FUN_1400059b2(local_8f0);
  return uVar4;
}

