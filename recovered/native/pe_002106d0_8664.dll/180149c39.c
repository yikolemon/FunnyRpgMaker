/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180149c39 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180149c39(longlong param_1,float *param_2,uint param_3,undefined8 *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined7 uVar10;
  longlong lVar9;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined8 *puVar14;
  longlong lVar15;
  int iVar16;
  float *pfVar17;
  byte bVar18;
  longlong lVar19;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float fVar20;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar21;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  float fVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  float fVar46;
  float fVar47;
  undefined1 auStack_2d8 [32];
  float *local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  float local_298;
  float local_294;
  float local_290;
  float local_28c;
  longlong local_288;
  undefined8 *local_280;
  uint local_274;
  float *local_270;
  undefined4 local_264;
  int local_260;
  int local_25c;
  undefined1 local_258 [8];
  float fStack_250;
  float fStack_24c;
  undefined4 local_240;
  int local_23c;
  undefined1 local_238 [16];
  size_t local_220;
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  ulonglong local_1d0;
  float local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined4 local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  undefined8 local_148;
  float local_140;
  float local_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  float fStack_120;
  float fStack_11c;
  int local_118;
  int local_114;
  int local_110;
  undefined1 local_108 [24];
  ulonglong local_f0;
  undefined1 auVar27 [16];
  
  lVar19 = DAT_180419160;
  local_f0 = DAT_180402640 ^ (ulonglong)auStack_2d8;
  *(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1;
  lVar1 = *(longlong *)(lVar19 + 0x1608);
  if (*(char *)(lVar1 + 0x10e) != '\0') {
    uVar21 = 0;
    goto LAB_18014b778;
  }
  lVar15 = *(longlong *)(lVar1 + 800);
  local_280 = param_4;
  FUN_18011a39a();
  uVar12 = *(uint *)(lVar19 + 0x1fa0) | *(uint *)(lVar19 + 0x1fac);
  *(undefined8 *)(lVar19 + 0x1fa8) = 0;
  FUN_180117f98(param_1);
  local_23c = *(int *)(lVar19 + 0x27e0);
  if (local_23c == 0) {
    *(undefined4 *)(lVar19 + 0x27e0) =
         *(undefined4 *)(*(longlong *)(lVar1 + 0x150) + -4 + (longlong)*(int *)(lVar1 + 0x148) * 4);
  }
  FUN_18011a496();
  uVar11 = ~param_3 >> 4 & 0x10 | param_3;
  if ((param_3 & 8) == 0) {
    FUN_18014b890(param_2,uVar11);
  }
  if ((param_3 & 0x6000000) == 0) {
    uVar5 = *(uint *)(lVar19 + 0x27dc) & 0x6000000;
    uVar6 = 0x2000000;
    if (uVar5 != 0) {
      uVar6 = uVar5;
    }
    uVar11 = uVar11 | uVar6;
  }
  if ((uVar11 & 0x18000000) == 0) {
    uVar5 = *(uint *)(lVar19 + 0x27dc) & 0x18000000;
    uVar6 = 0x8000000;
    if (uVar5 != 0) {
      uVar6 = uVar5;
    }
    uVar11 = uVar11 | uVar6;
  }
  if ((uVar11 & 8) == 0) {
    uVar11 = uVar11 | *(uint *)(lVar19 + 0x27dc) & 0x40000;
  }
  local_274 = uVar11 & 0x40002;
  uVar2 = *(ulonglong *)(lVar1 + 0x158);
  local_288 = param_1;
  local_270 = param_2;
  local_130 = uVar2;
  FUN_18011a456();
  uVar21 = FUN_180102463();
  pfVar17 = local_270;
  fVar38 = (float)uVar21;
  auVar25._4_4_ = (undefined4)((ulonglong)uVar21 >> 0x20);
  auVar25._8_4_ = (undefined4)extraout_XMM0_Qb_00;
  auVar25._12_4_ = (undefined4)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
  fVar33 = *(float *)(lVar19 + 0xe0c);
  uVar34 = 0;
  uVar35 = 0;
  uVar36 = 0;
  local_220 = (ulonglong)((uVar11 & 2) == 0) * 4 + 0xc;
  FUN_1802a82f0(local_108,local_270);
  local_28c = DAT_1802df0f4 * fVar38;
  uVar43 = 0;
  uVar44 = 0;
  uVar45 = 0;
  fVar42 = DAT_1802dbb2c * fVar38;
  fVar37 = fVar42 - local_28c;
  fVar46 = fVar38 + (float)uVar2;
  local_1e8 = CONCAT44(auVar25._4_4_,fVar46);
  fVar46 = fVar46 + fVar33;
  _fStack_250 = 0;
  local_258 = (undefined1  [8])uVar2;
  fVar31 = (extraout_XMM0_Da + fVar38) * (float)DAT_1802de570 + (float)uVar2;
  fVar29 = (float)(uVar2 >> 0x20);
  fVar32 = fVar38 * DAT_1802de570._4_4_ + fVar29;
  local_138 = CONCAT44(fVar32,fVar31);
  local_140 = fVar37 - (float)(int)(DAT_1802df0f8 * fVar38);
  local_150 = local_140 * _DAT_1802df100;
  local_148 = CONCAT44(local_140 * _UNK_1802df104,local_150);
  local_13c = 0.0;
  local_14c = local_140 * _DAT_1802df110;
  local_160 = *pfVar17;
  local_164 = pfVar17[1];
  local_168 = pfVar17[2];
  uStack_1e0 = auVar25._8_4_;
  uStack_1dc = auVar25._12_4_;
  local_15c = local_168;
  local_158 = local_164;
  local_154 = local_160;
  if ((uVar11 >> 0x1b & 1) == 0) {
    if ((uVar11 >> 0x1c & 1) != 0) {
      local_2b0 = &local_168;
      local_2b8 = &local_164;
      FUN_1800ff588();
    }
  }
  else {
    local_2b8 = &local_158;
    local_2b0 = &local_15c;
    FUN_1800ff447();
    pfVar17 = local_270;
    FUN_180149526(local_270,&local_154,&local_158,&local_15c);
  }
  fVar47 = extraout_XMM0_Da + fVar46;
  FUN_18011648a(2,1);
  uVar39 = auVar25._4_4_;
  uVar40 = auVar25._8_4_;
  uVar41 = auVar25._12_4_;
  if ((uVar11 >> 0x1a & 1) == 0) {
    if ((uVar11 >> 0x19 & 1) == 0) {
      fVar20 = 0.0;
      local_294 = 0.0;
      local_298 = 0.0;
      puVar14 = local_280;
      fVar31 = local_28c;
    }
    else {
      uVar12 = uVar12 & 0x800;
      local_128 = CONCAT44(fVar38,fVar38);
      fVar20 = 0.0;
      FUN_1801342dd(&DAT_180360f40,&local_128,0);
      uVar7 = FUN_180110b56();
      fVar31 = local_28c;
      if (((char)uVar7 != '\0') && (uVar12 == 0)) {
        auVar23._0_4_ = DAT_1802bb8e0 + fVar38;
        auVar22._0_4_ = (float)*(undefined8 *)(lVar19 + 0x118) - (float)local_258._0_4_;
        auVar22._4_4_ =
             (float)((ulonglong)*(undefined8 *)(lVar19 + 0x118) >> 0x20) - (float)local_258._4_4_;
        auVar22._8_4_ = 0.0 - fStack_250;
        auVar22._12_4_ = 0.0 - fStack_24c;
        auVar23._4_4_ = auVar23._0_4_;
        auVar23._8_4_ = auVar23._0_4_;
        auVar23._12_4_ = auVar23._0_4_;
        auVar23 = divps(auVar22,auVar23);
        fVar32 = auVar23._4_4_;
        iVar13 = -(uint)((float)DAT_1802dc280 < auVar23._0_4_);
        iVar16 = -(uint)(DAT_1802dc280._4_4_ < fVar32);
        auVar28._4_4_ = iVar16;
        auVar28._0_4_ = iVar13;
        auVar28._8_4_ = iVar16;
        auVar28._12_4_ = iVar16;
        auVar27._8_8_ = auVar28._8_8_;
        auVar27._4_4_ = iVar13;
        auVar27._0_4_ = iVar13;
        uVar6 = movmskpd(uVar7,auVar27);
        auVar22 = ZEXT416((uint)DAT_1802ac570);
        if ((uVar6 & 1) == 0) {
          auVar22 = auVar23;
        }
        local_158 = (float)(~-(uint)(auVar23._0_4_ < 0.0) & auVar22._0_4_);
        fVar20 = 0.0;
        if ((uVar6 & 2) == 0) {
          fVar20 = DAT_1802ac570 - fVar32;
        }
        local_15c = (float)(-(uint)(fVar32 < 0.0) & (uint)DAT_1802ac570 |
                           ~-(uint)(fVar32 < 0.0) & (uint)fVar20);
        FUN_18014badb(pfVar17,&local_154);
        fVar20 = 1.4013e-45;
      }
      if ((uVar11 & 8) == 0) {
        FUN_18011b815("context",8);
      }
      local_128 = CONCAT44(fVar29,fVar46);
      FUN_180119e21(&local_128);
      local_128 = CONCAT44(fVar38,extraout_XMM0_Da);
      local_294 = 0.0;
      FUN_1801342dd(&DAT_180368c98,&local_128,0);
      uVar21 = FUN_180110b56();
      puVar14 = local_280;
      local_298 = fVar20;
      if (((char)uVar21 != '\0') && (uVar12 == 0)) {
        fVar32 = (*(float *)(lVar19 + 0x11c) - (float)local_258._4_4_) / (DAT_1802bb8e0 + fVar38);
        local_154 = DAT_1802ac570;
        if (fVar32 <= DAT_1802ac570) {
          local_154 = fVar32;
        }
        local_154 = (float)(~-(uint)(fVar32 < 0.0) & (uint)local_154);
        uVar10 = (undefined7)((ulonglong)uVar21 >> 8);
        local_294 = (float)CONCAT71(uVar10,1);
        local_298 = (float)CONCAT71(uVar10,1);
      }
    }
  }
  else {
    local_128 = CONCAT44(fVar38,*(float *)(lVar19 + 0xe0c) + fVar38 + extraout_XMM0_Da);
    fVar20 = 0.0;
    FUN_1801342dd(&DAT_180360f3f,&local_128,0);
    cVar3 = FUN_180110b56();
    puVar14 = local_280;
    if (cVar3 == '\0') {
      local_294 = 0.0;
      local_298 = 0.0;
    }
    else {
      local_294 = 0.0;
      local_298 = 0.0;
      if ((uVar12 & 0x800) == 0) {
        local_238 = ZEXT416((uint)fVar33);
        fVar38 = *(float *)(lVar19 + 0xb00) - fVar32;
        fVar20 = *(float *)(lVar19 + 0xafc) - fVar31;
        fVar32 = *(float *)(lVar19 + 0x11c) - fVar32;
        fVar31 = *(float *)(lVar19 + 0x118) - fVar31;
        fVar33 = fVar20 * fVar20 + fVar38 * fVar38;
        local_1f8._8_4_ = auVar25._8_4_;
        local_1f8._0_8_ = uVar21;
        local_1f8._12_4_ = auVar25._12_4_;
        local_208 = ZEXT416((uint)fVar42);
        local_290 = fVar37;
        if ((fVar33 < (DAT_1802bb8e0 + fVar37) * (DAT_1802bb8e0 + fVar37)) ||
           ((DAT_1802ac570 + fVar42) * (DAT_1802ac570 + fVar42) < fVar33)) {
          local_294 = 0.0;
        }
        else {
          uVar21 = FUN_180282d90();
          fVar33 = (extraout_XMM0_Da_00 / DAT_1802df114) * DAT_1802dbb2c;
          local_154 = (float)(~-(uint)(fVar33 < 0.0) & (uint)fVar33 |
                             (uint)(DAT_1802ac570 + fVar33) & -(uint)(fVar33 < 0.0));
          local_294 = (float)CONCAT71((int7)((ulonglong)uVar21 >> 8),1);
        }
        fVar33 = (float)FUN_180284590();
        fVar37 = (float)FUN_18028a830();
        fVar42 = (float)(_DAT_1802b0ce0 ^ (uint)fVar37);
        local_128 = CONCAT44(fVar20 * fVar37 + fVar38 * fVar33,fVar20 * fVar33 + fVar38 * fVar42);
        cVar3 = FUN_1800fe4cb(&local_140,&local_148,&local_150);
        if (cVar3 == '\0') {
          fVar20 = 0.0;
          local_298 = local_294;
          fVar33 = (float)local_238._0_4_;
          uVar34 = local_238._4_4_;
          uVar35 = local_238._8_4_;
          uVar36 = local_238._12_4_;
          fVar37 = local_290;
          fVar38 = (float)local_1f8._0_4_;
          uVar39 = local_1f8._4_4_;
          uVar40 = local_1f8._8_4_;
          uVar41 = local_1f8._12_4_;
          fVar42 = (float)local_208._0_4_;
          uVar43 = local_208._4_4_;
          uVar44 = local_208._8_4_;
          uVar45 = local_208._12_4_;
        }
        else {
          local_128 = CONCAT44(fVar31 * fVar37 + fVar32 * fVar33,fVar31 * fVar33 + fVar32 * fVar42);
          cVar3 = FUN_1800fe4cb(&local_140,&local_148,&local_150,&local_128);
          fVar33 = (float)local_238._0_4_;
          uVar34 = local_238._4_4_;
          uVar35 = local_238._8_4_;
          uVar36 = local_238._12_4_;
          if (cVar3 == '\0') {
            local_2b8 = (float *)&local_128;
            FUN_1800fe661(&local_178,&local_140,&local_148,&local_150);
            local_128 = local_178;
          }
          local_2a8 = &local_190;
          local_2b0 = (float *)&local_188;
          local_2b8 = (float *)&local_178;
          FUN_1800fe5a6(&local_140,&local_148,&local_150,&local_128);
          local_15c = (float)FUN_1801179ee(DAT_1802ac570 - (float)local_188);
          uVar21 = FUN_1801179ee();
          fVar20 = 1.4013e-45;
          local_298 = (float)CONCAT71((int7)((ulonglong)uVar21 >> 8),1);
          puVar14 = local_280;
          fVar37 = local_290;
          fVar38 = (float)local_1f8._0_4_;
          uVar39 = local_1f8._4_4_;
          uVar40 = local_1f8._8_4_;
          uVar41 = local_1f8._12_4_;
          fVar42 = (float)local_208._0_4_;
          uVar43 = local_208._4_4_;
          uVar44 = local_208._8_4_;
          uVar45 = local_208._12_4_;
          local_158 = extraout_XMM0_Da_01;
        }
      }
    }
    fVar31 = local_28c;
    if ((uVar11 & 8) == 0) {
      FUN_18011b815("context",8);
      fVar31 = local_28c;
    }
  }
  fVar33 = fVar33 + fVar47;
  if (local_274 == 0x40000) {
    local_128 = CONCAT44(fVar29,fVar33);
    FUN_180119e21(&local_128);
    local_128 = CONCAT44(fVar38,extraout_XMM0_Da);
    FUN_1801342dd("alpha",&local_128,0);
    uVar21 = FUN_180110b56();
    if ((char)uVar21 != '\0') {
      fVar32 = (*(float *)(lVar19 + 0x11c) - (float)local_258._4_4_) / (DAT_1802bb8e0 + fVar38);
      fVar29 = DAT_1802ac570;
      if (fVar32 <= DAT_1802ac570) {
        fVar29 = fVar32;
      }
      pfVar17[3] = (float)(-(uint)(fVar32 < 0.0) & (uint)DAT_1802ac570 |
                          ~-(uint)(fVar32 < 0.0) & (uint)(DAT_1802ac570 - fVar29));
      local_298 = (float)CONCAT71((int7)((ulonglong)uVar21 >> 8),1);
    }
  }
  FUN_180116548();
  if ((uVar11 >> 8 & 1) == 0) {
    FUN_180119893();
    FUN_18011a496();
  }
  lVar1 = local_288;
  if ((-1 < (char)uVar11) && (lVar9 = FUN_180101d94(local_288,0), lVar1 != lVar9)) {
    if ((uVar11 >> 8 & 1) != 0) {
      FUN_180119893();
    }
    FUN_180132c30(local_288,lVar9,0);
  }
  if ((uVar11 >> 8 & 1) == 0) {
    FUN_18011648a(4,1);
    fStack_11c = DAT_1802ac570;
    if ((uVar11 & 2) == 0) {
      fStack_11c = pfVar17[3];
    }
    fStack_120 = pfVar17[2];
    local_128 = *(undefined8 *)pfVar17;
    if ((char)uVar11 < '\0') {
      FUN_1801330a5("Current");
    }
    uVar21 = CONCAT44(extraout_XMM0_Da * _UNK_1802df124,extraout_XMM0_Da * _DAT_1802df120);
    local_178 = uVar21;
    FUN_180149615("##current",&local_128,uVar11 & 0x18087042);
    if (puVar14 != (undefined8 *)0x0) {
      FUN_1801330a5("Original");
      local_16c = DAT_1802ac570;
      if ((uVar11 & 2) == 0) {
        local_16c = *(float *)((longlong)puVar14 + 0xc);
      }
      local_170 = *(undefined4 *)(puVar14 + 1);
      local_178 = *puVar14;
      local_188 = uVar21;
      cVar3 = FUN_180149615("##original",&local_178,uVar11 & 0x18087042);
      if (cVar3 != '\0') {
        uVar21 = FUN_1802a82f0(pfVar17,puVar14,local_220);
        local_298 = (float)CONCAT71((int7)((ulonglong)uVar21 >> 8),1);
      }
    }
    FUN_180116548();
    FUN_18011949a();
  }
  fVar29 = DAT_1802de790 * extraout_XMM0_Da;
  if (SUB41(local_294,0) != '\0' || SUB41(fVar20,0) != '\0') {
    if ((uVar11 >> 0x1b & 1) == 0) {
      if ((uVar11 >> 0x1c & 1) != 0) {
        *pfVar17 = local_154;
        pfVar17[1] = local_158;
        pfVar17[2] = local_15c;
      }
    }
    else {
      local_2b8 = pfVar17 + 1;
      local_2b0 = pfVar17 + 2;
      FUN_1800ff588();
      *(float *)(lVar19 + 0x27e8) = local_154;
      *(float *)(lVar19 + 0x27ec) = local_158;
      *(undefined4 *)(lVar19 + 0x27e4) = *(undefined4 *)(lVar19 + 0x27e0);
      fStack_120 = pfVar17[2];
      local_128 = *(undefined8 *)pfVar17;
      fStack_11c = 0.0;
      uVar7 = FUN_1800ff3d6();
      *(undefined4 *)(lVar19 + 0x27f0) = uVar7;
    }
  }
  local_290 = fVar20;
  if ((uVar11 & 0x20) == 0) {
    auVar24._4_4_ = uVar34;
    auVar24._0_4_ = fVar33;
    auVar24._8_4_ = uVar35;
    auVar24._12_4_ = uVar36;
    if (local_274 != 0x40000) {
      auVar25._0_4_ = fVar46;
      auVar24 = auVar25;
    }
    auVar26._4_12_ = auVar24._4_12_;
    auVar26._0_4_ = (auVar24._0_4_ + extraout_XMM0_Da) - (float)local_258._0_4_;
    FUN_18011a05a(auVar26._0_8_);
    uVar12 = uVar11 & 0x1988705a;
    bVar18 = 1;
    if (((uVar11 >> 0x14 & 1) != 0 || (uVar11 & 0x600000) == 0) &&
       (uVar21 = FUN_180148378("##rgb",pfVar17,uVar12 | 0x100004), (char)uVar21 != '\0')) {
      local_298 = (float)CONCAT71((int7)((ulonglong)uVar21 >> 8),1);
      if (*(int *)(lVar19 + 0x167c) == 0) {
        bVar18 = 1;
      }
      else {
        bVar18 = (uVar11 >> 0x1b & 1) == 0 | *(byte *)(lVar19 + 0x1689);
      }
    }
    if ((uVar11 >> 0x15 & 1) != 0 || (uVar11 & 0x500000) == 0) {
      bVar4 = FUN_180148378(&DAT_180360f3d,pfVar17,uVar12 | 0x200004);
      local_298 = (float)CONCAT31((int3)((uint)local_298 >> 8),SUB41(local_298,0) | bVar4);
    }
    if ((uVar11 >> 0x16 & 1) != 0 || (uVar11 & 0x300000) == 0) {
      bVar4 = FUN_180148378("##hex",pfVar17,uVar12 | 0x400004);
      local_298 = (float)CONCAT31((int3)((uint)local_298 >> 8),SUB41(local_298,0) | bVar4);
    }
    FUN_18011a356();
    fVar20 = local_290;
    if (bVar18 == 0) {
      local_2b0 = (float *)&local_188;
      local_2b8 = (float *)&local_178;
      FUN_1800ff447();
      fVar20 = local_290;
      if (((float)local_128 <= 0.0) && (0.0 < local_154)) {
        if (0.0 < (float)local_188) {
LAB_18014aa62:
          if (0.0 < (float)local_178) goto LAB_18014aa8f;
        }
        else if ((local_15c == (float)local_188) && (!NAN(local_15c) && !NAN((float)local_188)))
        goto LAB_18014aa62;
        local_2b8 = pfVar17 + 1;
        local_2b0 = pfVar17 + 2;
        FUN_1800ff588();
      }
    }
  }
LAB_18014aa8f:
  fVar29 = (float)(int)fVar29;
  if (local_298._0_1_ != '\0') {
    if ((uVar11 >> 0x1b & 1) == 0) {
      if ((uVar11 >> 0x1c & 1) != 0) {
        local_154 = *pfVar17;
        local_158 = pfVar17[1];
        local_15c = pfVar17[2];
        local_2b0 = &local_168;
        local_2b8 = &local_164;
        FUN_1800ff588();
      }
    }
    else {
      local_160 = *pfVar17;
      local_164 = pfVar17[1];
      local_168 = pfVar17[2];
      local_2b8 = &local_158;
      local_2b0 = &local_15c;
      FUN_1800ff447();
      fVar20 = local_290;
      FUN_180149526(pfVar17,&local_154,&local_158,&local_15c);
    }
  }
  fVar30 = DAT_1802dbb2c;
  cVar3 = SUB41(fVar20,0);
  local_16c = *(float *)(lVar19 + 0xdb4);
  fVar32 = DAT_1802ac570;
  if (local_16c <= DAT_1802ac570) {
    fVar32 = local_16c;
  }
  local_2b8 = (float *)((longlong)&local_178 + 4);
  local_178 = CONCAT44(DAT_1802dc280._4_4_,(float)DAT_1802dc280);
  local_2b0 = (float *)&local_170;
  local_170 = 0x3f800000;
  iVar13 = (int)(float)(-(uint)(local_16c < 0.0) & (uint)DAT_1802dbb2c |
                       ~-(uint)(local_16c < 0.0) & (uint)(fVar32 * DAT_1802dc270 + DAT_1802dbb2c));
  uVar12 = iVar13 * 0x1000000;
  local_118 = uVar12 + 0xff0000;
  iVar16 = uVar12 + 0xffffff;
  fStack_120 = (float)(iVar13 << 0x18 | _UNK_1802df138);
  fStack_11c = (float)(iVar13 << 0x18 | _UNK_1802df13c);
  local_260 = uVar12 + 0x808080;
  local_128 = CONCAT44(iVar13 << 0x18 | _UNK_1802df134,iVar13 << 0x18 | _DAT_1802df130);
  local_114 = uVar12 + 0xff00ff;
  iVar13 = uVar12 + 0xff;
  local_288 = lVar15;
  local_110 = iVar13;
  FUN_1800ff588(local_2b0,local_114,DAT_1802ac570,&local_178);
  uVar7 = FUN_1800ff3d6(&local_178);
  local_188 = CONCAT44(local_164,local_160);
  local_180 = CONCAT44(*(undefined4 *)(lVar19 + 0xdb4),local_168);
  local_264 = FUN_1800ff3d6();
  lVar1 = local_288;
  fVar32 = DAT_1802ac570;
  local_190 = 0;
  local_25c = iVar16;
  if ((uVar11 >> 0x1a & 1) == 0) {
    fVar37 = extraout_XMM0_Da;
    if ((uVar11 >> 0x19 & 1) != 0) {
      local_218 = ZEXT416((uint)fVar29);
      local_188 = CONCAT44((float)local_258._4_4_ + fVar38,(int)local_1e8);
      local_2a8._0_4_ = iVar16;
      local_2b0._0_4_ = uVar7;
      local_2b8._0_4_ = (float)uVar7;
      FUN_180192dd2(local_288,&local_130,&local_188,iVar16);
      local_188 = CONCAT44(fVar38 + (float)(local_130 >> 0x20),fVar38 + (float)local_130);
      local_2a8 = (undefined8 *)CONCAT44(local_2a8._4_4_,uVar12);
      local_2b0 = (float *)CONCAT44(local_2b0._4_4_,uVar12);
      local_2b8._0_4_ = 0.0;
      FUN_180192dd2(lVar1,&local_130,&local_188,0);
      FUN_180102953(local_130,CONCAT44(local_130._4_4_ + fVar38,(float)local_130 + fVar38),0);
      uVar34 = FUN_1801179ee();
      local_190 = CONCAT44(local_190._4_4_,uVar34);
      uVar34 = FUN_1801179ee();
      local_190 = CONCAT44(uVar34,(undefined4)local_190);
      fVar42 = fVar38 / DAT_1802de604;
      lVar15 = 0;
      do {
        lVar9 = lVar15 + 1;
        iVar16 = *(int *)((longlong)&local_128 + lVar15 * 4 + 4);
        local_188 = CONCAT44((float)(int)lVar9 * fVar42 + local_130._4_4_,fVar47);
        local_198 = CONCAT44((float)(int)lVar15 * fVar42 + local_130._4_4_,fVar46);
        local_2a8 = (undefined8 *)CONCAT44(local_2a8._4_4_,iVar16);
        local_2b0 = (float *)CONCAT44(local_2b0._4_4_,iVar16);
        local_2b8._0_4_ = (float)iVar13;
        FUN_180192dd2(lVar1,&local_198,&local_188,iVar13);
        lVar15 = lVar9;
        iVar13 = iVar16;
      } while (lVar9 != 6);
      fVar42 = local_154 * fVar38 + local_130._4_4_ + DAT_1802dbb2c;
      FUN_180102953(CONCAT44(local_130._4_4_,fVar46),CONCAT44(fVar38 + local_130._4_4_,fVar47),0);
      fVar29 = (float)local_218._0_4_;
      local_2b8 = (float *)CONCAT44(local_2b8._4_4_,*(undefined4 *)(lVar19 + 0xdb4));
      FUN_18014bb6c(lVar1,CONCAT44((float)(int)fVar42,fVar46 + DAT_1802bb8e0),
                    CONCAT44(local_218._0_4_,DAT_1802ac570 + (float)local_218._0_4_),
                    DAT_1802de650 + extraout_XMM0_Da);
      cVar3 = SUB41(local_290,0);
      fVar31 = local_28c;
      fVar30 = DAT_1802dbb2c;
    }
  }
  else {
    local_218 = ZEXT416((uint)fVar29);
    local_1f8._4_4_ = uVar39;
    local_1f8._0_4_ = fVar38;
    local_1f8._8_4_ = uVar40;
    local_1f8._12_4_ = uVar41;
    local_238._4_4_ = uVar34;
    local_238._0_4_ = fVar33;
    local_238._8_4_ = uVar35;
    local_238._12_4_ = uVar36;
    local_1e8 = lVar19;
    local_240 = uVar7;
    local_1d0 = (ulonglong)uVar12;
    local_1c8 = extraout_XMM0_Da;
    uStack_1c4 = extraout_XMM0_Db;
    uStack_1c0 = (int)extraout_XMM0_Qb;
    uStack_1bc = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
    uVar34 = FUN_1801003e9(4,(int)fVar42 / 0xc);
    lVar1 = local_288;
    fVar33 = DAT_1802df114;
    local_280 = (undefined8 *)CONCAT44(local_280._4_4_,uVar34);
    _local_258 = ZEXT416((uint)(fVar30 / fVar42));
    local_208._4_4_ = uVar43;
    local_208._0_4_ = fVar42 + fVar37;
    local_208._8_4_ = uVar44;
    local_208._12_4_ = uVar45;
    lVar19 = 0;
    do {
      fVar38 = ((float)(int)lVar19 + DAT_1802ac570) / DAT_1802de604;
      uVar34 = *(undefined4 *)(lVar1 + 0x20);
      local_2b0._0_4_ = local_280._0_4_;
      local_2b8._0_4_ = (fVar38 + fVar38) * fVar33 + (float)local_258._0_4_;
      FUN_18019117c(lVar1,&local_138,(fVar42 + fVar37) * fVar30);
      local_2b0._0_4_ = 0;
      local_2b8 = (float *)CONCAT44(local_2b8._4_4_,fVar31);
      FUN_18018fc54(lVar1,*(undefined8 *)(lVar1 + 0x58),*(undefined4 *)(lVar1 + 0x50),iVar16);
      *(undefined4 *)(lVar1 + 0x50) = 0;
      uVar35 = *(undefined4 *)(lVar1 + 0x20);
      fVar29 = local_138._4_4_;
      fVar32 = (float)FUN_18028a830();
      fVar38 = (float)local_138;
      fVar46 = (float)FUN_180284590();
      fVar47 = (float)FUN_18028a830();
      fVar20 = (float)FUN_180284590();
      fVar31 = local_28c;
      iVar8 = *(int *)((longlong)&local_128 + lVar19 * 4 + 4);
      lVar19 = lVar19 + 1;
      local_2b8 = (float *)CONCAT44(fVar47 * fVar37 + fVar29,fVar20 * fVar37 + fVar38);
      local_2a8 = (undefined8 *)CONCAT44(local_2a8._4_4_,iVar8);
      local_2b0 = (float *)CONCAT44(local_2b0._4_4_,iVar13);
      FUN_18019578a(lVar1,uVar34,uVar35,CONCAT44(fVar32 * fVar37 + fVar29,fVar46 * fVar37 + fVar38))
      ;
      iVar13 = iVar8;
    } while (lVar19 != 6);
    fVar42 = (float)FUN_180284590();
    fVar46 = (float)FUN_18028a830();
    fVar37 = local_1c8;
    lVar1 = local_288;
    local_188 = CONCAT44((float)local_208._0_4_ * fVar46 * DAT_1802de570._4_4_ +
                         (float)((ulonglong)local_138 >> 0x20),
                         (float)local_208._0_4_ * fVar42 * (float)DAT_1802de570 + (float)local_138);
    fVar38 = DAT_1802de7b4;
    if (local_294._0_1_ == '\0') {
      fVar38 = DAT_1802de844;
    }
    fVar33 = (float)local_238._0_4_;
    fVar29 = (float)local_218._0_4_;
    fVar38 = fVar38 * fVar31;
    uVar35 = FUN_18018f50a(local_288);
    uVar34 = local_240;
    local_2b8._0_4_ = (float)uVar35;
    FUN_180193670(lVar1,&local_188,fVar38,local_240);
    iVar13 = local_260;
    fVar32 = DAT_1802ac570;
    local_2b0._0_4_ = 0x3f800000;
    local_2b8._0_4_ = (float)uVar35;
    FUN_18019355a(lVar1,&local_188,fVar38 + DAT_1802ac570,local_260);
    iVar16 = local_25c;
    local_2b0._0_4_ = 0x3f800000;
    local_2b8._0_4_ = (float)uVar35;
    FUN_18019355a(lVar1,&local_188,fVar38,local_25c);
    fVar20 = (float)((uint)fVar46 ^ _DAT_1802b0ce0);
    fVar38 = (float)local_138;
    fVar47 = (float)((ulonglong)local_138 >> 0x20);
    local_198 = CONCAT44(local_140 * fVar46 + local_13c * fVar42 + fVar47,
                         local_140 * fVar42 + local_13c * fVar20 + fVar38);
    local_1a0 = CONCAT44((float)local_148 * fVar46 + local_148._4_4_ * fVar42 + fVar47,
                         (float)local_148 * fVar42 + local_148._4_4_ * fVar20 + fVar38);
    local_1a8 = CONCAT44(local_150 * fVar46 + local_14c * fVar42 + fVar47,
                         local_150 * fVar42 + local_14c * fVar20 + fVar38);
    FUN_180116c18(&local_1b0);
    FUN_18018f8fc(lVar1,3,3);
    **(undefined2 **)(lVar1 + 0x48) = *(undefined2 *)(lVar1 + 0x34);
    *(longlong *)(lVar1 + 0x48) = *(longlong *)(lVar1 + 0x48) + 2;
    **(undefined8 **)(lVar1 + 0x40) = local_198;
    *(undefined8 *)(*(longlong *)(lVar1 + 0x40) + 8) = local_1b0;
    *(undefined4 *)(*(longlong *)(lVar1 + 0x40) + 0x10) = uVar34;
    *(longlong *)(lVar1 + 0x40) = *(longlong *)(lVar1 + 0x40) + 0x14;
    iVar8 = *(int *)(lVar1 + 0x34) + 1;
    *(int *)(lVar1 + 0x34) = iVar8;
    **(undefined2 **)(lVar1 + 0x48) = (short)iVar8;
    *(longlong *)(lVar1 + 0x48) = *(longlong *)(lVar1 + 0x48) + 2;
    **(undefined8 **)(lVar1 + 0x40) = local_1a0;
    *(undefined8 *)(*(longlong *)(lVar1 + 0x40) + 8) = local_1b0;
    *(int *)(*(longlong *)(lVar1 + 0x40) + 0x10) = (int)local_1d0;
    *(longlong *)(lVar1 + 0x40) = *(longlong *)(lVar1 + 0x40) + 0x14;
    iVar8 = *(int *)(lVar1 + 0x34) + 1;
    *(int *)(lVar1 + 0x34) = iVar8;
    **(undefined2 **)(lVar1 + 0x48) = (short)iVar8;
    *(longlong *)(lVar1 + 0x48) = *(longlong *)(lVar1 + 0x48) + 2;
    **(undefined8 **)(lVar1 + 0x40) = local_1a8;
    *(undefined8 *)(*(longlong *)(lVar1 + 0x40) + 8) = local_1b0;
    *(int *)(*(longlong *)(lVar1 + 0x40) + 0x10) = iVar16;
    *(longlong *)(lVar1 + 0x40) = *(longlong *)(lVar1 + 0x40) + 0x14;
    *(int *)(lVar1 + 0x34) = *(int *)(lVar1 + 0x34) + 1;
    local_2b8 = (float *)CONCAT44(local_2b8._4_4_,iVar13);
    local_2b0 = (float *)CONCAT44(local_2b0._4_4_,0x3fc00000);
    FUN_1801931ac(lVar1,&local_198,&local_1a0,&local_1a8);
    fVar42 = fVar32 - local_15c;
    fVar38 = fVar32;
    if (fVar42 <= fVar32) {
      fVar38 = fVar42;
    }
    fVar38 = (float)(~-(uint)(fVar42 < 0.0) & (uint)fVar38);
    fVar42 = fVar32;
    if (local_158 <= fVar32) {
      fVar42 = local_158;
    }
    fVar42 = (float)(~-(uint)(local_158 < 0.0) & (uint)fVar42);
    fVar47 = (float)((ulonglong)local_1a8 >> 0x20);
    fVar46 = fVar42 * ((float)local_198 - (float)local_1a8) + (float)local_1a8;
    fVar47 = fVar42 * ((float)((ulonglong)local_198 >> 0x20) - fVar47) + fVar47;
    local_190 = CONCAT44(fVar38 * ((float)((ulonglong)local_1a0 >> 0x20) - fVar47) + fVar47,
                         fVar38 * ((float)local_1a0 - fVar46) + fVar46);
    cVar3 = SUB41(local_290,0);
    lVar19 = local_1e8;
    fVar38 = (float)local_1f8._0_4_;
    fVar30 = DAT_1802dbb2c;
  }
  uVar34 = local_264;
  pfVar17 = local_270;
  lVar1 = local_288;
  fVar42 = DAT_1802de844;
  if (cVar3 == '\0') {
    fVar42 = DAT_1802bb8d8;
  }
  fVar31 = fVar31 * fVar42;
  uVar35 = FUN_18018f50a(local_288);
  local_2b8._0_4_ = (float)uVar35;
  FUN_180193670(lVar1,&local_190,fVar31,uVar34);
  local_2b0._0_4_ = 0x3f800000;
  local_2b8._0_4_ = (float)uVar35;
  FUN_18019355a(lVar1,&local_190,DAT_1802ac570 + fVar31,local_260);
  local_2b0 = (float *)CONCAT44(local_2b0._4_4_,0x3f800000);
  local_2b8 = (float *)CONCAT44(local_2b8._4_4_,uVar35);
  FUN_18019355a(lVar1,&local_190,fVar31,local_25c);
  if (local_274 == 0x40000) {
    fVar42 = pfVar17[3];
    fVar31 = fVar32;
    if (fVar42 <= fVar32) {
      fVar31 = fVar42;
    }
    local_188 = CONCAT44(local_130._4_4_,fVar33);
    fVar37 = fVar33 + fVar37;
    local_180 = CONCAT44(local_130._4_4_ + fVar38,fVar37);
    local_2a0 = 0;
    local_2a8 = (undefined8 *)((ulonglong)local_2a8 & 0xffffffff00000000);
    local_2b0 = (float *)0x0;
    local_2b8._0_4_ = (fVar37 - fVar33) * fVar30;
    FUN_18019ca56(lVar1,local_188,CONCAT44(local_130._4_4_ + fVar38,fVar37),0);
    local_2a8 = (undefined8 *)(CONCAT44(local_2a8._4_4_,uVar34) & 0xffffffff00ffffff);
    local_2b0 = (float *)(CONCAT44(local_2b0._4_4_,uVar34) & 0xffffffff00ffffff);
    local_2b8._0_4_ = (float)uVar34;
    FUN_180192dd2(lVar1,&local_188,&local_180,uVar34);
    fVar37 = (float)(-(uint)(fVar42 < 0.0) & (uint)fVar32 |
                    ~-(uint)(fVar42 < 0.0) & (uint)(fVar32 - fVar31)) * fVar38 + local_130._4_4_;
    FUN_180102953(local_188,local_180,0);
    local_2b8 = (float *)CONCAT44(local_2b8._4_4_,*(undefined4 *)(lVar19 + 0xdb4));
    FUN_18014bb6c(lVar1,CONCAT44((float)(int)(fVar37 + fVar30),fVar33 + DAT_1802bb8e0),
                  CONCAT44(fVar29,fVar32 + fVar29));
  }
  FUN_18011949a();
  if ((local_298._0_1_ == '\0') || (iVar13 = memcmp(local_108,pfVar17,local_220), iVar13 == 0)) {
    uVar21 = 0;
  }
  else {
    uVar21 = 0x3f800001;
    if (*(int *)(lVar19 + 0x1fe0) != 0) {
      FUN_18010748b();
    }
  }
  if (local_23c == 0) {
    *(undefined4 *)(lVar19 + 0x27e0) = 0;
  }
  FUN_18011834f();
LAB_18014b778:
  if (DAT_180402640 == (local_f0 ^ (ulonglong)auStack_2d8)) {
    return uVar21;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_f0 ^ (ulonglong)auStack_2d8);
}

