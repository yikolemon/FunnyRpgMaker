/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400baff6 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_1400baff6(undefined8 param_1,code *param_2,code *param_3,ulonglong param_4,undefined8 *param_5,
             uint param_6,code *param_7,code *param_8)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 *puVar6;
  byte bVar7;
  char cVar8;
  undefined1 uVar9;
  char cVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined8 uVar14;
  size_t sVar15;
  ulonglong uVar16;
  undefined4 extraout_var;
  code **ppcVar17;
  undefined4 extraout_var_00;
  char *pcVar18;
  undefined8 *puVar19;
  int iVar20;
  ulonglong uVar21;
  code *pcVar22;
  byte bVar23;
  byte bVar24;
  int iVar25;
  longlong lVar26;
  ulonglong uVar27;
  char *pcVar28;
  undefined4 uVar29;
  int *piVar30;
  code *pcVar31;
  longlong lVar32;
  code *pcVar33;
  byte bVar34;
  code *pcVar35;
  code *pcVar36;
  ulonglong unaff_R15;
  bool bVar37;
  bool bVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  undefined4 uVar43;
  float fVar44;
  float extraout_XMM0_Da;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar50 [16];
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined8 in_stack_fffffffffffffd68;
  code *pcVar55;
  code *in_stack_fffffffffffffd70;
  undefined8 in_stack_fffffffffffffd78;
  float local_268 [2];
  float local_260;
  float fStack_25c;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  float local_240 [2];
  undefined8 local_238;
  int local_230;
  undefined4 local_22c;
  undefined1 local_228 [4];
  float fStack_224;
  undefined8 uStack_220;
  code *local_218;
  uint local_210;
  undefined4 local_20c;
  undefined1 local_206;
  char local_205;
  code *local_200;
  int local_1f8;
  uint local_1f4;
  int local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined4 local_1ac;
  longlong local_1a8;
  code *local_1a0;
  undefined4 local_194;
  code *local_190;
  int *local_188;
  char *local_180;
  int local_174;
  undefined8 local_170;
  byte local_161;
  byte local_160;
  byte local_15f;
  byte local_15e;
  char local_15d;
  uint local_15c;
  longlong local_158;
  uint local_150;
  int local_14c;
  uint local_148;
  byte local_141;
  undefined4 local_140;
  uint local_13c;
  code *local_138;
  uint local_12c;
  undefined8 local_128;
  char local_119;
  undefined8 local_118;
  byte local_10e;
  byte local_10d;
  uint local_10c;
  uint local_108;
  uint local_104;
  ulonglong local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  
  local_100 = DAT_140f2a910;
  uVar43 = (undefined4)((ulonglong)in_stack_fffffffffffffd68 >> 0x20);
  local_f0 = 0xfffffffffffffffe;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  local_1a8 = *(longlong *)(local_100 + 0x1608);
  if (*(char *)(local_1a8 + 0x10e) != '\0') {
    return 0;
  }
  local_238 = param_1;
  local_1a0 = param_2;
  local_188 = (int *)param_4;
  local_138 = param_3;
  if ((param_6 >> 0x1a & 1) != 0) {
    FUN_1400937ae();
  }
  uVar14 = local_238;
  local_104 = FUN_140080066(local_1a8,local_238,0);
  local_258 = FUN_14007b050(uVar14,0);
  pcVar55 = (code *)CONCAT44(uVar43,0xbf800000);
  FUN_14007b686(local_240,uVar14,local_258,0,pcVar55);
  uVar27 = local_100;
  uVar43 = FUN_1400936b2();
  FUN_14008a3c7(&local_260,*param_5,uVar43);
  fVar51 = local_260;
  uVar43 = (undefined4)((ulonglong)pcVar55 >> 0x20);
  fVar44 = 0.0;
  if (0.0 < local_240[0]) {
    fVar44 = local_240[0] + *(float *)(uVar27 + 0xe0c);
  }
  uVar14 = *(undefined8 *)(local_1a8 + 0x158);
  fVar45 = (float)uVar14;
  fVar49 = (float)((ulonglong)uVar14 >> 0x20);
  local_1b8 = CONCAT44(fStack_25c + fVar49,local_260 + fVar45);
  fVar44 = local_260 + fVar44 + fVar45;
  local_248 = CONCAT44(fStack_25c + fVar49,fVar44);
  fVar44 = fVar44 - fVar45;
  fVar49 = (fStack_25c + fVar49) - fVar49;
  local_250 = uVar14;
  local_1c0 = uVar14;
  if ((param_6 >> 0x1a & 1) == 0) {
    fStack_224 = fVar49;
    local_228 = (undefined1  [4])fVar44;
    FUN_14008a82c();
    uVar39 = local_104;
    local_150 = 0;
    if ((param_6 >> 0x1b & 1) == 0) {
      cVar8 = FUN_14008a9ce(&local_250,local_104,&local_1c0,0x100000);
      local_150 = 0;
      local_194 = 0;
      local_158 = local_1a8;
      if (cVar8 == '\0') {
        return 0;
      }
    }
    else {
      local_194 = 0;
      local_158 = local_1a8;
    }
  }
  else {
    fStack_224 = fVar49;
    local_228 = (undefined1  [4])fVar44;
    FUN_14008a82c();
    uVar39 = local_104;
    if ((*(uint *)(uVar27 + 0x2740) == local_104) || (*(uint *)(uVar27 + 0x167c) == local_104)) {
      FUN_14008a9ce(&local_250,local_104,&local_1c0,0x100000);
      bVar37 = true;
    }
    else {
      bVar37 = local_104 == *(uint *)(uVar27 + 0x2214);
      cVar8 = FUN_14008a9ce(&local_250,local_104,&local_1c0,0x100000);
      if (cVar8 == '\0' && !bVar37) {
        FUN_1400927b2();
        return 0;
      }
    }
    unaff_R15 = local_100;
    local_194 = *(undefined4 *)(local_100 + 0x1fe4);
    local_150 = *(uint *)(local_100 + 0x1fe8);
    *(undefined8 *)(local_1a8 + 0x158) = uVar14;
    uVar40 = *(uint *)(local_100 + 0x2214);
    if (((*(uint *)(local_100 + 0x2214) == uVar39) && (uVar40 = uVar39, (param_6 & 0x20) != 0)) &&
       ((*(uint *)(local_100 + 0x2220) & 0x28) == 8)) {
      *(undefined4 *)(local_100 + 0x2214) = 0;
      uVar40 = 0;
    }
    if (*(uint *)(local_100 + 0x167c) == uVar39) {
      *(undefined4 *)(local_100 + 0x2214) = 0;
    }
    FUN_14007a7b5(3,local_100 + 0xf58);
    FUN_14007ab2c(7);
    FUN_14007ab2c(8);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uStack_220;
    _local_228 = auVar4 << 0x40;
    FUN_14007ae77(2,local_228);
    uVar39 = local_104;
    auVar4 = _local_228;
    fStack_224 = (float)((ulonglong)local_1b8 >> 0x20) - (float)((ulonglong)local_1c0 >> 0x20);
    local_228 = (undefined1  [4])((float)local_1b8 - (float)local_1c0);
    uStack_220 = auVar4._8_8_;
    pcVar55 = (code *)CONCAT44(uVar43,4);
    bVar7 = FUN_14008a084(local_238,local_104,local_228,1,pcVar55);
    *(uint *)(unaff_R15 + 0x2214) = uVar40;
    FUN_14007af87(3);
    FUN_14007a8e1(1);
    if ((bVar7 & 1) == 0 && !bVar37) {
      FUN_14008a651();
      FUN_1400927b2();
      return 0;
    }
    local_158 = *(longlong *)(unaff_R15 + 0x1608);
    *(ushort *)(local_158 + 0x1b6) =
         *(ushort *)(local_158 + 0x1b6) | (ushort)(1 << (*(byte *)(local_158 + 0x1b0) & 0x1f));
    *(float *)(local_158 + 0x158) = *(float *)(unaff_R15 + 0xdf4) + *(float *)(local_158 + 0x158);
    *(float *)(local_158 + 0x15c) = *(float *)(unaff_R15 + 0xdf8) + *(float *)(local_158 + 0x15c);
    fVar51 = fVar51 - *(float *)(local_158 + 0xfc);
    *(uint *)(unaff_R15 + 0x1fe0) = uVar39;
    *(undefined4 *)(unaff_R15 + 0x1fe4) = local_194;
    *(uint *)(unaff_R15 + 0x1fe8) = local_150;
  }
  uVar27 = local_100;
  puVar19 = &local_1c0;
  cVar8 = FUN_140080b88(puVar19,uVar39);
  if (cVar8 == '\0') {
    uVar39 = 0;
  }
  else {
    puVar19 = (undefined8 *)0x0;
    FUN_14009224e(1);
    uVar39 = (uint)CONCAT71((int7)(uVar27 >> 8),*(undefined1 *)(uVar27 + 0x21f5)) ^ 1;
  }
  if (local_104 == 0) {
    local_f8 = (undefined8 *)0x0;
  }
  else {
    puVar19 = (undefined8 *)(DAT_140f2a910 + 0x26a8);
    local_f8 = (undefined8 *)0x0;
    if (*(uint *)(DAT_140f2a910 + 0x26bc) == local_104) {
      local_f8 = puVar19;
    }
  }
  local_108 = *(uint *)(local_100 + 0x1fe4);
  local_180 = (char *)CONCAT71(local_180._1_7_,(param_6 >> 10 & 1) == 0);
  local_10e = (param_6 >> 0x10 & 1) == 0;
  fVar44 = 0.0;
  if ((param_6 >> 0x18 & 1) != 0) {
    puVar19 = (undefined8 *)local_228;
    FUN_14008a381(puVar19);
    fVar44 = 0.0;
    if (*(char *)(local_158 + 0x105) == '\0') {
      fVar44 = (float)(*(uint *)(local_100 + 0xe2c) ^ _DAT_1401c8590);
    }
    fVar44 = (float)FUN_14007b71f(DAT_1401c86c8,(float)local_228 + fVar44);
  }
  if ((char)uVar39 == '\0') {
    local_140 = 0;
  }
  else {
    local_140 = (undefined4)
                CONCAT71((int7)((ulonglong)puVar19 >> 8),*(undefined1 *)(local_100 + 0xb50));
  }
  uVar40 = *(uint *)(local_100 + 0x167c);
  local_118 = CONCAT44(local_118._4_4_,uVar39);
  if (uVar40 == local_104) {
    local_128 = (ulonglong)local_128._4_4_ << 0x20;
  }
  else {
    local_128 = CONCAT44(local_128._4_4_,
                         (int)CONCAT71((int7)(local_100 >> 8),
                                       *(uint *)(local_100 + 0x2214) == local_104));
  }
  bVar7 = 1;
  if ((char)local_140 == '\0') {
    bVar7 = (byte)(param_6 >> 0x1b) & uVar40 == 0 | (byte)local_128 |
            *(uint *)(local_100 + 0x27c4) == local_104;
  }
  local_108 = local_108 >> 2 & 0x200;
  if (((param_6 >> 0x1a & 1) == 0) || (local_f8 == (undefined8 *)0x0)) {
    local_12c = 0;
    if ((param_6 >> 0x1a & 1) != 0) {
      bVar37 = false;
      goto code_r0x0001400bb6f9;
    }
    bVar37 = false;
    fVar49 = DAT_1402112e4;
  }
  else {
    uVar14 = FUN_1400ada39(local_158,1);
    uVar40 = *(uint *)(local_100 + 0x167c);
    if (uVar40 == 0) {
      bVar37 = *(uint *)(local_100 + 0x16a8) == (uint)uVar14;
    }
    else {
      bVar37 = false;
    }
    local_12c = (uint)CONCAT71((int7)((ulonglong)uVar14 >> 8),uVar40 == (uint)uVar14);
code_r0x0001400bb6f9:
    fVar49 = *(float *)(local_158 + 0xd8);
  }
  puVar19 = local_f8;
  uVar27 = local_100;
  pcVar22 = local_138;
  uVar43 = (undefined4)((ulonglong)pcVar55 >> 0x20);
  local_108 = local_108 | param_6;
  uVar16 = (ulonglong)local_108;
  if (local_f8 == (undefined8 *)0x0) {
    bVar38 = false;
    bVar23 = 0;
    if (bVar7 == 0 && !bVar37) goto LAB_1400bb7f8;
LAB_1400bb796:
    local_13c = (uint)CONCAT71((int7)(uVar16 >> 8),1);
    if (((uVar40 == local_104) && (!bVar38)) && (bVar23 == 0)) {
      bVar23 = *(byte *)(local_100 + 0x8d);
      bVar24 = 0;
      goto code_r0x0001400bbc5f;
    }
code_r0x0001400bb82c:
    local_f8 = (undefined8 *)(local_100 + 0x26a8);
    FUN_1400bfcae();
    FUN_1400c031a(*(undefined4 *)(uVar27 + 0x26bc));
    sVar15 = strlen((char *)local_138);
    iVar13 = (int)sVar15;
    if (!bVar37) {
      iVar20 = iVar13 + 1;
      iVar25 = *(int *)(uVar27 + 0x26e4);
      if (iVar13 < iVar25) {
        unaff_R15 = *(ulonglong *)(uVar27 + 0x26e8);
      }
      else {
        if (iVar25 == 0) {
          iVar25 = 8;
        }
        else {
          iVar25 = iVar25 / 2 + iVar25;
        }
        if (iVar25 <= iVar20) {
          iVar25 = iVar20;
        }
        unaff_R15 = FUN_140077ab4((longlong)iVar25);
        uVar27 = local_100;
        if (*(longlong *)(local_100 + 0x26e8) != 0) {
          FUN_1401c5180(unaff_R15,*(longlong *)(local_100 + 0x26e8),
                        (longlong)*(int *)(local_100 + 0x26e0));
          FUN_140077b90(*(undefined8 *)(uVar27 + 0x26e8));
        }
        *(ulonglong *)(uVar27 + 0x26e8) = unaff_R15;
        *(int *)(uVar27 + 0x26e4) = iVar25;
      }
      *(int *)(uVar27 + 0x26e0) = iVar20;
      FUN_1401c5180(unaff_R15,local_138);
    }
    bVar37 = (bool)((bVar38 ^ 1U) & *(uint *)(uVar27 + 0x26bc) == local_104);
    if (bVar37 == true && bVar23 == 0) {
      if (((*(int *)(uVar27 + 0x26c0) == iVar13) && (*(char **)(local_100 + 0x26d8) != (char *)0x0))
         && (iVar25 = strncmp(*(char **)(local_100 + 0x26d8),(char *)local_138,(longlong)iVar13),
            iVar25 == 0)) {
        bVar37 = true;
        uVar27 = local_100;
      }
      else {
        bVar37 = false;
        uVar27 = local_100;
      }
    }
    uVar16 = (ulonglong)local_104;
    *(uint *)(uVar27 + 0x26bc) = local_104;
    *(int *)(uVar27 + 0x26c0) = iVar13;
    *(undefined1 *)(uVar27 + 0x271b) = 0;
    if ((local_108 >> 9 & 1) == 0) {
      iVar25 = (int)local_188 + 1;
      iVar13 = *(int *)(uVar27 + 0x26d4);
      if ((int)local_188 < iVar13) {
        unaff_R15 = *(ulonglong *)(uVar27 + 0x26d8);
      }
      else {
        if (iVar13 == 0) {
          iVar13 = 8;
        }
        else {
          iVar13 = iVar13 / 2 + iVar13;
        }
        if (iVar13 <= iVar25) {
          iVar13 = iVar25;
        }
        unaff_R15 = FUN_140077ab4((longlong)iVar13);
        uVar27 = local_100;
        if (*(longlong *)(local_100 + 0x26d8) != 0) {
          FUN_1401c5180(unaff_R15,*(longlong *)(local_100 + 0x26d8),
                        (longlong)*(int *)(local_100 + 0x26d0));
          FUN_140077b90(*(undefined8 *)(uVar27 + 0x26d8));
        }
        *(ulonglong *)(uVar27 + 0x26d8) = unaff_R15;
        *(int *)(uVar27 + 0x26d4) = iVar13;
      }
      *(int *)(uVar27 + 0x26d0) = iVar25;
      uVar16 = FUN_1401c5180(unaff_R15,local_138);
    }
    *(undefined8 *)(uVar27 + 0x2704) = 0;
    if ((param_6 >> 0x11 & 1) != 0) {
      pcVar55 = (code *)CONCAT44((int)((ulonglong)pcVar55 >> 0x20),0xbf800000);
      FUN_14007b686(local_228,local_138,0,0,pcVar55);
      uVar27 = local_100;
      uVar16 = FUN_14007b71f(0,*(float *)(local_100 + 0xdf4) + *(float *)(local_100 + 0xdf4) +
                               ((float)local_228 - local_260));
      *(float *)(uVar27 + 0x2704) = extraout_XMM0_Da + *(float *)(uVar27 + 0x2704);
    }
    if (!bVar37) {
      uVar16 = thunk_FUN_1400cf677(*(undefined8 *)(local_100 + 0x26b0),(param_6 >> 0x1a & 1) == 0);
    }
    if ((param_6 >> 0x1a & 1) == 0) {
      bVar34 = (byte)(param_6 >> 0xc) & 1;
      if (((byte)local_128 != '\0') &&
         ((!bVar37 || (uVar16 = local_100, (*(byte *)(local_100 + 0x2220) & 4) == 0)))) {
        bVar34 = 1;
      }
      if ((char)local_140 != '\0') {
        bVar34 = bVar34 | *(byte *)(local_100 + 0x138);
        uVar16 = local_100;
      }
    }
    else {
      bVar34 = 0;
    }
    if ((param_6 >> 0xb & 1) == 0) {
      bVar23 = *(byte *)(local_100 + 0x8d);
      local_10c = (uint)CONCAT71((int7)(uVar16 >> 8),1);
    }
    else {
      lVar26 = *(longlong *)(local_100 + 0x26b0);
      *(undefined1 *)(lVar26 + 0xc) = 1;
      bVar23 = *(byte *)(local_100 + 0x8d);
      local_10c = (uint)CONCAT71((int7)((ulonglong)lVar26 >> 8),1);
    }
    bVar24 = bVar34;
    if ((byte)local_13c != '\0') {
code_r0x0001400bbc5f:
      bVar34 = bVar24;
      uVar39 = local_104;
      lVar26 = local_1a8;
      if (*(uint *)(local_100 + 0x167c) == local_104) {
        local_10c = 0;
      }
      else {
        FUN_140080508(local_104,local_1a8);
        FUN_140095319(uVar39,lVar26);
        local_10c = 0;
        FUN_140081404(lVar26,0);
        if ((byte)local_128 != '\0') {
          FUN_140095213();
          local_10c = 0;
        }
      }
    }
  }
  else if (*(char *)((longlong)local_f8 + 0x75) == '\x01') {
    sVar15 = strlen((char *)local_138);
    *(undefined1 *)((longlong)puVar19 + 0x75) = 0;
    pcVar55 = (code *)CONCAT44(uVar43,(int)sVar15);
    FUN_1400c044d(puVar19,puVar19[6],*(undefined4 *)(puVar19 + 3),pcVar22,pcVar55);
    iVar25 = (int)local_188 + 1;
    iVar13 = *(int *)((longlong)puVar19 + 0x2c);
    if ((int)local_188 < iVar13) {
      unaff_R15 = puVar19[6];
    }
    else {
      if (iVar13 == 0) {
        iVar13 = 8;
      }
      else {
        iVar13 = iVar13 / 2 + iVar13;
      }
      if (iVar13 <= iVar25) {
        iVar13 = iVar25;
      }
      unaff_R15 = FUN_140077ab4((longlong)iVar13);
      puVar19 = local_f8;
      if (local_f8[6] != 0) {
        FUN_1401c5180(unaff_R15,local_f8[6],(longlong)*(int *)(local_f8 + 5));
        FUN_140077b90(puVar19[6]);
      }
      puVar19[6] = unaff_R15;
      *(int *)((longlong)puVar19 + 0x2c) = iVar13;
    }
    *(int *)(puVar19 + 5) = iVar25;
    *(int *)(puVar19 + 3) = (int)sVar15;
    FUN_1401c5180(unaff_R15,local_138);
    *(undefined4 *)(puVar19[1] + 4) = *(undefined4 *)(puVar19 + 0xf);
    uVar43 = *(undefined4 *)((longlong)puVar19 + 0x7c);
    *(undefined4 *)(puVar19[1] + 8) = uVar43;
    *(undefined4 *)puVar19[1] = uVar43;
    bVar23 = *(byte *)(local_100 + 0x8d);
    local_10c = (uint)CONCAT71((uint7)(uint3)((uint)uVar43 >> 8),1);
    bVar34 = 0;
    bVar24 = 0;
    if (bVar7 != 0 || bVar37) goto code_r0x0001400bbc5f;
  }
  else {
    bVar38 = (param_6 >> 0x1a & 1) == 0;
    uVar16 = (ulonglong)CONCAT31((int3)(local_108 >> 8),bVar38);
    bVar23 = (byte)((*(uint *)(local_f8 + 2) ^ local_108) >> 9) & 1;
    bVar38 = (bool)*(char *)(local_f8[1] + 0x17) != bVar38;
    if (bVar7 != 0 || bVar37) goto LAB_1400bb796;
LAB_1400bb7f8:
    local_13c = 0;
    if ((bVar38) || (bVar23 != 0)) goto code_r0x0001400bb82c;
    bVar23 = *(byte *)(local_100 + 0x8d);
    local_10c = (uint)CONCAT71((int7)(uVar16 >> 8),1);
    bVar34 = 0;
  }
  uVar39 = local_104;
  if (*(uint *)(local_100 + 0x167c) == local_104) {
    lVar26 = 0;
    do {
      FUN_140092507(*(undefined4 *)((longlong)&DAT_140211bd0 + lVar26),uVar39);
      lVar26 = lVar26 + 4;
    } while (lVar26 != 0x18);
    if ((char)local_140 != '\0') {
      FUN_140092507(0x290,local_104);
    }
    uVar40 = local_104;
    uVar39 = *(uint *)(local_100 + 0x1f90);
    *(uint *)(local_100 + 0x1f90) = uVar39 | 3;
    if ((param_6 & 0x4080000) != 0) {
      *(uint *)(local_100 + 0x1f90) = uVar39 | 0xf;
      FUN_140092507(0x203,local_104);
      FUN_140092507(0x204,uVar40);
      uVar39 = local_104;
      if ((param_6 >> 0x1a & 1) != 0) {
        FUN_140092507(0x205,local_104);
        FUN_140092507(0x206,uVar39);
      }
    }
    if (bVar23 != 0) {
      FUN_140092507(0x4000,local_104);
    }
    puVar19 = local_f8;
    if (((param_6 >> 0x1a & 1) != 0) && (local_f8 != (undefined8 *)0x0)) {
      *(undefined4 *)(local_f8 + 0xc) = *(undefined4 *)(local_158 + 0xd8);
    }
    if (((local_108 >> 9 & 1) == 0) || (local_f8 == (undefined8 *)0x0)) {
      if (local_f8 == (undefined8 *)0x0) {
        if (*(uint *)(local_100 + 0x167c) != local_104) goto LAB_1400bbe21;
        FUN_14008076e();
        local_140 = 0;
        goto code_r0x0001400bbe71;
      }
    }
    else {
      sVar15 = strlen((char *)local_138);
      *(int *)(puVar19 + 3) = (int)sVar15;
    }
    FUN_1400bfdf0(puVar19);
LAB_1400bbe3f:
    pcVar22 = local_138;
    if ((local_108 >> 9 & 1) == 0) {
      pcVar22 = (code *)local_f8[6];
    }
    local_f8[4] = pcVar22;
    local_140 = (undefined4)CONCAT71((int7)((ulonglong)pcVar22 >> 8),1);
  }
  else {
    if (local_f8 != (undefined8 *)0x0) goto LAB_1400bbe3f;
LAB_1400bbe21:
    local_140 = 0;
  }
code_r0x0001400bbe71:
  if (*(uint *)(local_100 + 0x167c) == local_104) {
    local_10c = CONCAT31((int3)(local_10c >> 8),(byte)local_10c & *(byte *)(local_100 + 0xb50));
  }
  else {
    local_10c = 0;
  }
  bVar7 = (byte)local_12c & (byte)local_140 | *(uint *)(local_100 + 0x167c) == local_104;
  uVar39 = CONCAT31((int3)(local_12c >> 8),bVar7);
  if ((byte)local_140 == 0) {
    local_13c = 0;
  }
  else {
    uVar14 = FUN_1400bfe3e(local_f8);
    local_13c = (uint)CONCAT71((int7)((ulonglong)uVar14 >> 8),((byte)uVar14 | bVar34) & bVar7);
  }
  bVar37 = (local_108 >> 9 & 1) == 0;
  local_161 = (byte)local_140 & bVar37 & bVar7;
  if (local_1a0 == (code *)0x0) {
    local_15c = 0;
  }
  else {
    pcVar22 = local_138;
    if (local_161 != 0) {
      pcVar22 = (code *)local_f8[6];
    }
    local_15c = (uint)CONCAT71((int7)((ulonglong)pcVar22 >> 8),*pcVar22 == (code)0x0);
  }
  local_148 = local_108 >> 9;
  bVar38 = (param_6 >> 10 & 1) == 0;
  local_160 = bVar38 | (byte)local_15c;
  local_12c = uVar39;
  if (!bVar38 && (local_15c & 1) == 0) {
    FUN_1400c014f();
  }
  puVar19 = local_f8;
  uVar27 = local_100;
  local_148 = local_148 & 1;
  if ((((char)local_140 != '\0') && (*(uint *)((longlong)local_f8 + 0x14) == local_104)) &&
     (*(uint *)(local_f8 + 2) = local_108, (param_6 >> 0x18 & 1) != 0)) {
    if ((*(float *)(local_f8 + 0xd) != fVar44) || (NAN(*(float *)(local_f8 + 0xd)) || NAN(fVar44)))
    {
      *(undefined1 *)((longlong)local_f8 + 0x71) = 1;
      *(float *)(local_f8 + 0xd) = fVar44;
      local_12c = (uint)CONCAT71((int7)((ulonglong)local_f8 >> 8),1);
    }
  }
  if (*(uint *)(local_100 + 0x167c) == local_104) {
    *(undefined1 *)((longlong)local_f8 + 0x74) = 0;
    *(int *)(local_f8 + 0xb) = (int)local_188;
    *(float *)(local_f8 + 0xd) = fVar44;
    *(byte *)(local_100 + 0x1689) = *(byte *)(local_100 + 0x120) ^ 1;
    if (bVar34 == 0) {
      fVar45 = ((*(float *)(local_100 + 0x118) - (float)local_1c0) - *(float *)(local_100 + 0xdf4))
               + *(float *)((longlong)local_f8 + 0x5c);
      if ((((byte)local_118 == '\0') || (*(ushort *)(local_100 + 0xb5a) < 2)) ||
         (*(char *)(local_100 + 0x139) != '\0')) {
        if ((*(char *)(local_100 + 0xb50) == '\x01') &&
           (*(char *)((longlong)local_f8 + 0x72) == '\0')) {
          if ((byte)local_118 != '\0') {
            if (*(char *)(local_100 + 0x139) == '\x01') {
              FUN_1400c069c(local_f8);
            }
            else {
              FUN_1400c0561(local_f8,local_f8[1],fVar45);
            }
            FUN_1400bfcae(puVar19);
          }
        }
        else if (((*(byte *)(local_100 + 0x120) != 0) &&
                 (*(char *)((longlong)local_f8 + 0x72) == '\0')) &&
                ((((*(float *)(local_100 + 0x104) != 0.0 || (NAN(*(float *)(local_100 + 0x104)))) ||
                  (*(float *)(local_100 + 0x108) != 0.0)) || (NAN(*(float *)(local_100 + 0x108))))))
        {
          FUN_1400c069c(local_f8,local_f8[1]);
          FUN_1400bfcae(puVar19);
          *(undefined1 *)(puVar19 + 0xe) = 1;
        }
      }
      else {
        FUN_1400c0561(local_f8,local_f8[1],fVar45);
        piVar30 = (int *)puVar19[1];
        if ((*(byte *)(uVar27 + 0xb5a) & 1) == 0) {
          if (*piVar30 == 0) {
            bVar38 = true;
          }
          else {
            cVar8 = FUN_1400c05fb(local_f8,*piVar30 + -1);
            bVar38 = cVar8 == '\n';
          }
          puVar19 = local_f8;
          if ((bVar38) && (piVar30[1] == piVar30[2])) {
LAB_1400bc2be:
            FUN_1400c0606(piVar30);
            piVar30 = (int *)local_f8[1];
          }
          else {
            FUN_1400bf4a2(local_f8,0x20000c);
            piVar30 = (int *)puVar19[1];
            if (piVar30[1] == piVar30[2]) goto LAB_1400bc2be;
          }
          puVar19 = local_f8;
          uVar43 = FUN_1400c061a(local_f8,*piVar30);
          *(undefined4 *)puVar19[1] = uVar43;
          ((undefined4 *)puVar19[1])[2] = *(undefined4 *)puVar19[1];
          FUN_1400c0656(puVar19,puVar19[1]);
        }
        else {
          cVar8 = FUN_1400c05fb(puVar19);
          *(undefined4 *)(puVar19 + 0xd) = 0;
          FUN_1400bf4a2(puVar19,0x200004);
          FUN_1400bf4a2(puVar19,0x600005);
          FUN_1400bf4a2(puVar19,0x600001);
          puVar6 = local_f8;
          *(float *)(puVar19 + 0xd) = fVar44;
          if (((param_6 >> 0x1a & 1) != 0) && (cVar8 != '\n')) {
            FUN_1400c0691(local_f8[1] + 4,local_f8[1] + 8);
            *(undefined4 *)puVar6[1] = ((undefined4 *)puVar6[1])[2];
          }
          *(undefined1 *)(local_f8 + 0xe) = 0;
          puVar19 = local_f8;
        }
        FUN_1400bfcae(puVar19);
      }
    }
    else {
      FUN_1400bfe5e(local_f8);
      *(undefined1 *)((longlong)puVar19 + 0x72) = 1;
    }
    if ((*(char *)((longlong)puVar19 + 0x72) == '\x01') && (*(char *)(local_100 + 0x120) == '\0')) {
      *(undefined1 *)((longlong)local_f8 + 0x72) = 0;
    }
    if (((local_108 & 0x220) == 0x20) && (cVar8 = FUN_14008467f(0x200,1), cVar8 != '\0')) {
      local_228 = (undefined1  [4])0x9;
      in_stack_fffffffffffffd70 =
           (code *)((ulonglong)in_stack_fffffffffffffd70 & 0xffffffffffffff00);
      pcVar55 = param_8;
      cVar8 = FUN_1400c073c(local_100,local_f8,local_228,param_7,param_8,in_stack_fffffffffffffd70);
      if (cVar8 != '\0') {
        FUN_1400bfcb6(local_f8,local_228);
      }
    }
    uVar27 = local_100;
    if (*(byte *)(local_100 + 0x138) == 1) {
      if ((*(byte *)(local_100 + 0x13a) & bVar23) == 0) {
        bVar7 = *(byte *)(local_100 + 0x13a) ^ 1 | (byte)local_148;
      }
      else {
LAB_1400bc3d2:
        bVar7 = *(byte *)(local_100 + 0x138) | (byte)local_148;
      }
    }
    else {
      if (bVar23 != 0) goto LAB_1400bc3d2;
      bVar23 = 0;
      bVar7 = (byte)local_148;
    }
    if (0 < *(int *)(local_100 + 0xc18)) {
      if (((bVar7 | (byte)local_128) & 1) == 0) {
        lVar26 = 0;
        do {
          uVar39 = CONCAT22(0,*(ushort *)(*(longlong *)(uVar27 + 0xc20) + lVar26 * 2));
          local_228 = (undefined1  [4])uVar39;
          if (uVar39 != 9) {
            in_stack_fffffffffffffd70 =
                 (code *)((ulonglong)in_stack_fffffffffffffd70 & 0xffffffffffffff00);
            pcVar55 = param_8;
            cVar8 = FUN_1400c073c(uVar27,local_f8,local_228,param_7,param_8,
                                  in_stack_fffffffffffffd70);
            if (cVar8 != '\0') {
              FUN_1400bfcb6(local_f8,local_228);
            }
          }
          lVar26 = lVar26 + 1;
        } while (lVar26 < *(int *)(uVar27 + 0xc18));
      }
      if (*(int *)(uVar27 + 0xc1c) < 0) {
        uVar14 = FUN_140077ab4(0);
        if (*(longlong *)(uVar27 + 0xc20) != 0) {
          FUN_1401c5180(uVar14);
          FUN_140077b90(*(undefined8 *)(uVar27 + 0xc20));
        }
        *(undefined8 *)(uVar27 + 0xc20) = uVar14;
        *(undefined4 *)(uVar27 + 0xc1c) = 0;
      }
      *(undefined4 *)(uVar27 + 0xc18) = 0;
    }
  }
  uVar27 = local_100;
  uVar43 = (undefined4)((ulonglong)in_stack_fffffffffffffd78 >> 0x20);
  if (*(uint *)(local_100 + 0x167c) == local_104) {
    if (*(char *)(local_100 + 0x1688) == '\0' && (byte)local_10c == '\0') {
      local_230 = FUN_1400796a5((int)((fStack_25c - *(float *)(local_100 + 0xdf8)) /
                                     *(float *)(local_100 + 0x1320)),1);
      uVar39 = local_104;
      *(int *)(local_f8[1] + 0x10) = local_230;
      if (((bVar23 == 0) || (*(char *)(uVar27 + 0x138) != '\x01')) ||
         (*(char *)(uVar27 + 0x13b) != '\0')) {
        local_118 = (ulonglong)local_118._4_4_ << 0x20;
      }
      else {
        local_118 = CONCAT44(local_118._4_4_,
                             CONCAT31((int3)((uint)local_230 >> 8),*(undefined1 *)(uVar27 + 0x13a)))
                    ^ 1;
      }
      local_128 = CONCAT44(local_128._4_4_,(uint)*(byte *)(local_100 + 0x139));
      local_119 = *(char *)(local_100 + (ulonglong)bVar23 * 2 + 0x138);
      cVar8 = FUN_14008467f(0x1239,1,local_104);
      if (cVar8 == '\0') {
        bVar7 = FUN_14008467f(0x220a,1,uVar39);
        bVar24 = (byte)(param_6 >> 10) & 1 | (byte)local_148 | bVar7 ^ 1;
        bVar7 = bVar24 ^ 1;
        if (bVar24 == 0) {
          local_10d = true;
          goto joined_r0x0001400bc70e;
        }
      }
      else {
        bVar38 = (local_108 & 0x200) == 0;
        bVar3 = (param_6 & 0x400) == 0;
        bVar7 = bVar38 && bVar3;
        local_10d = bVar7;
        if (bVar38 && bVar3) {
joined_r0x0001400bc70e:
          if ((param_6 & 0x4000000) != 0) {
            bVar7 = FUN_1400bfe3e(local_f8);
          }
        }
      }
      local_10d = bVar7;
      uVar39 = local_104;
      cVar8 = FUN_14008467f(0x1224,0,local_104);
      if (cVar8 == '\0') {
        bVar7 = FUN_14008467f(0x1209,0,uVar39);
        bVar7 = bVar7 & (param_6 >> 10 & 1) == 0;
        local_180 = (char *)CONCAT71(local_180._1_7_,bVar7);
        if (((param_6 >> 0x1a & 1) != 0) && (bVar7 != 0)) goto code_r0x0001400bc781;
      }
      else if ((param_6 & 0x4000400) == 0x4000000) {
code_r0x0001400bc781:
        uVar9 = FUN_1400bfe3e(local_f8);
        local_180 = (char *)CONCAT71(local_180._1_7_,uVar9);
      }
      cVar8 = FUN_14008467f(0x1237,1,local_104);
      if ((cVar8 == '\0') && (cVar8 = FUN_14008467f(0x2209,1,local_104), cVar8 == '\0')) {
        local_22c = 0;
      }
      else {
        local_22c = (undefined4)CONCAT71((int7)(unaff_R15 >> 8),bVar37);
      }
      uVar39 = local_104;
      local_15f = (param_6 >> 0x10 & 1) == 0;
      local_15e = FUN_14008467f(0x123b,1,local_104);
      uVar14 = FUN_14008467f(0x123a,1,uVar39);
      if ((char)uVar14 == '\0') {
        uVar14 = FUN_14008467f(0x323b,1,uVar39);
        local_1ac = 0;
        if (((local_108 >> 9 & 1) == 0) && ((char)uVar14 != '\0')) goto LAB_1400bc92c;
      }
      else if ((local_108 >> 9 & 1) == 0) {
LAB_1400bc92c:
        local_1ac = (undefined4)CONCAT71((int7)((ulonglong)uVar14 >> 8),local_10e);
      }
      else {
        local_1ac = 0;
      }
      uVar27 = 0;
      local_15d = FUN_14008467f(0x1222,0,local_104);
      uVar39 = local_104;
      if ((*(byte *)(local_100 + 0x30) & 2) != 0) {
        uVar27 = (ulonglong)*(byte *)(local_100 + 0x34) & 0xffffffffffffff01;
      }
      cVar8 = FUN_14008467f(0x20d,1,local_104);
      local_10e = 1;
      local_141 = 1;
      if (cVar8 == '\0') {
        local_141 = FUN_14008467f(0x273,1,uVar39);
      }
      cVar8 = FUN_14008467f(0x120d,1,uVar39);
      if (cVar8 == '\0') {
        local_10e = FUN_14008467f(0x1273,1,uVar39);
      }
      cVar8 = FUN_14008467f(0x220d,1,uVar39);
      bVar7 = 1;
      if (cVar8 == '\0') {
        bVar7 = FUN_14008467f(0x2273,1,local_104);
      }
      uVar16 = local_100;
      if ((char)uVar27 == '\0') {
        iVar13 = 0x20e;
        uVar21 = 0;
        uVar16 = uVar27;
LAB_1400bca69:
        cVar10 = FUN_14008467f(iVar13,1);
      }
      else {
        uVar39 = FUN_140091e97((*(byte *)(local_100 + 0x79) ^ 1) * 2 + 0x27b,0);
        uVar21 = (ulonglong)uVar39;
        cVar8 = FUN_14008467f(0x20e,1);
        cVar10 = '\x01';
        if (cVar8 == '\0') {
          iVar13 = (uint)*(byte *)(uVar16 + 0x79) * 2 + 0x27b;
          goto LAB_1400bca69;
        }
      }
      uVar39 = (int)local_128 << 0x16;
      local_128._0_1_ = 1;
      cVar8 = FUN_140091e97(0x201,1);
      puVar19 = local_f8;
      uVar43 = (undefined4)((ulonglong)in_stack_fffffffffffffd78 >> 0x20);
      if (cVar8 == '\0') {
        local_128._0_1_ = 1;
        cVar8 = FUN_140091e97(0x202,1);
        puVar19 = local_f8;
        uVar43 = (undefined4)((ulonglong)in_stack_fffffffffffffd78 >> 0x20);
        if (cVar8 == '\0') {
          cVar8 = FUN_140091e97(0x203,1);
          puVar19 = local_f8;
          lVar26 = local_158;
          uVar43 = (undefined4)((ulonglong)in_stack_fffffffffffffd78 >> 0x20);
          if (((param_6 >> 0x1a & 1) == 0) || (cVar8 == '\0')) {
            cVar8 = FUN_140091e97(0x204,1);
            puVar19 = local_f8;
            uVar27 = local_100;
            uVar43 = (undefined4)((ulonglong)in_stack_fffffffffffffd78 >> 0x20);
            if (((param_6 >> 0x1a & 1) == 0) || (cVar8 == '\0')) {
              cVar8 = FUN_140091e97(0x205,1);
              puVar19 = local_f8;
              uVar43 = (undefined4)((ulonglong)in_stack_fffffffffffffd78 >> 0x20);
              if (((param_6 >> 0x1a & 1) == 0) || (cVar8 == '\0')) {
                cVar8 = FUN_140091e97(0x206,1);
                puVar19 = local_f8;
                uVar43 = (undefined4)((ulonglong)in_stack_fffffffffffffd78 >> 0x20);
                if (((param_6 >> 0x1a & 1) == 0) || (cVar8 == '\0')) {
                  local_128._0_1_ = 1;
                  cVar8 = FUN_140091e97(0x207,1);
                  puVar19 = local_f8;
                  uVar43 = (undefined4)((ulonglong)in_stack_fffffffffffffd78 >> 0x20);
                  if (cVar8 == '\0') {
                    local_128._0_1_ = 1;
                    cVar8 = FUN_140091e97(0x208,1);
                    puVar19 = local_f8;
                    uVar43 = (undefined4)((ulonglong)in_stack_fffffffffffffd78 >> 0x20);
                    if (cVar8 == '\0') {
                      cVar8 = FUN_140091e97(0x20a,1);
                      uVar43 = (undefined4)((ulonglong)in_stack_fffffffffffffd78 >> 0x20);
                      if ((cVar8 == '\x01' && (byte)local_148 == '\0') && local_10d == 0) {
                        cVar8 = FUN_1400bfe3e(local_f8);
                        if ((cVar8 == '\0') && (local_119 != '\0')) {
                          FUN_1400bf4a2(local_f8,0x60000d);
                        }
                        puVar19 = local_f8;
                        FUN_1400bf4a2(local_f8,uVar39 | 0x200008);
                        local_128._0_1_ = 1;
                        local_118 = 0;
                      }
                      else {
                        cVar8 = FUN_140091e97(0x20b,1);
                        puVar19 = local_f8;
                        uVar43 = (undefined4)((ulonglong)in_stack_fffffffffffffd78 >> 0x20);
                        if (((local_108 >> 9 & 1) == 0) && (cVar8 != '\0')) {
                          cVar8 = FUN_1400bfe3e(local_f8);
                          if ((cVar8 == '\0') &&
                             ((uVar14 = 0x60000c, local_119 != '\0' ||
                              ((((bVar23 != 0 && (*(char *)(local_100 + 0x138) == '\x01')) &&
                                (*(char *)(local_100 + 0x13a) == '\0')) &&
                               (uVar14 = 0x600004, *(char *)(local_100 + 0x13b) == '\0')))))) {
                            FUN_1400bf4a2(local_f8,uVar14);
                          }
                          puVar19 = local_f8;
                          FUN_1400bf4a2(local_f8,uVar39 | 0x200009);
                          local_128._0_1_ = 1;
                          local_118 = 0;
                        }
                        else {
                          bVar23 = (byte)uVar21;
                          if ((byte)(local_141 | local_10e | bVar7 | bVar23) == 1) {
                            bVar37 = (param_6 >> 0x1a & 1) != 0;
                            if (bVar7 == 0 && (bVar23 == 0 && bVar37)) {
                              bVar7 = local_10e;
                              if ((param_6 >> 8 & 1) == 0) {
                                bVar7 = local_141;
                              }
                              local_118 = (ulonglong)bVar7;
                              uVar39 = 1;
                              if (bVar7 != 0) {
                                uVar39 = local_10c & 0xff;
                              }
                              if (((local_108 >> 9 & 1) == 0) && (bVar7 != 0)) {
LAB_1400be4de:
                                local_228 = (undefined1  [4])0xa;
                                in_stack_fffffffffffffd70 =
                                     (code *)((ulonglong)in_stack_fffffffffffffd70 &
                                             0xffffffffffffff00);
                                pcVar55 = param_8;
                                uVar14 = FUN_1400c073c(local_100,local_f8,local_228,param_7,param_8,
                                                       in_stack_fffffffffffffd70);
                                if ((char)uVar14 != '\0') {
                                  uVar14 = FUN_1400bfcb6(local_f8,local_228);
                                }
                                local_118 = CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
                                uVar39 = local_10c;
                              }
                            }
                            else if (bVar23 == 0 && bVar37) {
                              local_118 = CONCAT71((int7)(uVar21 >> 8),1);
                              uVar39 = local_10c;
                              if ((local_108 >> 9 & 1) == 0) goto LAB_1400be4de;
                            }
                            else {
                              local_118 = 0;
                              uVar39 = (uint)CONCAT71((int7)(uVar16 >> 8),1);
                              if (((param_6 >> 0x1a & 1) == 0) &&
                                 (*(char *)(local_100 + 0x90) != '\0')) {
                                FUN_1400bfe5e(local_f8);
                                *(uint *)(local_100 + 0x27c4) = local_104;
                                local_118 = 0;
                              }
                            }
                            local_118 = local_118 ^ 1;
                            local_128._0_1_ = 1;
                            puVar19 = local_f8;
                            local_10c = uVar39;
                          }
                          else if (cVar10 == '\0') {
                            bVar7 = local_15f & local_15e & bVar37;
                            if ((byte)((byte)local_1ac | bVar7) == 1) {
                              FUN_1400bf4a2(local_f8,bVar7 ^ 0x20000b);
                              FUN_1400bfe4c(puVar19);
                              local_128._0_1_ = 1;
                              local_118 = 0;
                            }
                            else if (local_15d == '\0') {
                              if (((byte)local_180 | local_10d) == 1) {
                                if (*(longlong *)(local_100 + 0xc50) != 0) {
                                  cVar8 = FUN_1400bfe3e(local_f8);
                                  iVar13 = 0;
                                  if (cVar8 != '\0') {
                                    iVar13 = FUN_140077fbc(*(undefined4 *)(local_f8[1] + 4),
                                                           *(undefined4 *)(local_f8[1] + 8));
                                  }
                                  cVar8 = FUN_1400bfe3e(local_f8);
                                  if (cVar8 == '\0') {
                                    iVar25 = *(int *)(local_f8 + 3);
                                  }
                                  else {
                                    iVar25 = FUN_1400796a5(*(undefined4 *)(local_f8[1] + 4),
                                                           *(undefined4 *)(local_f8[1] + 8));
                                  }
                                  uVar27 = local_100;
                                  FUN_1400a826e(local_100 + 0x2cd8,(iVar25 - iVar13) + 1);
                                  FUN_1401c5180(*(undefined8 *)(uVar27 + 0x2ce0),
                                                (longlong)iVar13 + local_f8[4]);
                                  *(undefined1 *)
                                   (*(longlong *)(uVar27 + 0x2ce0) + (longlong)(iVar25 - iVar13)) =
                                       0;
                                  FUN_1400811e6(*(undefined8 *)(uVar27 + 0x2ce0));
                                }
                                local_128._0_1_ = 1;
                                if (local_10d != 0) {
                                  cVar8 = FUN_1400bfe3e(local_f8);
                                  if (cVar8 == '\0') {
                                    FUN_1400bfe5e(local_f8);
                                  }
                                  puVar19 = local_f8;
                                  *(undefined1 *)(local_f8 + 0xe) = 1;
                                  FUN_1400c0a02(local_f8,local_f8[1]);
                                  local_118 = 0;
                                  goto code_r0x0001400be07e;
                                }
                              }
                              else {
                                local_128._0_1_ = 1;
                                if ((char)local_22c != '\0') {
                                  pcVar18 = (char *)FUN_1400811cd();
                                  uVar43 = (undefined4)
                                           ((ulonglong)in_stack_fffffffffffffd78 >> 0x20);
                                  if (pcVar18 != (char *)0x0) {
                                    sVar15 = strlen(pcVar18);
                                    _local_228 = ZEXT816(0);
                                    FUN_1400a826e(local_228,(int)sVar15 + 1);
                                    pcVar28 = pcVar18 + (int)sVar15;
                                    for (; uVar43 = (undefined4)
                                                    ((ulonglong)in_stack_fffffffffffffd78 >> 0x20),
                                        *pcVar18 != '\0'; pcVar18 = pcVar18 + iVar13) {
                                      iVar13 = FUN_140076955(&local_170,pcVar18,pcVar28);
                                      in_stack_fffffffffffffd70 =
                                           (code *)CONCAT71((int7)((ulonglong)
                                                                   in_stack_fffffffffffffd70 >> 8),1
                                                           );
                                      pcVar55 = param_8;
                                      cVar8 = FUN_1400c073c(local_100,local_f8,&local_170,param_7,
                                                            param_8,in_stack_fffffffffffffd70);
                                      if (cVar8 != '\0') {
                                        FUN_1400783ac(&local_1d8,local_170 & 0xffffffff);
                                        sVar15 = strlen((char *)&local_1d8);
                                        FUN_1400c00e6(local_228,(int)local_228 + (int)sVar15);
                                        FUN_1401c5180(((longlong)(int)local_228 + uStack_220) -
                                                      (longlong)(int)sVar15,&local_1d8);
                                      }
                                    }
                                    if (0 < (int)local_228) {
                                      local_1d8 = local_1d8 & 0xffffffffffffff00;
                                      FUN_1400c0a22(local_228);
                                      thunk_FUN_1400cf961(local_f8,local_f8[1],uStack_220,
                                                          (int)local_228 + -1);
                                      *(undefined1 *)(local_f8 + 0xe) = 1;
                                    }
                                    if (uStack_220 != 0) {
                                      FUN_140077b90();
                                    }
                                    local_118 = 0;
                                    puVar19 = local_f8;
                                    goto code_r0x0001400be07e;
                                  }
                                }
                              }
                              local_118 = 0;
                              puVar19 = local_f8;
                            }
                            else {
                              FUN_1400bfe5e(local_f8);
                              *(undefined1 *)(puVar19 + 0xe) = 1;
                              local_128._0_1_ = 1;
                              local_118 = 0;
                            }
                          }
                          else {
                            local_118 = 0;
                            local_128._0_1_ = (byte)local_148;
                            if ((char)param_6 < '\0') {
                              bVar37 = *(char *)local_f8[6] == '\0';
                              uVar39 = 1;
                              if (!bVar37) {
                                uVar39 = local_10c & 0xff;
                              }
                              local_12c = local_12c & 0xff;
                              if (bVar37) {
                                local_12c = 0;
                              }
                              local_128._0_1_ = (byte)local_128 | bVar37;
                              local_13c = (uint)(!bVar37 & (byte)local_13c);
                              local_10c = uVar39;
                            }
                            else {
                              local_10c = (uint)CONCAT71((uint7)(uint3)(param_6 >> 8),1);
                              local_13c = 0;
                              local_12c = 0;
                            }
                          }
                        }
                      }
                    }
                    else {
                      FUN_1400bf4a2(local_f8,(uint)*(byte *)(local_100 + 0x138) * 2 | uVar39 |
                                             0x200005);
                      local_118 = 0;
                    }
                  }
                  else {
                    FUN_1400bf4a2(local_f8,(uint)*(byte *)(local_100 + 0x138) * 2 | uVar39 |
                                           0x200004);
                    local_118 = 0;
                  }
                }
                else {
                  FUN_1400bf4a2(local_f8,uVar39 | 0x20000f);
                  fVar49 = fVar49 + (float)local_230 * *(float *)(local_100 + 0x1320);
                  local_128._0_1_ = 1;
                  local_118 = 0;
                }
              }
              else {
                FUN_1400bf4a2(local_f8,uVar39 | 0x20000e);
                fVar49 = fVar49 - (float)local_230 * *(float *)(local_100 + 0x1320);
                local_128._0_1_ = 1;
                local_118 = 0;
              }
            }
            else if (*(char *)(local_100 + 0x138) == '\x01') {
              FUN_1400939fc();
              lVar26 = local_158;
              FUN_14004863e(*(float *)(local_158 + 0xd8) + *(float *)(uVar27 + 0x1320));
              FUN_140093a2a(lVar26);
              local_128._0_1_ = 1;
              local_118 = 0;
              puVar19 = local_f8;
            }
            else {
              FUN_1400bf4a2(local_f8,(uint)(byte)local_118 << 2 | uVar39 | 0x200003);
              local_128._0_1_ = 1;
              local_118 = 0;
            }
          }
          else if (*(char *)(local_100 + 0x138) == '\x01') {
            FUN_14007b71f(*(float *)(local_158 + 0xd8) - *(float *)(local_100 + 0x1320));
            FUN_140093a2a(lVar26);
            local_128._0_1_ = 1;
            local_118 = 0;
            puVar19 = local_f8;
          }
          else {
            FUN_1400bf4a2(local_f8,(uint)(byte)local_118 << 2 | uVar39 | 0x200002);
            local_128._0_1_ = 1;
            local_118 = 0;
          }
        }
        else {
          uVar40 = 0x200001;
          if (local_119 != '\0') {
            uVar40 = 0x20000d;
          }
          uVar41 = 0x200005;
          if ((byte)local_118 == '\0') {
            uVar41 = uVar40;
          }
          FUN_1400bf4a2(local_f8,uVar41 | uVar39);
          local_118 = 0;
        }
      }
      else {
        uVar40 = 0x200000;
        if (local_119 != '\0') {
          uVar40 = 0x20000c;
        }
        uVar41 = 0x200004;
        if ((byte)local_118 == '\0') {
          uVar41 = uVar40;
        }
        FUN_1400bf4a2(local_f8,uVar41 | uVar39);
        local_118 = 0;
      }
code_r0x0001400be07e:
      uVar39 = local_13c;
      uVar14 = FUN_1400bfe3e(puVar19);
      puVar19 = local_f8;
      local_13c = (uint)CONCAT71((int7)((ulonglong)uVar14 >> 8),
                                 (byte)uVar14 & (byte)local_12c | (byte)uVar39);
      if (*(uint *)(local_100 + 0x167c) != local_104) goto LAB_1400bc5a2;
      if ((byte)local_128 != 0) goto LAB_1400bc507;
      if ((char)param_6 < '\0') {
        auVar5[0xf] = 0;
        auVar5._0_15_ = stack0xfffffffffffffdd9;
        _local_228 = auVar5 << 8;
        iVar13 = 0;
        uVar14 = FUN_1400c0aa3(local_f8,local_f8[1],local_228,0);
        local_128 = CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
        local_180 = "";
      }
      else {
        pcVar18 = (char *)local_f8[8];
        iVar13 = strcmp((char *)local_f8[6],pcVar18);
        if (iVar13 == 0) goto LAB_1400bc507;
        iVar13 = *(int *)(puVar19 + 7) + -1;
        local_180 = pcVar18;
        uVar14 = FUN_1400c0aa3(puVar19,puVar19[1],pcVar18,iVar13);
        local_128 = CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
      }
    }
    else {
      local_118 = 0;
LAB_1400bc507:
      local_180 = (char *)0x0;
      iVar13 = 0;
      local_128 = 0;
    }
    if ((param_6 & 0x9c0000) != 0) {
      if ((param_6 >> 0x12 & 1) == 0) {
LAB_1400bc55f:
        if ((param_6 >> 0x13 & 1) == 0) {
LAB_1400bc56d:
          if (((param_6 >> 0x17 & 1) == 0) || (*(char *)((longlong)local_f8 + 0x74) == '\0')) {
            if ((param_6 >> 0x14 & 1) == 0) goto LAB_1400bcd03;
            uVar29 = 0x100000;
          }
          else {
            uVar29 = 0x800000;
          }
          uVar11 = 0;
        }
        else {
          uVar11 = 0x203;
          cVar8 = FUN_140091e97(0x203,1);
          uVar29 = 0x80000;
          if (cVar8 == '\0') {
            uVar11 = 0x204;
            cVar8 = FUN_140091e97(0x204,1);
            if (cVar8 == '\0') goto LAB_1400bc56d;
          }
        }
      }
      else {
        uVar11 = 0x200;
        cVar8 = FUN_14008467f(0x200,0);
        uVar29 = 0x40000;
        if (cVar8 == '\0') goto LAB_1400bc55f;
      }
      FUN_1400bfe82(local_228);
      local_210 = local_104;
      uStack_220._0_4_ = (float)uVar29;
      _local_228 = local_100;
      uStack_220._4_4_ = (float)local_108;
      if (*(int *)(local_100 + 0x167c) == *(int *)((longlong)local_f8 + 0x14)) {
        local_206 = *(undefined1 *)(local_100 + 0x1688);
      }
      else {
        local_206 = 0;
      }
      local_218 = param_8;
      pcVar22 = local_138;
      if ((local_108 >> 9 & 1) == 0) {
        pcVar22 = (code *)local_f8[6];
      }
      iVar20 = *(int *)((longlong)local_f8 + 0x4c);
      iVar25 = *(int *)(local_f8 + 3) + 1;
      if (*(int *)(local_f8 + 3) < iVar20) {
        uVar14 = local_f8[10];
        puVar19 = local_f8;
        iVar20 = iVar25;
      }
      else {
        if (iVar20 == 0) {
          iVar20 = 8;
        }
        else {
          iVar20 = iVar20 / 2 + iVar20;
        }
        if (iVar20 <= iVar25) {
          iVar20 = iVar25;
        }
        uVar14 = FUN_140077ab4((longlong)iVar20);
        puVar19 = local_f8;
        if (local_f8[10] != 0) {
          FUN_1401c5180(uVar14,local_f8[10],(longlong)*(int *)(local_f8 + 9));
          FUN_140077b90(puVar19[10]);
        }
        puVar19[10] = uVar14;
        *(int *)((longlong)puVar19 + 0x4c) = iVar20;
        iVar20 = *(int *)(puVar19 + 3) + 1;
      }
      *(int *)(puVar19 + 9) = iVar25;
      FUN_1401c5180(uVar14,pcVar22,(longlong)iVar20);
      local_1f8 = *(int *)(puVar19 + 3);
      local_1f4 = *(uint *)(puVar19 + 0xb);
      local_205 = '\0';
      local_1f0 = *(int *)puVar19[1];
      local_1ec = *(undefined4 *)(puVar19[1] + 4);
      local_1e8 = *(undefined4 *)(puVar19[1] + 8);
      local_20c = uVar11;
      local_200 = pcVar22;
      (*param_7)(local_228);
      if ((local_205 != '\0') || (local_1f0 != *(int *)puVar19[1])) {
        *(undefined1 *)(puVar19 + 0xe) = 1;
      }
      uVar11 = FUN_1400a4c0f(local_1f0,0,local_1f8);
      *(undefined4 *)puVar19[1] = uVar11;
      uVar11 = FUN_1400a4c0f(local_1ec,0,local_1f8);
      *(undefined4 *)(puVar19[1] + 4) = uVar11;
      uVar11 = FUN_1400a4c0f(local_1e8,0);
      puVar6 = local_f8;
      *(undefined4 *)(puVar19[1] + 8) = uVar11;
      if (local_205 == '\x01') {
        pcVar55 = (code *)CONCAT44((int)((ulonglong)pcVar55 >> 0x20),local_1f8);
        FUN_1400c044d(local_f8,local_f8[10],*(int *)(local_f8 + 9) + -1,local_200,pcVar55);
        *(int *)(puVar6 + 3) = local_1f8;
        FUN_1400bfcae(puVar6);
      }
    }
LAB_1400bcd03:
    puVar19 = local_f8;
    pcVar18 = local_180;
    if ((local_108 >> 9 & 1) == 0) {
      pcVar28 = (char *)local_f8[4];
      iVar25 = strcmp(pcVar28,(char *)local_138);
      pcVar18 = local_180;
      if (iVar25 != 0) {
        iVar13 = *(int *)(puVar19 + 3);
        local_128 = CONCAT71((int7)(CONCAT44(extraout_var,iVar25) >> 8),1);
        pcVar18 = pcVar28;
      }
    }
  }
  else {
    local_118 = 0;
LAB_1400bc5a2:
    iVar13 = 0;
    local_128 = 0;
    pcVar18 = (char *)0x0;
  }
  if (*(uint *)(local_100 + 0x2740) == local_104) {
    uVar27 = local_100;
    if (*(uint *)(local_100 + 0x167c) != local_104) {
      cVar8 = FUN_140089ef2();
      uVar27 = local_100;
      if (cVar8 == '\x01' && (byte)local_148 == '\0') {
        pcVar28 = *(char **)(local_100 + 0x2750);
        iVar25 = strcmp(pcVar28,(char *)local_138);
        if (iVar25 != 0) {
          iVar13 = *(int *)(uVar27 + 0x2748) + -1;
          local_128 = CONCAT71((int7)(CONCAT44(extraout_var_00,iVar25) >> 8),1);
          pcVar18 = pcVar28;
        }
      }
    }
    *(undefined4 *)(uVar27 + 0x2740) = 0;
  }
  if (pcVar18 != (char *)0x0) {
    pcVar22 = local_138;
    piVar30 = local_188;
    if ((param_6 >> 0x16 & 1) != 0) {
      FUN_1400bfe82(local_228);
      local_210 = local_104;
      uStack_220._0_4_ = 5.877472e-39;
      _local_228 = local_100;
      uStack_220._4_4_ = (float)local_108;
      if (((char)local_140 == '\0') ||
         (*(int *)(local_100 + 0x167c) != *(int *)((longlong)local_f8 + 0x14))) {
        local_206 = 0;
      }
      else {
        local_206 = *(undefined1 *)(local_100 + 0x1688);
      }
      local_200 = local_138;
      local_1f8 = iVar13;
      local_1f4 = FUN_1400796a5(local_188,iVar13 + 1);
      local_218 = param_8;
      (*param_7)(local_228);
      pcVar22 = local_200;
      piVar30 = (int *)(ulonglong)local_1f4;
      iVar13 = FUN_140077fbc(local_1f8,local_1f4 - 1);
    }
    FUN_140077fbc(iVar13 + 1,(ulonglong)piVar30 & 0xffffffff);
    local_138 = pcVar22;
    FUN_140077a57(pcVar22,pcVar18);
  }
  if ((*(uint *)(local_100 + 0x167c) == local_104) && ((byte)local_10c != '\0')) {
    FUN_14008076e();
  }
  uVar11 = (undefined4)((ulonglong)pcVar55 >> 0x20);
  if ((param_6 >> 0x1a & 1) == 0) {
    FUN_14007bdca(&local_1c0,local_104,0);
    uVar27 = local_100;
    uVar29 = *(undefined4 *)(local_100 + 0xdfc);
    uVar12 = FUN_14007a557(7);
    pcVar55 = (code *)CONCAT44(uVar11,uVar29);
    FUN_14007ba95(local_1c0,local_1b8,uVar12,1,pcVar55);
    local_170 = CONCAT44((float)((ulonglong)*(undefined8 *)(uVar27 + 0xdf4) >> 0x20) +
                         local_1c0._4_4_,(float)*(undefined8 *)(uVar27 + 0xdf4) + (float)local_1c0);
    uStack_220._0_4_ = fVar51 + (float)local_1c0;
    _local_228 = local_1c0;
    uStack_220._4_4_ = fStack_25c + local_1c0._4_4_;
  }
  else {
    local_170 = *(undefined8 *)(local_158 + 0x158);
    fVar45 = (float)local_1c0;
    fVar52 = (float)((ulonglong)local_1c0 >> 0x20);
    uVar39 = -(uint)(*(float *)(local_158 + 0x2b8) <= fVar45);
    uVar40 = -(uint)(*(float *)(local_158 + 700) <= fVar52);
    uVar41 = -(uint)(fVar51 + fVar45 < *(float *)(local_158 + 0x2c0));
    uVar42 = -(uint)(fStack_25c + fVar52 < *(float *)(local_158 + 0x2c4));
    auVar50._0_4_ = ~uVar39 & (uint)*(float *)(local_158 + 0x2b8);
    auVar50._4_4_ = ~uVar40 & (uint)*(float *)(local_158 + 700);
    auVar50._8_4_ = ~uVar41 & (uint)*(float *)(local_158 + 0x2c0);
    auVar50._12_4_ = ~uVar42 & (uint)*(float *)(local_158 + 0x2c4);
    auVar2._4_4_ = (uint)fVar52 & uVar40;
    auVar2._0_4_ = (uint)fVar45 & uVar39;
    auVar2._8_4_ = (uint)(fVar51 + fVar45) & uVar41;
    auVar2._12_4_ = (uint)(fStack_25c + fVar52) & uVar42;
    _local_228 = auVar50 | auVar2;
  }
  if (local_161 == 0) {
    if (local_1a0 == (code *)0x0) goto LAB_1400bcfe2;
code_r0x0001400bcfb1:
    local_190 = (code *)0x0;
    cVar8 = (char)local_15c;
    bVar37 = *local_138 == (code)0x0;
    if ((bool)(char)local_15c != (*local_138 == (code)0x0)) {
LAB_1400bcfed:
      cVar8 = bVar37;
      local_190 = (code *)0x0;
      if ((local_160 & 1) == 0) {
        FUN_1400c0256();
      }
      if ((param_6 >> 10 & 1) != 0 && (bool)cVar8 == false) {
        FUN_1400c014f();
        goto LAB_1400bd040;
      }
    }
    pcVar22 = local_1a0;
    if (cVar8 == '\0') goto LAB_1400bd040;
    sVar15 = strlen((char *)local_1a0);
    pcVar35 = pcVar22 + sVar15;
    local_10c = (uint)CONCAT71((int7)(sVar15 >> 8),1);
    local_138 = pcVar22;
code_r0x0001400bd088:
    local_174 = 0;
    local_14c = 1;
    uVar27 = local_100;
    local_190 = pcVar35;
    if ((param_6 >> 0x1a & 1) != 0) goto code_r0x0001400bd0b6;
  }
  else {
    local_138 = (code *)local_f8[6];
    if (local_1a0 != (code *)0x0) goto code_r0x0001400bcfb1;
LAB_1400bcfe2:
    local_190 = (code *)0x0;
    if ((char)local_15c != '\0') {
      bVar37 = false;
      goto LAB_1400bcfed;
    }
LAB_1400bd040:
    pcVar35 = local_138;
    if (((((byte)local_12c | (byte)local_13c) & 1) != 0) ||
       (*(uint *)(local_100 + 0x167c) == local_104)) {
      pcVar35 = local_138 + *(int *)(local_f8 + 3);
      local_10c = 0;
      goto code_r0x0001400bd088;
    }
    if ((param_6 & 0x5000000) != 0x4000000) {
      sVar15 = strlen((char *)local_138);
      pcVar35 = pcVar35 + sVar15;
      local_10c = 0;
      goto code_r0x0001400bd088;
    }
    local_190 = (code *)0x0;
    local_10c = 0;
code_r0x0001400bd0b6:
    uVar27 = local_100;
    pcVar35 = local_190;
    local_14c = 1;
    local_174 = 0;
    pcVar55 = (code *)&local_14c;
    FUN_14007a4d9(local_228,&local_170,*(undefined4 *)(local_100 + 0x1320),&local_174,pcVar55);
  }
  piVar30 = (int *)(uVar27 + 0x2728);
  if (*(int *)(uVar27 + 0x272c) < 0) {
    uVar14 = FUN_140077ab4();
    uVar27 = local_100;
    if (*(longlong *)(local_100 + 0x2730) != 0) {
      FUN_1401c5180(uVar14);
      FUN_140077b90();
    }
    *(undefined8 *)(uVar27 + 0x2730) = uVar14;
    *(undefined4 *)(uVar27 + 0x272c) = 0;
  }
  pcVar22 = local_138;
  *piVar30 = 0;
  iVar13 = 1;
  local_188 = piVar30;
  if ((param_6 >> 0x1a & 1) != 0) {
    if ((char)local_140 == '\0') {
      ppcVar17 = &local_190;
      if (pcVar35 != (code *)0x0) {
        ppcVar17 = (code **)0x0;
      }
      iVar13 = local_14c + 1;
    }
    else if ((*(char *)(local_f8 + 0xe) == '\x01') && ((byte)local_12c != 0)) {
      ppcVar17 = &local_190;
      if (pcVar35 != (code *)0x0) {
        ppcVar17 = (code **)0x0;
      }
      iVar13 = 0x7fffffff;
    }
    else {
      ppcVar17 = &local_190;
      if (pcVar35 != (code *)0x0) {
        ppcVar17 = (code **)0x0;
      }
      iVar13 = 0x7fffffff;
      if ((((byte)local_12c | (byte)local_13c) & 1) == 0) {
        iVar13 = local_14c + 1;
      }
      if ((*(byte *)((longlong)local_f8 + 0x71) & 1) == 0) {
        iVar13 = local_14c + 1;
      }
    }
    in_stack_fffffffffffffd70 =
         (code *)CONCAT44((int)((ulonglong)in_stack_fffffffffffffd70 >> 0x20),iVar13);
    pcVar55 = (code *)CONCAT44((int)((ulonglong)pcVar55 >> 0x20),fVar44);
    iVar13 = FUN_1400c0b12(local_108,piVar30,local_138,pcVar35,pcVar55,in_stack_fffffffffffffd70,
                           ppcVar17);
    uVar43 = (undefined4)((ulonglong)ppcVar17 >> 0x20);
    pcVar35 = local_190;
  }
  uVar27 = local_100;
  *(int *)(local_100 + 0x2738) = (int)pcVar35 - (int)pcVar22;
  local_14c = FUN_140077fbc(local_14c,iVar13);
  puVar19 = local_f8;
  fVar52 = (float)iVar13 * *(float *)(uVar27 + 0x1320);
  bVar7 = (byte)local_12c;
  uVar9 = (byte)local_10c;
  fVar45 = fVar49;
  if (((byte)local_140 & bVar7) == 1) {
    FUN_1400c0efc(&local_1c8,uVar27,local_f8,local_188,pcVar22,pcVar35,
                  CONCAT44(uVar43,*(undefined4 *)local_f8[1]));
    local_15c = FUN_14007a557(uVar9);
    *(int *)((longlong)puVar19 + 100) = iVar13;
    pcVar55 = pcVar22;
    in_stack_fffffffffffffd70 = pcVar35;
code_r0x0001400bd346:
    puVar6 = local_f8;
    if (*(char *)(puVar19 + 0xe) == '\x01') {
      if ((short)param_6 < 0) {
        *(undefined4 *)((longlong)local_f8 + 0x5c) = 0;
      }
      else if (*(float *)((longlong)local_f8 + 0x5c) <= (float)local_1c8) {
        fVar48 = (float)local_1c8 - (fVar51 - *(float *)(local_100 + 0xdf4));
        if (*(float *)((longlong)local_f8 + 0x5c) <= fVar48) {
          *(float *)((longlong)local_f8 + 0x5c) = (float)(int)(DAT_140210020 * fVar51 + fVar48);
        }
      }
      else {
        fVar51 = (float)FUN_14007b71f(0);
        *(float *)((longlong)puVar6 + 0x5c) = (float)(int)fVar51;
      }
      if ((param_6 >> 0x1a & 1) != 0) {
        if (fVar49 <= local_1c8._4_4_ - *(float *)(local_100 + 0x1320)) {
          fVar51 = *(float *)(local_100 + 0xdf8) + *(float *)(local_100 + 0xdf8);
          if (fVar49 <= local_1c8._4_4_ - (fStack_25c - fVar51)) {
            fVar45 = fVar51 + (local_1c8._4_4_ - fStack_25c);
          }
        }
        else {
          fVar45 = (float)FUN_14007b71f(0);
        }
      }
      *(undefined1 *)(local_f8 + 0xe) = 0;
    }
code_r0x0001400bd542:
    uVar27 = local_100;
    if (*(char *)((longlong)local_f8 + 0x71) == '\x01') {
      if ((param_6 >> 0x1a & 1) != 0) {
        fVar45 = (local_1c8._4_4_ - *(float *)(local_100 + 0x1320)) -
                 (DAT_1401c86a0 * fStack_25c - *(float *)(local_100 + 0xdf8));
      }
      *(undefined1 *)((longlong)local_f8 + 0x71) = 0;
      local_12c = 0;
    }
    if ((fVar45 != fVar49) || (NAN(fVar45) || NAN(fVar49))) {
      FUN_14007b71f((*(float *)(local_100 + 0xdf8) + *(float *)(local_100 + 0xdf8) + fVar52) -
                    fStack_25c);
      fVar51 = (float)FUN_140090d06(fVar45);
      local_170 = CONCAT44((*(float *)(local_158 + 0xd8) - fVar51) + local_170._4_4_,
                           (float)local_170);
      *(float *)(local_158 + 0xd8) = fVar51;
      pcVar55 = (code *)&local_14c;
      FUN_14007a4d9(local_228,&local_170,*(undefined4 *)(uVar27 + 0x1320),&local_174,pcVar55);
      local_14c = FUN_140077fbc(local_14c,iVar13);
    }
    uVar43 = (undefined4)((ulonglong)pcVar55 >> 0x20);
    fVar51 = *(float *)((longlong)local_f8 + 0x5c);
    if ((byte)local_13c != '\0') {
      local_148 = FUN_14007a557(0x36);
      fVar49 = 0.0;
      if ((param_6 & 0x4000000) == 0) {
        fVar49 = DAT_1402113a0;
      }
      fVar45 = (float)FUN_1400e61ce(*(undefined8 *)(local_100 + 0x1318),0x20);
      puVar19 = local_f8;
      iVar13 = FUN_140077fbc(*(undefined4 *)(local_f8[1] + 4),*(undefined4 *)(local_f8[1] + 8));
      iVar25 = FUN_1400796a5(*(undefined4 *)(puVar19[1] + 4),*(undefined4 *)(puVar19[1] + 8));
      uVar43 = (undefined4)((ulonglong)pcVar55 >> 0x20);
      if (local_174 < local_14c) {
        fVar45 = fVar45 * DAT_1401c86a0;
        fVar48 = 0.0;
        if ((param_6 & 0x4000000) == 0) {
          fVar48 = DAT_1401c86a4;
        }
        local_1a0 = local_138 + iVar13;
        pcVar22 = local_138 + iVar25;
        lVar26 = (longlong)local_174;
        do {
          if ((longlong)*local_188 == 0) {
            lVar32 = 0;
          }
          else {
            lVar32 = (longlong)*(int *)(*(longlong *)(local_100 + 0x2730) + lVar26 * 4);
          }
          lVar1 = lVar26 + 1;
          if (lVar1 < *local_188) {
            iVar13 = *(int *)(*(longlong *)(local_100 + 0x2730) + 4 + lVar26 * 4) + -1;
          }
          else {
            iVar13 = *(int *)(local_100 + 0x2738);
          }
          pcVar35 = local_138 + iVar13;
          if (pcVar35 < local_190) {
            uVar27 = (ulonglong)(*pcVar35 != (code)0xa);
            pcVar35 = pcVar35 + uVar27;
          }
          else {
            uVar27 = 0;
          }
          pcVar33 = local_138 + lVar32;
          pcVar36 = pcVar33;
          if (pcVar33 < local_1a0) {
            pcVar36 = local_1a0;
          }
          pcVar31 = pcVar35;
          if (pcVar22 < pcVar35) {
            pcVar31 = pcVar22;
          }
          fVar53 = 0.0;
          if (pcVar36 < pcVar31) {
            pcVar55 = (code *)CONCAT44((int)((ulonglong)pcVar55 >> 0x20),0xbf800000);
            FUN_14007b686(&local_1d8,pcVar36,pcVar31,0,pcVar55);
            fVar53 = (float)local_1d8 + 0.0;
          }
          fVar46 = fVar53;
          if (pcVar35 < pcVar22) {
            fVar46 = fVar53 + (float)(int)fVar45;
          }
          fVar47 = fVar53;
          if (uVar27 == 0) {
            fVar47 = fVar46;
          }
          if (local_1a0 <= pcVar35) {
            fVar53 = fVar47;
          }
          if ((fVar53 != 0.0) || (NAN(fVar53))) {
            local_1d8 = 0;
            uStack_1d0 = 0;
            fVar54 = (float)local_170 - fVar51;
            uVar27 = CONCAT44((int)((ulonglong)pcVar55 >> 0x20),0xbf800000);
            FUN_14007b686(local_268,pcVar33,pcVar36,0,uVar27);
            fVar47 = (float)(int)lVar26 * *(float *)(local_100 + 0x1320) + local_170._4_4_;
            fVar46 = fVar49 + fVar47 + *(float *)(local_100 + 0x1320);
            fVar54 = local_268[0] + fVar54;
            fVar47 = fVar47 + fVar48;
            uVar39 = -(uint)(fStack_224 <= fVar47);
            local_1d8 = CONCAT44(~uVar39 & (uint)fStack_224,
                                 ~-(uint)((float)local_228 <= fVar54) & (uint)local_228) |
                        CONCAT44((uint)fVar47 & uVar39,
                                 (uint)fVar54 & -(uint)((float)local_228 <= fVar54));
            if (uStack_220._4_4_ <= fVar46) {
              fVar46 = uStack_220._4_4_;
            }
            fVar47 = fVar53 + fVar54;
            if ((float)uStack_220 <= fVar53 + fVar54) {
              fVar47 = (float)uStack_220;
            }
            uStack_1d0 = CONCAT44(fVar46,fVar47);
            in_stack_fffffffffffffd70 =
                 (code *)((ulonglong)in_stack_fffffffffffffd70 & 0xffffffff00000000);
            pcVar55 = (code *)(uVar27 & 0xffffffff00000000);
            FUN_1400de294(*(undefined8 *)(local_158 + 800),&local_1d8,&uStack_1d0,local_148,pcVar55,
                          in_stack_fffffffffffffd70);
          }
          uVar43 = (undefined4)((ulonglong)pcVar55 >> 0x20);
          lVar26 = lVar1;
        } while (lVar1 < local_14c);
      }
    }
  }
  else {
    local_1c8 = 0;
    local_15c = FUN_14007a557((byte)local_10c);
    uVar43 = (undefined4)((ulonglong)pcVar55 >> 0x20);
    if (((bVar7 | (byte)local_13c) & 1) != 0) {
      *(int *)((longlong)local_f8 + 100) = iVar13;
      puVar19 = local_f8;
      if (bVar7 != 0) goto code_r0x0001400bd346;
      goto code_r0x0001400bd542;
    }
    fVar51 = 0.0;
    local_12c = 0;
  }
  if ((*(uint *)(local_100 + 0x167c) != local_104) &&
     ((((byte)local_13c | (byte)local_12c) & 1) == 0 && (param_6 >> 0x11 & 1) != 0)) {
    uVar14 = CONCAT44(uVar43,0xbf800000);
    FUN_14007b686(&local_1d8,local_138,0,0,uVar14);
    uVar43 = (undefined4)((ulonglong)uVar14 >> 0x20);
    uVar11 = FUN_14004863e((float)local_170);
    local_170 = CONCAT44(local_170._4_4_,uVar11);
  }
  if ((param_6 >> 0x1a & 1) == 0) {
    if ((local_15c < 0x1000000) || (0x1fffff < (longlong)local_190 - (longlong)local_138))
    goto LAB_1400bdae4;
  }
  else if (local_15c < 0x1000000) goto LAB_1400bdae4;
  if (local_174 < local_14c) {
    if (local_14c < *(int *)(local_100 + 0x2728)) {
      iVar13 = *(int *)(*(longlong *)(local_100 + 0x2730) + (longlong)local_14c * 4) + -1;
    }
    else {
      iVar13 = *(int *)(local_100 + 0x2738);
    }
    if (*(int *)(local_100 + 0x2728) == 0) {
      lVar26 = 0;
    }
    else {
      lVar26 = (longlong)*(int *)(*(longlong *)(local_100 + 0x2730) + (longlong)local_174 * 4);
    }
    local_1d8 = CONCAT44((float)local_174 * *(float *)(local_100 + 0x1320) + local_170._4_4_,
                         ((float)local_170 - fVar51) + 0.0);
    FUN_1400df32c(*(undefined8 *)(local_100 + 0x1310),*(undefined8 *)(local_158 + 800),
                  local_138 + iVar13,&local_1d8,CONCAT44(uVar43,local_15c),local_228,
                  local_138 + lVar26,local_138 + iVar13,fVar44,3);
  }
LAB_1400bdae4:
  if ((byte)local_12c != '\0') {
    fVar44 = *(float *)(local_100 + 0x48) + *(float *)((longlong)local_f8 + 0x6c);
    *(float *)((longlong)local_f8 + 0x6c) = fVar44;
    bVar37 = true;
    if ((*(char *)(local_100 + 0x8f) == '\x01') && (0.0 < fVar44)) {
      fVar44 = (float)FUN_1401a3780();
      bVar37 = fVar44 <= DAT_1401c86dc;
    }
    fVar51 = (float)(int)(((float)local_170 + (float)local_1c8) - fVar51);
    fVar44 = (float)(int)(local_170._4_4_ + local_1c8._4_4_);
    if ((((bVar37) && (fStack_224 < DAT_140211e14 + fVar44)) &&
        ((fVar44 - *(float *)(local_100 + 0x1320)) + DAT_1401c86a0 < uStack_220._4_4_)) &&
       (((float)local_228 < DAT_1401c86c8 + fVar51 && (fVar51 < (float)uStack_220)))) {
      uVar14 = *(undefined8 *)(local_158 + 800);
      FUN_14007a557(0x22);
      FUN_1400ddffa(uVar14);
    }
    if (((local_108 >> 9 & 1) == 0) && (*(uint *)(local_100 + 0x167c) == local_104)) {
      *(undefined2 *)(local_100 + 0x28f8) = 0x101;
      *(ulonglong *)(local_100 + 0x28fc) =
           CONCAT44(fVar44 - *(float *)(local_100 + 0x1320),fVar51 + DAT_1401c86a4);
      *(float *)(local_100 + 0x2904) = *(float *)(local_100 + 0x1320);
      *(undefined4 *)(local_100 + 0x2908) = **(undefined4 **)(local_1a8 + 0x48);
    }
  }
  bVar7 = (param_6 >> 10 & 1) == 0 | (byte)local_10c;
  if (bVar7 == 0) {
    FUN_1400c0256();
  }
  uVar27 = local_100;
  if ((param_6 >> 0x1a & 1) != 0) {
    local_1d8 = (ulonglong)(uint)(fVar52 + *(float *)(local_100 + 0xdf8)) << 0x20;
    FUN_1400b076d();
    *(uint *)(uVar27 + 0x1fac) = *(uint *)(uVar27 + 0x1fac) | 0x100001;
    FUN_14008a651();
    uVar39 = *(uint *)(uVar27 + 0x1fe8);
    FUN_1400927b2();
    iVar13 = *(int *)(uVar27 + 0x1fe0);
    if ((iVar13 == 0) || (iVar25 = FUN_1400ada39(local_158,1), iVar13 != iVar25)) {
      *(uint *)(local_100 + 0x1fe0) = local_104;
      *(undefined4 *)(local_100 + 0x1fe4) = local_194;
      *(uint *)(local_100 + 0x1fe8) = uVar39 & 0x80 | local_150;
    }
  }
  if ((char)local_140 == '\x01' && (local_108 >> 9 & 1) != 0) {
    local_f8[4] = 0;
  }
  if ((bVar7 & *(byte *)(local_100 + 0x2a40)) == 1) {
    FUN_140096567("{","}");
    FUN_14007b17a(&local_170,local_138,local_190);
  }
  if (0.0 < local_240[0]) {
    FUN_14007b084(CONCAT44(local_1c0._4_4_ + *(float *)(local_100 + 0xdf8),
                           (float)local_1b8 + *(float *)(local_100 + 0xe0c)),local_238,local_258,0);
  }
  if ((byte)local_128 != '\0') {
    FUN_1400807a3(local_104);
  }
  if ((param_6 & 0x40) == 0) {
    local_118._0_1_ = (byte)local_128;
  }
  return (byte)local_118;
}

