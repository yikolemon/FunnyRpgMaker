/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140085d7e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140085d7e(char *param_1,undefined1 *param_2,uint param_3)

{
  float *pfVar1;
  longlong lVar2;
  char *_Str2;
  code *pcVar3;
  undefined1 auVar4 [12];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 uVar10;
  char cVar11;
  byte bVar12;
  char cVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined8 *puVar21;
  byte bVar22;
  bool bVar23;
  int iVar24;
  longlong lVar25;
  ulonglong uVar26;
  float *pfVar27;
  byte bVar28;
  undefined7 uVar29;
  longlong lVar30;
  undefined8 *puVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  bool bVar35;
  bool bVar36;
  bool bVar37;
  uint uVar38;
  uint uVar39;
  undefined4 uVar40;
  float fVar41;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar42 [16];
  float fVar44;
  undefined1 auVar43 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auStack_1a8 [32];
  undefined8 *local_188;
  undefined8 *local_180;
  float local_178;
  byte local_168;
  bool local_167;
  byte local_166;
  char local_165;
  uint local_164;
  longlong local_160;
  longlong local_158;
  uint local_14c;
  undefined1 *local_148;
  ulonglong local_140;
  char *local_138;
  longlong local_130;
  float local_128;
  undefined4 uStack_124;
  float local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  ulonglong uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  lVar9 = DAT_140f2a910;
  local_a0 = DAT_140f17b40 ^ (ulonglong)auStack_1a8;
  local_148 = param_2;
  lVar15 = FUN_14008ac08();
  local_168 = lVar15 == 0;
  lVar16 = lVar15;
  if ((bool)local_168) {
    lVar16 = FUN_14008b538(param_1,param_3);
  }
  if (*(int *)(lVar9 + 0x1600) == *(int *)(lVar16 + 0x10)) {
    pcVar3 = (code *)swi(3);
    uVar17 = (*pcVar3)();
    return uVar17;
  }
  uVar32 = param_3 | 6;
  if ((~param_3 & 0x30200) != 0) {
    uVar32 = param_3;
  }
  uVar38 = *(uint *)(lVar9 + 4);
  uVar17 = (ulonglong)uVar38;
  uVar33 = *(uint *)(lVar16 + 0x2e0);
  if (*(int *)(lVar9 + 0x15d8) == 0) {
    uVar10 = *(undefined1 *)(lVar9 + 2);
  }
  else {
    uVar10 = 0;
  }
  *(undefined1 *)(lVar16 + 0x112) = uVar10;
  local_167 = (int)uVar33 < (int)(uVar38 - 1);
  if ((uVar32 >> 0x1a & 1) != 0) {
    lVar25 = (longlong)*(int *)(lVar9 + 0x2158) * 0x38;
    local_167 = (lVar16 != *(longlong *)(*(longlong *)(lVar9 + 0x2150) + lVar25 + 8) ||
                *(int *)(lVar16 + 0xd0) != *(int *)(*(longlong *)(lVar9 + 0x2150) + lVar25)) ||
                (int)uVar33 < (int)(uVar38 - 1);
  }
  cVar13 = *(char *)(lVar16 + 0x110);
  if (uVar33 == uVar38) {
    uVar32 = *(uint *)(lVar16 + 0x14);
  }
  else {
    FUN_14008b671(lVar16,lVar15 == 0,uVar32);
    *(bool *)(lVar16 + 0x110) = local_167;
    if (local_167 != false) {
      FUN_14008b807(lVar16,8,1);
    }
    *(undefined4 *)(lVar16 + 0x18) = *(undefined4 *)(lVar16 + 0x14);
    *(uint *)(lVar16 + 0x14) = uVar32;
    uVar40 = 0;
    if ((*(byte *)(lVar9 + 0x2031) & 2) != 0) {
      uVar40 = *(undefined4 *)(lVar9 + 0x2070);
    }
    *(undefined4 *)(lVar16 + 0x1c) = uVar40;
    *(uint *)(lVar16 + 0x2e0) = uVar38;
    *(float *)(lVar16 + 0x2e8) = (float)*(double *)(lVar9 + 0x18);
    *(undefined2 *)(lVar16 + 0x11c) = 0;
    iVar14 = *(int *)(lVar9 + 0x15f8);
    *(int *)(lVar9 + 0x15f8) = iVar14 + 1;
    *(short *)(lVar16 + 0x11e) = (short)iVar14;
  }
  if ((*(byte *)(lVar9 + 0x2031) & 0x10) != 0) {
    FUN_14008b8d6(lVar16,*(undefined4 *)(lVar9 + 0x20a0),*(undefined4 *)(lVar9 + 0x2040));
  }
  local_164 = uVar33;
  local_140 = uVar17;
  if (uVar33 != uVar38) {
    if ((*(int *)(lVar16 + 0x4d0) == 0) && (*(longlong *)(lVar16 + 0x4c0) == 0)) {
      cVar11 = FUN_14008b96d(lVar16);
      bVar28 = *(byte *)(lVar16 + 0x495);
      *(byte *)(lVar16 + 0x495) = bVar28 & 0xf8;
      if (cVar11 == '\0') goto LAB_140086013;
    }
    else {
      bVar28 = *(byte *)(lVar16 + 0x495);
      *(byte *)(lVar16 + 0x495) = bVar28 & 0xf8;
    }
    FUN_14008b99a(lVar16,local_148);
    uVar33 = local_164;
    uVar32 = *(uint *)(lVar16 + 0x14);
    bVar22 = *(byte *)(lVar16 + 0x495);
    if ((bVar22 & 1) != 0) {
      *(byte *)(lVar9 + 0x2030) = *(byte *)(lVar9 + 0x2030) & 0xef;
      bVar22 = *(byte *)(lVar16 + 0x495);
    }
    if ((((bVar22 & 4) != 0) && ((bVar28 & 6) == 2)) &&
       (cVar13 == '\0' && *(char *)(lVar16 + 0x110) == '\0')) {
      *(undefined1 *)(lVar16 + 0x110) = 1;
      FUN_14008b807(lVar16,8,1);
    }
  }
LAB_140086013:
  if (((*(byte *)(lVar16 + 0x495) & 1) == 0) ||
     (local_160 = *(longlong *)(*(longlong *)(lVar16 + 0x4c0) + 0x90), local_160 == 0)) {
    if ((longlong)*(int *)(lVar9 + 0x15d8) == 0) {
      local_160 = 0;
    }
    else {
      local_160 = *(longlong *)
                   (*(longlong *)(lVar9 + 0x15e0) + -0x78 +
                   (longlong)*(int *)(lVar9 + 0x15d8) * 0x78);
    }
  }
  if (uVar33 == (uint)local_140) {
    local_158 = *(longlong *)(lVar16 + 0x408);
  }
  else {
    local_158 = 0;
    if ((uVar32 & 0x7000000) != 0) {
      local_158 = local_160;
    }
  }
  if (*(int *)(lVar16 + 0x148) == 0) {
    if (*(int *)(lVar16 + 0x14c) == 0) {
      lVar25 = FUN_140077ab4(0x20);
      if (*(longlong *)(lVar16 + 0x150) != 0) {
        FUN_1401c5180(lVar25,*(longlong *)(lVar16 + 0x150),(longlong)*(int *)(lVar16 + 0x148) << 2);
        FUN_140077b90(*(undefined8 *)(lVar16 + 0x150));
      }
      *(longlong *)(lVar16 + 0x150) = lVar25;
      *(undefined4 *)(lVar16 + 0x14c) = 8;
      lVar30 = (longlong)*(int *)(lVar16 + 0x148);
    }
    else {
      lVar25 = *(longlong *)(lVar16 + 0x150);
      lVar30 = 0;
    }
    *(undefined4 *)(lVar25 + lVar30 * 4) = *(undefined4 *)(lVar16 + 0x10);
    *(int *)(lVar16 + 0x148) = *(int *)(lVar16 + 0x148) + 1;
  }
  lVar25 = local_158;
  *(longlong *)(lVar9 + 0x1608) = lVar16;
  lVar30 = (longlong)*(int *)(lVar9 + 0x15d8) + 1;
  iVar14 = *(int *)(lVar9 + 0x15dc);
  iVar24 = (int)lVar30;
  local_138 = param_1;
  local_130 = lVar15;
  if (*(int *)(lVar9 + 0x15d8) < iVar14) {
    lVar15 = *(longlong *)(lVar9 + 0x15e0);
  }
  else {
    if (iVar14 == 0) {
      iVar14 = 8;
    }
    else {
      iVar14 = iVar14 / 2 + iVar14;
    }
    if (iVar14 <= iVar24) {
      iVar14 = iVar24;
    }
    lVar15 = FUN_140077ab4((longlong)iVar14 * 0x78);
    if (*(longlong *)(lVar9 + 0x15e0) != 0) {
      FUN_1401c5180(lVar15,*(longlong *)(lVar9 + 0x15e0),(longlong)*(int *)(lVar9 + 0x15d8) * 0x78);
      FUN_140077b90(*(undefined8 *)(lVar9 + 0x15e0));
    }
    *(longlong *)(lVar9 + 0x15e0) = lVar15;
    *(int *)(lVar9 + 0x15dc) = iVar14;
  }
  *(int *)(lVar9 + 0x15d8) = iVar24;
  lVar30 = lVar30 * 0x78;
  lVar2 = lVar15 + lVar30;
  lVar15 = lVar15 + lVar30;
  *(longlong *)(lVar15 + -0x78) = lVar16;
  puVar21 = (undefined8 *)(lVar9 + 0x1fe0);
  puVar31 = (undefined8 *)(lVar15 + -0x70);
  for (lVar30 = 10; lVar30 != 0; lVar30 = lVar30 + -1) {
    *puVar31 = *puVar21;
    puVar21 = puVar21 + 1;
    puVar31 = puVar31 + 1;
  }
  if ((uVar32 >> 0x19 & 1) == 0) {
    bVar28 = 0;
  }
  else {
    bVar28 = *(byte *)(lVar9 + 0x1fa0) >> 6 & 1;
  }
  uVar38 = (uint)local_140;
  *(byte *)(lVar2 + -10) = bVar28;
  *(undefined4 *)(lVar2 + -8) = 0;
  FUN_140088318(lVar2 + -0x20);
  *(longlong *)(lVar9 + 0x2ac0) = lVar2 + -0x20;
  if ((uVar32 >> 0x1c & 1) != 0) {
    *(int *)(lVar9 + 0x27d4) = *(int *)(lVar9 + 0x27d4) + 1;
  }
  puVar20 = (undefined4 *)(lVar16 + 0x10);
  if (uVar33 != uVar38) {
    FUN_14008b3aa(lVar16,uVar32,lVar25);
    *(longlong *)(lVar16 + 0x410) = local_160;
    lVar15 = 0;
    if (*(longlong *)(lVar16 + 0x418) != lVar16) {
      lVar15 = local_160;
    }
    *(longlong *)(lVar16 + 0x440) = lVar15;
    if (((lVar15 == 0) && (lVar15 = *(longlong *)(lVar16 + 0x4c0), lVar15 != 0)) &&
       ((*(byte *)(lVar15 + 0x12) & 4) != 0)) {
      *(undefined8 *)(lVar16 + 0x440) = *(undefined8 *)(lVar15 + 0x90);
    }
    if (*(int *)(lVar16 + 0x28) != 0) {
      uVar18 = FUN_14008abf5();
      *(undefined8 *)(lVar16 + 0x440) = uVar18;
    }
    fVar48 = DAT_1401c86c8;
    if (lVar25 != 0) {
      fVar48 = *(float *)(lVar25 + 0x314) * *(float *)(lVar25 + 0x310);
    }
    *(float *)(lVar16 + 0x314) = fVar48;
  }
  puVar19 = (undefined4 *)(lVar9 + 0x1f9c);
  if ((*(uint *)(lVar16 + 0x1c) >> 8 & 1) == 0) {
    puVar19 = puVar20;
  }
  FUN_14008bc4c(*puVar19);
  *(undefined4 *)(lVar16 + 0x488) = *(undefined4 *)(lVar9 + 0x1f9c);
  if ((uVar32 >> 0x1a & 1) != 0) {
    lVar15 = *(longlong *)(lVar9 + 0x2150);
    lVar25 = (longlong)*(int *)(lVar9 + 0x2158) * 0x38;
    puVar21 = (undefined8 *)(lVar15 + lVar25);
    *(longlong *)(lVar15 + 8 + lVar25) = lVar16;
    *(undefined4 *)(lVar15 + 0x18 + lVar25) = *(undefined4 *)(local_160 + 0x1b0);
    iVar14 = *(int *)(lVar9 + 0x2158);
    if (iVar14 == *(int *)(lVar9 + 0x215c)) {
      if (iVar14 == 0) {
        iVar24 = 8;
      }
      else {
        iVar24 = iVar14 / 2 + iVar14;
      }
      iVar34 = iVar14 + 1;
      if (iVar14 + 1 < iVar24) {
        iVar34 = iVar24;
      }
      puVar20 = (undefined4 *)FUN_140077ab4((longlong)iVar34 * 0x38);
      if (*(longlong *)(lVar9 + 0x2160) != 0) {
        FUN_1401c5180(puVar20,*(longlong *)(lVar9 + 0x2160),
                      (longlong)*(int *)(lVar9 + 0x2158) * 0x38);
        FUN_140077b90(*(undefined8 *)(lVar9 + 0x2160));
      }
      *(undefined4 **)(lVar9 + 0x2160) = puVar20;
      *(int *)(lVar9 + 0x215c) = iVar34;
      iVar14 = *(int *)(lVar9 + 0x2158);
    }
    else {
      puVar20 = *(undefined4 **)(lVar9 + 0x2160);
    }
    lVar15 = (longlong)iVar14;
    *(undefined8 *)(puVar20 + lVar15 * 0xe + 0xc) = puVar21[6];
    uVar18 = *puVar21;
    uVar5 = puVar21[1];
    uVar6 = puVar21[2];
    uVar7 = puVar21[3];
    uVar8 = puVar21[5];
    *(undefined8 *)(puVar20 + lVar15 * 0xe + 8) = puVar21[4];
    *(undefined8 *)((longlong)(puVar20 + lVar15 * 0xe + 8) + 8) = uVar8;
    *(undefined8 *)(puVar20 + lVar15 * 0xe + 4) = uVar6;
    *(undefined8 *)((longlong)(puVar20 + lVar15 * 0xe + 4) + 8) = uVar7;
    *(undefined8 *)(puVar20 + lVar15 * 0xe) = uVar18;
    *(undefined8 *)((longlong)(puVar20 + lVar15 * 0xe) + 8) = uVar5;
    *(int *)(lVar9 + 0x2158) = *(int *)(lVar9 + 0x2158) + 1;
    *(undefined4 *)(lVar16 + 0xd0) = *(undefined4 *)puVar21;
    uVar38 = (uint)local_140;
  }
  if ((*(byte *)(lVar9 + 0x2030) & 1) == 0) {
    uVar33 = 0;
  }
  else {
    bVar37 = ((int)(char)(*(uint *)(lVar16 + 0x130) >> 8) & *(uint *)(lVar9 + 0x2034)) == 0;
    uVar29 = (undefined7)((ulonglong)puVar20 >> 8);
    uVar33 = (uint)CONCAT71(uVar29,!bVar37);
    if ((bVar37) ||
       (*(float *)(lVar9 + 0x204c) * *(float *)(lVar9 + 0x204c) +
        *(float *)(lVar9 + 0x2050) * *(float *)(lVar9 + 0x2050) <= DAT_1402114ec)) {
      FUN_140081c1f(lVar16,lVar9 + 0x2044);
    }
    else {
      *(undefined8 *)(lVar16 + 0x138) = *(undefined8 *)(lVar9 + 0x2044);
      *(undefined8 *)(lVar16 + 0x140) = *(undefined8 *)(lVar9 + 0x204c);
      *(uint *)(lVar16 + 0x130) = *(uint *)(lVar16 + 0x130) & 0xfffff1ff;
      uVar33 = (uint)CONCAT71(uVar29,1);
    }
  }
  cVar13 = (char)*(uint *)(lVar9 + 0x2030);
  local_14c = uVar33;
  if ((*(uint *)(lVar9 + 0x2030) & 2) == 0) {
    bVar23 = false;
    bVar37 = false;
  }
  else {
    if (((int)(char)(*(uint *)(lVar16 + 0x130) >> 0x10) & *(uint *)(lVar9 + 0x2038)) == 0) {
      bVar37 = false;
      bVar23 = false;
    }
    else {
      bVar37 = 0.0 < *(float *)(lVar9 + 0x2054);
      bVar23 = 0.0 < *(float *)(lVar9 + 0x2058);
    }
    uVar33 = *(uint *)(lVar16 + 0x1c);
    if ((*(uint *)(lVar16 + 0x130) >> 0x12 & 1) == 0 && (uVar33 & 4) != 0) {
      *(undefined4 *)(lVar9 + 0x2054) = *(undefined4 *)(lVar16 + 0x70);
      uVar33 = *(uint *)(lVar16 + 0x1c);
    }
    if (((uVar33 & 8) != 0) && ((*(byte *)(lVar16 + 0x132) & 4) == 0)) {
      *(undefined4 *)(lVar9 + 0x2058) = *(undefined4 *)(lVar16 + 0x74);
    }
    FUN_14008bd12(lVar16,lVar9 + 0x2054);
    cVar13 = (char)*(undefined4 *)(lVar9 + 0x2030);
  }
  if (cVar13 < '\0') {
    if (0.0 <= *(float *)(lVar9 + 0x2064)) {
      *(float *)(lVar16 + 0xe4) = *(float *)(lVar9 + 0x2064);
      *(undefined4 *)(lVar16 + 0xec) = 0;
    }
    if (0.0 <= *(float *)(lVar9 + 0x2068)) {
      *(float *)(lVar16 + 0xe8) = *(float *)(lVar9 + 0x2068);
      *(undefined4 *)(lVar16 + 0xf0) = 0;
    }
  }
  if ((*(byte *)(lVar9 + 0x2030) & 4) == 0) {
    if (local_164 != uVar38) {
      *(undefined8 *)(lVar16 + 0x88) = 0;
    }
  }
  else {
    *(undefined8 *)(lVar16 + 0x88) = *(undefined8 *)(lVar9 + 0x205c);
  }
  uVar33 = *(uint *)(lVar9 + 0x2030);
  if ((uVar33 >> 0xd & 1) != 0) {
    *(undefined8 *)(lVar16 + 0x40) = *(undefined8 *)(lVar9 + 0x20c8);
    uVar18 = *(undefined8 *)(lVar9 + 0x20a8);
    uVar5 = *(undefined8 *)(lVar9 + 0x20b0);
    uVar6 = *(undefined8 *)(lVar9 + 0x20c0);
    *(undefined8 *)(lVar16 + 0x30) = *(undefined8 *)(lVar9 + 0x20b8);
    *(undefined8 *)(lVar16 + 0x38) = uVar6;
    *(undefined8 *)(lVar16 + 0x20) = uVar18;
    *(undefined8 *)(lVar16 + 0x28) = uVar5;
    uVar33 = *(uint *)(lVar9 + 0x2030);
  }
  if ((uVar33 & 8) != 0) {
    FUN_14008bdff(lVar16,*(undefined1 *)(lVar9 + 0x2075),*(undefined4 *)(lVar9 + 0x203c));
    uVar33 = *(uint *)(lVar9 + 0x2030);
  }
  if ((uVar33 & 0x20) != 0) {
    FUN_140081404(lVar16,0);
  }
  if (*(char *)(lVar16 + 0x110) == '\x01') {
    FUN_14008b807(lVar16,8,0);
  }
  uVar18 = FUN_14008b47e(lVar16);
  if ((*(char *)(lVar2 + -10) == '\x01') && (*(longlong *)(lVar16 + 0x418) == lVar16)) {
    uVar18 = FUN_14008be42();
  }
  lVar15 = local_130;
  *(undefined8 *)(lVar9 + 0x1608) = 0;
  if (local_164 == uVar38) {
    if (*(char *)(lVar16 + 0x10f) != '\0') {
LAB_140086643:
      uVar18 = FUN_14008f2e3(lVar16);
    }
    FUN_140088ff6(uVar18,*(undefined8 *)(lVar16 + 0x48));
    FUN_14008c3ff(lVar16);
    *(undefined4 *)(lVar9 + 0x2030) = 0;
    local_c8 = *(undefined8 *)(lVar16 + 0x60);
    uStack_c0 = CONCAT44((float)((ulonglong)local_c8 >> 0x20) + *(float *)(lVar16 + 0xa0),
                         (float)local_c8 + *(float *)(lVar16 + 0x70));
    uVar17 = FUN_14008f17d(lVar16);
    lVar15 = local_158;
    uVar39 = local_164;
    uVar33 = uVar32;
  }
  else {
    if (*(char *)(lVar16 + 0x10f) != '\0') goto LAB_140086643;
    local_165 = *(char *)(lVar16 + 300);
    *(undefined1 *)(lVar16 + 0x109) = 1;
    *(bool *)(lVar16 + 0x114) = local_148 != (undefined1 *)0x0;
    uVar18 = _UNK_1402114f8;
    *(undefined8 *)(lVar16 + 0x2b8) = _DAT_1402114f0;
    *(undefined8 *)(lVar16 + 0x2c0) = uVar18;
    if (*(int *)(lVar16 + 0x14c) < 1) {
      iVar14 = 1;
      if (*(int *)(lVar16 + 0x14c) == 0) {
        iVar14 = 8;
      }
      uVar18 = FUN_140077ab4(iVar14 * 4);
      if (*(longlong *)(lVar16 + 0x150) != 0) {
        FUN_1401c5180(uVar18,*(longlong *)(lVar16 + 0x150),(longlong)*(int *)(lVar16 + 0x148) << 2);
        FUN_140077b90(*(undefined8 *)(lVar16 + 0x150));
      }
      *(undefined8 *)(lVar16 + 0x150) = uVar18;
      *(int *)(lVar16 + 0x14c) = iVar14;
    }
    *(undefined4 *)(lVar16 + 0x148) = 1;
    FUN_1400d9f16(*(undefined8 *)(lVar16 + 800));
    *(undefined4 *)(lVar16 + 0x210) = 0xffffffff;
    if ((uVar32 >> 0x17 & 1) != 0) {
      FUN_1400e08f0(*(longlong *)(lVar16 + 800) + 0x88,*(longlong *)(lVar16 + 800),2);
      FUN_1400e0ab6(*(longlong *)(lVar16 + 800) + 0x88,*(longlong *)(lVar16 + 800),1);
    }
    if (*(char *)(lVar16 + 0x494) == '\x01') {
      FUN_140080448(lVar16);
    }
    if ((((*(longlong *)(lVar16 + 0x48) == 0) ||
         (*(longlong *)(*(longlong *)(lVar16 + 0x48) + 0x78) != lVar16)) &&
        ((*(byte *)(lVar16 + 0x495) & 1) == 0)) &&
       (((*(longlong *)(lVar9 + 0x23f8) == 0 ||
         (*(char *)(*(longlong *)(lVar9 + 0x23f8) + 0x10a) != '\x01')) || ((uVar32 & 0x20000) != 0))
       )) {
      bVar28 = (local_167 ^ 1U) & (uVar32 >> 0x1c & 1) == 0;
    }
    else {
      bVar28 = 0;
    }
    if ((lVar15 != 0) && (bVar28 == 0)) {
      _Str2 = *(char **)(lVar16 + 8);
      iVar14 = strcmp(local_138,_Str2);
      if (iVar14 != 0) {
        local_c8 = (longlong)*(int *)(lVar16 + 0xc0);
        uVar18 = FUN_140077b1d(_Str2,&local_c8,local_138);
        *(undefined8 *)(lVar16 + 8) = uVar18;
        *(float *)(lVar16 + 0xc0) = (float)local_c8;
      }
    }
    FUN_14008acaa(lVar16,(undefined8 *)(lVar16 + 0x78),lVar16 + 0x80);
    if ('\0' < *(char *)(lVar16 + 299)) {
      *(char *)(lVar16 + 299) = *(char *)(lVar16 + 299) + -1;
    }
    if ('\0' < *(char *)(lVar16 + 300)) {
      *(char *)(lVar16 + 300) = *(char *)(lVar16 + 300) + -1;
    }
    if ('\0' < *(char *)(lVar16 + 0x12d)) {
      *(char *)(lVar16 + 0x12d) = *(char *)(lVar16 + 0x12d) + -1;
    }
    if ((lVar15 == 0) && (!(bool)(bVar37 & bVar23))) {
      *(undefined1 *)(lVar16 + 300) = 1;
    }
    if ((((uVar32 & 0x6000000) != 0 & local_167) == 1) &&
       (*(undefined1 *)(lVar16 + 300) = 1, (uVar32 & 0x40) != 0)) {
      if (!bVar37) {
        *(undefined4 *)(lVar16 + 0x70) = 0;
        *(undefined4 *)(lVar16 + 0x68) = 0;
      }
      if (!bVar23) {
        *(undefined4 *)(lVar16 + 0x74) = 0;
        *(undefined4 *)(lVar16 + 0x6c) = 0;
      }
      *(undefined8 *)(lVar16 + 0x78) = 0;
      *(undefined8 *)(lVar16 + 0x80) = 0;
    }
    uVar18 = FUN_14008bf31(lVar16);
    FUN_140088ff6(uVar18,*(undefined8 *)(lVar16 + 0x48));
    FUN_14008c3ff(lVar16);
    uVar33 = *(uint *)(lVar16 + 0x14);
    bVar35 = (uVar33 >> 0x18 & 1) == 0;
    lVar15 = 0xde8;
    if (bVar35 || (*(byte *)(lVar16 + 0x495) & 1) != 0) {
      lVar15 = 0xdf0;
      if ((uVar33 >> 0x1b & 1) != 0) {
        lVar15 = 0xdc8;
      }
      if ((uVar33 & 0x6000000) == 0) {
        lVar15 = 0xdc8;
      }
    }
    fVar48 = *(float *)(lVar9 + lVar15);
    *(float *)(lVar16 + 0x9c) = fVar48;
    uVar17 = *(ulonglong *)(lVar9 + 0xdbc);
    *(ulonglong *)(lVar16 + 0x90) = uVar17;
    uVar17 = uVar17 & 0xffffffff;
    if ((((((uVar33 >> 0x1a & 1) == 0 & ~(bVar35 | *(byte *)(lVar16 + 0x495))) == 1) &&
         ((*(byte *)(lVar16 + 0x1c) & 2) == 0)) && (fVar48 == 0.0)) && (!NAN(fVar48))) {
      uVar40 = 0;
      if ((uVar33 >> 10 & 1) != 0) {
        uVar40 = *(undefined4 *)(lVar9 + 0xdc0);
      }
      *(undefined4 *)(lVar16 + 0x90) = 0;
      *(undefined4 *)(lVar16 + 0x94) = uVar40;
      uVar17 = 0;
    }
    FUN_14007b71f(uVar17);
    uVar40 = FUN_14007b71f();
    *(undefined4 *)(lVar16 + 0x1bc) = uVar40;
    fVar48 = *(float *)(lVar9 + 0x20d4);
    *(float *)(lVar16 + 0x1c0) = fVar48;
    fVar51 = 0.0;
    fVar52 = 0.0;
    if ((uVar33 & 1) == 0) {
      fVar52 = *(float *)(lVar9 + 0xdf8) + *(float *)(lVar9 + 0xdf8) + *(float *)(lVar9 + 0x1320);
    }
    *(float *)(lVar16 + 0xa0) = fVar52;
    if ((uVar33 >> 10 & 1) != 0) {
      fVar51 = *(float *)(lVar9 + 0xdf8) + *(float *)(lVar9 + 0xdf8) +
               fVar48 + *(float *)(lVar9 + 0x1320);
    }
    *(float *)(lVar16 + 0xa4) = fVar51;
    *(undefined4 *)(lVar16 + 0x318) = *(undefined4 *)(lVar9 + 0x1320);
    local_166 = local_168;
    if ((bVar37) && ((*(float *)(lVar16 + 0x88) != 0.0 || (NAN(*(float *)(lVar16 + 0x88)))))) {
      local_166 = 1;
    }
    if ((bVar23) && ((*(float *)(lVar16 + 0x8c) != 0.0 || (NAN(*(float *)(lVar16 + 0x8c)))))) {
      local_168 = 1;
    }
    if (((uVar33 & 0x21) == 0) && ((*(byte *)(lVar16 + 0x495) & 1) == 0)) {
      local_c8 = *(longlong *)(lVar16 + 0x60);
      uStack_c0 = CONCAT44(fVar52 + (float)((ulonglong)local_c8 >> 0x20),
                           *(float *)(lVar16 + 0x70) + (float)local_c8);
      if ((((*(longlong *)(lVar9 + 0x1610) == lVar16) && (*(int *)(lVar9 + 0x1664) == 0)) &&
          (*(int *)(lVar9 + 0x1668) == 0)) &&
         (((*(int *)(lVar9 + 0x167c) == 0 &&
           (cVar13 = FUN_140080e0c(&local_c8,&uStack_c0,1), cVar13 != '\0')) &&
          ((*(short *)(lVar9 + 0xb5a) == 2 && (iVar14 = FUN_14008c4c4(0x290), iVar14 == -1)))))) {
        *(undefined1 *)(lVar16 + 0x10d) = 1;
      }
      if (*(char *)(lVar16 + 0x10d) == '\x01') {
        local_168 = local_168 | *(byte *)(lVar16 + 0x10c);
        *(byte *)(lVar16 + 0x10c) = *(byte *)(lVar16 + 0x10c) ^ 1;
        FUN_14008c560(lVar16);
        fVar52 = *(float *)(lVar16 + 0xa0);
        fVar51 = *(float *)(lVar16 + 0xa4);
      }
    }
    else {
      *(undefined1 *)(lVar16 + 0x10c) = 0;
    }
    *(undefined1 *)(lVar16 + 0x10d) = 0;
    fVar48 = *(float *)(lVar16 + 0xfc);
    fVar53 = *(float *)(lVar16 + 0x100);
    *(undefined4 *)(lVar16 + 0xa8) = 0;
    *(float *)(lVar16 + 0xac) = fVar51 + fVar52;
    pfVar27 = (float *)0x0;
    *(undefined8 *)(lVar16 + 0xb0) = 0;
    *(undefined8 *)(lVar16 + 0xfc) = 0;
    if ((uVar33 & 0x40) != 0 && !bVar37) {
      pfVar27 = (float *)((ulonglong)*(byte *)(lVar16 + 0x10c) ^ 1);
    }
    if ((uVar33 & 0x40) == 0 || bVar23) {
      bVar28 = 0;
    }
    else {
      bVar28 = *(byte *)(lVar16 + 0x10c) ^ 1;
    }
    if (bVar37) {
      bVar37 = false;
    }
    else {
      bVar37 = '\0' < *(char *)(lVar16 + 0x128);
    }
    if (bVar23) {
      bVar23 = false;
    }
    else {
      bVar23 = '\0' < *(char *)(lVar16 + 0x129);
    }
    bVar12 = bVar37 | (byte)pfVar27 & 1;
    bVar22 = bVar12 + 2;
    if (!bVar23 && (bVar28 & 1) == 0) {
      bVar22 = bVar12;
    }
    FUN_14008adfe(&local_c8,lVar16,lVar16 + 0x80,bVar22);
    uVar38 = local_14c;
    pfVar1 = (float *)(lVar16 + 0x70);
    fVar52 = *(float *)(lVar16 + 0x70);
    fVar51 = *(float *)(lVar16 + 0x74);
    fVar44 = fVar52;
    if (bVar37 != false || ((ulonglong)pfVar27 & 1) != 0) {
      fVar44 = (float)local_c8;
      if (((byte)pfVar27 == 0) && (*(char *)(lVar16 + 0x12a) == '\x01')) {
        fVar44 = (float)FUN_14007b71f();
        pfVar27 = pfVar1;
      }
      *pfVar1 = fVar44;
      local_166 = 1;
    }
    lVar15 = local_158;
    if (bVar23 || (bVar28 & 1) != 0) {
      uVar40 = local_c8._4_4_;
      if ((bVar28 == 0) && (*(char *)(lVar16 + 0x12a) == '\x01')) {
        uVar40 = FUN_14007b71f();
        fVar44 = *(float *)(lVar16 + 0x70);
        pfVar27 = pfVar1;
      }
      *(undefined4 *)(lVar16 + 0x74) = uVar40;
      local_168 = 1;
    }
    if ((fVar52 != fVar44) || (NAN(fVar52) || NAN(fVar44))) {
LAB_140086ec2:
      FUN_14008c560(lVar16);
      pfVar27 = pfVar1;
    }
    else if ((fVar51 != *(float *)(lVar16 + 0x74)) ||
            (NAN(fVar51) || NAN(*(float *)(lVar16 + 0x74)))) goto LAB_140086ec2;
    FUN_14008b19e(&local_c8,lVar16,pfVar1);
    *(longlong *)(lVar16 + 0x70) = local_c8;
    bVar28 = (uVar33 >> 0x18 & 1) == 0 & *(byte *)(lVar16 + 0x10c);
    puVar21 = (undefined8 *)CONCAT71((int7)((ulonglong)pfVar27 >> 8),bVar28);
    lVar25 = local_c8;
    if (bVar28 == 1) {
      fVar52 = (float)*(undefined8 *)(lVar16 + 0x60);
      fVar51 = (float)((ulonglong)*(undefined8 *)(lVar16 + 0x60) >> 0x20);
      lVar25 = CONCAT44((*(float *)(lVar16 + 0xa0) + fVar51) - fVar51,
                        ((float)local_c8 + fVar52) - fVar52);
    }
    *(longlong *)(lVar16 + 0x68) = lVar25;
    cVar13 = (char)uVar38;
    bVar28 = (byte)(uVar33 >> 0x18);
    if (((local_167 != false) &&
        (*(undefined4 *)(lVar16 + 0x124) = 0xffffffff, (uVar33 >> 0x1a & 1) != 0)) &&
       ((bVar28 >> 3 & 1) == 0 && cVar13 == '\0')) {
      *(undefined8 *)(lVar16 + 0x60) =
           *(undefined8 *)
            (*(longlong *)(lVar9 + 0x2160) + -0x14 + (longlong)*(int *)(lVar9 + 0x2158) * 0x38);
    }
    uVar32 = uVar32 & 0x3000000;
    if ((uVar33 >> 0x18 & 1) != 0) {
      *(undefined2 *)(lVar16 + 0x11c) = *(undefined2 *)(lVar15 + 0x1f0);
      iVar14 = *(int *)(lVar15 + 0x1f0);
      if (iVar14 == *(int *)(lVar15 + 500)) {
        if (iVar14 == 0) {
          iVar24 = 8;
        }
        else {
          iVar24 = iVar14 / 2 + iVar14;
        }
        iVar34 = iVar14 + 1;
        if (iVar14 + 1 < iVar24) {
          iVar34 = iVar24;
        }
        puVar21 = (undefined8 *)FUN_140077ab4((longlong)iVar34 << 3);
        if (*(longlong *)(lVar15 + 0x1f8) != 0) {
          FUN_1401c5180(puVar21,*(longlong *)(lVar15 + 0x1f8),
                        (longlong)*(int *)(lVar15 + 0x1f0) << 3);
          FUN_140077b90(*(undefined8 *)(lVar15 + 0x1f8));
        }
        *(undefined8 **)(lVar15 + 0x1f8) = puVar21;
        *(int *)(lVar15 + 500) = iVar34;
        iVar14 = *(int *)(lVar15 + 0x1f0);
      }
      else {
        puVar21 = *(undefined8 **)(lVar15 + 0x1f8);
      }
      puVar21[iVar14] = lVar16;
      *(int *)(lVar15 + 0x1f0) = *(int *)(lVar15 + 0x1f0) + 1;
      if (((bVar28 >> 2 & 1) == 0 && cVar13 == '\0') && (uVar32 != 0x3000000)) {
        *(undefined8 *)(lVar16 + 0x60) = *(undefined8 *)(lVar15 + 0x158);
      }
    }
    fVar52 = *(float *)(lVar16 + 0x138);
    if (((fVar52 == DAT_1402112e4) && (!NAN(fVar52) && !NAN(DAT_1402112e4))) ||
       (*(char *)(lVar16 + 300) != '\0')) {
      if ((((uVar33 >> 0x1c & 1) != 0) ||
          (((uVar33 >> 0x1a & 1) != 0 && cVar13 == '\0' && ('\0' < local_165)))) ||
         (((uVar33 >> 0x19 & 1) != 0 && cVar13 == '\0' && (uVar32 != 0x3000000)))) {
        puVar21 = &local_c8;
        FUN_14008c587(puVar21,lVar16);
        *(longlong *)(lVar16 + 0x60) = local_c8;
      }
    }
    else {
      local_c8 = CONCAT44(*(float *)(lVar16 + 0x13c) -
                          (float)((ulonglong)*(undefined8 *)(lVar16 + 0x140) >> 0x20) *
                          (float)((ulonglong)*(undefined8 *)(lVar16 + 0x68) >> 0x20),
                          fVar52 - (float)*(undefined8 *)(lVar16 + 0x140) *
                                   (float)*(undefined8 *)(lVar16 + 0x68));
      FUN_140081c1f(lVar16,&local_c8,0);
    }
    if (((-1 < *(int *)(lVar16 + 0x5c)) && (*(char *)(lVar16 + 0x108) == '\0')) &&
       (lVar25 = *(longlong *)(lVar16 + 0x48), (*(byte *)(lVar25 + 5) & 0x10) == 0)) {
      uVar18 = *(undefined8 *)(lVar25 + 8);
      fVar52 = (float)((ulonglong)uVar18 >> 0x20);
      fVar51 = (float)((ulonglong)*(undefined8 *)(lVar25 + 0x10) >> 0x20) + fVar52;
      fVar44 = (float)*(undefined8 *)(lVar16 + 0x60);
      fVar41 = (float)((ulonglong)*(undefined8 *)(lVar16 + 0x60) >> 0x20);
      fVar46 = (float)((ulonglong)*(undefined8 *)(lVar16 + 0x68) >> 0x20) + fVar41;
      auVar43._4_4_ = -(uint)(fVar46 <= fVar51);
      auVar43._0_4_ =
           -(uint)((float)*(undefined8 *)(lVar16 + 0x68) + fVar44 <=
                  (float)*(undefined8 *)(lVar25 + 0x10) + (float)uVar18);
      auVar4._4_8_ = uVar18;
      auVar4._0_4_ = -(uint)(fVar51 <= fVar46);
      auVar55._0_8_ = auVar4._0_8_ << 0x20;
      auVar55._8_4_ = -(uint)((float)uVar18 <= fVar44);
      auVar55._12_4_ = -(uint)(fVar52 <= fVar41);
      auVar43._8_8_ = auVar55._8_8_;
      iVar14 = movmskps((int)lVar25,auVar43);
      if (iVar14 != 0xf) {
        local_188 = (undefined8 *)CONCAT44(local_188._4_4_,0x20);
        uVar18 = FUN_14008c836(lVar16,*(undefined4 *)(lVar16 + 0x10),lVar16 + 0x60,lVar16 + 0x68);
        *(undefined8 *)(lVar16 + 0x48) = uVar18;
        FUN_140088ff6(extraout_XMM0_Qa,uVar18);
        FUN_14008c3ff(lVar16);
      }
    }
    if (*(char *)(lVar16 + 0x108) == '\x01') {
      FUN_14008cbb2(lVar16,local_160);
    }
    lVar25 = *(longlong *)(lVar16 + 0x48);
    local_c8 = *(undefined8 *)(lVar25 + 8);
    fVar51 = (float)*(undefined8 *)(lVar25 + 0x10) + (float)local_c8;
    fVar52 = (float)((ulonglong)local_c8 >> 0x20);
    fVar44 = (float)((ulonglong)*(undefined8 *)(lVar25 + 0x10) >> 0x20) + fVar52;
    uStack_c0 = CONCAT44(fVar44,fVar51);
    fVar45 = (float)*(undefined8 *)(lVar9 + 0xec8);
    fVar47 = (float)((ulonglong)*(undefined8 *)(lVar9 + 0xec8) >> 0x20);
    fVar41 = (float)*(undefined8 *)(lVar9 + 0xec0);
    fVar46 = (float)((ulonglong)*(undefined8 *)(lVar9 + 0xec0) >> 0x20);
    uVar38 = -(uint)(fVar45 <= fVar41);
    uVar39 = -(uint)(fVar47 <= fVar46);
    uVar17 = CONCAT44(~uVar39 & (uint)fVar47,~uVar38 & (uint)fVar45) |
             CONCAT44((uint)fVar46 & uVar39,(uint)fVar41 & uVar38);
    fVar41 = (float)*(undefined8 *)(lVar25 + 0x20);
    fVar46 = (float)((ulonglong)*(undefined8 *)(lVar25 + 0x20) >> 0x20);
    fVar45 = (float)uVar17;
    fVar47 = (float)(uVar17 >> 0x20);
    local_d8 = CONCAT44(fVar46 + fVar47,fVar41 + fVar45);
    uStack_d0 = CONCAT44(((float)((ulonglong)*(undefined8 *)(lVar25 + 0x28) >> 0x20) + fVar46) -
                         fVar47,((float)*(undefined8 *)(lVar25 + 0x28) + fVar41) - fVar45);
    if (cVar13 == '\0' && (uVar33 & 0x1000000) == 0) {
      if (*(char *)(lVar16 + 0x108) == '\0') {
        if (((float)local_c8 < fVar51) && (fVar52 < fVar44)) {
          FUN_14008ce20(lVar16,&local_d8);
        }
      }
      else if (0 < *(int *)(lVar9 + 0xd78)) {
        if ((*(longlong *)(lVar9 + 0x1628) == 0) ||
           (*(longlong *)(lVar16 + 0x428) != *(longlong *)(*(longlong *)(lVar9 + 0x1628) + 0x428)))
        {
          lVar25 = FUN_14008ceb0();
          fVar52 = (float)*(undefined8 *)(lVar25 + 0x10);
          fVar51 = (float)((ulonglong)*(undefined8 *)(lVar25 + 0x10) >> 0x20);
          uVar18 = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar25 + 0x18) >> 0x20) + fVar51,
                            (float)*(undefined8 *)(lVar25 + 0x18) + fVar52);
        }
        else {
          uVar18 = *(undefined8 *)(lVar9 + 0x21e0);
          fVar52 = (float)*(undefined8 *)(lVar9 + 0x21d8);
          fVar51 = (float)((ulonglong)*(undefined8 *)(lVar9 + 0x21d8) >> 0x20);
        }
        auVar54._0_8_ = CONCAT44((float)((ulonglong)uVar18 >> 0x20) - fVar47,(float)uVar18 - fVar45)
        ;
        auVar54._8_8_ = 0;
        local_d8 = CONCAT44(fVar51 + fVar47,fVar52 + fVar45);
        fVar44 = *(float *)(lVar16 + 0x68);
        fVar41 = *(float *)(lVar16 + 0x6c);
        uStack_d0 = auVar54._0_8_;
        if ((*(byte *)(lVar16 + 0x130) & 1) == 0) {
          if (*(longlong *)(lVar16 + 0x4c8) == 0) {
            if ((*(byte *)(lVar16 + 0x14) & 1) == 0) {
              fVar41 = *(float *)(lVar16 + 0xa0);
            }
          }
          else {
            fVar41 = (float)FUN_14009376e();
          }
        }
        fVar44 = (fVar52 + fVar45) - fVar44;
        fVar41 = (fVar51 + fVar47) - fVar41;
        uVar17 = *(ulonglong *)(lVar16 + 0x60);
        auVar42._8_8_ = 0;
        auVar42._0_8_ = uVar17;
        auVar55 = minps(auVar54,auVar42);
        uVar38 = -(uint)((float)uVar17 < fVar44);
        uVar39 = -(uint)((float)(uVar17 >> 0x20) < fVar41);
        *(ulonglong *)(lVar16 + 0x60) =
             CONCAT44(~uVar39 & auVar55._4_4_,~uVar38 & auVar55._0_4_) |
             CONCAT44((uint)fVar41 & uVar39,(uint)fVar44 & uVar38);
      }
    }
    *(ulonglong *)(lVar16 + 0x60) =
         CONCAT44((float)(int)(float)((ulonglong)*(undefined8 *)(lVar16 + 0x60) >> 0x20),
                  (float)(int)(float)*(undefined8 *)(lVar16 + 0x60));
    if ((((uVar33 >> 0x18 & 1) == 0) || (lVar25 = 0xde4, (*(byte *)(lVar16 + 0x495) & 1) != 0)) &&
       (lVar25 = 0xdc4, (uVar33 & 0xc000000) == 0x4000000)) {
      lVar25 = 0xdec;
    }
    fVar52 = *(float *)(lVar9 + lVar25);
    *(float *)(lVar16 + 0x98) = fVar52;
    bVar28 = (uVar33 >> 0xc & 1) == 0 & local_167;
    local_160 = CONCAT71(local_160._1_7_,bVar28);
    if ((bVar28 == 1) && ((uVar33 & 0x4000000) == 0)) {
      local_160 = CONCAT71(local_160._1_7_,
                           (uVar33 >> 0x19 & 1) == 0 &
                           ((uVar33 >> 0x18 & 1) == 0 | *(byte *)(lVar16 + 0x495)));
    }
    uVar29 = (undefined7)((ulonglong)puVar21 >> 8);
    uVar17 = CONCAT71(uVar29,1);
    if (*(longlong *)(lVar16 + 0x4c8) == 0) {
      uVar17 = CONCAT71(uVar29,*(undefined1 *)(lVar16 + 0x495)) ^ 1;
    }
    if ((uVar33 >> 0x18 & 1) == 0) {
LAB_1400874ed:
      uVar38 = *(byte *)(lVar9 + 0x92) + 1;
    }
    else {
      uVar26 = uVar17 & 0xff;
      uVar17 = 0;
      if (*(char *)(*(longlong *)(lVar16 + 0x408) + 0x10e) == '\0') {
        uVar17 = uVar26;
      }
      if ((uVar33 >> 0x1a & 1) != 0) goto LAB_1400874ed;
      uVar38 = *(uint *)(lVar16 + 0x1c) >> 3 & *(uint *)(lVar16 + 0x1c) >> 2 & 1;
    }
    uStack_b0 = 0;
    local_b8 = 0;
    local_dc = 0xffffffff;
    local_e0 = 0xffffffff;
    fVar52 = (float)FUN_14007b71f(*(float *)(lVar9 + 0x1320) * DAT_14020ff9c,
                                  DAT_14021001c * *(float *)(lVar9 + 0x1320) +
                                  fVar52 + DAT_1401c86c8);
    local_14c = uVar38;
    if (((uVar17 & 1) != 0) && (*(char *)(lVar16 + 0x10c) == '\0')) {
      local_180 = &local_d8;
      local_188 = &local_b8;
      iVar14 = FUN_14008cee6(lVar16,&local_dc,&local_e0,uVar38);
      if (iVar14 != 0) {
        local_166 = local_166 | (byte)iVar14;
        local_168 = local_168 | iVar14 != 1;
      }
    }
    *(undefined1 *)(lVar16 + 0x115) = (undefined1)local_dc;
    *(undefined1 *)(lVar16 + 0x116) = (undefined1)local_e0;
    lVar25 = *(longlong *)(lVar16 + 0x48);
    if (*(char *)(lVar16 + 0x108) == '\x01') {
      if (*(char *)(lVar25 + 0x71) == '\0') {
        *(undefined8 *)(lVar25 + 8) = *(undefined8 *)(lVar16 + 0x60);
        lVar25 = *(longlong *)(lVar16 + 0x48);
      }
      if (*(char *)(lVar25 + 0x72) == '\0') {
        *(undefined8 *)(lVar25 + 0x10) = *(undefined8 *)(lVar16 + 0x68);
        lVar25 = *(longlong *)(lVar16 + 0x48);
      }
      *(ulonglong *)(lVar25 + 0x20) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(lVar25 + 0x148) >> 0x20) +
                    (float)((ulonglong)*(undefined8 *)(lVar25 + 8) >> 0x20),
                    (float)*(undefined8 *)(lVar25 + 0x148) + (float)*(undefined8 *)(lVar25 + 8));
      FUN_1400a4e7a(lVar25,&local_f8,lVar25 + 0x148,lVar25 + 0x150);
      *(undefined8 *)(lVar25 + 0x28) = local_f8;
      lVar25 = *(longlong *)(lVar16 + 0x48);
      local_c8 = *(undefined8 *)(lVar25 + 8);
      uStack_c0 = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar25 + 0x10) >> 0x20) +
                           (float)((ulonglong)local_c8 >> 0x20),
                           (float)*(undefined8 *)(lVar25 + 0x10) + (float)local_c8);
    }
    *(undefined8 *)(lVar16 + 0x54) = *(undefined8 *)(lVar25 + 8);
    if (*(char *)(lVar16 + 0x10c) == '\0') {
      if (local_130 == 0) {
        fVar51 = 0.0;
        fVar44 = 0.0;
      }
      else {
        fVar51 = (float)*(undefined8 *)(lVar16 + 0x90);
        fVar44 = (float)((ulonglong)*(undefined8 *)(lVar16 + 0x90) >> 0x20);
        fVar51 = fVar51 + fVar51 + (float)*(undefined8 *)(lVar16 + 0x78);
        fVar44 = fVar44 + fVar44 + (float)((ulonglong)*(undefined8 *)(lVar16 + 0x78) >> 0x20);
      }
      fVar41 = *(float *)(lVar16 + 0x70);
      if ((local_166 & 1) == 0) {
        fVar41 = fVar48 + (*(float *)(lVar16 + 0x280) - *(float *)(lVar16 + 0x278));
      }
      if (local_168 == 0) {
        fVar53 = fVar53 + (*(float *)(lVar16 + 0x284) - *(float *)(lVar16 + 0x27c));
      }
      else {
        fVar53 = *(float *)(lVar16 + 0x74) - (*(float *)(lVar16 + 0xac) + *(float *)(lVar16 + 0xb4))
        ;
      }
      bVar35 = (uVar33 >> 0xe & 1) != 0;
      bVar37 = fVar53 < fVar44;
      bVar36 = (uVar33 & 8) == 0;
      bVar23 = bVar35 || bVar36 && bVar37;
      bVar28 = *(byte *)(lVar16 + 0x104);
      *(bool *)(lVar16 + 0x105) = bVar23;
      bVar22 = 1;
      if (-1 < (short)uVar33) {
        fVar48 = 0.0;
        if (bVar35 || bVar36 && bVar37) {
          fVar48 = *(float *)(lVar9 + 0xe2c);
        }
        bVar22 = 0;
        if ((fVar41 - fVar48 < fVar51) && (bVar22 = 0, (uVar33 & 8) == 0)) {
          bVar22 = (byte)(uVar33 >> 0xb) & 1;
        }
      }
      *(byte *)(lVar16 + 0x104) = bVar22;
      bVar28 = bVar28 != bVar22 | *(char *)(lVar16 + 0x107) * '\x02';
      *(byte *)(lVar16 + 0x107) = bVar28;
      if (bVar28 == 0) {
LAB_140087762:
        *(undefined1 *)(lVar16 + 0x106) = 0;
        fVar48 = 0.0;
        if (bVar22 != 0) goto LAB_140087770;
      }
      else {
        uVar38 = 0;
        do {
          uVar38 = uVar38 + 1;
          bVar28 = bVar28 - 1 & bVar28;
        } while (bVar28 != 0);
        if (uVar38 < 4) goto LAB_140087762;
        *(undefined1 *)(lVar16 + 0x104) = 1;
        *(undefined1 *)(lVar16 + 0x106) = 1;
LAB_140087770:
        bVar23 = true;
        if (!bVar35 && (!bVar36 || !bVar37)) {
          bVar23 = (uVar33 & 8) == 0 && fVar53 - *(float *)(lVar9 + 0xe2c) < fVar44;
          *(bool *)(lVar16 + 0x105) = bVar23;
        }
        fVar48 = *(float *)(lVar9 + 0xe2c);
      }
      fVar51 = 0.0;
      if (bVar23) {
        fVar51 = *(float *)(lVar9 + 0xe2c);
      }
      *(float *)(lVar16 + 0xfc) = fVar51;
      *(float *)(lVar16 + 0x100) = fVar48;
      *(ulonglong *)(lVar16 + 0xb0) =
           CONCAT44(*(float *)(lVar16 + 0xb4) + fVar48,*(float *)(lVar16 + 0xb0) + fVar51);
    }
    bVar37 = (uVar33 & 0x5000000) == 0x1000000;
    puVar21 = (undefined8 *)(lVar15 + 0x2b8);
    if (!bVar37 || uVar32 == 0x3000000) {
      puVar21 = &local_c8;
    }
    uVar18 = *puVar21;
    uVar5 = puVar21[1];
    local_108 = *(undefined8 *)(lVar16 + 0x60);
    fVar51 = (float)local_108;
    fVar53 = (float)((ulonglong)local_108 >> 0x20);
    fVar48 = *(float *)(lVar16 + 0xa0) + fVar53;
    local_100 = CONCAT44(fVar48,*(float *)(lVar16 + 0x70) + fVar51);
    if ((*(byte *)(lVar16 + 0x495) & 1) == 0) {
      fVar48 = fVar53;
    }
    local_f8._0_4_ = (float)uVar18;
    local_f8._4_4_ = (float)((ulonglong)uVar18 >> 0x20);
    uStack_f0._0_4_ = (float)uVar5;
    uStack_f0._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
    fVar44 = (float)*(undefined8 *)(lVar16 + 0x68) + fVar51;
    fVar41 = (float)((ulonglong)*(undefined8 *)(lVar16 + 0x68) >> 0x20) + fVar53;
    *(uint *)(lVar16 + 0x268) =
         ~-(uint)((float)local_f8 <= fVar51) & (uint)(float)local_f8 |
         (uint)fVar51 & -(uint)((float)local_f8 <= fVar51);
    *(uint *)(lVar16 + 0x26c) =
         ~-(uint)(local_f8._4_4_ <= fVar48) & (uint)local_f8._4_4_ |
         (uint)fVar48 & -(uint)(local_f8._4_4_ <= fVar48);
    *(uint *)(lVar16 + 0x270) =
         ~-(uint)(fVar44 < (float)uStack_f0) & (uint)(float)uStack_f0 |
         (uint)fVar44 & -(uint)(fVar44 < (float)uStack_f0);
    *(uint *)(lVar16 + 0x274) =
         ~-(uint)(fVar41 < uStack_f0._4_4_) & (uint)uStack_f0._4_4_ |
         (uint)fVar41 & -(uint)(fVar41 < uStack_f0._4_4_);
    fVar51 = fVar51 + *(float *)(lVar16 + 0xa8);
    fVar53 = fVar53 + *(float *)(lVar16 + 0xac);
    fVar44 = fVar44 - *(float *)(lVar16 + 0xb0);
    fVar41 = fVar41 - *(float *)(lVar16 + 0xb4);
    *(float *)(lVar16 + 0x278) = fVar51;
    *(float *)(lVar16 + 0x27c) = fVar53;
    *(float *)(lVar16 + 0x280) = fVar44;
    *(float *)(lVar16 + 0x284) = fVar41;
    pfVar27 = (float *)(lVar9 + 0xe00);
    if ((uVar33 & 0x401) == 1) {
      pfVar27 = (float *)(lVar16 + 0x9c);
    }
    fVar46 = (float)(_DAT_1401c8590 ^ (uint)*(float *)(lVar16 + 0x9c));
    fVar48 = *(float *)(lVar16 + 0x9c) * _DAT_140211340 + fVar51 + _DAT_140211500;
    fVar51 = *pfVar27 * _UNK_140211344 + fVar53 + _UNK_140211504;
    fVar53 = fVar46 * _UNK_140211348 + fVar44 + _UNK_140211508;
    fVar44 = fVar46 * _UNK_14021134c + fVar41 + _UNK_14021150c;
    *(float *)(lVar16 + 0x288) =
         (float)(int)((int)fVar48 - (uint)((float)(int)fVar48 != fVar48 && fVar48 < 0.0));
    *(float *)(lVar16 + 0x28c) =
         (float)(int)((int)fVar51 - (uint)((float)(int)fVar51 != fVar51 && fVar51 < 0.0));
    *(float *)(lVar16 + 0x290) =
         (float)(int)((int)fVar53 - (uint)((float)(int)fVar53 != fVar53 && fVar53 < 0.0));
    *(float *)(lVar16 + 0x294) =
         (float)(int)((int)fVar44 - (uint)((float)(int)fVar44 != fVar44 && fVar44 < 0.0));
    local_f8 = uVar18;
    uStack_f0 = uVar5;
    FUN_14008db02(lVar16 + 0x288,&local_f8);
    uVar40 = FUN_14007b71f();
    *(undefined4 *)(lVar16 + 0xdc) = uVar40;
    uVar40 = FUN_14007b71f();
    *(undefined4 *)(lVar16 + 0xe0) = uVar40;
    FUN_14008db73(&local_128,lVar16);
    *(ulonglong *)(lVar16 + 0xd4) = CONCAT44(uStack_124,local_128);
    *(undefined8 *)(lVar16 + 0xe4) = 0x7f7fffff7f7fffff;
    *(undefined8 *)(lVar16 + 0xb8) = 0;
    lVar15 = *(longlong *)(*(longlong *)(lVar9 + 0x1310) + 8);
    local_118 = *(undefined8 *)(lVar15 + 0x28);
    uStack_110 = *(undefined8 *)(lVar15 + 0x30);
    FUN_1400dad02(*(undefined8 *)(lVar16 + 800));
    FUN_1400883a6(&local_f8,&uStack_f0,0);
    uVar39 = local_164;
    if ((*(byte *)(lVar16 + 0x495) & 5) != 1) {
      local_178 = (float)(int)fVar52;
      if (bVar37 && uVar32 != 0x3000000) {
        if (((longlong)*(int *)(local_158 + 0x1f0) < 2) ||
           (lVar15 = *(longlong *)
                      (*(longlong *)(local_158 + 0x1f8) + -0x10 +
                      (longlong)*(int *)(local_158 + 0x1f0) * 8), lVar15 == 0)) {
          bVar37 = false;
        }
        else {
          bVar37 = false;
          if ((*(float *)(lVar16 + 100) < *(float *)(lVar15 + 0x6c) + *(float *)(lVar15 + 100)) &&
             (bVar37 = false,
             *(float *)(lVar15 + 100) < *(float *)(lVar16 + 100) + *(float *)(lVar16 + 0x6c))) {
            bVar37 = false;
            if (*(float *)(lVar16 + 0x60) < *(float *)(lVar15 + 0x68) + *(float *)(lVar15 + 0x60)) {
              bVar37 = *(float *)(lVar15 + 0x60) <
                       *(float *)(lVar16 + 0x60) + *(float *)(lVar16 + 0x68);
            }
          }
        }
        bVar23 = false;
        if (((!bVar37) &&
            (bVar23 = false,
            *(int *)(*(longlong *)(*(int **)(lVar16 + 800) + 2) + -0x20 +
                    (longlong)**(int **)(lVar16 + 800) * 0x48) == 0)) &&
           (*(int *)(*(longlong *)(local_158 + 800) + 0x20) != 0)) {
          *(longlong *)(lVar16 + 800) = *(longlong *)(local_158 + 800);
          bVar23 = true;
        }
      }
      else {
        bVar23 = false;
      }
      lVar15 = *(longlong *)(lVar9 + 0x23e8);
      if (lVar15 == 0) {
        lVar15 = *(longlong *)(lVar9 + 0x2200);
      }
      bVar37 = true;
      if ((char)local_160 == '\0') {
        if (lVar15 == 0) {
LAB_140087b26:
          bVar37 = false;
        }
        else if (*(longlong *)(lVar16 + 0x430) != *(longlong *)(lVar15 + 0x430)) {
          if (*(longlong *)(lVar16 + 0x4c0) == 0) goto LAB_140087b26;
          bVar37 = *(longlong *)(lVar16 + 0x4c0) == *(longlong *)(lVar15 + 0x4c0);
        }
      }
      local_180 = &local_b8;
      local_188 = (undefined8 *)CONCAT44(local_188._4_4_,local_14c);
      FUN_14008dcee(lVar16,&local_108,bVar37,uVar17 & 0xffffff01);
      if (bVar23) {
        *(longlong *)(lVar16 + 800) = lVar16 + 0x328;
      }
    }
    lVar15 = local_158;
    fVar48 = *(float *)(lVar16 + 0x88);
    uVar38 = (uint)local_140;
    if ((fVar48 == 0.0) && (!NAN(fVar48))) {
      fVar48 = (float)FUN_14007b71f();
    }
    fVar52 = *(float *)(lVar16 + 0x8c);
    if ((fVar52 == 0.0) && (!NAN(fVar52))) {
      fVar52 = (float)FUN_14007b71f();
    }
    fVar51 = *(float *)(lVar16 + 0x278);
    fVar53 = *(float *)(lVar16 + 0xd4);
    fVar44 = (float)FUN_14007b71f();
    *(float *)(lVar16 + 0x298) = (float)(int)(fVar44 + (fVar51 - fVar53));
    fVar51 = *(float *)(lVar16 + 0x27c);
    fVar53 = *(float *)(lVar16 + 0xd8);
    fVar44 = (float)FUN_14007b71f();
    fVar51 = (float)(int)(fVar44 + (fVar51 - fVar53));
    *(float *)(lVar16 + 0x29c) = fVar51;
    *(ulonglong *)(lVar16 + 0x2a0) = CONCAT44(fVar51 + fVar52,*(float *)(lVar16 + 0x298) + fVar48);
    *(undefined8 *)(lVar16 + 0x2a8) = *(undefined8 *)(lVar16 + 0x298);
    *(undefined8 *)(lVar16 + 0x2b0) = *(undefined8 *)(lVar16 + 0x2a0);
    fVar44 = (float)*(undefined8 *)(lVar16 + 0x60);
    fVar41 = (float)((ulonglong)*(undefined8 *)(lVar16 + 0x60) >> 0x20);
    fVar51 = (float)*(undefined8 *)(lVar16 + 0xd4);
    fVar53 = (float)((ulonglong)*(undefined8 *)(lVar16 + 0xd4) >> 0x20);
    fVar45 = (float)*(undefined8 *)(lVar16 + 0x90);
    fVar47 = (float)((ulonglong)*(undefined8 *)(lVar16 + 0x90) >> 0x20);
    fVar46 = (float)*(undefined8 *)(lVar16 + 0xa8);
    fVar49 = (fVar44 - fVar51) + fVar45 + fVar46;
    fVar52 = (float)((ulonglong)*(undefined8 *)(lVar16 + 0xa8) >> 0x20);
    fVar50 = (fVar41 - fVar53) + fVar47 + fVar52;
    *(ulonglong *)(lVar16 + 0x2c8) = CONCAT44(fVar50,fVar49);
    fVar48 = *(float *)(lVar16 + 0x88);
    if ((fVar48 == 0.0) && (!NAN(fVar48))) {
      fVar48 = (*(float *)(lVar16 + 0x68) - (fVar45 + fVar45)) -
               (*(float *)(lVar16 + 0xb0) + fVar46);
    }
    *(float *)(lVar16 + 0x2d0) = fVar48 + fVar49;
    fVar48 = *(float *)(lVar16 + 0x8c);
    if ((fVar48 == 0.0) && (!NAN(fVar48))) {
      fVar48 = (*(float *)(lVar16 + 0x6c) - (fVar47 + fVar47)) -
               (*(float *)(lVar16 + 0xb4) + fVar52);
    }
    *(float *)(lVar16 + 0x2d4) = fVar50 + fVar48;
    *(float *)(lVar16 + 0x19c) = (fVar45 + fVar46) - fVar51;
    fVar48 = fVar46 + ((fVar44 + fVar45) - fVar51) + 0.0;
    fVar52 = fVar52 + ((fVar47 + fVar41) - fVar53);
    *(undefined8 *)(lVar16 + 0x1a0) = 0;
    *(ulonglong *)(lVar16 + 0x1a8) = CONCAT44(fVar52 - fVar52,fVar48 - fVar48);
    *(float *)(lVar16 + 0x168) = fVar48;
    *(float *)(lVar16 + 0x16c) = fVar52;
    uVar18 = *(undefined8 *)(lVar16 + 0x168);
    *(undefined8 *)(lVar16 + 0x158) = uVar18;
    *(undefined8 *)(lVar16 + 0x160) = uVar18;
    *(undefined8 *)(lVar16 + 0x170) = uVar18;
    *(undefined8 *)(lVar16 + 0x178) = uVar18;
    *(undefined4 *)(lVar16 + 0x1b0) = 0;
    *(undefined8 *)(lVar16 + 0x180) = 0;
    *(undefined8 *)(lVar16 + 0x188) = 0;
    *(undefined8 *)(lVar16 + 0x18a) = 0;
    *(undefined8 *)(lVar16 + 0x192) = 0;
    *(undefined2 *)(lVar16 + 0x1b4) = *(undefined2 *)(lVar16 + 0x1b6);
    *(undefined4 *)(lVar16 + 0x1b6) = 0x10000;
    *(bool *)(lVar16 + 0x1ba) = 0.0 < *(float *)(lVar16 + 0xe0);
    *(undefined1 *)(lVar16 + 0x1bb) = 0;
    FUN_1400c9aba(lVar16 + 0x1c4);
    *(undefined8 *)(lVar16 + 0x1e0) = 0;
    *(undefined4 *)(lVar16 + 0x1e8) = 0;
    if (*(int *)(lVar16 + 500) < 0) {
      uVar18 = FUN_140077ab4(0);
      if (*(longlong *)(lVar16 + 0x1f8) != 0) {
        FUN_1401c5180(uVar18,*(longlong *)(lVar16 + 0x1f8),(longlong)*(int *)(lVar16 + 0x1f0) << 3);
        FUN_140077b90(*(undefined8 *)(lVar16 + 0x1f8));
      }
      *(undefined8 *)(lVar16 + 0x1f8) = uVar18;
      *(undefined4 *)(lVar16 + 500) = 0;
    }
    *(undefined4 *)(lVar16 + 0x1f0) = 0;
    *(longlong *)(lVar16 + 0x200) = lVar16 + 0x2f0;
    *(undefined8 *)(lVar16 + 0x208) = 0;
    *(undefined4 *)(lVar16 + 0x214) = 1;
    if (lVar15 == 0) {
      uVar40 = 1;
    }
    else {
      uVar40 = *(undefined4 *)(lVar15 + 0x214);
    }
    *(undefined4 *)(lVar16 + 0x218) = uVar40;
    fVar48 = *(float *)(lVar16 + 0x68);
    if ((uVar33 >> 0x18 & 1) == 0) {
      if (0.0 < fVar48 && (uVar33 & 0x40) == 0) goto LAB_140087f84;
LAB_140087f71:
      fVar48 = *(float *)(lVar9 + 0x1320) * _caseD_100;
    }
    else {
      if ((fVar48 <= 0.0) || ((*(byte *)(lVar16 + 0x1c) & 0x50) != 0)) goto LAB_140087f71;
LAB_140087f84:
      fVar48 = fVar48 * switchD_1404b9b72::caseD_100;
    }
    *(float *)(lVar16 + 0x240) = (float)(int)fVar48;
    *(float *)(lVar16 + 0x23c) = (float)(int)fVar48;
    if (*(int *)(lVar16 + 0x24c) < 0) {
      uVar18 = FUN_140077ab4(0);
      if (*(longlong *)(lVar16 + 0x250) != 0) {
        FUN_1401c5180(uVar18,*(longlong *)(lVar16 + 0x250),(longlong)*(int *)(lVar16 + 0x248) << 2);
        FUN_140077b90(*(undefined8 *)(lVar16 + 0x250));
      }
      *(undefined8 *)(lVar16 + 0x250) = uVar18;
      *(undefined4 *)(lVar16 + 0x24c) = 0;
    }
    *(undefined8 *)(lVar16 + 0x244) = 0xbf800000;
    if (*(int *)(lVar16 + 0x25c) < 0) {
      uVar18 = FUN_140077ab4(0);
      if (*(longlong *)(lVar16 + 0x260) != 0) {
        FUN_1401c5180(uVar18,*(longlong *)(lVar16 + 0x260),(longlong)*(int *)(lVar16 + 600) << 2);
        FUN_140077b90(*(undefined8 *)(lVar16 + 0x260));
      }
      *(undefined8 *)(lVar16 + 0x260) = uVar18;
      *(undefined4 *)(lVar16 + 0x25c) = 0;
    }
    *(undefined4 *)(lVar16 + 600) = 0;
    if ((uVar33 >> 0x1b & 1) != 0) {
      uVar18 = FUN_14007a629(0x3e);
      uVar40 = FUN_140078692(uVar18);
      *(undefined4 *)(lVar16 + 0x21c) = uVar40;
    }
    if ('\0' < *(char *)(lVar16 + 0x128)) {
      *(char *)(lVar16 + 0x128) = *(char *)(lVar16 + 0x128) + -1;
    }
    if ('\0' < *(char *)(lVar16 + 0x129)) {
      *(char *)(lVar16 + 0x129) = *(char *)(lVar16 + 0x129) + -1;
    }
    *(undefined4 *)(lVar9 + 0x2030) = 0;
    if (((char)local_160 != '\0') &&
       (FUN_140081404(lVar16,2), lVar16 == *(longlong *)(lVar9 + 0x2200))) {
      FUN_14008a523(lVar16,0);
    }
    if ((((local_148 != (undefined1 *)0x0) &&
         (lVar25 = *(longlong *)(lVar16 + 0x48), *(char *)(lVar25 + 0x73) == '\x01')) &&
        (lVar30 = FUN_140088c06(), lVar25 != lVar30)) &&
       ((*(longlong *)(lVar16 + 0x4c0) == 0 ||
        ((*(byte *)(*(longlong *)(lVar16 + 0x4c0) + 0x11) & 4) == 0)))) {
      if ((*(byte *)(lVar9 + 0x2acd) & 8) != 0) {
        FUN_1400772a6("[viewport] Window \'%s\' closed by PlatformRequestClose\n",
                      *(undefined8 *)(lVar16 + 8));
      }
      *local_148 = 0;
      *(undefined1 *)(lVar9 + 0x240c) = 0;
    }
    if (((*(char *)(lVar9 + 0x94) == '\x01') && (*(longlong *)(lVar9 + 0x2200) != 0)) &&
       ((*(longlong *)(*(longlong *)(lVar9 + 0x2200) + 0x418) == lVar16 &&
        ((*(int *)(lVar9 + 0x167c) == 0 && (cVar13 = FUN_14008e617(0x1224,0), cVar13 != '\0')))))) {
      FUN_14008e61f(0);
    }
    if ((uVar33 & 1) == 0) {
      if ((*(byte *)(lVar16 + 0x495) & 1) == 0) {
        local_120 = (float)local_100 - *(float *)(lVar16 + 0x9c);
        local_128 = *(float *)(lVar16 + 0x9c) + (float)local_108;
        uStack_124 = local_108._4_4_;
        local_11c = local_100._4_4_;
        FUN_14008e63c(lVar16,&local_128,local_138,local_148);
      }
      else {
        uVar18 = *(undefined8 *)(lVar16 + 8);
        iVar14 = FUN_14007b050(uVar18,0);
        FUN_14008eaf5("%.*s\n",iVar14 - (int)uVar18,uVar18);
      }
    }
    *(undefined4 *)(lVar16 + 0x2d8) = 0;
    if ((uVar33 >> 0x19 & 1) != 0) {
      *(longlong *)(lVar9 + 0x2868) = lVar16;
    }
    if ((*(byte *)(lVar9 + 0x30) & 0x80) != 0) {
      if ((*(longlong *)(lVar9 + 0x1628) == lVar16) &&
         ((*(byte *)(*(longlong *)(lVar16 + 0x428) + 0x16) & 8) == 0)) {
        FUN_14008ec2f(lVar16);
      }
      if ((((*(char *)(lVar9 + 0x2428) == '\x01') && ((uVar33 & 0x80000) == 0)) &&
          ((*(longlong *)(lVar9 + 0x1628) == 0 ||
           (*(longlong *)(*(longlong *)(lVar9 + 0x1628) + 0x428) != lVar16)))) &&
         ((lVar16 == *(longlong *)(lVar16 + 0x428) && ((*(byte *)(lVar16 + 0x16) & 0x80) == 0)))) {
        FUN_14008ed96(lVar16);
      }
    }
    if ((uVar33 >> 0x18 & 1) == 0) {
      bVar28 = *(byte *)(lVar9 + 0x93) ^ 1;
    }
    else {
      bVar28 = *(byte *)(lVar15 + 0x130);
    }
    *(byte *)(lVar16 + 0x130) = bVar28;
    *(undefined4 *)(lVar16 + 0x220) = 0;
    bVar28 = FUN_140080e0c(&local_108,&local_100,0);
    *(uint *)(lVar16 + 0x220) = (uint)bVar28;
    FUN_14008f17d(lVar16,&local_108);
    uVar32 = *(uint *)(lVar9 + 0x1fa4);
    uVar17 = (ulonglong)uVar32;
    if ((uVar32 != 0) &&
       ((*(uint *)(lVar16 + 0x10) == uVar32 || (*(uint *)(lVar16 + 0xc4) == uVar32)))) {
      uVar17 = FUN_14008f1b9();
    }
  }
  if (((uVar33 >> 0x17 & 1) == 0) && (*(char *)(lVar16 + 0x10f) == '\0')) {
    uVar17 = FUN_1400883a6(lVar16 + 0x288,lVar16 + 0x290,1);
  }
  *(short *)(lVar16 + 0x118) = *(short *)(lVar16 + 0x118) + 1;
  *(undefined1 *)(lVar16 + 0x10b) = 0;
  if (uVar39 == uVar38) goto LAB_140086d57;
  if (*(char *)(lVar16 + 0x10f) != '\0') {
    *(undefined1 *)(lVar16 + 0x10e) = 1;
    goto LAB_140086d57;
  }
  uVar17 = CONCAT71((int7)(uVar17 >> 8),*(undefined1 *)(lVar16 + 0x495)) & 0xffffffffffffff05;
  if ((char)uVar17 == '\x01') {
    uVar17 = (ulonglong)*(uint *)(lVar16 + 0x2e4);
    if (*(uint *)(lVar16 + 0x2e4) == *(uint *)(lVar9 + 4)) {
      *(undefined1 *)(lVar16 + 300) = 1;
    }
    else {
      *(undefined1 *)(lVar16 + 299) = 1;
    }
  }
  if ((uVar33 & 0x11000000) == 0x1000000) {
    if ((((*(byte *)(lVar16 + 0x1d) & 1) == 0) || (*(char *)(lVar9 + 0x2261) != '\x01')) ||
       (*(longlong *)(lVar9 + 0x2200) == 0)) {
      uVar17 = 0;
    }
    else {
      lVar25 = *(longlong *)(*(longlong *)(lVar9 + 0x2200) + 0x438);
      uVar17 = CONCAT71((int7)((ulonglong)lVar25 >> 8),lVar25 == *(longlong *)(lVar16 + 0x438));
    }
    if (((*(char *)(lVar9 + 0x2a40) == '\0') && ((char)uVar17 == '\0')) &&
       ((*(float *)(lVar16 + 0x270) <= *(float *)(lVar16 + 0x268) ||
        (*(float *)(lVar16 + 0x274) <= *(float *)(lVar16 + 0x26c))))) {
      if ((*(char *)(lVar16 + 0x128) < '\x01') && (*(char *)(lVar16 + 0x129) < '\x01')) {
        *(undefined1 *)(lVar16 + 299) = 1;
      }
      else {
        *(undefined1 *)(lVar16 + 300) = 1;
      }
    }
    if (lVar15 != 0) {
      if ((*(char *)(lVar15 + 0x10c) != '\0') || ('\0' < *(char *)(lVar15 + 299))) {
        *(undefined1 *)(lVar16 + 299) = 1;
      }
      if ('\0' < *(char *)(lVar15 + 300)) {
        *(undefined1 *)(lVar16 + 300) = 1;
      }
    }
  }
  if (*(float *)(lVar9 + 0xdb4) <= 0.0) {
    *(undefined1 *)(lVar16 + 299) = 1;
LAB_140086d08:
    bVar37 = true;
    uVar17 = 0;
  }
  else {
    if (('\0' < *(char *)(lVar16 + 299)) || ('\0' < *(char *)(lVar16 + 300))) goto LAB_140086d08;
    bVar37 = '\0' < *(char *)(lVar16 + 0x12d);
    uVar17 = CONCAT71((int7)(uVar17 >> 8),1);
  }
  *(bool *)(lVar16 + 0x111) = bVar37;
  if ('\0' < *(char *)(lVar16 + 0x12e)) {
    *(char *)(lVar16 + 0x12e) = *(char *)(lVar16 + 0x12e) + -1;
    *(uint *)(lVar16 + 0x14) = *(uint *)(lVar16 + 0x14) | 0x30200;
  }
  if ((((*(char *)(lVar16 + 0x10c) == '\0') && ((*(byte *)(lVar16 + 0x109) & (byte)uVar17) != 0)) ||
      ('\0' < *(char *)(lVar16 + 0x128))) || ('\0' < *(char *)(lVar16 + 0x129))) {
    *(undefined1 *)(lVar16 + 0x10e) = 0;
  }
  else {
    *(bool *)(lVar16 + 0x10e) = *(char *)(lVar16 + 300) < '\x01';
    if (*(char *)(lVar16 + 300) < '\x01') {
      uVar17 = (ulonglong)*(ushort *)(lVar16 + 0x1b4);
      *(ushort *)(lVar16 + 0x1b6) = *(ushort *)(lVar16 + 0x1b4);
    }
  }
LAB_140086d57:
  if ((*(char *)(lVar16 + 0x112) == '\0') &&
     (((local_130 == 0 && (*(char *)(lVar9 + 0xb7) != '\0')) ||
      ((*(char *)(lVar9 + 0xb8) == '\x01' &&
       (uVar17 = (ulonglong)(uint)(int)*(char *)(lVar9 + 0x2b08),
       *(uint *)(lVar9 + 0x15d8) == (int)*(char *)(lVar9 + 0x2b08))))))) {
    if ('\0' < *(char *)(lVar16 + 0x128)) {
      *(char *)(lVar16 + 0x128) = *(char *)(lVar16 + 0x128) + '\x01';
    }
    if ('\0' < *(char *)(lVar16 + 0x129)) {
      *(char *)(lVar16 + 0x129) = *(char *)(lVar16 + 0x129) + '\x01';
    }
    uVar17 = 0;
  }
  else {
    uVar17 = CONCAT71((int7)(uVar17 >> 8),*(undefined1 *)(lVar16 + 0x10e)) ^ 1;
  }
  if (DAT_140f17b40 == (local_a0 ^ (ulonglong)auStack_1a8)) {
    return uVar17;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_a0 ^ (ulonglong)auStack_1a8);
}

