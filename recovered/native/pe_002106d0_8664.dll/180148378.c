/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180148378 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_180148378(longlong param_1,undefined1 (*param_2) [12],uint param_3)

{
  ulonglong uVar1;
  undefined *puVar2;
  float fVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  byte bVar7;
  char cVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  longlong *plVar14;
  char *pcVar15;
  uint uVar16;
  longlong lVar18;
  uint uVar19;
  undefined8 *puVar20;
  undefined4 *puVar21;
  longlong lVar22;
  uint uVar23;
  undefined **ppuVar24;
  byte *pbVar25;
  byte bVar26;
  uint uVar27;
  undefined1 *puVar28;
  longlong lVar29;
  bool bVar30;
  float fVar31;
  int iVar33;
  int iVar34;
  undefined1 auVar32 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auStack_228 [32];
  undefined8 *local_208;
  undefined *puStack_200;
  undefined4 local_1f8;
  uint local_1e4;
  longlong local_1e0;
  ulonglong local_1d8;
  uint local_1cc;
  longlong local_1c8;
  undefined8 local_1c0;
  float local_1b4;
  uint local_1b0;
  uint local_1ac;
  undefined4 local_1a8;
  uint local_1a4;
  int local_1a0;
  undefined4 local_19c;
  longlong local_198;
  longlong local_190;
  undefined1 (*local_188) [12];
  ulonglong local_180;
  undefined **local_178;
  undefined **local_170;
  float local_168;
  float local_164;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [4];
  undefined8 uStack_104;
  float fStack_fc;
  ulonglong local_f0;
  ulonglong uVar17;
  
  lVar22 = DAT_180419160;
  local_f0 = DAT_180402640 ^ (ulonglong)auStack_228;
  *(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1;
  lVar13 = *(longlong *)(lVar22 + 0x1608);
  if (*(char *)(lVar13 + 0x10e) == '\0') {
    fVar31 = (float)FUN_18011a456();
    local_1e0 = FUN_180101d94(param_1,0);
    FUN_18011a39a();
    *(undefined8 *)(lVar22 + 0x1fa8) = 0;
    FUN_18011a496();
    FUN_180117f98(param_1);
    local_1a0 = *(int *)(lVar22 + 0x27e0);
    if (local_1a0 == 0) {
      *(undefined4 *)(lVar22 + 0x27e0) =
           *(undefined4 *)
            (*(longlong *)(lVar13 + 0x150) + -4 + (longlong)*(int *)(lVar13 + 0x148) * 4);
    }
    uVar19 = param_3 & 0xff8ffff7 | 0x100008;
    if ((param_3 & 0x20) == 0) {
      uVar19 = param_3;
    }
    if ((uVar19 & 8) == 0) {
      FUN_18014907e(param_2,uVar19);
    }
    uVar12 = DAT_1802ac570;
    if ((uVar19 & 0x700000) == 0) {
      uVar19 = uVar19 | *(uint *)(lVar22 + 0x27dc) & 0x700000;
    }
    if ((uVar19 & 0x1800000) == 0) {
      uVar19 = uVar19 | *(uint *)(lVar22 + 0x27dc) & 0x1800000;
    }
    if ((uVar19 & 0x6000000) == 0) {
      uVar19 = uVar19 | *(uint *)(lVar22 + 0x27dc) & 0x6000000;
    }
    uVar27 = *(uint *)(lVar22 + 0x27dc) & 0x18000000;
    if ((uVar19 & 0x18000000) != 0) {
      uVar27 = 0;
    }
    uVar27 = uVar27 | uVar19;
    uVar23 = *(uint *)(lVar22 + 0x27dc) & 0xe00fffff | uVar27;
    uVar5 = (uint)((uVar23 & 2) == 0);
    uVar16 = uVar5 + 3;
    uVar17 = (ulonglong)uVar16;
    fVar36 = 0.0;
    if ((uVar23 & 0x10) == 0) {
      fVar36 = *(float *)(lVar22 + 0xe0c) + fVar31;
    }
    local_1c8 = param_1;
    local_1ac = param_3;
    fVar31 = (float)FUN_180102463();
    if ((uVar23 & 2) == 0) {
      uVar12 = *(undefined4 *)param_2[1];
    }
    puVar20 = (undefined8 *)(local_108 + 4);
    puVar2 = local_108 + 8;
    fStack_fc = (float)uVar12;
    _local_108 = *param_2;
    local_1a4 = uVar27 & 0x10100000;
    local_1e4 = uVar23;
    if (local_1a4 == 0x10100000) {
      local_208 = puVar20;
      puStack_200 = puVar2;
      FUN_1800ff588(puVar2,0x10100000,puVar20,local_108);
    }
    else if ((~uVar27 & 0x8200000) == 0) {
      local_208 = puVar20;
      puStack_200 = local_108 + 8;
      FUN_1800ff447(puVar2,local_1a4,puVar20,local_108);
      uVar23 = local_1e4;
      FUN_180149526(param_2,local_108,local_108 + 4,local_108 + 8);
    }
    lVar18 = local_1c8;
    iVar33 = (int)(uStack_104._4_4_ * _UNK_1802de5d8 +
                  (float)(-(uint)(0.0 <= uStack_104._4_4_) & _UNK_1802de5e8 |
                         ~-(uint)(0.0 <= uStack_104._4_4_) & _UNK_1802df0b8));
    iVar34 = (int)(fStack_fc * _UNK_1802de5dc +
                  (float)(-(uint)(0.0 <= fStack_fc) & _UNK_1802de5ec |
                         ~-(uint)(0.0 <= fStack_fc) & _UNK_1802df0bc));
    local_118 = CONCAT44((int)((float)uStack_104 * _UNK_1802de5d4 +
                              (float)(-(uint)(0.0 <= (float)uStack_104) & _UNK_1802de5e4 |
                                     ~-(uint)(0.0 <= (float)uStack_104) & _UNK_1802df0b4)),
                         (int)((float)local_108 * _DAT_1802de5d0 +
                              (float)(-(uint)(0.0 <= (float)local_108) & _DAT_1802de5e0 |
                                     ~-(uint)(0.0 <= (float)local_108) & _DAT_1802df0b0)));
    uStack_110 = CONCAT44(iVar34,iVar33);
    fVar3 = *(float *)(lVar13 + 0x158);
    fVar37 = fVar36;
    if (*(int *)(lVar22 + 0xe94) != 0) {
      fVar37 = 0.0;
    }
    local_1a8 = *(undefined4 *)(lVar13 + 0x15c);
    *(float *)(lVar13 + 0x158) = fVar37 + fVar3;
    local_198 = lVar13;
    local_180 = uVar17;
    if (((uVar19 & 0x300000) == 0) || ((uVar23 & 0x20) != 0)) {
      bVar26 = 0;
      local_1d8 = 0;
      lVar13 = local_1e0;
      if (((uVar19 >> 0x16 & 1) != 0) && ((uVar23 & 0x20) == 0)) {
        if ((uVar23 & 2) == 0) {
          uVar12 = FUN_18012bcdf(iVar34,0,0xff);
          uVar9 = FUN_18012bcdf(uStack_110 & 0xffffffff,0,0xff);
          uVar10 = FUN_18012bcdf(local_118._4_4_,0,0xff);
          uVar11 = FUN_18012bcdf(local_118 & 0xffffffff,0,0xff);
          puStack_200 = (undefined *)CONCAT44(puStack_200._4_4_,uVar9);
          local_208 = (undefined8 *)CONCAT44(local_208._4_4_,uVar10);
          pcVar15 = "#%02X%02X%02X%02X";
          local_1f8 = uVar12;
        }
        else {
          uVar12 = FUN_18012bcdf(iVar33,0,0xff);
          uVar9 = FUN_18012bcdf(local_118._4_4_,0,0xff);
          uVar11 = FUN_18012bcdf(local_118 & 0xffffffff,0,0xff);
          puStack_200 = (undefined *)CONCAT44(puStack_200._4_4_,uVar12);
          local_208 = (undefined8 *)CONCAT44(local_208._4_4_,uVar9);
          pcVar15 = "#%02X%02X%02X";
        }
        FUN_1800fead5(&local_158,0x40,pcVar15,uVar11);
        FUN_1800ffdb5();
        local_208 = (undefined8 *)0x0;
        puStack_200 = (undefined *)0x0;
        pbVar25 = (byte *)&local_158;
        cVar8 = FUN_180145e1f("##Text",pbVar25,0x40,8);
        lVar13 = local_1e0;
        if (cVar8 == '\0') {
          bVar26 = 0;
        }
        else {
          local_208 = &uStack_110;
          while (((ulonglong)*pbVar25 < 0x24 &&
                 ((0x900000200U >> ((ulonglong)*pbVar25 & 0x3f) & 1) != 0))) {
            pbVar25 = pbVar25 + 1;
          }
          local_118 = _DAT_1802df0c0;
          uStack_110 = _UNK_1802df0c8;
          if ((local_1e4 & 2) == 0) {
            pcVar15 = "%02X%02X%02X%02X";
            puStack_200 = (undefined *)((longlong)&uStack_110 + 4);
          }
          else {
            pcVar15 = "%02X%02X%02X";
          }
          FUN_18012b8d7(pbVar25,pcVar15,&local_118,(longlong)&local_118 + 4);
          bVar26 = 1;
        }
        uVar23 = local_1e4;
        if ((local_1e4 & 8) == 0) {
          FUN_18011b815("context",8);
        }
        local_1d8 = 0;
      }
    }
    else {
      fVar37 = fVar31 - (float)(uVar5 + 2) * *(float *)(lVar22 + 0xe0c);
      local_1b4 = fVar31;
      local_188 = param_2;
      if ((uVar23 & 0x200800) == 0) {
        local_1cc = uVar19 & 0x1000000;
        local_1c0 = 0x1000;
        lVar13 = 0;
      }
      else {
        local_1cc = uVar19 & 0x1000000;
        pcVar15 = "M:0.000";
        if ((uVar19 & 0x1000000) == 0) {
          pcVar15 = "M:000";
        }
        local_208 = (undefined8 *)CONCAT44(local_208._4_4_,0xbf800000);
        local_1c0 = 0;
        FUN_1801023ca(&local_158,pcVar15,0,0);
        uVar23 = local_1e4;
        if ((float)(int)(fVar37 / (float)uVar16) <= (float)local_158) {
          lVar13 = 0;
        }
        else {
          local_1c0 = 0;
          lVar13 = (ulonglong)((uVar19 >> 0x15 & 1) != 0) + 1;
        }
      }
      uVar9 = DAT_1802df0d0;
      uVar12 = DAT_1802ac570;
      local_170 = &PTR_s__0_3f_1802def00 + lVar13 * 4;
      local_178 = &PTR_DAT_1802deea0 + lVar13 * 4;
      bVar30 = (uVar23 >> 0x13 & 1) != 0;
      local_190 = lVar22;
      uVar11 = DAT_1802ac570;
      if (bVar30) {
        uVar11 = 0;
      }
      local_19c = 0xff;
      if (bVar30) {
        local_19c = 0;
      }
      puVar21 = &DAT_1802dee50;
      puVar20 = &local_118;
      ppuVar24 = &PTR_DAT_1802dee80;
      puVar28 = local_108;
      bVar26 = 0;
      local_1d8 = 0;
      uVar17 = 0;
      fVar38 = 0.0;
      local_1b0 = uVar27;
      do {
        if (uVar17 != 0) {
          FUN_180119893();
        }
        uVar1 = uVar17 + 1;
        fVar35 = (float)(int)(((float)(int)uVar1 * fVar37) / (float)uVar16);
        FUN_180102463(fVar35 - fVar38);
        FUN_1800ffdb5();
        lVar13 = DAT_180419160;
        if ((local_1e4 & 0x200800) == 0) {
          uVar10 = *puVar21;
          *(uint *)(DAT_180419160 + 0x1fa8) = *(uint *)(DAT_180419160 + 0x1fa8) | 0x20;
          *(undefined4 *)(lVar13 + 0x1fdc) = uVar10;
        }
        local_1f8 = (undefined4)local_1c0;
        if (local_1cc == 0) {
          puStack_200 = local_178[uVar17];
          local_208 = (undefined8 *)CONCAT44(local_208._4_4_,local_19c);
          bVar7 = FUN_18013d731(*ppuVar24,puVar20,uVar12,0);
          bVar26 = bVar26 | bVar7;
        }
        else {
          puStack_200 = local_170[uVar17];
          local_208 = (undefined8 *)CONCAT44(local_208._4_4_,uVar11);
          bVar7 = FUN_18013d2c2(*ppuVar24,puVar28,uVar9,0);
          bVar26 = bVar26 | bVar7;
          local_1d8 = CONCAT71((int7)(local_1d8 >> 8),(byte)local_1d8 | bVar26);
        }
        if ((local_1e4 & 8) == 0) {
          FUN_18011b815("context",8);
        }
        puVar21 = puVar21 + 1;
        puVar20 = (undefined8 *)((longlong)puVar20 + 4);
        ppuVar24 = ppuVar24 + 1;
        puVar28 = puVar28 + 4;
        lVar18 = local_1c8;
        lVar13 = local_1e0;
        lVar22 = local_190;
        param_2 = local_188;
        uVar17 = uVar1;
        fVar31 = local_1b4;
        fVar38 = fVar35;
        uVar27 = local_1b0;
        uVar23 = local_1e4;
      } while (uVar16 != uVar1);
    }
    if ((uVar23 & 0x10) == 0) {
      fVar37 = 0.0;
      if (((uVar23 & 0x20) == 0) && (*(int *)(lVar22 + 0xe94) != 0)) {
        fVar37 = *(float *)(lVar22 + 0xe0c) + fVar31;
      }
      *(float *)(local_198 + 0x158) = fVar37 + fVar3;
      *(undefined4 *)(local_198 + 0x15c) = local_1a8;
      uStack_14c = DAT_1802ac570;
      if ((uVar23 & 2) == 0) {
        uStack_14c = *(undefined4 *)param_2[1];
      }
      uStack_150 = *(undefined4 *)(*param_2 + 8);
      local_158 = *(undefined8 *)*param_2;
      local_160 = 0;
      cVar8 = FUN_180149615("##ColorButton",&local_158,uVar23);
      if (((uVar23 & 4) == 0) && (cVar8 != '\0')) {
        *(undefined8 *)(lVar22 + 0x27f4) = local_158;
        *(ulonglong *)(lVar22 + 0x27fc) = CONCAT44(uStack_14c,uStack_150);
        FUN_18011ac8e("picker",0);
        local_160 = 0;
        local_164 = *(float *)(lVar22 + 0xe08) + *(float *)(lVar22 + 0x1ff8);
        local_168 = *(float *)(lVar22 + 0x1fec) + 0.0;
        FUN_180116a8b(&local_168,0);
      }
      if ((uVar23 & 8) == 0) {
        FUN_18011b815("context",8);
      }
      lVar29 = 0;
      cVar8 = FUN_18011b56a("picker",0);
      if (cVar8 != '\0') {
        lVar29 = *(longlong *)(lVar22 + 0x1608);
        if (*(short *)(lVar29 + 0x118) == 1) {
          if (lVar18 != lVar13) {
            FUN_180132c30(lVar18,lVar13,0);
            FUN_1801377c5();
          }
          uVar19 = local_1ac & 0x1f8c0002;
          FUN_1800ffdb5();
          lVar18 = local_1c8;
          bVar7 = FUN_180149c39("##picker",param_2,uVar19 | 0x704080,lVar22 + 0x27f4);
          bVar26 = bVar26 | bVar7;
        }
        else {
          lVar29 = 0;
        }
        FUN_18011b3ef();
      }
    }
    else {
      lVar29 = 0;
    }
    if ((lVar18 != lVar13) && ((uVar23 & 0x80) == 0)) {
      FUN_180119893(0);
      if ((uVar23 & 0x20) == 0) {
        fVar36 = fVar36 + fVar31 + *(float *)(lVar22 + 0xe0c);
      }
      *(float *)(local_198 + 0x158) = fVar3 + fVar36;
      FUN_180132c30(lVar18,lVar13,0);
    }
    if ((lVar29 == 0) && ((bVar26 & 1) != 0)) {
      if ((local_1d8 & 1) == 0) {
        auVar32._0_4_ = (float)(int)local_118;
        auVar32._4_4_ = (float)local_118._4_4_;
        auVar32._8_4_ = (float)(int)uStack_110;
        auVar32._12_4_ = (float)uStack_110._4_4_;
        auVar6._4_4_ = _UNK_1802de5d4;
        auVar6._0_4_ = _DAT_1802de5d0;
        auVar6._8_4_ = _UNK_1802de5d8;
        auVar6._12_4_ = _UNK_1802de5dc;
        _local_108 = divps(auVar32,auVar6);
      }
      if ((~uVar27 & 0x8200000) == 0) {
        *(undefined8 *)(lVar22 + 0x27e8) = _local_108;
        local_208 = (undefined8 *)(local_108 + 4);
        puStack_200 = local_108 + 8;
        FUN_1800ff588();
        *(undefined4 *)(lVar22 + 0x27e4) = *(undefined4 *)(lVar22 + 0x27e0);
        local_158 = _local_108;
        uStack_150 = uStack_104._4_4_;
        uStack_14c = 0;
        uVar12 = FUN_1800ff3d6();
        *(undefined4 *)(lVar22 + 0x27f0) = uVar12;
      }
      uVar12 = uStack_104._4_4_;
      uVar4 = _local_108;
      if (local_1a4 == 0x10100000) {
        local_208 = (undefined8 *)(local_108 + 4);
        puStack_200 = local_108 + 8;
        FUN_1800ff447();
        uVar12 = uStack_104._4_4_;
        uVar4 = _local_108;
      }
      *(undefined8 *)*param_2 = uVar4;
      *(undefined4 *)(*param_2 + 8) = uVar12;
      uVar23 = local_1e4;
      if ((local_1e4 & 2) == 0) {
        *(float *)param_2[1] = fStack_fc;
      }
    }
    if (local_1a0 == 0) {
      *(undefined4 *)(lVar22 + 0x27e0) = 0;
    }
    FUN_18011834f();
    FUN_18011949a();
    if ((((*(byte *)(lVar22 + 0x1fe8) & 1) != 0) &&
        ((uVar23 & 0x200) == 0 && (*(uint *)(lVar22 + 0x1fe4) & 0x800) == 0)) &&
       (cVar8 = FUN_18011cd83(), cVar8 != '\0')) {
      plVar14 = (longlong *)FUN_18011ce5d("_COL3F",0);
      if (plVar14 != (longlong *)0x0) {
        puVar20 = (undefined8 *)*plVar14;
        *(undefined4 *)(*param_2 + 8) = *(undefined4 *)(puVar20 + 1);
        *(undefined8 *)*param_2 = *puVar20;
        bVar26 = 1;
      }
      puVar20 = (undefined8 *)FUN_18011ce5d("_COL4F",0);
      if (puVar20 != (undefined8 *)0x0) {
        FUN_1802a82f0(param_2,*puVar20,(int)local_180 << 2);
        bVar26 = 1;
      }
      if ((puVar20 != (undefined8 *)0x0 || plVar14 != (longlong *)0x0) && (uVar27 >> 0x1c & 1) != 0)
      {
        local_208 = (undefined8 *)(*param_2 + 4);
        puStack_200 = *param_2 + 8;
        FUN_1800ff447(*(undefined4 *)*param_2);
      }
      FUN_18011d22a();
    }
    if (((lVar29 != 0) && (*(int *)(lVar22 + 0x167c) != 0)) &&
       (*(longlong *)(lVar22 + 0x16a0) == lVar29)) {
      *(int *)(lVar22 + 0x1fe0) = *(int *)(lVar22 + 0x167c);
    }
    if ((bVar26 == 1) && (*(int *)(lVar22 + 0x1fe0) != 0)) {
      FUN_18010748b();
    }
  }
  else {
    bVar26 = 0;
  }
  if (DAT_180402640 != (local_f0 ^ (ulonglong)auStack_228)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_f0 ^ (ulonglong)auStack_228);
  }
  return bVar26 & 1;
}

