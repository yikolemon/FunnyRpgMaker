/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10107d2b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10107d2b(char *param_1,undefined1 *param_2,uint param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  char *_Str2;
  code *pcVar3;
  undefined1 auVar4 [12];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 uVar11;
  byte bVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  float fVar17;
  undefined4 uVar18;
  uint *puVar19;
  undefined3 uVar21;
  float *pfVar20;
  byte bVar22;
  bool bVar23;
  int iVar24;
  byte bVar25;
  int3 iVar27;
  int iVar26;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 *puVar28;
  undefined4 *puVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  float10 fVar33;
  float10 extraout_ST0;
  uint uVar34;
  float fVar38;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined8 uVar50;
  uint local_144;
  byte local_13e;
  bool local_13d;
  int local_13c;
  float local_138;
  float local_134;
  undefined8 local_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  uint local_120;
  int local_11c;
  int local_118;
  int local_114;
  undefined1 local_110 [16];
  float local_100;
  float local_fc;
  float *local_f8;
  float local_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  float local_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  float local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 *local_b4;
  uint *local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  float local_7c;
  undefined4 uStack_78;
  float local_74;
  undefined4 local_70;
  float local_6c;
  undefined4 local_68;
  undefined8 local_64;
  float local_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined8 local_34;
  undefined8 uStack_2c;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint local_14;
  
  fVar38 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_144;
  iVar14 = FUN_1010cbda(param_1);
  local_13e = iVar14 == 0;
  local_118 = iVar14;
  if ((bool)local_13e) {
    iVar14 = FUN_1010d606();
  }
  if (*(int *)((int)fVar38 + 0x14c8) == *(int *)(iVar14 + 8)) {
    pcVar3 = (code *)swi(3);
    uVar15 = (*pcVar3)();
    return uVar15;
  }
  uVar15 = param_3 | 6;
  if ((~param_3 & 0x30200) != 0) {
    uVar15 = param_3;
  }
  local_130 = CONCAT44(local_130._4_4_,uVar15);
  iVar24 = *(int *)((int)fVar38 + 4);
  iVar16 = *(int *)(iVar14 + 0x2b4);
  if (*(int *)((int)fVar38 + 0x14a8) == 0) {
    uVar11 = *(undefined1 *)((int)fVar38 + 2);
  }
  else {
    uVar11 = 0;
  }
  *(undefined1 *)(iVar14 + 0x102) = uVar11;
  local_13d = iVar16 < iVar24 + -1;
  if ((uVar15 >> 0x1a & 1) != 0) {
    local_13d = (*(int *)(*(int *)((int)fVar38 + 0x1fc4) + 4 + *(int *)((int)fVar38 + 0x1fc8) * 0x28
                         ) != iVar14 ||
                *(int *)(iVar14 + 0xc0) !=
                *(int *)(*(int *)((int)fVar38 + 0x1fc4) + *(int *)((int)fVar38 + 0x1fc8) * 0x28)) ||
                iVar16 < iVar24 + -1;
  }
  local_13c = CONCAT31(local_13c._1_3_,*(undefined1 *)(iVar14 + 0x100));
  local_11c = iVar24;
  if (iVar16 == iVar24) {
    local_130 = CONCAT44(local_130._4_4_,*(undefined4 *)(iVar14 + 0xc));
  }
  else {
    FUN_1010d72d(uVar15);
    *(bool *)(iVar14 + 0x100) = local_13d;
    if (local_13d != false) {
      FUN_1010d8a9(1);
    }
    *(undefined4 *)(iVar14 + 0x10) = *(undefined4 *)(iVar14 + 0xc);
    *(float *)(iVar14 + 0xc) = (float)local_130;
    uVar18 = 0;
    if ((*(byte *)((int)fVar38 + 0x1ed1) & 2) != 0) {
      uVar18 = *(undefined4 *)((int)fVar38 + 0x1f10);
    }
    *(undefined4 *)(iVar14 + 0x14) = uVar18;
    *(int *)(iVar14 + 0x2b4) = iVar24;
    *(float *)(iVar14 + 700) = (float)*(double *)((int)fVar38 + 0x18);
    *(undefined2 *)(iVar14 + 0x10c) = 0;
    iVar26 = *(int *)((int)fVar38 + 0x14c0);
    *(int *)((int)fVar38 + 0x14c0) = iVar26 + 1;
    *(short *)(iVar14 + 0x10e) = (short)iVar26;
  }
  if ((*(byte *)((int)fVar38 + 0x1ed1) & 0x10) != 0) {
    FUN_1010d956(iVar14,*(undefined4 *)((int)fVar38 + 0x1f38),*(undefined4 *)((int)fVar38 + 0x1ee0))
    ;
  }
  local_d4 = fVar38;
  local_114 = iVar16;
  if (iVar16 != iVar24) {
    if ((*(int *)(iVar14 + 0x438) == 0) && (*(int *)(iVar14 + 0x430) == 0)) {
      cVar13 = FUN_1010d9e3(iVar14);
      bVar22 = *(byte *)(iVar14 + 0x409);
      *(byte *)(iVar14 + 0x409) = bVar22 & 0xf8;
      if (cVar13 == '\0') goto LAB_10107f93;
    }
    else {
      bVar22 = *(byte *)(iVar14 + 0x409);
      *(byte *)(iVar14 + 0x409) = bVar22 & 0xf8;
    }
    FUN_1010da0f(iVar14,param_2);
    iVar24 = local_11c;
    local_130 = CONCAT44(local_130._4_4_,*(undefined4 *)(iVar14 + 0xc));
    bVar25 = *(byte *)(iVar14 + 0x409);
    if ((bVar25 & 1) != 0) {
      *(byte *)((int)local_d4 + 0x1ed0) = *(byte *)((int)local_d4 + 0x1ed0) & 0xef;
      bVar25 = *(byte *)(iVar14 + 0x409);
    }
    if ((((bVar25 & 4) != 0) && ((bVar22 & 6) == 2)) &&
       ((char)local_13c == '\0' && *(char *)(iVar14 + 0x100) == '\0')) {
      *(undefined1 *)(iVar14 + 0x100) = 1;
      FUN_1010d8a9(1);
    }
  }
LAB_10107f93:
  fVar38 = local_d4;
  if (((*(byte *)(iVar14 + 0x409) & 1) == 0) ||
     (local_e4 = *(float *)(*(int *)(iVar14 + 0x430) + 0x78), local_e4 == 0.0)) {
    if (*(int *)((int)local_d4 + 0x14a8) == 0) {
      local_e4 = 0.0;
    }
    else {
      local_e4 = *(float *)(*(int *)((int)local_d4 + 0x14b0) + -0x70 +
                           *(int *)((int)local_d4 + 0x14a8) * 0x70);
    }
  }
  if (local_114 == iVar24) {
    fVar17 = *(float *)(iVar14 + 0x3a0);
  }
  else {
    fVar17 = (float)((uint)(float)local_130 & 0x7000000);
    if ((local_130 & 0x7000000) != 0) {
      fVar17 = local_e4;
    }
  }
  if (*(int *)(iVar14 + 0x138) == 0) {
    if (*(int *)(iVar14 + 0x13c) == 0) {
      iVar24 = FUN_100fa1fa(0x20);
      if (*(int *)(iVar14 + 0x140) != 0) {
        FUN_1025b2d0(iVar24,*(int *)(iVar14 + 0x140),*(int *)(iVar14 + 0x138) << 2);
        FUN_100fa2cb(*(undefined4 *)(iVar14 + 0x140));
      }
      *(int *)(iVar14 + 0x140) = iVar24;
      *(undefined4 *)(iVar14 + 0x13c) = 8;
      iVar16 = *(int *)(iVar14 + 0x138);
    }
    else {
      iVar24 = *(int *)(iVar14 + 0x140);
      iVar16 = 0;
    }
    *(undefined4 *)(iVar24 + iVar16 * 4) = *(undefined4 *)(iVar14 + 8);
    *(int *)(iVar14 + 0x138) = *(int *)(iVar14 + 0x138) + 1;
  }
  *(int *)((int)fVar38 + 0x14cc) = iVar14;
  iVar16 = *(int *)((int)fVar38 + 0x14ac);
  iVar24 = *(int *)((int)fVar38 + 0x14a8) + 1;
  local_13c = iVar14;
  local_138 = fVar17;
  if (*(int *)((int)fVar38 + 0x14a8) < iVar16) {
    iVar14 = *(int *)((int)fVar38 + 0x14b0);
  }
  else {
    if (iVar16 == 0) {
      iVar16 = 8;
    }
    else {
      iVar16 = iVar16 / 2 + iVar16;
    }
    if (iVar16 <= iVar24) {
      iVar16 = iVar24;
    }
    iVar14 = FUN_100fa1fa(iVar16 * 0x70);
    if (*(int *)((int)fVar38 + 0x14b0) != 0) {
      FUN_1025b2d0(iVar14,*(int *)((int)fVar38 + 0x14b0),*(int *)((int)fVar38 + 0x14a8) * 0x70);
      FUN_100fa2cb(*(undefined4 *)((int)fVar38 + 0x14b0));
    }
    *(int *)((int)fVar38 + 0x14b0) = iVar14;
    *(int *)((int)fVar38 + 0x14ac) = iVar16;
  }
  iVar16 = local_13c;
  *(int *)((int)fVar38 + 0x14a8) = iVar24;
  local_144 = iVar14 + iVar24 * 0x70;
  iVar14 = iVar14 + iVar24 * 0x70;
  *(int *)(iVar14 + -0x70) = local_13c;
  puVar28 = (undefined4 *)((int)fVar38 + 0x1e80);
  puVar29 = (undefined4 *)(iVar14 + -0x6c);
  for (iVar24 = 0x14; iVar24 != 0; iVar24 = iVar24 + -1) {
    *puVar29 = *puVar28;
    puVar28 = puVar28 + 1;
    puVar29 = puVar29 + 1;
  }
  if (((uint)(float)local_130 >> 0x19 & 1) == 0) {
    bVar22 = 0;
  }
  else {
    bVar22 = *(byte *)((int)fVar38 + 0x1e40) >> 6 & 1;
  }
  *(byte *)(local_144 - 6) = bVar22;
  *(undefined4 *)(local_144 - 4) = 0;
  iVar14 = local_144 - 0x1c;
  FUN_1010a49b(iVar14);
  iVar24 = local_11c;
  *(int *)((int)fVar38 + 0x27ac) = iVar14;
  if (((uint)(float)local_130 >> 0x1c & 1) != 0) {
    *(int *)((int)fVar38 + 0x2558) = *(int *)((int)fVar38 + 0x2558) + 1;
  }
  if (local_114 != local_11c) {
    FUN_1010d498(iVar16,(float)local_130,local_138);
    *(float *)(iVar16 + 0x3a4) = local_e4;
    fVar17 = 0.0;
    if (*(int *)(iVar16 + 0x3a8) != iVar16) {
      fVar17 = local_e4;
    }
    *(float *)(iVar16 + 0x3bc) = fVar17;
    if (((fVar17 == 0.0) && (iVar14 = *(int *)(iVar16 + 0x430), iVar14 != 0)) &&
       ((*(byte *)(iVar14 + 0x12) & 4) != 0)) {
      *(undefined4 *)(iVar16 + 0x3bc) = *(undefined4 *)(iVar14 + 0x78);
    }
    if (*(int *)(iVar16 + 0x20) != 0) {
      uVar18 = FUN_1010cbc5(*(int *)(iVar16 + 0x20));
      *(undefined4 *)(iVar16 + 0x3bc) = uVar18;
    }
    fVar17 = DAT_1028b430;
    if (local_138 != 0.0) {
      fVar17 = *(float *)((int)local_138 + 0x2dc) * *(float *)((int)local_138 + 0x2d8);
    }
    *(float *)(iVar16 + 0x2dc) = fVar17;
  }
  puVar19 = (uint *)((int)fVar38 + 0x1e3c);
  if ((*(uint *)(iVar16 + 0x14) >> 8 & 1) == 0) {
    puVar19 = (uint *)(iVar16 + 8);
  }
  local_b0 = (uint *)(iVar16 + 8);
  FUN_1010dc71(*puVar19);
  *(undefined4 *)(iVar16 + 0x3fc) = *(undefined4 *)((int)fVar38 + 0x1e3c);
  if (((uint)(float)local_130 >> 0x1a & 1) != 0) {
    puVar28 = (undefined4 *)(*(int *)((int)fVar38 + 0x1fc4) + *(int *)((int)fVar38 + 0x1fc8) * 0x28)
    ;
    puVar28[1] = iVar16;
    puVar28[3] = *(undefined4 *)((int)local_e4 + 0x19c);
    iVar14 = *(int *)((int)fVar38 + 0x1fc8);
    if (iVar14 == *(int *)((int)fVar38 + 0x1fcc)) {
      if (iVar14 == 0) {
        iVar24 = 8;
      }
      else {
        iVar24 = iVar14 / 2 + iVar14;
      }
      iVar16 = iVar14 + 1;
      if (iVar14 + 1 < iVar24) {
        iVar16 = iVar24;
      }
      iVar24 = FUN_100fa1fa(iVar16 * 0x28);
      if (*(int *)((int)fVar38 + 0x1fd0) != 0) {
        FUN_1025b2d0(iVar24,*(int *)((int)fVar38 + 0x1fd0),*(int *)((int)fVar38 + 0x1fc8) * 0x28);
        FUN_100fa2cb(*(undefined4 *)((int)fVar38 + 0x1fd0));
      }
      *(int *)((int)fVar38 + 0x1fd0) = iVar24;
      *(int *)((int)fVar38 + 0x1fcc) = iVar16;
      iVar14 = *(int *)((int)fVar38 + 0x1fc8);
      iVar16 = local_13c;
    }
    else {
      iVar24 = *(int *)((int)fVar38 + 0x1fd0);
    }
    *(undefined8 *)(iVar24 + 0x20 + iVar14 * 0x28) = *(undefined8 *)(puVar28 + 8);
    uVar18 = *puVar28;
    uVar5 = puVar28[1];
    uVar6 = puVar28[2];
    uVar7 = puVar28[3];
    uVar8 = puVar28[5];
    uVar9 = puVar28[6];
    uVar10 = puVar28[7];
    puVar29 = (undefined4 *)(iVar24 + 0x10 + iVar14 * 0x28);
    *puVar29 = puVar28[4];
    puVar29[1] = uVar8;
    puVar29[2] = uVar9;
    puVar29[3] = uVar10;
    puVar29 = (undefined4 *)(iVar24 + iVar14 * 0x28);
    *puVar29 = uVar18;
    puVar29[1] = uVar5;
    puVar29[2] = uVar6;
    puVar29[3] = uVar7;
    *(int *)((int)fVar38 + 0x1fc8) = *(int *)((int)fVar38 + 0x1fc8) + 1;
    *(undefined4 *)(iVar16 + 0xc0) = *puVar28;
    iVar24 = local_11c;
  }
  if ((*(byte *)((int)fVar38 + 0x1ed0) & 1) == 0) {
    local_c4 = 0.0;
  }
  else {
    cVar13 = (char)(*(uint *)(iVar16 + 0x120) >> 8);
    bVar32 = ((int)cVar13 & *(uint *)((int)fVar38 + 0x1ed4)) == 0;
    local_c4 = (float)CONCAT31(cVar13 >> 7,!bVar32);
    if ((bVar32) ||
       (*(float *)((int)fVar38 + 0x1eec) * *(float *)((int)fVar38 + 0x1eec) +
        *(float *)((int)fVar38 + 0x1ef0) * *(float *)((int)fVar38 + 0x1ef0) <= DAT_102b8c54)) {
      FUN_10103c64(iVar16,(int)fVar38 + 0x1ee4,*(uint *)((int)fVar38 + 0x1ed4));
    }
    else {
      *(undefined8 *)(iVar16 + 0x128) = *(undefined8 *)((int)fVar38 + 0x1ee4);
      uVar18 = *(undefined4 *)((int)fVar38 + 0x1eec);
      *(undefined4 *)(iVar16 + 0x134) = *(undefined4 *)((int)fVar38 + 0x1ef0);
      *(undefined4 *)(iVar16 + 0x130) = uVar18;
      uVar15 = *(uint *)(iVar16 + 0x120) & 0xfffff1ff;
      *(uint *)(iVar16 + 0x120) = uVar15;
      local_c4 = (float)CONCAT31((int3)(uVar15 >> 8),1);
    }
  }
  fVar17 = local_d4;
  cVar13 = (char)*(uint *)((int)fVar38 + 0x1ed0);
  if ((*(uint *)((int)fVar38 + 0x1ed0) & 2) == 0) {
    auVar45._12_4_ = 0;
    auVar45._0_12_ = local_110._4_12_;
    local_110 = auVar45 << 0x20;
    local_f4 = 0.0;
    fVar17 = fVar38;
  }
  else {
    cVar13 = (char)(*(uint *)(iVar16 + 0x120) >> 0x10);
    uVar15 = *(uint *)((int)fVar38 + 0x1ed8);
    if (((int)cVar13 & uVar15) == 0) {
      local_f4 = 0.0;
      local_110._0_4_ = 0;
    }
    else {
      iVar27 = (int3)(cVar13 >> 7);
      local_f4 = (float)CONCAT31(iVar27,0.0 < *(float *)((int)fVar38 + 0x1ef4));
      local_110._0_4_ = CONCAT31(iVar27,0.0 < *(float *)((int)fVar38 + 0x1ef8));
    }
    uVar34 = *(uint *)(iVar16 + 0x14);
    if ((*(uint *)(iVar16 + 0x120) >> 0x12 & 1) == 0 && (uVar34 & 4) != 0) {
      *(undefined4 *)((int)local_d4 + 0x1ef4) = *(undefined4 *)(iVar16 + 0x60);
      uVar34 = *(uint *)(iVar16 + 0x14);
    }
    if (((uVar34 & 8) != 0) && ((*(byte *)(iVar16 + 0x122) & 4) == 0)) {
      *(undefined4 *)((int)local_d4 + 0x1ef8) = *(undefined4 *)(iVar16 + 100);
    }
    FUN_1010dd28(iVar16,(int)local_d4 + 0x1ef4,uVar15);
    cVar13 = (char)*(undefined4 *)((int)fVar17 + 0x1ed0);
  }
  if (cVar13 < '\0') {
    if (0.0 <= *(float *)((int)fVar17 + 0x1f04)) {
      *(float *)(iVar16 + 0xd4) = *(float *)((int)fVar17 + 0x1f04);
      *(undefined4 *)(iVar16 + 0xdc) = 0;
    }
    if (0.0 <= *(float *)((int)fVar17 + 0x1f08)) {
      *(float *)(iVar16 + 0xd8) = *(float *)((int)fVar17 + 0x1f08);
      *(undefined4 *)(iVar16 + 0xe0) = 0;
    }
  }
  if ((*(byte *)((int)fVar17 + 0x1ed0) & 4) == 0) {
    if (local_114 != iVar24) {
      *(undefined4 *)(iVar16 + 0x78) = 0;
      *(undefined4 *)(iVar16 + 0x7c) = 0;
    }
  }
  else {
    *(undefined8 *)(iVar16 + 0x78) = *(undefined8 *)((int)fVar17 + 0x1efc);
  }
  uVar15 = *(uint *)((int)fVar17 + 0x1ed0);
  if ((uVar15 >> 0xd & 1) != 0) {
    *(undefined4 *)(iVar16 + 0x38) = *(undefined4 *)((int)fVar17 + 0x1f5c);
    uVar18 = *(undefined4 *)((int)fVar17 + 0x1f3c);
    uVar5 = *(undefined4 *)((int)fVar17 + 8000);
    uVar6 = *(undefined4 *)((int)fVar17 + 0x1f44);
    uVar7 = *(undefined4 *)((int)fVar17 + 0x1f48);
    uVar8 = *(undefined4 *)((int)fVar17 + 0x1f50);
    uVar9 = *(undefined4 *)((int)fVar17 + 0x1f54);
    uVar10 = *(undefined4 *)((int)fVar17 + 0x1f58);
    *(undefined4 *)(iVar16 + 0x28) = *(undefined4 *)((int)fVar17 + 0x1f4c);
    *(undefined4 *)(iVar16 + 0x2c) = uVar8;
    *(undefined4 *)(iVar16 + 0x30) = uVar9;
    *(undefined4 *)(iVar16 + 0x34) = uVar10;
    *(undefined4 *)(iVar16 + 0x18) = uVar18;
    *(undefined4 *)(iVar16 + 0x1c) = uVar5;
    *(undefined4 *)(iVar16 + 0x20) = uVar6;
    *(undefined4 *)(iVar16 + 0x24) = uVar7;
    uVar15 = *(uint *)((int)fVar17 + 0x1ed0);
  }
  if ((uVar15 & 8) != 0) {
    FUN_1010de26(iVar16,*(undefined1 *)((int)fVar17 + 0x1f15),*(undefined4 *)((int)fVar17 + 0x1edc))
    ;
    uVar15 = *(uint *)((int)fVar17 + 0x1ed0);
  }
  if ((uVar15 & 0x20) != 0) {
    FUN_101034e2(iVar16,0);
  }
  if (*(char *)(iVar16 + 0x100) == '\x01') {
    FUN_1010d8a9(0);
  }
  FUN_1010d55d(iVar16);
  if ((*(char *)(local_144 - 6) == '\x01') && (*(int *)(iVar16 + 0x3a8) == iVar16)) {
    FUN_1010de75();
  }
  *(undefined4 *)((int)fVar17 + 0x14cc) = 0;
  if (local_114 == iVar24) {
    if (*(char *)(iVar16 + 0xff) != '\0') {
LAB_101085ab:
      FUN_101113a6();
    }
    FUN_1010b0a7();
    FUN_1010e3db();
    *(undefined4 *)((int)fVar17 + 0x1ed0) = 0;
    local_34 = *(undefined8 *)(iVar16 + 0x50);
    uStack_2c = CONCAT44(*(float *)(iVar16 + 0x90) +
                         (float)((ulonglong)*(undefined8 *)(iVar16 + 0x50) >> 0x20),
                         *(float *)(iVar16 + 0x60) + (float)*(undefined8 *)(iVar16 + 0x50));
    uVar15 = FUN_10111269();
    uVar34 = (uint)(float)local_130;
  }
  else {
    if (*(char *)(iVar16 + 0xff) != '\0') goto LAB_101085ab;
    local_f8 = (float *)CONCAT31(local_f8._1_3_,*(undefined1 *)(iVar16 + 0x11c));
    *(undefined1 *)(iVar16 + 0xf9) = 1;
    *(bool *)(iVar16 + 0x104) = param_2 != (undefined1 *)0x0;
    uVar6 = _UNK_102b8c6c;
    uVar5 = _UNK_102b8c68;
    uVar18 = _UNK_102b8c64;
    *(undefined4 *)(iVar16 + 0x28c) = _DAT_102b8c60;
    *(undefined4 *)(iVar16 + 0x290) = uVar18;
    *(undefined4 *)(iVar16 + 0x294) = uVar5;
    *(undefined4 *)(iVar16 + 0x298) = uVar6;
    if (*(int *)(iVar16 + 0x13c) < 1) {
      iVar14 = 8;
      if (*(int *)(iVar16 + 0x13c) != 0) {
        iVar14 = 1;
      }
      uVar18 = FUN_100fa1fa(iVar14 * 4);
      if (*(int *)(iVar16 + 0x140) != 0) {
        FUN_1025b2d0(uVar18,*(int *)(iVar16 + 0x140),*(int *)(iVar16 + 0x138) << 2);
        FUN_100fa2cb(*(undefined4 *)(iVar16 + 0x140));
      }
      *(undefined4 *)(iVar16 + 0x140) = uVar18;
      *(int *)(iVar16 + 0x13c) = iVar14;
    }
    *(undefined4 *)(iVar16 + 0x138) = 1;
    FUN_10187672();
    *(undefined4 *)(iVar16 + 0x1ec) = 0xffffffff;
    if (((uint)(float)local_130 >> 0x17 & 1) != 0) {
      FUN_1018dc92(*(undefined4 *)(iVar16 + 0x2e8),2);
      FUN_1018de6c(*(undefined4 *)(iVar16 + 0x2e8),1);
    }
    if (*(char *)(iVar16 + 0x408) == '\x01') {
      FUN_101025fb(iVar16);
    }
    if (((*(int *)(iVar16 + 0x3c) == 0) || (*(int *)(*(int *)(iVar16 + 0x3c) + 0x58) != iVar16)) &&
       ((*(byte *)(iVar16 + 0x409) & 1) == 0)) {
      if (((*(int *)((int)fVar17 + 0x2224) != 0) &&
          (*(char *)(*(int *)((int)fVar17 + 0x2224) + 0xfa) == '\x01')) &&
         ((local_130 & 0x20000) == 0)) goto LAB_10108730;
      bVar22 = (local_13d ^ 1U) & ((uint)(float)local_130 >> 0x1c & 1) == 0;
    }
    else {
LAB_10108730:
      bVar22 = 0;
    }
    if ((local_118 != 0) && (bVar22 == 0)) {
      _Str2 = *(char **)(iVar16 + 4);
      iVar14 = _strcmp(param_1,_Str2);
      if (iVar14 != 0) {
        local_34 = CONCAT44(local_34._4_4_,*(undefined4 *)(iVar16 + 0xb0));
        uVar18 = FUN_100fa267(_Str2,&local_34,param_1);
        *(undefined4 *)(iVar16 + 4) = uVar18;
        *(float *)(iVar16 + 0xb0) = (float)local_34;
      }
    }
    local_b4 = (undefined4 *)(iVar16 + 0x68);
    FUN_1010cc64(iVar16 + 0x70);
    if ('\0' < *(char *)(iVar16 + 0x11b)) {
      *(char *)(iVar16 + 0x11b) = *(char *)(iVar16 + 0x11b) + -1;
    }
    if ('\0' < *(char *)(iVar16 + 0x11c)) {
      *(char *)(iVar16 + 0x11c) = *(char *)(iVar16 + 0x11c) + -1;
    }
    if ('\0' < *(char *)(iVar16 + 0x11d)) {
      *(char *)(iVar16 + 0x11d) = *(char *)(iVar16 + 0x11d) + -1;
    }
    if ((local_118 == 0) && ((local_f4._0_1_ & local_110[0]) == 0)) {
      *(undefined1 *)(iVar16 + 0x11c) = 1;
    }
    if ((((local_130 & 0x6000000) != 0 & local_13d) == 1) &&
       (*(undefined1 *)(iVar16 + 0x11c) = 1, (local_130 & 0x40) != 0)) {
      if (local_f4._0_1_ == 0) {
        *(undefined4 *)(iVar16 + 0x60) = 0;
        *(undefined4 *)(iVar16 + 0x58) = 0;
      }
      if (local_110[0] == 0) {
        *(undefined4 *)(iVar16 + 100) = 0;
        *(undefined4 *)(iVar16 + 0x5c) = 0;
      }
      *(undefined4 *)(iVar16 + 0x68) = 0;
      *(undefined4 *)(iVar16 + 0x6c) = 0;
      *(undefined4 *)(iVar16 + 0x70) = 0;
      *(undefined4 *)(iVar16 + 0x74) = 0;
    }
    FUN_1010df56();
    FUN_1010b0a7();
    FUN_1010e3db();
    local_144 = *(uint *)(iVar16 + 0xc);
    bVar32 = (local_144 >> 0x18 & 1) == 0;
    iVar14 = 0xd00;
    if (bVar32 || (*(byte *)(iVar16 + 0x409) & 1) != 0) {
      iVar14 = 0xd08;
      if ((local_144 >> 0x1b & 1) != 0) {
        iVar14 = 0xce0;
      }
      if ((local_144 & 0x6000000) == 0) {
        iVar14 = 0xce0;
      }
    }
    fVar38 = *(float *)((int)fVar17 + iVar14);
    *(float *)(iVar16 + 0x8c) = fVar38;
    uVar18 = *(undefined4 *)((int)fVar17 + 0xcd4);
    *(undefined4 *)(iVar16 + 0x84) = *(undefined4 *)((int)fVar17 + 0xcd8);
    *(undefined4 *)(iVar16 + 0x80) = uVar18;
    if ((((((local_144 >> 0x1a & 1) == 0 & ~(bVar32 | *(byte *)(iVar16 + 0x409))) == 1) &&
         ((*(byte *)(iVar16 + 0x14) & 2) == 0)) && (fVar38 == 0.0)) && (!NAN(fVar38))) {
      uVar18 = 0;
      if ((local_144 >> 10 & 1) != 0) {
        uVar18 = *(undefined4 *)((int)fVar17 + 0xcd8);
      }
      *(undefined4 *)(iVar16 + 0x80) = 0;
      *(undefined4 *)(iVar16 + 0x84) = uVar18;
      uVar18 = 0;
    }
    local_120 = *(undefined4 *)((int)fVar17 + 0x1f60);
    fVar33 = (float10)FUN_100fdbca(uVar18,*(undefined4 *)((int)fVar17 + 0xd1c));
    uVar18 = FUN_100fdbca((float)fVar33,local_120);
    *(float *)(iVar16 + 0x1a8) = (float)extraout_ST0;
    fVar38 = *(float *)((int)fVar17 + 0x1f64);
    *(float *)(iVar16 + 0x1ac) = fVar38;
    fVar42 = 0.0;
    fVar46 = 0.0;
    if ((local_144 & 1) == 0) {
      fVar46 = *(float *)((int)fVar17 + 0xd10) + *(float *)((int)fVar17 + 0xd10) +
               *(float *)((int)fVar17 + 0x1228);
    }
    *(float *)(iVar16 + 0x90) = fVar46;
    if ((local_144 >> 10 & 1) != 0) {
      fVar42 = *(float *)((int)fVar17 + 0xd10) + *(float *)((int)fVar17 + 0xd10) +
               fVar38 + *(float *)((int)fVar17 + 0x1228);
    }
    *(float *)(iVar16 + 0x94) = fVar42;
    *(undefined4 *)(iVar16 + 0x2e0) = *(undefined4 *)((int)fVar17 + 0x1228);
    uVar21 = (undefined3)((uint)uVar18 >> 8);
    iVar14 = CONCAT31(uVar21,local_13e);
    if (local_f4._0_1_ != '\0') {
      iVar14 = CONCAT31(uVar21,local_13e);
      if ((*(float *)(iVar16 + 0x78) != 0.0) || (NAN(*(float *)(iVar16 + 0x78)))) {
        iVar14 = CONCAT31(uVar21,1);
      }
    }
    if ((local_110[0] != '\0') &&
       ((*(float *)(iVar16 + 0x7c) != 0.0 || (NAN(*(float *)(iVar16 + 0x7c)))))) {
      local_13e = 1;
    }
    local_120 = CONCAT31(local_120._1_3_,(char)iVar14);
    if (((local_144 & 0x21) == 0) && ((*(byte *)(iVar16 + 0x409) & 1) == 0)) {
      iVar14 = *(int *)(iVar16 + 0x50);
      local_34 = *(undefined8 *)(iVar16 + 0x50);
      uStack_2c = CONCAT44(fVar46 + (float)((ulonglong)*(undefined8 *)(iVar16 + 0x50) >> 0x20),
                           *(float *)(iVar16 + 0x60) + (float)*(undefined8 *)(iVar16 + 0x50));
      if ((((*(int *)((int)fVar17 + 0x14d0) == iVar16) && (*(int *)((int)fVar17 + 0x1510) == 0)) &&
          (*(int *)((int)fVar17 + 0x1514) == 0)) && (*(int *)((int)fVar17 + 0x1528) == 0)) {
        uStack_88 = 0;
        uStack_84 = 0;
        uStack_80 = 0;
        local_134 = fVar42;
        local_8c = fVar46;
        iVar14 = FUN_10102f3a(&local_34,&uStack_2c,1);
        fVar46 = local_8c;
        fVar42 = local_134;
        if ((((char)iVar14 != '\0') && (*(short *)((int)fVar17 + 0xb22) == 2)) &&
           (iVar14 = FUN_1010e481(0x290), fVar46 = local_8c, fVar42 = local_134, iVar14 == -1)) {
          *(undefined1 *)(iVar16 + 0xfd) = 1;
        }
      }
      if (*(char *)(iVar16 + 0xfd) == '\x01') {
        local_13e = local_13e | *(byte *)(iVar16 + 0xfc);
        *(byte *)(iVar16 + 0xfc) = *(byte *)(iVar16 + 0xfc) ^ 1;
        iVar14 = FUN_1010e508(iVar16);
        fVar46 = *(float *)(iVar16 + 0x90);
        fVar42 = *(float *)(iVar16 + 0x94);
      }
    }
    else {
      *(undefined1 *)(iVar16 + 0xfc) = 0;
    }
    auVar45 = local_110;
    *(undefined1 *)(iVar16 + 0xfd) = 0;
    local_8c = *(float *)(iVar16 + 0xec);
    local_134 = *(float *)(iVar16 + 0xf0);
    bVar22 = 0;
    *(undefined4 *)(iVar16 + 0x98) = 0;
    *(float *)(iVar16 + 0x9c) = fVar42 + fVar46;
    *(undefined8 *)(iVar16 + 0xa0) = 0;
    *(undefined4 *)(iVar16 + 0xec) = 0;
    *(undefined4 *)(iVar16 + 0xf0) = 0;
    if ((local_144 & 0x40) != 0 && local_f4._0_1_ == '\0') {
      bVar22 = *(byte *)(iVar16 + 0xfc) ^ 1;
    }
    if ((local_144 & 0x40) == 0 || local_110[0] != '\0') {
      uVar15 = 0;
    }
    else {
      uVar15 = CONCAT31((int3)((uint)iVar14 >> 8),*(undefined1 *)(iVar16 + 0xfc)) ^ 1;
    }
    if (local_f4._0_1_ == '\0') {
      bVar32 = '\0' < *(char *)(iVar16 + 0x118);
    }
    else {
      bVar32 = false;
    }
    if (local_110[0] == '\0') {
      bVar23 = '\0' < *(char *)(iVar16 + 0x119);
      local_110._1_3_ = (undefined3)((uint)fVar17 >> 8);
    }
    else {
      bVar23 = false;
      local_110._1_3_ = 0;
    }
    bVar12 = bVar32 | bVar22 & 1;
    local_110[0] = bVar23 | (byte)uVar15;
    local_110._4_12_ = auVar45._4_12_;
    bVar25 = bVar12 + 2;
    if (bVar23 == false && (uVar15 & 1) == 0) {
      bVar25 = bVar12;
    }
    local_f4 = (float)uVar15;
    FUN_1010cea8(iVar16 + 0x70,bVar25);
    fVar42 = local_138;
    fVar38 = *(float *)(iVar16 + 0x60);
    fVar17 = *(float *)(iVar16 + 100);
    fVar46 = fVar38;
    if (bVar32 != false || (bVar22 & 1) != 0) {
      fVar46 = (float)local_34;
      if ((bVar22 == 0) && (*(char *)(iVar16 + 0x11a) == '\x01')) {
        local_100 = fVar38;
        local_fc = fVar17;
        fVar33 = (float10)FUN_100fdbca(fVar38,(float)local_34);
        local_90 = (float)fVar33;
        fVar38 = local_100;
        fVar46 = local_90;
        fVar17 = local_fc;
      }
      *(float *)(iVar16 + 0x60) = fVar46;
      local_120 = CONCAT31(local_120._1_3_,1);
    }
    if ((local_110[0] & 1) != 0) {
      fVar43 = local_34._4_4_;
      if ((local_f4._0_1_ == '\0') && (*(char *)(iVar16 + 0x11a) == '\x01')) {
        local_100 = fVar38;
        local_fc = fVar17;
        fVar33 = (float10)FUN_100fdbca(*(undefined4 *)(iVar16 + 100),local_34._4_4_);
        local_94 = (float)fVar33;
        fVar46 = *(float *)(iVar16 + 0x60);
        fVar38 = local_100;
        fVar43 = local_94;
        fVar17 = local_fc;
      }
      *(float *)(iVar16 + 100) = fVar43;
      local_13e = 1;
    }
    if ((fVar38 != fVar46) || (NAN(fVar38) || NAN(fVar46))) {
LAB_10108c0a:
      FUN_1010e508(iVar16);
    }
    else if ((fVar17 != *(float *)(iVar16 + 100)) || (NAN(fVar17) || NAN(*(float *)(iVar16 + 100))))
    goto LAB_10108c0a;
    uVar15 = local_144 >> 0x18;
    FUN_1010d23f(iVar16 + 0x60);
    fVar17 = local_d4;
    *(float *)(iVar16 + 100) = local_34._4_4_;
    *(float *)(iVar16 + 0x60) = (float)local_34;
    uVar1 = local_34;
    if (((uVar15 & 1) == 0 & *(byte *)(iVar16 + 0xfc)) == 1) {
      fVar38 = (float)*(undefined8 *)(iVar16 + 0x50);
      fVar46 = (float)((ulonglong)*(undefined8 *)(iVar16 + 0x50) >> 0x20);
      uVar1 = CONCAT44((*(float *)(iVar16 + 0x90) + fVar46) - fVar46,
                       ((float)local_34 + fVar38) - fVar38);
    }
    *(undefined8 *)(iVar16 + 0x58) = uVar1;
    if (((local_13d != false) &&
        (*(undefined4 *)(iVar16 + 0x114) = 0xffffffff, (local_144 >> 0x1a & 1) != 0)) &&
       (((byte)(local_144 >> 0x1b) & 1) == 0 && local_c4._0_1_ == '\0')) {
      *(undefined8 *)(iVar16 + 0x50) =
           *(undefined8 *)
            (*(int *)((int)local_d4 + 0x1fd0) + -0x10 + *(int *)((int)local_d4 + 0x1fc8) * 0x28);
    }
    local_130 = local_130 & 0xffffffff03000000;
    if ((local_144 >> 0x18 & 1) != 0) {
      *(undefined2 *)(iVar16 + 0x10c) = *(undefined2 *)((int)fVar42 + 0x1d8);
      iVar14 = *(int *)((int)fVar42 + 0x1d8);
      if (iVar14 == *(int *)((int)fVar42 + 0x1dc)) {
        if (iVar14 == 0) {
          iVar24 = 8;
        }
        else {
          iVar24 = iVar14 / 2 + iVar14;
        }
        iVar26 = iVar14 + 1;
        if (iVar14 + 1 < iVar24) {
          iVar26 = iVar24;
        }
        local_110._0_4_ = iVar26;
        iVar24 = FUN_100fa1fa(iVar26 * 4);
        fVar42 = local_138;
        if (*(int *)((int)local_138 + 0x1e0) != 0) {
          FUN_1025b2d0(iVar24,*(int *)((int)local_138 + 0x1e0),*(int *)((int)local_138 + 0x1d8) << 2
                      );
          FUN_100fa2cb(*(undefined4 *)((int)fVar42 + 0x1e0));
        }
        *(int *)((int)fVar42 + 0x1e0) = iVar24;
        *(undefined4 *)((int)fVar42 + 0x1dc) = local_110._0_4_;
        iVar14 = *(int *)((int)fVar42 + 0x1d8);
      }
      else {
        iVar24 = *(int *)((int)fVar42 + 0x1e0);
      }
      *(int *)(iVar24 + iVar14 * 4) = iVar16;
      *(int *)((int)fVar42 + 0x1d8) = *(int *)((int)fVar42 + 0x1d8) + 1;
      if ((((byte)(local_144 >> 0x1a) & 1) == 0 && local_c4._0_1_ == '\0') &&
         ((float)local_130 != 3.761582e-37)) {
        *(undefined8 *)(iVar16 + 0x50) = *(undefined8 *)((int)fVar42 + 0x144);
      }
    }
    fVar38 = *(float *)(iVar16 + 0x128);
    if (((fVar38 == DAT_102b89b4) && (!NAN(fVar38) && !NAN(DAT_102b89b4))) ||
       (*(char *)(iVar16 + 0x11c) != '\0')) {
      if ((((local_144 >> 0x1c & 1) != 0) ||
          (((local_144 >> 0x1a & 1) != 0 && local_c4._0_1_ == '\0' && ('\0' < (char)local_f8)))) ||
         (((local_144 >> 0x19 & 1) != 0 && local_c4._0_1_ == '\0' &&
          ((float)local_130 != 3.761582e-37)))) {
        FUN_1010e531(&local_34,iVar16);
        *(undefined8 *)(iVar16 + 0x50) = local_34;
      }
    }
    else {
      local_34 = CONCAT44(*(float *)(iVar16 + 300) -
                          (float)((ulonglong)*(undefined8 *)(iVar16 + 0x130) >> 0x20) *
                          (float)((ulonglong)*(undefined8 *)(iVar16 + 0x58) >> 0x20),
                          fVar38 - (float)*(undefined8 *)(iVar16 + 0x130) *
                                   (float)*(undefined8 *)(iVar16 + 0x58));
      FUN_10103c64(iVar16,&local_34,0);
    }
    local_f8 = (float *)(iVar16 + 0x58);
    if (((-1 < *(int *)(iVar16 + 0x4c)) && (*(char *)(iVar16 + 0xf8) == '\0')) &&
       (iVar14 = *(int *)(iVar16 + 0x3c), (*(byte *)(iVar14 + 5) & 0x10) == 0)) {
      uVar1 = *(undefined8 *)(iVar14 + 8);
      fVar46 = (float)((ulonglong)uVar1 >> 0x20);
      fVar38 = (float)((ulonglong)*(undefined8 *)(iVar14 + 0x10) >> 0x20) + fVar46;
      fVar42 = (float)*(undefined8 *)(iVar16 + 0x50);
      fVar43 = (float)((ulonglong)*(undefined8 *)(iVar16 + 0x50) >> 0x20);
      fVar47 = (float)((ulonglong)*(undefined8 *)(iVar16 + 0x58) >> 0x20) + fVar43;
      auVar36._4_4_ = -(uint)(fVar47 <= fVar38);
      auVar36._0_4_ =
           -(uint)((float)*(undefined8 *)(iVar16 + 0x58) + fVar42 <=
                  (float)*(undefined8 *)(iVar14 + 0x10) + (float)uVar1);
      auVar4._4_8_ = uVar1;
      auVar4._0_4_ = -(uint)(fVar38 <= fVar47);
      auVar35._0_8_ = auVar4._0_8_ << 0x20;
      auVar35._8_4_ = -(uint)((float)uVar1 <= fVar42);
      auVar35._12_4_ = -(uint)(fVar46 <= fVar43);
      auVar36._8_8_ = auVar35._8_8_;
      iVar14 = movmskps(iVar14,auVar36);
      if (iVar14 != 0xf) {
        iVar14 = iVar16 + 0x58;
        uVar18 = FUN_1010e792(iVar16 + 0x50,iVar14,0x20);
        *(undefined4 *)(iVar16 + 0x3c) = uVar18;
        FUN_1010b0a7(iVar14,uVar18);
        FUN_1010e3db();
      }
    }
    if (*(char *)(iVar16 + 0xf8) == '\x01') {
      FUN_1010eb01();
    }
    iVar14 = *(int *)(iVar16 + 0x3c);
    local_34 = *(undefined8 *)(iVar14 + 8);
    fVar39 = (float)*(undefined8 *)(iVar14 + 0x10) + (float)local_34;
    fVar47 = (float)((ulonglong)local_34 >> 0x20);
    fVar40 = (float)((ulonglong)*(undefined8 *)(iVar14 + 0x10) >> 0x20) + fVar47;
    uStack_2c = CONCAT44(fVar40,fVar39);
    fVar42 = (float)*(undefined8 *)((int)fVar17 + 0xde0);
    fVar43 = (float)((ulonglong)*(undefined8 *)((int)fVar17 + 0xde0) >> 0x20);
    fVar38 = (float)*(undefined8 *)((int)fVar17 + 0xdd8);
    fVar46 = (float)((ulonglong)*(undefined8 *)((int)fVar17 + 0xdd8) >> 0x20);
    uVar15 = -(uint)(fVar42 <= fVar38);
    uVar34 = -(uint)(fVar43 <= fVar46);
    fVar38 = (float)(~uVar15 & (uint)fVar42 | (uint)fVar38 & uVar15);
    fVar46 = (float)(~uVar34 & (uint)fVar43 | (uint)fVar46 & uVar34);
    fVar42 = 0.0;
    fVar43 = 0.0;
    fVar41 = (float)*(undefined8 *)(iVar14 + 0x20);
    fVar48 = (float)((ulonglong)*(undefined8 *)(iVar14 + 0x20) >> 0x20);
    local_44 = CONCAT44(fVar48 + fVar46,fVar41 + fVar38);
    uStack_3c = CONCAT44(((float)((ulonglong)*(undefined8 *)(iVar14 + 0x28) >> 0x20) + fVar48) -
                         fVar46,((float)*(undefined8 *)(iVar14 + 0x28) + fVar41) - fVar38);
    bVar22 = SUB41(local_c4,0) | (byte)(local_144 >> 0x18) & 1;
    iVar24 = CONCAT31((int3)((uint)local_c4 >> 8),bVar22);
    if (bVar22 == 0) {
      if (*(char *)(iVar16 + 0xf8) == '\0') {
        if (((float)local_34 < fVar39) && (fVar47 < fVar40)) {
          FUN_1010ed4b();
          iVar24 = extraout_EDX;
        }
      }
      else if (0 < *(int *)((int)fVar17 + 0xc9c)) {
        if ((*(int *)((int)fVar17 + 0x14dc) == 0) ||
           (iVar24 = *(int *)(iVar16 + 0x3b0),
           iVar24 != *(int *)(*(int *)((int)fVar17 + 0x14dc) + 0x3b0))) {
          fStack_dc = 0.0;
          fStack_d8 = 0.0;
          local_e4 = fVar38;
          fStack_e0 = fVar46;
          uVar50 = FUN_1010ede0(iVar14);
          iVar24 = (int)((ulonglong)uVar50 >> 0x20);
          uVar1 = *(undefined8 *)((int)uVar50 + 0x18);
          uVar50 = *(undefined8 *)((int)uVar50 + 0x10);
          fVar47 = (float)uVar1 + (float)uVar50;
          fVar39 = (float)((ulonglong)uVar1 >> 0x20) + (float)((ulonglong)uVar50 >> 0x20);
          fVar38 = local_e4;
          fVar46 = fStack_e0;
          fVar42 = fStack_dc;
          fVar43 = fStack_d8;
        }
        else {
          uVar50 = *(undefined8 *)((int)fVar17 + 0x2024);
          fVar47 = *(float *)((int)fVar17 + 0x202c);
          fVar39 = *(float *)((int)fVar17 + 0x2030);
        }
        fVar40 = (float)uVar50 + fVar38;
        fVar41 = (float)((ulonglong)uVar50 >> 0x20) + fVar46;
        auVar44._0_8_ = CONCAT44(fVar39 - fVar46,fVar47 - fVar38);
        auVar44._8_4_ = 0.0 - fVar42;
        auVar44._12_4_ = 0.0 - fVar43;
        local_44 = CONCAT44(fVar41,fVar40);
        local_f4 = *(float *)(iVar16 + 0x58);
        fVar38 = *(float *)(iVar16 + 0x5c);
        uStack_3c = auVar44._0_8_;
        if ((*(byte *)(iVar16 + 0x120) & 1) == 0) {
          if (*(int *)(iVar16 + 0x434) == 0) {
            if ((*(byte *)(iVar16 + 0xc) & 1) == 0) {
              fVar38 = *(float *)(iVar16 + 0x90);
            }
          }
          else {
            uStack_f0 = 0;
            uStack_ec = 0;
            uStack_e8 = 0;
            local_110 = auVar44;
            local_e4 = fVar40;
            fStack_e0 = fVar41;
            fStack_dc = fVar42 + 0.0;
            fStack_d8 = fVar43 + 0.0;
            fVar33 = (float10)FUN_101155f9();
            fVar38 = (float)fVar33;
            iVar24 = extraout_EDX_00;
            auVar44 = local_110;
            fVar40 = local_e4;
            fVar41 = fStack_e0;
            local_98 = fVar38;
          }
        }
        uVar2 = *(ulonglong *)(iVar16 + 0x50);
        auVar37._8_8_ = 0;
        auVar37._0_8_ = uVar2;
        auVar45 = minps(auVar44,auVar37);
        uVar15 = -(uint)((float)uVar2 < fVar40 - local_f4);
        uVar34 = -(uint)((float)(uVar2 >> 0x20) < fVar41 - fVar38);
        *(ulonglong *)(iVar16 + 0x50) =
             CONCAT44(~uVar34 & auVar45._4_4_,~uVar15 & auVar45._0_4_) |
             CONCAT44((uint)(fVar41 - fVar38) & uVar34,(uint)(fVar40 - local_f4) & uVar15);
      }
    }
    *(ulonglong *)(iVar16 + 0x50) =
         CONCAT44((float)(int)(float)((ulonglong)*(undefined8 *)(iVar16 + 0x50) >> 0x20),
                  (float)(int)(float)*(undefined8 *)(iVar16 + 0x50));
    if ((((local_144 >> 0x18 & 1) == 0) || (iVar14 = 0xcfc, (*(byte *)(iVar16 + 0x409) & 1) != 0))
       && (iVar14 = 0xcdc, (local_144 & 0xc000000) == 0x4000000)) {
      iVar14 = 0xd04;
    }
    fVar38 = *(float *)((int)fVar17 + iVar14);
    *(float *)(iVar16 + 0x88) = fVar38;
    bVar22 = (local_144 >> 0xc & 1) == 0 & local_13d;
    local_e4 = (float)CONCAT31(local_e4._1_3_,bVar22);
    if ((bVar22 == 1) && ((local_144 & 0x4000000) == 0)) {
      local_e4 = (float)CONCAT31(local_e4._1_3_,
                                 (local_144 >> 0x19 & 1) == 0 &
                                 ((local_144 >> 0x18 & 1) == 0 | *(byte *)(iVar16 + 0x409)));
    }
    uVar21 = (undefined3)((uint)iVar24 >> 8);
    uVar15 = CONCAT31(uVar21,1);
    if (*(int *)(iVar16 + 0x434) == 0) {
      uVar15 = CONCAT31(uVar21,*(undefined1 *)(iVar16 + 0x409)) ^ 1;
    }
    if ((local_144 >> 0x18 & 1) == 0) {
LAB_101092bf:
      local_f4 = (float)(*(byte *)((int)fVar17 + 0x7e) + 1);
    }
    else {
      uVar34 = uVar15 & 0xff;
      uVar15 = 0;
      if (*(char *)(*(int *)(iVar16 + 0x3a0) + 0xfe) == '\0') {
        uVar15 = uVar34;
      }
      if ((local_144 >> 0x1a & 1) != 0) goto LAB_101092bf;
      local_f4 = (float)(*(uint *)(iVar16 + 0x14) >> 3 & *(uint *)(iVar16 + 0x14) >> 2 & 1);
    }
    uStack_18 = 0;
    uStack_1c = 0;
    uStack_20 = 0;
    local_24 = 0;
    local_48 = 0xffffffff;
    local_4c = 0xffffffff;
    local_110._0_4_ = uVar15;
    fVar33 = (float10)FUN_100fdbca(*(float *)((int)fVar17 + 0x1228) * DAT_102b8c74,
                                   DAT_102b8c70 * *(float *)((int)fVar17 + 0x1228) +
                                   fVar38 + DAT_1028b430);
    local_c4 = (float)fVar33;
    uStack_c0 = 0;
    uStack_bc = 0;
    uStack_b8 = 0;
    local_9c = local_c4;
    if ((((local_110[0] & 1) != 0) && (*(char *)(iVar16 + 0xfc) == '\0')) &&
       (iVar14 = FUN_1010ee11(&local_4c,local_f4,&local_24,&local_44), iVar14 != 0)) {
      local_120 = CONCAT31(local_120._1_3_,(byte)local_120 | (byte)iVar14);
      local_13e = local_13e | iVar14 != 1;
    }
    iVar24 = local_13c;
    *(undefined1 *)(iVar16 + 0x105) = (undefined1)local_48;
    *(undefined1 *)(iVar16 + 0x106) = (undefined1)local_4c;
    iVar14 = *(int *)(iVar16 + 0x3c);
    if (*(char *)(iVar16 + 0xf8) == '\x01') {
      if (*(char *)(iVar14 + 0x55) == '\0') {
        *(undefined8 *)(iVar14 + 8) = *(undefined8 *)(local_13c + 0x50);
        iVar14 = *(int *)(local_13c + 0x3c);
      }
      if (*(char *)(iVar14 + 0x56) == '\0') {
        *(undefined8 *)(iVar14 + 0x10) = *(undefined8 *)(local_13c + 0x58);
        iVar14 = *(int *)(local_13c + 0x3c);
      }
      *(ulonglong *)(iVar14 + 0x20) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(iVar14 + 0x100) >> 0x20) +
                    (float)((ulonglong)*(undefined8 *)(iVar14 + 8) >> 0x20),
                    (float)*(undefined8 *)(iVar14 + 0x100) + (float)*(undefined8 *)(iVar14 + 8));
      FUN_10126046(&local_5c,iVar14 + 0x100,iVar14 + 0x108);
      *(ulonglong *)(iVar14 + 0x28) = CONCAT44(fStack_58,local_5c);
      iVar14 = *(int *)(iVar24 + 0x3c);
      local_34 = *(undefined8 *)(iVar14 + 8);
      uStack_2c = CONCAT44((float)((ulonglong)*(undefined8 *)(iVar14 + 0x10) >> 0x20) +
                           (float)((ulonglong)local_34 >> 0x20),
                           (float)*(undefined8 *)(iVar14 + 0x10) + (float)local_34);
    }
    *(undefined8 *)(iVar24 + 0x44) = *(undefined8 *)(iVar14 + 8);
    if (*(char *)(iVar24 + 0xfc) == '\0') {
      if (local_118 == 0) {
        fVar38 = 0.0;
        fVar46 = 0.0;
      }
      else {
        fVar38 = (float)*(undefined8 *)(iVar24 + 0x80);
        fVar46 = (float)((ulonglong)*(undefined8 *)(iVar24 + 0x80) >> 0x20);
        fVar38 = fVar38 + fVar38 + (float)*(undefined8 *)(iVar24 + 0x68);
        fVar46 = fVar46 + fVar46 + (float)((ulonglong)*(undefined8 *)(iVar24 + 0x68) >> 0x20);
      }
      fVar42 = *(float *)(iVar24 + 0x60);
      if ((local_120 & 1) == 0) {
        fVar42 = local_8c + (*(float *)(iVar24 + 0x254) - *(float *)(iVar24 + 0x24c));
      }
      if (local_13e == 0) {
        local_134 = local_134 + (*(float *)(iVar24 + 600) - *(float *)(iVar24 + 0x250));
      }
      else {
        local_134 = *(float *)(iVar24 + 100) -
                    (*(float *)(iVar24 + 0x9c) + *(float *)(iVar24 + 0xa4));
      }
      bVar22 = 1;
      bVar30 = (local_144 >> 0xe & 1) != 0;
      bVar32 = local_134 < fVar46;
      bVar31 = (local_144 & 8) == 0;
      bVar23 = bVar30 || bVar31 && bVar32;
      local_13e = *(byte *)(iVar24 + 0xf4);
      *(bool *)(iVar24 + 0xf5) = bVar23;
      if (-1 < (short)local_144) {
        fVar43 = 0.0;
        if (bVar30 || bVar31 && bVar32) {
          fVar43 = *(float *)((int)fVar17 + 0xd44);
        }
        bVar22 = 0;
        if ((fVar42 - fVar43 < fVar38) && (fVar17 = local_d4, (local_144 & 8) == 0)) {
          bVar22 = (byte)(local_144 >> 0xb) & 1;
        }
      }
      *(byte *)(iVar24 + 0xf4) = bVar22;
      bVar25 = local_13e != bVar22 | *(char *)(iVar24 + 0xf7) * '\x02';
      *(byte *)(iVar24 + 0xf7) = bVar25;
      if (bVar25 == 0) {
LAB_10109587:
        *(undefined1 *)(iVar24 + 0xf6) = 0;
        fVar38 = 0.0;
        if (bVar22 != 0) goto LAB_10109595;
      }
      else {
        uVar15 = 0;
        do {
          uVar15 = uVar15 + 1;
          bVar25 = bVar25 - 1 & bVar25;
        } while (bVar25 != 0);
        if (uVar15 < 4) goto LAB_10109587;
        *(undefined1 *)(iVar24 + 0xf4) = 1;
        *(undefined1 *)(iVar24 + 0xf6) = 1;
LAB_10109595:
        bVar23 = true;
        if (!bVar30 && (!bVar31 || !bVar32)) {
          bVar23 = (local_144 & 8) == 0 && local_134 - *(float *)((int)fVar17 + 0xd44) < fVar46;
          *(bool *)(iVar24 + 0xf5) = bVar23;
        }
        fVar38 = *(float *)((int)fVar17 + 0xd44);
      }
      fVar46 = 0.0;
      if (bVar23) {
        fVar46 = *(float *)((int)fVar17 + 0xd44);
      }
      *(float *)(iVar24 + 0xec) = fVar46;
      *(float *)(iVar24 + 0xf0) = fVar38;
      *(ulonglong *)(iVar24 + 0xa0) =
           CONCAT44(*(float *)(iVar24 + 0xa4) + fVar38,*(float *)(iVar24 + 0xa0) + fVar46);
    }
    bVar32 = (float)local_130 == 3.761582e-37;
    bVar23 = (local_144 & 0x5000000) != 0x1000000;
    local_130 = CONCAT71(local_130._1_7_,bVar23 || bVar32);
    pfVar20 = (float *)((int)local_138 + 0x28c);
    if (bVar23 || bVar32) {
      pfVar20 = (float *)&local_34;
    }
    local_5c = *pfVar20;
    fStack_58 = pfVar20[1];
    fStack_54 = pfVar20[2];
    fStack_50 = pfVar20[3];
    local_6c = *(float *)(iVar24 + 0x50);
    local_68 = *(undefined4 *)(iVar24 + 0x54);
    fVar46 = (float)*(undefined8 *)(iVar24 + 0x50);
    fVar42 = (float)((ulonglong)*(undefined8 *)(iVar24 + 0x50) >> 0x20);
    fVar38 = *(float *)(iVar24 + 0x90) + fVar42;
    local_64 = CONCAT44(fVar38,*(float *)(iVar24 + 0x60) + fVar46);
    if ((*(byte *)(iVar24 + 0x409) & 1) == 0) {
      fVar38 = fVar42;
    }
    fVar43 = (float)*(undefined8 *)(iVar24 + 0x58) + fVar46;
    fVar47 = (float)((ulonglong)*(undefined8 *)(iVar24 + 0x58) >> 0x20) + fVar42;
    *(uint *)(iVar24 + 0x23c) =
         ~-(uint)(local_5c <= fVar46) & (uint)local_5c | (uint)fVar46 & -(uint)(local_5c <= fVar46);
    *(uint *)(iVar24 + 0x240) =
         ~-(uint)(fStack_58 <= fVar38) & (uint)fStack_58 |
         (uint)fVar38 & -(uint)(fStack_58 <= fVar38);
    *(uint *)(iVar24 + 0x244) =
         ~-(uint)(fVar43 < fStack_54) & (uint)fStack_54 | (uint)fVar43 & -(uint)(fVar43 < fStack_54)
    ;
    *(uint *)(iVar24 + 0x248) =
         ~-(uint)(fVar47 < fStack_50) & (uint)fStack_50 | (uint)fVar47 & -(uint)(fVar47 < fStack_50)
    ;
    fVar46 = fVar46 + *(float *)(iVar24 + 0x98);
    fVar42 = fVar42 + *(float *)(iVar24 + 0x9c);
    fVar43 = fVar43 - *(float *)(iVar24 + 0xa0);
    fVar47 = fVar47 - *(float *)(iVar24 + 0xa4);
    *(float *)(iVar24 + 0x24c) = fVar46;
    *(float *)(iVar24 + 0x250) = fVar42;
    *(float *)(iVar24 + 0x254) = fVar43;
    *(float *)(iVar24 + 600) = fVar47;
    pfVar20 = (float *)((int)fVar17 + 0xd18);
    if ((local_144 & 0x401) == 1) {
      pfVar20 = (float *)(iVar24 + 0x8c);
    }
    fVar39 = (float)(_DAT_1028f620 ^ (uint)*(float *)(iVar24 + 0x8c));
    fVar38 = *(float *)(iVar24 + 0x8c) * _DAT_102b8a30 + fVar46 + _DAT_102b8c80;
    fVar46 = *pfVar20 * _UNK_102b8a34 + fVar42 + _UNK_102b8c84;
    fVar42 = fVar39 * _UNK_102b8a38 + fVar43 + _UNK_102b8c88;
    fVar43 = fVar39 * _UNK_102b8a3c + fVar47 + _UNK_102b8c8c;
    *(float *)(iVar24 + 0x25c) =
         (float)(int)((int)fVar38 - (uint)((float)(int)fVar38 != fVar38 && fVar38 < 0.0));
    *(float *)(iVar24 + 0x260) =
         (float)(int)((int)fVar46 - (uint)((float)(int)fVar46 != fVar46 && fVar46 < 0.0));
    *(float *)(iVar24 + 0x264) =
         (float)(int)((int)fVar42 - (uint)((float)(int)fVar42 != fVar42 && fVar42 < 0.0));
    *(float *)(iVar24 + 0x268) =
         (float)(int)((int)fVar43 - (uint)((float)(int)fVar43 != fVar43 && fVar43 < 0.0));
    FUN_1010fa6a(&local_5c);
    fVar33 = (float10)FUN_100fdbca(0,(*(float *)(iVar24 + 0x80) + *(float *)(iVar24 + 0x80) +
                                     *(float *)(iVar24 + 0x68)) -
                                     (*(float *)(iVar24 + 0x254) - *(float *)(iVar24 + 0x24c)));
    *(float *)(local_13c + 0xcc) = (float)fVar33;
    fVar33 = (float10)FUN_100fdbca(0,(*(float *)(local_13c + 0x84) + *(float *)(local_13c + 0x84) +
                                     *(float *)(local_13c + 0x6c)) -
                                     (*(float *)(local_13c + 600) - *(float *)(local_13c + 0x250)));
    *(float *)(local_13c + 0xd0) = (float)fVar33;
    FUN_1010fae1();
    *(ulonglong *)(local_13c + 0xc4) = CONCAT44(uStack_78,local_7c);
    *(undefined4 *)(local_13c + 0xd4) = 0x7f7fffff;
    *(undefined4 *)(local_13c + 0xd8) = 0x7f7fffff;
    *(undefined8 *)(local_13c + 0xa8) = 0;
    iVar14 = *(int *)(*(int *)((int)fVar17 + 0x1220) + 4);
    FUN_101883ba(*(undefined4 *)(iVar14 + 0x20),*(undefined4 *)(iVar14 + 0x24),
                 *(undefined4 *)(iVar14 + 0x28),*(undefined4 *)(iVar14 + 0x2c));
    iVar16 = local_13c;
    FUN_1010a52a(&local_5c,&fStack_54,0);
    if ((*(byte *)(iVar16 + 0x409) & 5) != 1) {
      uVar15 = (uint)local_130._4_4_;
      if ((char)local_130 == '\0') {
        if ((*(int *)((int)local_138 + 0x1d8) < 2) ||
           (iVar14 = *(int *)(*(int *)((int)local_138 + 0x1e0) + -8 +
                             *(int *)((int)local_138 + 0x1d8) * 4), iVar14 == 0)) {
          bVar32 = false;
        }
        else {
          bVar32 = false;
          if ((*(float *)(iVar16 + 0x54) < *(float *)(iVar14 + 0x5c) + *(float *)(iVar14 + 0x54)) &&
             (*(float *)(iVar14 + 0x54) < *(float *)(iVar16 + 0x54) + *(float *)(iVar16 + 0x5c))) {
            if (*(float *)(iVar16 + 0x50) < *(float *)(iVar14 + 0x58) + *(float *)(iVar14 + 0x50)) {
              bVar32 = *(float *)(iVar14 + 0x50) < *(float *)(iVar16 + 0x50) + *local_f8;
            }
          }
        }
        local_130 = (ulonglong)(uint)local_130._4_4_ << 0x20;
        if (((!bVar32) &&
            (*(int *)((*(int **)(iVar16 + 0x2e8))[2] + -0x18 + **(int **)(iVar16 + 0x2e8) * 0x40) ==
             0)) && (iVar14 = *(int *)((int)local_138 + 0x2e8), *(int *)(iVar14 + 0x18) != 0)) {
          *(int *)(iVar16 + 0x2e8) = iVar14;
          local_130 = CONCAT44(uVar15,CONCAT31((int3)((uint)iVar14 >> 8),1));
        }
      }
      else {
        local_130 = (ulonglong)(uint)local_130._4_4_ << 0x20;
      }
      iVar14 = *(int *)((int)fVar17 + 0x221c);
      if (iVar14 == 0) {
        iVar14 = *(int *)((int)fVar17 + 0x2048);
      }
      bVar32 = true;
      if (local_e4._0_1_ == '\0') {
        if (iVar14 == 0) {
LAB_1010999b:
          bVar32 = false;
        }
        else if (*(int *)(iVar16 + 0x3b4) != *(int *)(iVar14 + 0x3b4)) {
          if (*(int *)(iVar16 + 0x430) == 0) goto LAB_1010999b;
          bVar32 = *(int *)(iVar16 + 0x430) == *(int *)(iVar14 + 0x430);
        }
      }
      FUN_1010fc7d(bVar32,local_110._0_4_ & 1,local_f4,&local_24);
      if ((char)local_130 != '\0') {
        *(int *)(iVar16 + 0x2e8) = iVar16 + 0x2f0;
      }
    }
    fVar38 = *(float *)(iVar16 + 0x78);
    uVar18 = 0;
    if ((fVar38 == 0.0) && (!NAN(fVar38))) {
      if ((local_144 & 0x808) == 0x800) {
        uVar18 = *local_b4;
      }
      fVar33 = (float10)FUN_100fdbca(uVar18,(*(float *)(iVar16 + 0x58) -
                                            (*(float *)(iVar16 + 0x80) + *(float *)(iVar16 + 0x80)))
                                            - (*(float *)(iVar16 + 0x98) + *(float *)(iVar16 + 0xa0)
                                              ));
      local_a0 = (float)fVar33;
      fVar38 = local_a0;
    }
    local_130._0_4_ = fVar38;
    fVar38 = *(float *)(iVar16 + 0x7c);
    uVar18 = 0;
    local_130._4_4_ = (float)0;
    if ((fVar38 == 0.0) && (local_130._4_4_ = (float)0, !NAN(fVar38))) {
      local_130 = (ulonglong)(uint)(float)local_130;
      uStack_128 = 0;
      uStack_124 = 0;
      if ((local_144 & 8) == 0) {
        uVar18 = *(undefined4 *)(iVar16 + 0x6c);
      }
      fVar33 = (float10)FUN_100fdbca(uVar18,(*(float *)(iVar16 + 0x5c) -
                                            (*(float *)(iVar16 + 0x84) + *(float *)(iVar16 + 0x84)))
                                            - (*(float *)(iVar16 + 0x9c) + *(float *)(iVar16 + 0xa4)
                                              ));
      local_a4 = (float)fVar33;
      fVar38 = local_a4;
    }
    uStack_124 = 0;
    local_d4 = *(float *)(iVar16 + 0x24c) - *(float *)(iVar16 + 0xc4);
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_c8 = 0;
    uStack_128 = local_130._4_4_;
    local_130._4_4_ = fVar38;
    fVar33 = (float10)FUN_100fdbca(*(undefined4 *)(iVar16 + 0x80),*(undefined4 *)(iVar16 + 0x8c));
    local_a8 = (float)fVar33;
    *(float *)(iVar16 + 0x26c) = (float)(int)(local_d4 + local_a8);
    local_d4 = *(float *)(iVar16 + 0x250) - *(float *)(iVar16 + 200);
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_c8 = 0;
    fVar33 = (float10)FUN_100fdbca(*(undefined4 *)(iVar16 + 0x84),*(undefined4 *)(iVar16 + 0x8c));
    local_ac = (float)fVar33;
    *(float *)(iVar16 + 0x270) = (float)(int)(local_d4 + local_ac);
    *(ulonglong *)(iVar16 + 0x274) =
         CONCAT44((float)(int)(local_d4 + local_ac) + local_130._4_4_,
                  *(float *)(iVar16 + 0x26c) + (float)local_130);
    *(undefined4 *)(iVar16 + 0x27c) = *(undefined4 *)(iVar16 + 0x26c);
    *(undefined4 *)(iVar16 + 0x280) = *(undefined4 *)(iVar16 + 0x270);
    *(undefined4 *)(iVar16 + 0x284) = *(undefined4 *)(iVar16 + 0x274);
    *(undefined4 *)(iVar16 + 0x288) = *(undefined4 *)(iVar16 + 0x278);
    fVar42 = *(float *)(iVar16 + 0x50);
    local_130 = *(ulonglong *)(iVar16 + 0x50);
    uStack_128 = 0;
    uStack_124 = 0;
    fVar39 = (float)*(undefined8 *)(iVar16 + 0xc4);
    fVar40 = (float)((ulonglong)*(undefined8 *)(iVar16 + 0xc4) >> 0x20);
    fVar43 = (float)*(undefined8 *)(iVar16 + 0x80);
    fVar47 = (float)((ulonglong)*(undefined8 *)(iVar16 + 0x80) >> 0x20);
    fVar41 = (float)*(undefined8 *)(iVar16 + 0x98);
    fVar46 = (float)((ulonglong)*(undefined8 *)(iVar16 + 0x98) >> 0x20);
    fVar48 = (fVar42 - fVar39) + fVar43 + fVar41;
    fVar49 = (*(float *)(iVar16 + 0x54) - fVar40) + fVar47 + fVar46;
    *(ulonglong *)(iVar16 + 0x29c) = CONCAT44(fVar49,fVar48);
    fVar38 = *(float *)(iVar16 + 0x78);
    if ((fVar38 == 0.0) && (!NAN(fVar38))) {
      fVar38 = (*(float *)(iVar16 + 0x58) - (fVar43 + fVar43)) -
               (*(float *)(iVar16 + 0xa0) + fVar41);
    }
    *(float *)(iVar16 + 0x2a4) = fVar38 + fVar48;
    fVar38 = *(float *)(iVar16 + 0x7c);
    if ((fVar38 == 0.0) && (!NAN(fVar38))) {
      fVar38 = (*(float *)(iVar16 + 0x5c) - (fVar47 + fVar47)) -
               (*(float *)(iVar16 + 0xa4) + fVar46);
    }
    *(float *)(iVar16 + 0x2a8) = fVar49 + fVar38;
    fVar38 = fVar41 + ((fVar42 + fVar43) - fVar39) + 0.0;
    fVar46 = fVar46 + ((fVar47 + *(float *)(iVar16 + 0x54)) - fVar40);
    *(float *)(iVar16 + 0x188) = (fVar43 + fVar41) - fVar39;
    *(undefined4 *)(iVar16 + 0x18c) = 0;
    *(undefined4 *)(iVar16 + 400) = 0;
    *(float *)(iVar16 + 0x194) = fVar38 - fVar38;
    *(float *)(iVar16 + 0x198) = fVar46 - fVar46;
    *(float *)(iVar16 + 0x154) = fVar38;
    *(float *)(iVar16 + 0x158) = fVar46;
    uVar18 = *(undefined4 *)(iVar16 + 0x154);
    uVar5 = *(undefined4 *)(iVar16 + 0x154);
    *(undefined4 *)(iVar16 + 0x144) = uVar5;
    *(undefined4 *)(iVar16 + 0x148) = *(undefined4 *)(iVar16 + 0x158);
    *(undefined4 *)(iVar16 + 0x14c) = uVar18;
    *(undefined4 *)(iVar16 + 0x150) = *(undefined4 *)(iVar16 + 0x158);
    *(undefined4 *)(iVar16 + 0x15c) = uVar5;
    *(undefined4 *)(iVar16 + 0x160) = *(undefined4 *)(iVar16 + 0x158);
    *(undefined4 *)(iVar16 + 0x164) = uVar18;
    *(undefined4 *)(iVar16 + 0x168) = *(undefined4 *)(iVar16 + 0x158);
    *(undefined4 *)(iVar16 + 0x19c) = 0;
    *(undefined4 *)(iVar16 + 0x16c) = 0;
    *(undefined4 *)(iVar16 + 0x170) = 0;
    *(undefined4 *)(iVar16 + 0x174) = 0;
    *(undefined4 *)(iVar16 + 0x178) = 0;
    *(undefined4 *)(iVar16 + 0x176) = 0;
    *(undefined4 *)(iVar16 + 0x17a) = 0;
    *(undefined4 *)(iVar16 + 0x17e) = 0;
    *(undefined4 *)(iVar16 + 0x182) = 0;
    *(undefined2 *)(iVar16 + 0x1a0) = *(undefined2 *)(iVar16 + 0x1a2);
    *(undefined4 *)(iVar16 + 0x1a2) = 0x10000;
    *(bool *)(iVar16 + 0x1a6) = 0.0 < *(float *)(iVar16 + 0xd0);
    *(undefined1 *)(iVar16 + 0x1a7) = 0;
    FUN_1014c728(*(undefined4 *)((int)fVar17 + 0xd1c),local_13d);
    *(undefined4 *)(iVar16 + 0x1cc) = 0;
    *(undefined4 *)(iVar16 + 0x1d4) = 0;
    *(undefined4 *)(iVar16 + 0x1d0) = 0;
    if (*(int *)(iVar16 + 0x1dc) < 0) {
      uVar18 = FUN_100fa1fa(0);
      if (*(int *)(iVar16 + 0x1e0) != 0) {
        FUN_1025b2d0(uVar18,*(int *)(iVar16 + 0x1e0),*(int *)(iVar16 + 0x1d8) << 2);
        FUN_100fa2cb(*(undefined4 *)(iVar16 + 0x1e0));
      }
      *(undefined4 *)(iVar16 + 0x1e0) = uVar18;
      *(undefined4 *)(iVar16 + 0x1dc) = 0;
    }
    *(undefined4 *)(iVar16 + 0x1d8) = 0;
    *(int *)(iVar16 + 0x1e4) = iVar16 + 0x2c0;
    *(undefined4 *)(iVar16 + 0x1e8) = 0;
    *(undefined4 *)(iVar16 + 0x1f0) = 1;
    if (local_138 == 0.0) {
      uVar18 = 1;
    }
    else {
      uVar18 = *(undefined4 *)((int)local_138 + 0x1f0);
    }
    *(undefined4 *)(iVar16 + 500) = uVar18;
    fVar38 = *(float *)(iVar16 + 0x58);
    if ((local_144 >> 0x18 & 1) == 0) {
      if (0.0 < fVar38 && (local_144 & 0x40) == 0) goto LAB_10109e7e;
LAB_10109e6c:
      fVar38 = *(float *)((int)fVar17 + 0x1228) * DAT_102b8c90;
    }
    else {
      if ((fVar38 <= 0.0) || ((*(byte *)(iVar16 + 0x14) & 0x50) != 0)) goto LAB_10109e6c;
LAB_10109e7e:
      fVar38 = fVar38 * DAT_102b8c94;
    }
    *(float *)(iVar16 + 0x21c) = (float)(int)fVar38;
    *(float *)(iVar16 + 0x218) = (float)(int)fVar38;
    if (*(int *)(iVar16 + 0x228) < 0) {
      uVar18 = FUN_100fa1fa(0);
      if (*(int *)(iVar16 + 0x22c) != 0) {
        FUN_1025b2d0(uVar18,*(int *)(iVar16 + 0x22c),*(int *)(iVar16 + 0x224) << 2);
        FUN_100fa2cb(*(undefined4 *)(iVar16 + 0x22c));
      }
      *(undefined4 *)(iVar16 + 0x22c) = uVar18;
      *(undefined4 *)(iVar16 + 0x228) = 0;
    }
    *(undefined4 *)(iVar16 + 0x224) = 0;
    *(undefined4 *)(iVar16 + 0x220) = 0xbf800000;
    if (*(int *)(iVar16 + 0x234) < 0) {
      uVar18 = FUN_100fa1fa(0);
      if (*(int *)(iVar16 + 0x238) != 0) {
        FUN_1025b2d0(uVar18,*(int *)(iVar16 + 0x238),*(int *)(iVar16 + 0x230) << 2);
        FUN_100fa2cb(*(undefined4 *)(iVar16 + 0x238));
      }
      *(undefined4 *)(iVar16 + 0x238) = uVar18;
      *(undefined4 *)(iVar16 + 0x234) = 0;
    }
    *(undefined4 *)(iVar16 + 0x230) = 0;
    if ((local_144 >> 0x1b & 1) != 0) {
      uVar18 = FUN_100fcbfd(0x3e);
      uVar18 = FUN_100fad3d(uVar18);
      *(undefined4 *)(iVar16 + 0x1f8) = uVar18;
    }
    if ('\0' < *(char *)(iVar16 + 0x118)) {
      *(char *)(iVar16 + 0x118) = *(char *)(iVar16 + 0x118) + -1;
    }
    if ('\0' < *(char *)(iVar16 + 0x119)) {
      *(char *)(iVar16 + 0x119) = *(char *)(iVar16 + 0x119) + -1;
    }
    *(undefined4 *)((int)fVar17 + 0x1ed0) = 0;
    if ((local_e4._0_1_ != '\0') &&
       (FUN_101034e2(iVar16,2), iVar16 == *(int *)((int)fVar17 + 0x2048))) {
      FUN_1010c53d(iVar16,0);
    }
    if ((((param_2 != (undefined1 *)0x0) &&
         (iVar14 = *(int *)(iVar16 + 0x3c), *(char *)(iVar14 + 0x57) == '\x01')) &&
        (iVar24 = FUN_1010ad36(), iVar14 != iVar24)) &&
       ((*(int *)(iVar16 + 0x430) == 0 || ((*(byte *)(*(int *)(iVar16 + 0x430) + 0x11) & 4) == 0))))
    {
      if ((*(byte *)((int)fVar17 + 0x27b5) & 8) != 0) {
        FUN_100f99e6("[viewport] Window \'%s\' closed by PlatformRequestClose\n",
                     *(undefined4 *)(iVar16 + 4));
      }
      *param_2 = 0;
      *(undefined1 *)((int)fVar17 + 0x2234) = 0;
    }
    if (((*(char *)((int)fVar17 + 0x80) == '\x01') && (*(int *)((int)fVar17 + 0x2048) != 0)) &&
       ((*(int *)(*(int *)((int)fVar17 + 0x2048) + 0x3a8) == iVar16 &&
        ((*(int *)((int)fVar17 + 0x1528) == 0 && (cVar13 = FUN_10110653(0x1224,0), cVar13 != '\0')))
        ))) {
      FUN_10110666(0);
    }
    if ((local_144 & 1) == 0) {
      if ((*(byte *)(iVar16 + 0x409) & 1) == 0) {
        local_74 = (float)local_64 - *(float *)(iVar16 + 0x8c);
        local_7c = *(float *)(iVar16 + 0x8c) + local_6c;
        uStack_78 = local_68;
        local_70 = local_64._4_4_;
        FUN_10110683(param_1,param_2);
      }
      else {
        iVar14 = *(int *)(iVar16 + 4);
        iVar24 = FUN_100fd57d(iVar14,0);
        FUN_10110bf6("%.*s\n",iVar24 - iVar14,iVar14);
      }
    }
    *(undefined4 *)(iVar16 + 0x2ac) = 0;
    if ((local_144 >> 0x19 & 1) != 0) {
      *(int *)((int)fVar17 + 0x25ec) = iVar16;
    }
    if ((*(byte *)((int)fVar17 + 0x30) & 0x80) != 0) {
      if ((*(int *)((int)fVar17 + 0x14dc) == iVar16) &&
         ((*(byte *)(*(int *)(iVar16 + 0x3b0) + 0xe) & 8) == 0)) {
        FUN_10110cfe(iVar16);
      }
      if ((((*(char *)((int)fVar17 + 0x2250) == '\x01') && ((local_144 & 0x80000) == 0)) &&
          ((*(int *)((int)fVar17 + 0x14dc) == 0 ||
           (*(int *)(*(int *)((int)fVar17 + 0x14dc) + 0x3b0) != iVar16)))) &&
         ((iVar16 == *(int *)(iVar16 + 0x3b0) && ((*(byte *)(iVar16 + 0xe) & 0x80) == 0)))) {
        FUN_10110e4b(iVar16);
      }
    }
    if ((local_144 >> 0x18 & 1) == 0) {
      bVar22 = *(byte *)((int)fVar17 + 0x7f) ^ 1;
    }
    else {
      bVar22 = *(byte *)((int)local_138 + 0x120);
    }
    *(byte *)(iVar16 + 0x120) = bVar22;
    *(undefined4 *)(iVar16 + 0x1fc) = 0;
    uVar15 = FUN_10102f3a(&local_6c,&local_64,0);
    *(uint *)(iVar16 + 0x1fc) = uVar15 & 0xff;
    FUN_10111269();
    uVar15 = *(uint *)((int)fVar17 + 0x1e44);
    uVar34 = local_144;
    iVar24 = local_11c;
    if ((uVar15 != 0) && ((*local_b0 == uVar15 || (*(uint *)(iVar16 + 0xb4) == uVar15)))) {
      uVar15 = FUN_101112a9();
      uVar34 = local_144;
      iVar24 = local_11c;
    }
  }
  if (((uVar34 >> 0x17 & 1) == 0) && (*(char *)(iVar16 + 0xff) == '\0')) {
    uVar15 = FUN_1010a52a(iVar16 + 0x25c,iVar16 + 0x264,1);
  }
  *(short *)(iVar16 + 0x108) = *(short *)(iVar16 + 0x108) + 1;
  *(undefined1 *)(iVar16 + 0xfb) = 0;
  if (local_114 == iVar24) goto LAB_1010a3d9;
  if (*(char *)(iVar16 + 0xff) != '\0') {
    *(undefined1 *)(iVar16 + 0xfe) = 1;
    goto LAB_1010a3d9;
  }
  fVar38 = (float)(CONCAT31((int3)(uVar15 >> 8),*(undefined1 *)(iVar16 + 0x409)) & 0xffffff05);
  if (SUB41(fVar38,0) == '\x01') {
    fVar38 = *(float *)(iVar16 + 0x2b8);
    if (fVar38 == *(float *)((int)fVar17 + 4)) {
      *(undefined1 *)(iVar16 + 0x11c) = 1;
    }
    else {
      *(undefined1 *)(iVar16 + 0x11b) = 1;
    }
  }
  if ((uVar34 & 0x11000000) == 0x1000000) {
    if ((((*(byte *)(iVar16 + 0x15) & 1) == 0) || (*(char *)((int)fVar17 + 0x2099) != '\x01')) ||
       (*(int *)((int)fVar17 + 0x2048) == 0)) {
      bVar32 = false;
    }
    else {
      bVar32 = *(int *)(*(int *)((int)fVar17 + 0x2048) + 0x3b8) == *(int *)(iVar16 + 0x3b8);
    }
    if (((*(char *)((int)fVar17 + 0x2748) == '\0') && (!bVar32)) &&
       ((*(float *)(iVar16 + 0x244) <= *(float *)(iVar16 + 0x23c) ||
        (*(float *)(iVar16 + 0x248) <= *(float *)(iVar16 + 0x240))))) {
      if ((*(char *)(iVar16 + 0x118) < '\x01') && (*(char *)(iVar16 + 0x119) < '\x01')) {
        *(undefined1 *)(iVar16 + 0x11b) = 1;
      }
      else {
        *(undefined1 *)(iVar16 + 0x11c) = 1;
      }
    }
    fVar38 = local_138;
    if (local_138 != 0.0) {
      if ((*(char *)((int)local_138 + 0xfc) != '\0') || ('\0' < *(char *)((int)local_138 + 0x11b)))
      {
        *(undefined1 *)(iVar16 + 0x11b) = 1;
      }
      if ('\0' < *(char *)((int)local_138 + 0x11c)) {
        *(undefined1 *)(iVar16 + 0x11c) = 1;
      }
    }
  }
  if (*(float *)((int)fVar17 + 0xccc) <= 0.0) {
    *(undefined1 *)(iVar16 + 0x11b) = 1;
LAB_1010a38a:
    bVar32 = true;
    uVar15 = 0;
  }
  else {
    if (('\0' < *(char *)(iVar16 + 0x11b)) || ('\0' < *(char *)(iVar16 + 0x11c))) goto LAB_1010a38a;
    bVar32 = '\0' < *(char *)(iVar16 + 0x11d);
    uVar15 = CONCAT31((int3)((uint)fVar38 >> 8),1);
  }
  *(bool *)(iVar16 + 0x101) = bVar32;
  if ('\0' < *(char *)(iVar16 + 0x11e)) {
    *(char *)(iVar16 + 0x11e) = *(char *)(iVar16 + 0x11e) + -1;
    *(uint *)(iVar16 + 0xc) = *(uint *)(iVar16 + 0xc) | 0x30200;
  }
  if ((((*(char *)(iVar16 + 0xfc) == '\0') && ((*(byte *)(iVar16 + 0xf9) & (byte)uVar15) != 0)) ||
      ('\0' < *(char *)(iVar16 + 0x118))) || ('\0' < *(char *)(iVar16 + 0x119))) {
    *(undefined1 *)(iVar16 + 0xfe) = 0;
  }
  else {
    *(bool *)(iVar16 + 0xfe) = *(char *)(iVar16 + 0x11c) < '\x01';
    if (*(char *)(iVar16 + 0x11c) < '\x01') {
      uVar15 = (uint)*(ushort *)(iVar16 + 0x1a0);
      *(ushort *)(iVar16 + 0x1a2) = *(ushort *)(iVar16 + 0x1a0);
    }
  }
LAB_1010a3d9:
  if ((*(char *)(iVar16 + 0x102) == '\0') &&
     (((local_118 == 0 && (*(char *)((int)fVar17 + 0xa3) != '\0')) ||
      ((*(char *)((int)fVar17 + 0xa4) == '\x01' &&
       (uVar15 = (uint)*(char *)((int)fVar17 + 0x27e4), *(uint *)((int)fVar17 + 0x14a8) == uVar15)))
      ))) {
    if ('\0' < *(char *)(iVar16 + 0x118)) {
      *(char *)(iVar16 + 0x118) = *(char *)(iVar16 + 0x118) + '\x01';
    }
    if ('\0' < *(char *)(iVar16 + 0x119)) {
      *(char *)(iVar16 + 0x119) = *(char *)(iVar16 + 0x119) + '\x01';
    }
    uVar15 = 0;
  }
  else {
    uVar15 = CONCAT31((int3)(uVar15 >> 8),*(undefined1 *)(iVar16 + 0xfe)) ^ 1;
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_144)) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

