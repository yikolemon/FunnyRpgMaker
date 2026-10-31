/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18014c31f */

ulonglong FUN_18014c31f(int param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  uint uVar15;
  float *pfVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined *puVar19;
  uint uVar20;
  undefined *puVar21;
  uint uVar22;
  undefined8 unaff_RBX;
  undefined1 uVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  undefined8 in_R10;
  ulonglong uVar27;
  uint uVar28;
  uint uVar29;
  bool bVar30;
  float fVar31;
  float extraout_XMM0_Da;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auStack_168 [32];
  float *local_148;
  undefined8 *local_140;
  undefined8 local_138;
  uint local_12c;
  int local_128;
  undefined4 local_124;
  int local_120;
  uint local_11c;
  undefined4 local_118;
  undefined4 local_114;
  uint local_110;
  undefined4 local_10c;
  undefined8 local_108;
  longlong local_100;
  undefined8 local_f8;
  byte local_ef;
  byte local_ee;
  byte local_ed;
  uint local_ec;
  undefined8 local_e8;
  float fStack_e0;
  float fStack_dc;
  float local_d0;
  float fStack_cc;
  undefined8 local_c8;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float local_b4;
  ulonglong local_b0;
  
  lVar4 = DAT_180419160;
  local_b0 = DAT_180402640 ^ (ulonglong)auStack_168;
  *(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1;
  lVar2 = *(longlong *)(lVar4 + 0x1608);
  if (*(char *)(lVar2 + 0x10e) != '\0') {
    uVar18 = 0;
    goto LAB_18014c3a0;
  }
  uVar20 = (uint)param_2;
  fVar31 = *(float *)(lVar4 + 0xdf8);
  if ((param_2 & 0x402) == 0) {
    fVar31 = (float)FUN_1800eebe2(*(undefined4 *)(lVar2 + 400),fVar31);
  }
  fVar1 = *(float *)(lVar4 + 0xdf4);
  if (param_4 == 0) {
    param_4 = FUN_180101d94(param_3,0);
  }
  local_148 = (float *)CONCAT44(local_148._4_4_,0xbf800000);
  uVar11 = FUN_1801023ca(&local_b8,param_3,param_4,0);
  fVar35 = *(float *)(lVar4 + 0x1320);
  fVar34 = *(float *)(lVar2 + 400);
  fVar36 = fVar35;
  if ((param_2 & 0x402) != 0) {
    uVar11 = FUN_180102463(*(undefined4 *)(lVar4 + 0xdf8),fVar34);
    fVar36 = *(float *)(lVar4 + 0x1320);
    fVar34 = extraout_XMM0_Da;
  }
  if ((uVar20 >> 0xe & 1) == 0) {
    local_11c = 0;
  }
  else {
    local_11c = (uint)CONCAT71((int7)((ulonglong)uVar11 >> 8),*(longlong *)(lVar4 + 0x24f8) != 0);
  }
  if ((short)param_2 < 0) {
    uVar10 = (undefined4)
             CONCAT71((int7)((ulonglong)unaff_RBX >> 8),*(longlong *)(lVar4 + 0x24f8) != 0);
  }
  else {
    uVar10 = 0;
  }
  fVar36 = fVar1 + fVar1 + fVar36 + local_b8;
  local_b4 = fVar31 + fVar31 + local_b4;
  if ((char)local_11c == '\0') {
    pfVar16 = (float *)(lVar2 + 0x298);
    if ((uVar20 >> 0xc & 1) == 0) {
      pfVar16 = (float *)(lVar2 + 0x158);
    }
    fVar33 = *pfVar16;
    fVar32 = *(float *)(lVar2 + 0x15c);
    fStack_bc = (fVar34 - fVar31) + fVar32;
    local_c8 = CONCAT44(fStack_bc,fVar33);
    if ((uVar20 >> 0xd & 1) == 0) {
      fStack_c0 = *(float *)(lVar2 + 0x2a0);
    }
    else {
      fStack_c0 = *(float *)(lVar2 + 0x158) + fVar36 + fVar1;
    }
  }
  else {
    fVar33 = *(float *)(lVar2 + 0x2a8);
    fVar32 = *(float *)(lVar2 + 0x15c);
    fStack_bc = (fVar34 - fVar31) + fVar32;
    local_c8 = CONCAT44(fStack_bc,fVar33);
    fStack_c0 = *(float *)(lVar2 + 0x2b0);
  }
  fVar35 = *(float *)(&DAT_1802df140 + (ulonglong)((param_2 & 2) == 0) * 4) * fVar1 + fVar35;
  fStack_bc = local_b4 + fStack_bc;
  if ((param_2 & 2) != 0) {
    fVar31 = (float)(int)(*(float *)(lVar2 + 0x90) * DAT_1802dbb2c);
    local_c8 = CONCAT44(local_c8._4_4_,fVar33 - fVar31);
    fStack_c0 = fStack_c0 + fVar31;
  }
  fVar34 = fVar34 + fVar32;
  fVar31 = *(float *)(lVar2 + 0x158) + fVar35;
  local_e8 = CONCAT44(local_b4,fVar36);
  local_d0 = fVar31;
  fStack_cc = fVar34;
  FUN_180111514(&local_e8);
  local_e8 = local_c8;
  fStack_e0 = fStack_c0;
  fStack_dc = fStack_bc;
  if ((param_2 & 0x7802) == 0) {
    fStack_e0 = 0.0;
    if (0.0 < local_b8) {
      fStack_e0 = *(float *)(lVar4 + 0xe04) + *(float *)(lVar4 + 0xe04);
    }
    fStack_e0 = fVar36 + (float)local_c8 + fStack_e0;
  }
  local_120 = param_1;
  if ((*(byte *)(lVar4 + 0x1fa8) & 0x10) != 0) {
    local_120 = *(int *)(lVar4 + 0x1fd8);
  }
  local_12c = FUN_18014d0fc(local_120,param_2 & 0xffffffff);
  uVar22 = local_11c;
  local_114 = uVar10;
  local_100 = param_4;
  if ((local_11c & 1) == 0 && (char)uVar10 == '\0') {
    puVar17 = &local_e8;
    cVar5 = FUN_1801116b6(puVar17,param_1,0,0);
  }
  else {
    uVar14 = *(undefined4 *)(lVar2 + 0x2b8);
    uVar9 = *(undefined4 *)(lVar2 + 0x2c0);
    *(undefined4 *)(lVar2 + 0x2b8) = *(undefined4 *)(lVar2 + 0x2a8);
    *(undefined4 *)(lVar2 + 0x2c0) = *(undefined4 *)(lVar2 + 0x2b0);
    puVar17 = &local_e8;
    cVar5 = FUN_1801116b6(puVar17,param_1,0,0);
    *(undefined4 *)(lVar2 + 0x2b8) = uVar14;
    *(undefined4 *)(lVar2 + 0x2c0) = uVar9;
  }
  *(byte *)(lVar4 + 0x1fe8) = *(byte *)(lVar4 + 0x1fe8) | 2;
  *(float *)(lVar4 + 0x200c) = (float)local_c8;
  *(float *)(lVar4 + 0x2010) = local_c8._4_4_;
  *(float *)(lVar4 + 0x2014) = fStack_c0;
  *(float *)(lVar4 + 0x2018) = fStack_bc;
  uVar27 = param_2 & 0xffffffff;
  if ((param_2 & 0x1c0000) == 0) {
    uVar27 = (ulonglong)(*(uint *)(lVar4 + 0xe78) | uVar20);
  }
  uVar20 = (uint)uVar27;
  if (((uVar27 & 0x180000) == 0) || (*(float *)(lVar2 + 0x2c4) <= local_c8._4_4_)) {
    uVar18 = 0;
  }
  else {
    uVar18 = CONCAT71((int7)((ulonglong)puVar17 >> 8),0.0 < *(float *)(lVar4 + 0xe7c));
  }
  uVar14 = (undefined4)uVar18;
  if ((uVar27 & 8) == 0) {
    uVar12 = uVar18 & 0xffffffff;
    if (((((uVar20 >> 0x11 & 1) != 0) &&
         (uVar12 = uVar18 & 0xffffffff, *(char *)(lVar4 + 0x21f7) == '\0')) &&
        (uVar12 = uVar18 & 0xffffffff, *(int *)(lVar4 + 0x22b0) == 0)) &&
       (uVar12 = uVar18 & 0xffffffff, *(longlong *)(lVar4 + 0x2200) == lVar2)) {
      local_124 = uVar14;
      uVar11 = FUN_18011c165();
      uVar12 = CONCAT71((int7)((ulonglong)uVar11 >> 8),(byte)uVar11 | (byte)local_124);
      uVar14 = local_124;
    }
  }
  else {
    uVar12 = 0;
  }
  if (cVar5 == '\0') {
    if (((uVar20 >> 0x14 & 1) != 0) &&
       ((*(uint *)(lVar2 + 0x1e8) >> ((byte)(*(char *)(lVar2 + 0x1e0) - 1) & 0x1f) & 1) != 0)) {
      lVar3 = *(longlong *)(lVar4 + 0x2170);
      iVar24 = *(int *)(lVar4 + 0x2168);
      uVar12 = uVar12 & 0xffffffff;
      uVar10 = FUN_180102463(*(undefined4 *)(lVar3 + -8 + (longlong)iVar24 * 0x28),
                             *(undefined4 *)(lVar2 + 0x15c));
      *(undefined4 *)(lVar3 + -8 + (longlong)iVar24 * 0x28) = uVar10;
      if (*(float *)(lVar2 + 0x2c4) <= local_c8._4_4_) {
        bVar6 = *(char *)(lVar2 + 0x1e0) - 1U & 0x1f;
        *(uint *)(lVar2 + 0x1e8) =
             *(uint *)(lVar2 + 0x1e8) & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
      }
    }
    uVar22 = local_12c;
    uVar18 = (ulonglong)local_12c;
    bVar6 = (byte)local_12c;
    if (((byte)uVar12 & bVar6) == 1) {
      FUN_18014d1be(uVar27,fVar31 - fVar35);
    }
    if (bVar6 == 1 && (char)((uVar20 & 8) >> 3) == '\0') {
      FUN_18014d326(param_1);
      uVar18 = CONCAT71((uint7)(uint3)(uVar22 >> 8),1);
    }
    goto LAB_18014c3a0;
  }
  uVar9 = (undefined4)uVar12;
  local_124 = uVar14;
  if ((uVar22 & 1) != 0 || (char)uVar10 != '\0') {
    FUN_18016ac69();
    *(byte *)(lVar4 + 0x1fe9) = *(byte *)(lVar4 + 0x1fe9) | 2;
    uVar11 = *(undefined8 *)(lVar2 + 0x2c0);
    *(undefined8 *)(lVar4 + 0x201c) = *(undefined8 *)(lVar2 + 0x2b8);
    *(undefined8 *)(lVar4 + 0x2024) = uVar11;
  }
  if (((uVar27 & 4) != 0) || (uVar22 = 0, (*(byte *)(lVar4 + 0x1fe5) & 0x40) != 0)) {
    uVar22 = 0x1000;
  }
  uVar15 = uVar22 | 0x200;
  if ((uVar20 >> 8 & 1) != 0) {
    uVar15 = uVar22;
  }
  fVar36 = fVar31 - fVar35;
  if (fVar36 - *(float *)(lVar4 + 0xe1c) <= *(float *)(lVar4 + 0x118)) {
    local_118 = (undefined4)
                CONCAT71((int7)((ulonglong)in_R10 >> 8),
                         *(float *)(lVar4 + 0x118) <
                         *(float *)(lVar4 + 0xe1c) +
                         fVar1 + fVar1 + *(float *)(lVar4 + 0x1320) + fVar36);
  }
  else {
    local_118 = 0;
  }
  uVar22 = *(uint *)(lVar4 + 0x1fe4);
  uVar28 = ((uVar27 & 0xc0) == 0 | 2) << 6;
  if ((uVar22 & 0x400000) == 0) {
    uVar28 = 0;
  }
  uVar29 = uVar28 | uVar20;
  uVar25 = 0x10;
  if ((char)local_118 == '\0') {
    uVar25 = (uVar29 & 0x40) * 4 + 0x20;
  }
  local_ec = (uint)(uVar27 >> 9) & 0x40000 | uVar15 | uVar25;
  local_110 = uVar20 & 1;
  local_ed = (byte)local_110;
  local_10c = uVar9;
  local_108 = param_3;
  if ((uVar22 & 0x400000) == 0) {
    uVar15 = local_ec;
    if (lVar2 != *(longlong *)(lVar4 + 0x1610)) {
      uVar15 = local_ec | 0x10000;
    }
    if ((char)local_118 == '\0') {
      uVar15 = local_ec | 0x10000;
    }
  }
  else {
    FUN_1801361c8(param_1,&local_ed,&local_ec);
    uVar15 = local_ec;
    if ((char)local_118 != '\0') {
      uVar15 = local_ec & 0xffffffcf | 0x10;
    }
  }
  local_148 = (float *)CONCAT44(local_148._4_4_,uVar15);
  local_128 = param_1;
  bVar6 = FUN_18013386b(&local_e8,param_1,&local_ee,&local_ef);
  uVar23 = 1;
  if ((uVar20 >> 8 & 1) == 0) {
    bVar30 = bVar6 != 0;
    bVar6 = 0;
    bVar8 = 0;
    if (bVar30) {
      if (*(int *)(lVar4 + 0x24b8) == local_128) {
        bVar6 = (byte)local_12c ^ 1;
        bVar8 = bVar6;
      }
      else {
        if (uVar28 == 0 && (uVar27 & 0xc0) == 0) {
LAB_18014ca9f:
          bVar7 = 1;
        }
        else {
          bVar7 = 0;
          if (((uVar22 >> 0x16 & 1) == 0) && (bVar7 = 0, *(int *)(lVar4 + 0x2214) == local_128))
          goto LAB_18014ca9f;
        }
        if ((char)uVar29 < '\0') {
          bVar6 = 0;
          if ((char)local_118 != '\0') {
            bVar6 = *(byte *)(lVar4 + 0x21f5) ^ 1;
          }
          bVar7 = bVar7 | bVar6;
        }
        bVar6 = 1;
        bVar8 = bVar7;
        if (((uVar29 & 0x40) != 0) && (bVar8 = 1, *(short *)(lVar4 + 0xb5a) != 2)) {
          bVar8 = bVar7;
        }
      }
    }
    if (*(int *)(lVar4 + 0x21f8) == local_128) {
      if ((byte)local_12c == 1 && *(int *)(lVar4 + 0x22b0) == 0) {
        FUN_18011bfc0(0);
        FUN_180110ca9();
        bVar8 = 1;
        if (*(int *)(lVar4 + 0x21f8) == local_128) goto LAB_18014cb1a;
      }
      else {
LAB_18014cb1a:
        if (*(int *)(lVar4 + 0x22b0) != 1 || (char)local_12c != '\0') goto LAB_18014cb2b;
        FUN_18011bfc0(0);
        FUN_180110ca9();
      }
    }
    else {
LAB_18014cb2b:
      if (bVar8 == 0) goto LAB_18014cb65;
    }
    local_12c = local_12c ^ 1;
    FUN_1800ff98e(*(undefined8 *)(lVar2 + 0x200),local_120,local_12c & 0xff);
    *(byte *)(lVar4 + 0x1fe8) = *(byte *)(lVar4 + 0x1fe8) | 0x10;
    uVar23 = 0;
  }
LAB_18014cb65:
  if ((uVar22 >> 0x16 & 1) != 0) {
    uVar13 = 0;
    if (bVar6 != 0) {
      uVar13 = uVar23;
    }
    local_f8 = CONCAT71(local_f8._1_7_,uVar13);
    FUN_1801362d1(local_128,&local_ed);
    if (bVar6 != 0) {
      FUN_18011bfef(local_128,*(undefined4 *)(lVar2 + 0x1b0),*(undefined4 *)(lVar4 + 0x1f9c),
                    &local_e8);
    }
  }
  bVar6 = local_ed;
  if (local_110 != local_ed) {
    *(byte *)(lVar4 + 0x1fe8) = *(byte *)(lVar4 + 0x1fe8) | 8;
  }
  local_120 = FUN_18010129b(0,DAT_1802ac570);
  uVar22 = uVar22 >> 0x14 & 4 | 2;
  if ((param_2 & 2) == 0) {
    if (bVar6 != 0 || local_ee != 0) {
      iVar24 = 0x1b;
      if ((local_ef & local_ee) == 0) {
        iVar24 = local_ee + 0x19;
      }
      uVar10 = FUN_18010129b(iVar24,DAT_1802ac570);
      local_148 = (float *)((ulonglong)local_148 & 0xffffffff00000000);
      FUN_1801027d9(local_c8,CONCAT44(fStack_bc,fStack_c0),uVar10,0);
    }
    iVar24 = local_128;
    FUN_180102b0e(&local_c8,local_128,uVar22);
    uVar10 = local_114;
    if (((~(byte)local_11c | (byte)local_114) & 1) == 0) {
      FUN_18016acc2();
    }
    if ((uVar20 >> 9 & 1) == 0) {
      if ((uVar20 >> 8 & 1) == 0) {
        iVar26 = 1;
        if ((char)local_12c != '\0') {
          iVar26 = 3 - (uint)((uVar20 >> 0x1d & 1) != 0);
        }
        local_148 = (float *)CONCAT44(local_148._4_4_,0x3f333333);
        FUN_18019b80a(*(undefined8 *)(lVar2 + 800),
                      CONCAT44(*(float *)(lVar4 + 0x1320) * DAT_1802deb10 + fVar34,fVar36 + fVar1),
                      local_120,iVar26);
      }
    }
    else {
      FUN_18019b936(*(undefined8 *)(lVar2 + 800),
                    CONCAT44(*(float *)(lVar4 + 0x1320) * DAT_1802dbb2c + fVar34,
                             fVar31 - DAT_1802dbb2c * fVar35),local_120);
    }
    if (*(char *)(lVar4 + 0x2a40) == '\x01') {
      puVar19 = &DAT_18036d117;
      puVar21 = (undefined *)0x0;
LAB_18014ceb4:
      FUN_18011d2ab(puVar19,puVar21);
    }
  }
  else {
    bVar6 = 0x19;
    if (local_ee != 0) {
      bVar6 = local_ef | 0x1a;
    }
    uVar10 = FUN_18010129b(bVar6,DAT_1802ac570);
    local_148 = (float *)CONCAT44(local_148._4_4_,*(undefined4 *)(lVar4 + 0xdfc));
    FUN_1801027d9(local_c8,CONCAT44(fStack_bc,fStack_c0),uVar10,1);
    iVar24 = local_128;
    FUN_180102b0e(&local_c8,local_128,uVar22);
    uVar10 = local_114;
    if (((~(byte)local_11c | (byte)local_114) & 1) == 0) {
      FUN_18016acc2();
    }
    if ((uVar20 >> 9 & 1) == 0) {
      if ((uVar20 >> 8 & 1) == 0) {
        iVar26 = 1;
        if ((char)local_12c != '\0') {
          iVar26 = 3 - (uint)((uVar20 >> 0x1d & 1) != 0);
        }
        local_148 = (float *)CONCAT44(local_148._4_4_,0x3f800000);
        FUN_18019b80a(*(undefined8 *)(lVar2 + 800),CONCAT44(fVar34,fVar36 + fVar1),local_120,iVar26)
        ;
      }
      else {
        fVar31 = fVar31 - (fVar35 - fVar1);
        local_d0 = fVar31;
      }
    }
    else {
      FUN_18019b936(*(undefined8 *)(lVar2 + 800),
                    CONCAT44(*(float *)(lVar4 + 0x1320) * DAT_1802dbb2c + fVar34,
                             DAT_1802df148 * fVar35 + fVar31),local_120);
    }
    if ((uVar20 >> 0x1c & 1) != 0) {
      fStack_c0 = fStack_c0 - (*(float *)(lVar4 + 0x1320) + *(float *)(lVar4 + 0xdf4));
    }
    if (*(char *)(lVar4 + 0x2a40) == '\x01') {
      puVar19 = &DAT_18037a66f;
      puVar21 = &DAT_18037a66f;
      goto LAB_18014ceb4;
    }
  }
  if ((char)local_124 != '\0') {
    local_f8 = CONCAT44(*(float *)(lVar4 + 0x1320) * DAT_1802dbb2c + fVar34,
                        fVar1 + (fVar31 - fVar35));
    FUN_18014d357();
  }
  if ((param_2 & 2) == 0) {
    FUN_180101dc8(CONCAT44(fStack_cc,local_d0),local_108,local_100,0);
  }
  else {
    local_140 = &local_f8;
    local_f8 = 0;
    local_138 = 0;
    local_148 = &local_b8;
    FUN_180102475(&local_d0,&fStack_c0,local_108,local_100);
  }
  uVar22 = local_12c;
  uVar18 = (ulonglong)local_12c;
  if ((char)uVar10 != '\0') {
    FUN_18016acc2();
  }
  if ((byte)((byte)local_10c & (byte)uVar22) == 1) {
    FUN_18014d1be(uVar29,local_d0 - fVar35);
  }
  if ((byte)uVar22 == 1 && (char)((uVar20 & 8) >> 3) == '\0') {
    FUN_18014d326(iVar24);
  }
LAB_18014c3a0:
  if (DAT_180402640 != (local_b0 ^ (ulonglong)auStack_168)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_b0 ^ (ulonglong)auStack_168);
  }
  return uVar18;
}

