/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140114006 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140114006(undefined4 param_1,float param_2,float param_3,longlong param_4,uint param_5)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  float fVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  float extraout_XMM0_Da;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  uint uVar25;
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_248 [32];
  undefined8 local_228;
  undefined8 local_220;
  float *local_218;
  float local_210;
  uint local_20c;
  uint local_208;
  undefined4 local_204;
  undefined4 local_200;
  float local_1fc;
  longlong local_1f8;
  float local_1f0;
  float local_1ec;
  ulonglong local_1e8;
  longlong local_1e0;
  undefined *local_1d8;
  longlong local_1d0;
  float local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  longlong local_1b8;
  ulonglong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  uint uStack_184;
  uint uStack_180;
  uint uStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168 [16];
  float local_150;
  float fStack_14c;
  float local_148;
  float local_144;
  undefined8 local_140;
  undefined8 local_138;
  float local_130;
  float local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  float local_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  ulonglong local_f0;
  
  lVar16 = DAT_140f2a910;
  local_20c = param_5;
  local_f0 = DAT_140f17b40 ^ (ulonglong)auStack_248;
  lVar17 = *(longlong *)(DAT_140f2a910 + 0x24f8);
  local_210 = param_2;
  if (lVar17 == 0) {
    if (DAT_140f17b40 == (local_f0 ^ (ulonglong)auStack_248)) {
      FUN_14007a954("Call should only be done while in BeginTable() scope!");
      return;
    }
  }
  else {
    local_1a8 = *(longlong *)(DAT_140f2a910 + 0x1608);
    lVar2 = *(longlong *)(local_1a8 + 800);
    if ((param_3 == 0.0) && (!NAN(param_3))) {
      param_3 = (float)FUN_1401132cc();
    }
    fVar19 = local_210;
    local_1f8 = param_4;
    FUN_1401a27d0();
    uVar9 = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
    local_178 = FUN_1401a86e0();
    local_200 = (undefined4)local_178;
    local_1fc = extraout_XMM0_Da;
    local_1c8 = extraout_XMM0_Da;
    uStack_1c4 = extraout_XMM0_Db;
    uStack_1c0 = (int)extraout_XMM0_Qb;
    uStack_1bc = uVar9;
    uStack_170 = extraout_XMM0_Qb_00;
    if (fVar19 < 0.0) {
      local_1fc = (float)FUN_1401a27d0();
      local_200 = FUN_1401a86e0();
    }
    fVar6 = local_1c8;
    fVar19 = *(float *)(lVar16 + 0xe14) + *(float *)(lVar16 + 0xe14) + *(float *)(lVar16 + 0x1320);
    uVar18 = -(uint)(local_210 < 0.0);
    fVar30 = (float)local_178;
    local_188 = (float)((uint)(float)local_178 ^ _DAT_1401c8590);
    uStack_184 = local_178._4_4_ ^ _UNK_1401c8594;
    uStack_180 = (uint)uStack_170 ^ _UNK_1401c8598;
    uStack_17c = uStack_170._4_4_ ^ _UNK_1401c859c;
    fVar24 = (float)(int)(float)((uint)(param_3 * (float)local_178 +
                                       (float)(~uVar18 & ((uint)fVar19 ^ _DAT_1401c8590) |
                                              uVar18 & (uint)fVar19) * local_1c8) & _DAT_1401ced40);
    *(float *)(lVar17 + 0xe8) = fVar24;
    *(uint *)(lVar17 + 0xec) =
         -(uint)((float)local_178 != local_188) & (uint)(local_1c8 / (float)local_178);
    fVar24 = fVar24 / local_188;
    FUN_14011264b(1);
    FUN_140112b04();
    fVar19 = *(float *)(lVar17 + 0x80);
    local_128 = *(undefined4 *)(lVar17 + 0x110);
    local_120 = *(undefined4 *)(lVar17 + 0x118);
    uVar9 = *(undefined4 *)(lVar17 + 0x134);
    local_124 = uVar9;
    local_11c = fVar19;
    FUN_1400e0ab6(*(undefined8 *)(lVar17 + 0x1a0),lVar2,0);
    uVar20 = *(undefined4 *)(lVar17 + 0x130);
    local_1e0 = lVar16;
    if (0 < *(short *)(lVar17 + 0x22e)) {
      uVar20 = FUN_14007b71f();
    }
    fVar27 = fVar6 * fVar24;
    fVar28 = fVar30 * fVar24;
    fVar29 = fVar6 * fVar24;
    fVar24 = fVar30 * fVar24;
    bVar4 = local_210 < 0.0;
    FUN_140112577(1,0,0xffffffff);
    FUN_1400883a6(lVar17 + 0x130,lVar17 + 0x138,0);
    uVar7 = FUN_14007a557(0x30);
    _local_118 = CONCAT44(fVar19,*(undefined4 *)(lVar17 + 0x138));
    local_140 = CONCAT44(uVar9,*(undefined4 *)(lVar17 + 0x130));
    local_220 = (ulonglong)local_220._4_4_ << 0x20;
    local_228._0_4_ = 0;
    FUN_1400de294(lVar2,&local_140,&local_118,uVar7);
    _local_118 = CONCAT44(*(undefined4 *)(lVar17 + 0x134),uVar20);
    uVar13 = CONCAT71((int7)((ulonglong)&local_118 >> 8),1);
    FUN_1400883a6(&local_118,lVar17 + 0x138,1);
    local_228 = (float *)((ulonglong)local_228._4_4_ << 0x20);
    FUN_1400ac79b(&local_128,param_1,0,0);
    FUN_140081bc7(param_1);
    lVar16 = local_1e0;
    fVar21 = (float)FUN_14007b71f((*(float *)(local_1e0 + 0x1320) -
                                  *(float *)(*(longlong *)(local_1e0 + 0x1318) + 0x44) *
                                  *(float *)(local_1e0 + 0x1328)) * DAT_1401c86a0);
    puVar10 = &DAT_1402114b8;
    fVar19 = *(float *)(&DAT_1402114b8 + (ulonglong)bVar4 * 4);
    local_1f0 = (fVar21 / local_188) * fVar19;
    fVar21 = *(float *)(lVar16 + 0xe18);
    local_1ec = *(float *)(lVar16 + 0xe70);
    fVar1 = *(float *)(lVar16 + 0xe74);
    param_3 = param_3 - fVar21;
    auVar5._4_4_ = _UNK_1401c8594;
    auVar5._0_4_ = _DAT_1401c8590;
    auVar5._8_4_ = _UNK_1401c8598;
    auVar5._12_4_ = _UNK_1401c859c;
    local_168._0_4_ = (uint)*(float *)(lVar16 + 0xe14) ^ _DAT_1401c8590;
    local_168._4_4_ = _UNK_1401c8594;
    local_168._8_4_ = _UNK_1401c8598;
    local_168._12_4_ = _UNK_1401c859c;
    fVar31 = (float)((uint)(local_1c8 * *(float *)(lVar16 + 0xe14)) & _DAT_1401ced40);
    fVar30 = fVar30 * fVar21;
    auVar26._4_4_ = fVar30;
    auVar26._0_4_ = fVar30;
    auVar26._8_4_ = fVar30;
    auVar26._12_4_ = fVar30;
    uVar12 = (ulonglong)local_20c;
    local_1d8 = (undefined *)0x0;
    lVar16 = local_1f8;
    local_1e8 = uVar12;
    local_1b8 = lVar17;
    local_198 = fVar27;
    fStack_194 = fVar28;
    fStack_190 = fVar29;
    fStack_18c = fVar24;
    do {
      if (0 < (int)local_20c) {
        uVar14 = 0;
        local_208 = (uint)uVar13;
        do {
          lVar15 = (longlong)*(short *)(lVar16 + uVar14 * 0x10);
          lVar3 = *(longlong *)(lVar17 + 0x18);
          puVar11 = (undefined *)(lVar15 * 0x74);
          _local_118 = CONCAT44(local_11c,*(float *)(puVar11 + lVar3 + 0xc));
          _fStack_110 = CONCAT44(local_11c,*(float *)(puVar11 + lVar3 + 8));
          _local_108 = CONCAT44(local_11c + fVar28,*(float *)(puVar11 + lVar3 + 8) + fVar27);
          _fStack_100 = CONCAT44(local_11c + fVar24,*(float *)(puVar11 + lVar3 + 0xc) + fVar29);
          puVar10 = puVar11;
          if ((uVar13 & 1) == 0) {
LAB_14011496b:
            if (((ulonglong)local_1d8 & 1) != 0) {
              uVar9 = FUN_140112dbc(lVar17,uVar14 & 0xffffffff,lVar15);
              local_228 = (float *)CONCAT44(local_228._4_4_,0x3f800000);
              puVar10 = (undefined *)FUN_1400ddd04(lVar2,&local_118,&fStack_100,uVar9);
            }
          }
          else {
            lVar16 = uVar14 * 0x10 + lVar16;
            local_228 = &fStack_100;
            local_1d0 = lVar15;
            local_220._0_4_ = *(undefined4 *)(lVar16 + 8);
            FUN_1400de4d6(lVar2,&local_118,&fStack_110,&local_108);
            local_220 = CONCAT44(local_220._4_4_,*(undefined4 *)(lVar16 + 0xc));
            local_228 = &fStack_100;
            local_1a0 = lVar16;
            FUN_1400de4d6(lVar2,&local_118,&fStack_110,&local_108);
            local_204 = FUN_14007b71f();
            uVar12 = FUN_140112453(lVar17,local_1d0);
            uVar13 = FUN_14007b050(uVar12,0);
            fVar27 = *(float *)(local_1e0 + 0x1320) / local_188;
            iVar8 = FUN_14007854a(uVar12,uVar13);
            auVar22._4_12_ = local_168._4_12_;
            auVar22._0_4_ =
                 (local_168._0_4_ + local_168._0_4_ +
                 (*(float *)(puVar11 + lVar3 + 0xc) - *(float *)(puVar11 + lVar3 + 8))) -
                 (float)iVar8 * fVar27;
            fVar24 = (float)FUN_14007b71f(auVar22._0_8_);
            fVar24 = fVar24 * local_1ec;
            puVar10 = (undefined *)FUN_1401a1f10();
            *(float *)(puVar11 + lVar3 + 0x50) =
                 extraout_XMM0_Da_00 + *(float *)(puVar11 + lVar3 + 0x38);
            *(float *)(puVar11 + lVar3 + 0x4c) =
                 extraout_XMM0_Da_00 + *(float *)(puVar11 + lVar3 + 0x38);
            if (uVar12 < uVar13) {
              if (local_210 < 0.0) {
                fVar28 = (float)(iVar8 + -1) * fVar27;
              }
              else {
                fVar28 = 0.0;
              }
              fVar28 = ((float)(int)((int)fVar24 -
                                    (uint)(fVar24 < 0.0 && (float)(int)fVar24 != fVar24)) -
                       local_1f0) + fVar28;
              uVar25 = (uint)fVar27 ^ _DAT_1401c8590;
              bVar4 = local_210 < 0.0;
              local_1b0 = uVar14;
              do {
                uVar14 = FUN_1401906f0(uVar12,10);
                if (uVar14 == 0) {
                  uVar14 = uVar13;
                }
                local_228 = (float *)CONCAT44(local_228._4_4_,0xbf800000);
                FUN_14007b686(&local_130,uVar12,uVar14,0);
                fVar24 = (float)FUN_14004863e();
                lVar17 = local_1a8;
                local_140 = *(undefined8 *)(local_1a8 + 0x2b8);
                local_138 = CONCAT44(fVar24 + (float)((ulonglong)local_140 >> 0x20),
                                     param_3 + (float)local_140);
                uVar9 = *(undefined4 *)(lVar2 + 0x34);
                FUN_14007a67a(0,*(undefined4 *)(local_1a0 + 4));
                local_228 = (float *)uVar12;
                local_220 = uVar14;
                local_218 = &local_130;
                FUN_14007b7e3(lVar2,&local_140,&local_138,(undefined4)local_138);
                FUN_14007a8e1(1);
                uVar20 = *(undefined4 *)(lVar2 + 0x34);
                fVar24 = SUB164(auVar26 | auVar5,0);
                auVar23._4_12_ = SUB1612(auVar26 | auVar5,4);
                auVar23._0_4_ = fVar24 + fVar24 + fVar31 + fVar31 + (param_3 - local_130);
                fVar24 = (float)FUN_14007b71f(auVar23._0_8_);
                local_144 = *(float *)(lVar17 + 700) + local_12c;
                local_148 = *(float *)(lVar17 + 0x2b8) - fVar24 * fVar1 * fVar19;
                local_150 = *(float *)(puVar11 + lVar3 + 0x38) + fVar6 * fVar21;
                fStack_14c = local_11c + fVar30;
                if (local_210 < 0.0) {
                  fVar24 = (float)FUN_14007b71f();
                  local_150 = (param_3 - fVar24) * local_1c8 + local_150;
                  fStack_14c = (float)local_178 * (param_3 - fVar24) + fStack_14c;
                }
                fVar28 = fVar28 + (float)(~-(uint)bVar4 & (uint)fVar27 | uVar25 & -(uint)bVar4);
                local_150 = (float)(~uVar18 & (uint)fVar28 | (uint)(fVar27 + fVar28) & uVar18) +
                            local_150;
                local_218 = &local_150;
                local_220 = CONCAT44(local_220._4_4_,local_200);
                local_228 = (float *)CONCAT44(local_228._4_4_,local_1fc);
                puVar10 = (undefined *)FUN_1400e0f13(lVar2,uVar9,uVar20);
                uVar12 = uVar14 + 1;
              } while (uVar12 < uVar13);
              uVar13 = (ulonglong)local_208;
              uVar14 = local_1b0;
              lVar16 = local_1f8;
              lVar15 = local_1d0;
              lVar17 = local_1b8;
              uVar12 = local_1e8;
              fVar27 = local_198;
              fVar28 = fStack_194;
              fVar29 = fStack_190;
              fVar24 = fStack_18c;
              goto LAB_14011496b;
            }
            uVar13 = (ulonglong)local_208;
            lVar16 = local_1f8;
            uVar12 = local_1e8;
            fVar27 = local_198;
            fVar28 = fStack_194;
            fVar29 = fStack_190;
            fVar24 = fStack_18c;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 != uVar12);
      }
      puVar10 = (undefined *)CONCAT71((int7)((ulonglong)puVar10 >> 8),1);
      uVar14 = uVar13 & 1;
      uVar13 = 0;
      local_1d8 = puVar10;
    } while (uVar14 != 0);
    FUN_140088407();
    FUN_140088407();
    uVar9 = FUN_14007b71f();
    *(undefined4 *)(*(longlong *)(lVar17 + 0x10) + 0xc) = uVar9;
    if (DAT_140f17b40 == (local_f0 ^ (ulonglong)auStack_248)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_f0 ^ (ulonglong)auStack_248);
}

