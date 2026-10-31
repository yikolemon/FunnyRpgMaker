/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100acc30 */

/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_100acc30(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined1 *puVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 ****ppppuVar8;
  undefined4 *puVar9;
  int *unaff_FS_OFFSET;
  int local_1b4 [25];
  undefined1 local_150 [16];
  undefined4 uStack_140;
  undefined4 *puStack_13c;
  undefined4 ***pppuStack_138;
  undefined4 ***pppuStack_134;
  undefined4 ***local_130 [8];
  undefined1 local_110 [4];
  int local_10c;
  undefined8 local_f0;
  undefined4 ***local_e8 [8];
  undefined4 ***local_c8;
  undefined1 local_c4 [12];
  undefined4 local_b8;
  uint local_b4;
  undefined4 ***local_a8 [5];
  int local_94;
  undefined8 local_88;
  int *local_80;
  int *local_7c;
  int *local_78;
  undefined4 ***local_74;
  int local_70;
  undefined4 local_64;
  uint local_60;
  undefined4 ***local_5c [4];
  int local_4c;
  uint local_48;
  undefined4 ***local_44 [4];
  int local_34;
  uint local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined4 ***local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_130;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c4630;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_88 = _PTR_DAT_10293e68;
  local_f0 = _PTR_DAT_10293e70;
  puVar9 = param_1;
  if (7 < (uint)param_1[5]) {
    puVar9 = (undefined4 *)*param_1;
  }
  ppppuVar8 = local_130;
  if ((uint)param_1[4] < 6) {
LAB_100acd06:
    local_20 = (undefined1 *)ppppuVar8;
    pppuStack_138 = (undefined4 ***)0x100acd0f;
    pppuStack_134 = (undefined4 ***)param_1;
    FUN_10002e46();
    bVar1 = false;
  }
  else {
    pppuStack_134 = (undefined4 ***)0x4;
    pppuStack_138 = (undefined4 ***)0x10356e26;
    uStack_140 = 0x100acca4;
    puStack_13c = puVar9;
    iVar6 = FUN_100047c3();
    ppppuVar8 = (undefined4 ****)local_20;
    if ((iVar6 != 4) || (0x19 < (puVar9[2] & 0xffffffdf) - 0x3a0041)) goto LAB_100acd06;
    puVar9 = param_3;
    if (7 < (uint)param_3[5]) {
      puVar9 = (undefined4 *)*param_3;
    }
    if ((uint)param_3[4] < 6) goto LAB_100acd06;
    pppuStack_134 = (undefined4 ***)0x4;
    pppuStack_138 = (undefined4 ***)0x10356e26;
    uStack_140 = 0x100accde;
    puStack_13c = puVar9;
    iVar6 = FUN_100047c3();
    ppppuVar8 = (undefined4 ****)local_20;
    if ((iVar6 != 4) || (0x19 < (puVar9[2] & 0xffffffdf) - 0x3a0041)) goto LAB_100acd06;
    pppuStack_134 = local_5c;
    pppuStack_138 = (undefined4 ***)0x100acd02;
    FUN_100ae172();
    bVar1 = true;
  }
  local_14 = 8;
  if (bVar1) {
    pppuStack_134 = local_44;
    pppuStack_138 = (undefined4 ***)0x100acd38;
    FUN_100ae172();
  }
  else {
    pppuStack_134 = (undefined4 ***)param_3;
    pppuStack_138 = (undefined4 ***)0x100acd43;
    FUN_10002e46();
  }
  local_14 = 10;
  pppuStack_134 = (undefined4 ***)0x100acd64;
  FUN_10002eb6();
  local_14 = 0xb;
  pppuStack_134 = &local_c8;
  pppuStack_138 = (undefined4 ***)0x100acd7d;
  local_24 = pppuStack_134;
  FUN_100aec76();
  local_14 = 0x18;
  pppuStack_134 = local_e8;
  pppuStack_138 = (undefined4 ***)0x100acd94;
  FUN_100aec76();
  local_14 = 0x19;
  if (7 < local_b4) {
    local_24 = local_c8;
  }
  pppuStack_134 = (undefined4 ***)local_b8;
  pppuStack_138 = local_24;
  puStack_13c = (undefined4 *)0x100acdc4;
  iVar6 = FUN_1006d1a8();
  local_24 = (undefined4 ***)CONCAT31(local_24._1_3_,1);
  if (iVar6 == 0) {
    pppuStack_134 = (undefined4 ***)0x100acdda;
    cVar3 = FUN_100044ea();
    pppuStack_134 = (undefined4 ***)0x100acde4;
    cVar4 = FUN_100044ea();
    if (cVar3 == cVar4) {
      pppuStack_138 = local_5c;
      if (7 < local_48) {
        pppuStack_138 = local_5c[0];
      }
      pppuStack_134 = (undefined4 ***)local_4c;
      uStack_140 = 0x100ace03;
      puStack_13c = (undefined4 *)local_110;
      FUN_100af66b();
      if (local_10c == 0) {
        pppuStack_138 = local_44;
        if (7 < local_30) {
          pppuStack_138 = local_44[0];
        }
        pppuStack_134 = (undefined4 ***)local_34;
        uStack_140 = 0x100ace45;
        puStack_13c = (undefined4 *)local_110;
        FUN_100af66b();
        if (local_10c != 0) goto code_r0x100ace52;
      }
      pppuStack_134 = local_5c;
      pppuStack_138 = (undefined4 ****)0x100ace15;
      cVar3 = FUN_100aedc1();
      if (cVar3 == '\0') {
        pppuStack_134 = local_44;
        pppuStack_138 = (undefined4 ****)0x100ace25;
        uVar5 = FUN_100aedc1();
        local_24 = (undefined4 ***)CONCAT31(local_24._1_3_,uVar5);
      }
    }
  }
code_r0x100ace52:
  local_14 = 0xffffffff;
  pppuStack_134 = (undefined4 ***)0x100ace64;
  FUN_10001f04();
  pppuStack_134 = (undefined4 ***)0x100ace6f;
  FUN_10001f04();
  if ((char)local_24 == '\0') {
    pppuStack_134 = local_5c;
    local_c8 = pppuStack_134;
    if (7 < local_48) {
      local_c8 = local_5c[0];
    }
    local_c8 = (undefined4 ***)((int)local_c8 + local_4c * 2);
    pppuStack_138 = &local_c8;
    puStack_13c = (undefined4 *)0x100acea7;
    FUN_100aebec();
    local_14 = 0xc;
    pppuStack_134 = (undefined4 ***)local_110;
    pppuStack_138 = (undefined4 ***)0x100acebd;
    FUN_100ae1d8();
    local_14 = 0xd;
    pppuStack_134 = local_44;
    local_c8 = pppuStack_134;
    if (7 < local_30) {
      local_c8 = local_44[0];
    }
    local_c8 = (undefined4 ***)((int)local_c8 + local_34 * 2);
    pppuStack_138 = &local_c8;
    puStack_13c = (undefined4 *)0x100acef5;
    pppuStack_134 = (undefined4 ***)FUN_100aebec();
    local_14 = 0xe;
    local_20 = (undefined1 *)local_1b4;
    local_24 = (undefined4 ***)local_1b4;
    local_2c = local_150;
    local_28 = (undefined1 *)local_130;
    FUN_100af1c0(local_130);
    local_14 = 0xf;
    local_80 = (int *)(local_24 + 0x11);
    FUN_100af1c0(local_110);
    local_14 = 0x10;
    local_7c = (int *)(local_24 + 9);
    FUN_100af1c0(local_e8);
    local_14 = 0x11;
    local_78 = (int *)(local_24 + 1);
    FUN_100ae1d8(local_78);
    *local_24 = &local_c8;
    local_14 = 0xe;
    FUN_100aeef8();
    puVar2 = local_28;
    local_20 = local_28;
    local_14 = 0x13;
    ppppuVar8 = (undefined4 ****)local_c8;
    if ((local_c8 == local_e8[0]) &&
       (ppppuVar8 = (undefined4 ****)local_a8[0], local_a8[0] == local_130[0])) {
      *(undefined8 **)(local_28 + -4) = &local_88;
      *(undefined4 *)(puVar2 + -8) = 0x100ad1f5;
      FUN_100af244();
    }
    else {
      *(undefined4 *****)(local_28 + -4) = ppppuVar8;
      local_20 = puVar2 + -0x40;
      local_24 = (undefined4 ***)(puVar2 + -0x40);
      local_2c = puVar2 + -0x20;
      *(undefined4 *****)(puVar2 + -0x44) = local_a8;
      *(undefined4 *)(puVar2 + -0x48) = 0x100acfed;
      FUN_100af1c0();
      local_14 = 0x14;
      *(undefined1 **)(puVar2 + -0x44) = local_110;
      *(undefined4 *)(puVar2 + -0x48) = 0x100ad005;
      FUN_100af1c0();
      local_14 = 0x13;
      *(undefined4 *)(puVar2 + -0x44) = 0x100ad022;
      iVar6 = FUN_100af2da();
      puVar2 = local_28;
      local_20 = local_28;
      *(undefined4 *)(local_28 + -4) = 0x100ad037;
      uVar7 = FUN_100af49e();
      local_28 = (undefined1 *)(uVar7 & 0xff);
      ppppuVar8 = local_44;
      if (7 < local_30) {
        ppppuVar8 = (undefined4 ****)local_44[0];
      }
      *(int *)(puVar2 + -4) = local_34;
      *(undefined4 *****)(puVar2 + -8) = ppppuVar8;
      *(undefined4 *****)(puVar2 + -0xc) = &local_74;
      *(undefined4 *)(puVar2 + -0x10) = 0x100ad054;
      FUN_100af66b();
      local_28 = (undefined1 *)(((int)local_28 + 1U) - (uint)(local_70 == 0));
      while (iVar6 < (int)local_28) {
        local_24 = (undefined4 ***)iVar6;
        *(undefined4 *)(puVar2 + -4) = 0x100ad072;
        FUN_100ae432();
        iVar6 = (int)local_24 + 1;
      }
      local_24 = (undefined4 ***)0x0;
      while (local_a8[0] != local_130[0]) {
        if (local_94 != 0) {
          *(undefined4 *)(puVar2 + -4) = 0;
          *(undefined8 **)(puVar2 + -8) = &local_88;
          *(undefined4 *)(puVar2 + -0xc) = 0x100ad0b1;
          FUN_10002056();
          local_14 = 0x16;
          ppppuVar8 = &local_74;
          if (7 < local_60) {
            ppppuVar8 = (undefined4 ****)local_74;
          }
          *(undefined4 *)(puVar2 + -4) = local_64;
          *(undefined4 *****)(puVar2 + -8) = ppppuVar8;
          *(undefined4 *)(puVar2 + -0xc) = 0x100ad0d5;
          iVar6 = FUN_1006d1a8();
          local_14 = 0xffffffff;
          *(undefined4 *)(puVar2 + -4) = 0x100ad0e8;
          FUN_10001f04();
          if (iVar6 != 0) {
            local_14 = 0x13;
            *(undefined4 *)(puVar2 + -4) = 0;
            *(undefined8 **)(puVar2 + -8) = &local_f0;
            *(undefined4 *)(puVar2 + -0xc) = 0x100ad104;
            FUN_10002056();
            local_14 = 0x17;
            ppppuVar8 = &local_74;
            if (7 < local_60) {
              ppppuVar8 = (undefined4 ****)local_74;
            }
            *(undefined4 *)(puVar2 + -4) = local_64;
            *(undefined4 *****)(puVar2 + -8) = ppppuVar8;
            *(undefined4 *)(puVar2 + -0xc) = 0x100ad128;
            iVar6 = FUN_1006d1a8();
            local_14 = 0xffffffff;
            *(undefined4 *)(puVar2 + -4) = 0x100ad139;
            FUN_10001f04();
            if (iVar6 == 0) {
              local_24 = (undefined4 ***)((int)local_24 + -1);
            }
            else {
              local_24 = (undefined4 ***)((int)local_24 + 1);
            }
          }
        }
        local_14 = 0x13;
        *(undefined4 *)(puVar2 + -4) = 0x100ad158;
        FUN_100ae432();
      }
      if (-1 < (int)local_24) {
        if ((local_24 == (undefined4 ***)0x0) && ((local_c8 == local_e8[0] || (local_b4 == 0)))) {
          *(undefined8 **)(puVar2 + -4) = &local_88;
          *(undefined4 *)(puVar2 + -8) = 0x100ad19b;
          FUN_100af244();
        }
        else {
          for (; 0 < (int)local_24; local_24 = (undefined4 ***)((int)local_24 + -1)) {
            *(undefined8 **)(puVar2 + -4) = &local_f0;
            *(undefined4 *)(puVar2 + -8) = 0x100ad1ad;
            FUN_1006c0ca();
          }
          while (local_c8 != local_e8[0]) {
            *(undefined1 **)(puVar2 + -4) = local_c4;
            *(undefined4 *)(puVar2 + -8) = 0x100ad1ca;
            FUN_1000404c();
            *(undefined4 *)(puVar2 + -4) = 0x100ad1d5;
            FUN_100ae432();
          }
        }
      }
    }
    local_14 = 0xffffffff;
    pppuStack_134 = (undefined4 ***)0x100ad230;
    FUN_10001f04();
    local_14 = 0xffffffff;
    pppuStack_134 = (undefined4 ***)0x100ad24b;
    FUN_10001f04();
    local_14 = 0xffffffff;
    pppuStack_134 = (undefined4 ***)0x100ad266;
    FUN_10001f04();
    local_14 = 0xffffffff;
    pppuStack_134 = (undefined4 ***)0x100ad281;
    FUN_10001f04();
    local_14 = 0xffffffff;
    pppuStack_134 = (undefined4 ***)0x100ad29c;
    FUN_10001f04();
  }
  pppuStack_134 = (undefined4 ***)0x100ad2a4;
  FUN_10001f04();
  pppuStack_134 = (undefined4 ***)0x100ad2ac;
  FUN_10001f04();
  *unaff_FS_OFFSET = local_1c;
  return param_2;
}

