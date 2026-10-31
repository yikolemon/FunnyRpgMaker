/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005bd70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18005bd70(void)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 ****ppppuVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined ******ppppppuVar18;
  undefined8 *****pppppuVar19;
  byte bVar20;
  longlong lVar21;
  longlong lVar22;
  longlong *plVar23;
  bool bVar24;
  bool bVar25;
  undefined1 uVar26;
  undefined1 local_518 [32];
  undefined1 local_4f8 [32];
  undefined1 local_4d8 [32];
  undefined1 local_4b8 [32];
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 ****local_478 [2];
  undefined8 local_468;
  ulonglong local_460;
  undefined1 local_458 [32];
  undefined1 local_438 [32];
  undefined ****local_418 [4];
  undefined1 local_3f8 [16];
  undefined8 ****local_3e8 [3];
  ulonglong local_3d0;
  undefined *local_3c8;
  undefined8 local_3c0;
  char *local_3b8;
  undefined8 local_3b0;
  undefined8 ****local_3a8 [3];
  ulonglong local_390;
  undefined1 local_388 [32];
  char *local_368;
  undefined1 local_360 [32];
  ulonglong local_340;
  undefined8 *local_338;
  ulonglong local_330;
  longlong local_328;
  undefined1 local_320 [32];
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined1 local_2e8;
  undefined8 ****local_2e0 [3];
  ulonglong local_2c8;
  undefined *****local_2c0;
  undefined8 *local_2b8;
  longlong local_2b0;
  ulonglong local_2a8;
  longlong lStack_2a0;
  undefined8 *local_290;
  longlong local_288;
  undefined *****local_280;
  undefined8 ****local_278;
  longlong local_270;
  ulonglong local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined *****pppppuStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  byte local_220 [24];
  undefined8 *local_208;
  undefined *****local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  longlong local_1e8 [3];
  longlong local_1d0;
  undefined *****local_1c8;
  ulonglong uStack_1c0;
  longlong local_1b8;
  ulonglong uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  uint local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 ****local_130;
  undefined *****local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulonglong local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined1 local_6b;
  byte local_6a;
  byte local_69;
  byte local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  byte local_5d;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined8 local_58;
  
  local_58 = 0xfffffffffffffffe;
  DAT_1804189c0 = 0;
  puVar11 = DAT_1804189b0;
  if (DAT_1804189c8 < 0x10) {
    puVar11 = &DAT_1804189b0;
  }
  *(undefined1 *)puVar11 = 0;
  DAT_1804189ac = 0.0;
  FUN_18006a5f4(&DAT_1804188a0);
  FUN_1800c8ca5(local_418,0);
  FUN_1800c9080(local_478,local_418);
  pppppuVar19 = local_478;
  if (0xf < local_460) {
    pppppuVar19 = (undefined8 *****)local_478[0];
  }
  local_280 = (undefined *****)((ulonglong)local_280 & 0xffffffffffffff00);
  uStack_238 = 0;
  local_230 = CONCAT44(_UNK_1802b0ca4,_DAT_1802b0ca0);
  uStack_228 = CONCAT44(_UNK_1802b0cac,_UNK_1802b0ca8);
  FUN_180014db0(&local_280,pppppuVar19,local_468);
  FUN_180014e38(&local_280);
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  local_128 = (undefined *****)0x20;
  local_100 = local_100 & 0xffffffffffffff00;
  if ((char)local_280 == '\x01') {
    lVar12 = 0;
    do {
      bVar20 = local_220[lVar12];
      *(char *)((longlong)&uStack_120 + lVar12 * 2) = "0123456789abcdef"[bVar20 >> 4];
      *(char *)((longlong)&uStack_120 + lVar12 * 2 + 1) = "0123456789abcdef"[bVar20 & 0xf];
      lVar12 = lVar12 + 1;
    } while (lVar12 != 0x10);
  }
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1c8 = (undefined *****)0x0;
  uStack_1c0 = 0;
  local_1c8 = (undefined *****)FUN_180239630(0x30);
  local_1b8 = 0x20;
  uStack_1b0 = 0x2f;
  *(undefined4 *)(local_1c8 + 2) = (undefined4)uStack_110;
  *(undefined4 *)((longlong)local_1c8 + 0x14) = uStack_110._4_4_;
  *(undefined4 *)(local_1c8 + 3) = (undefined4)uStack_108;
  *(undefined4 *)((longlong)local_1c8 + 0x1c) = uStack_108._4_4_;
  *(int *)local_1c8 = (int)uStack_120;
  *(undefined4 *)((longlong)local_1c8 + 4) = uStack_120._4_4_;
  *(undefined4 *)(local_1c8 + 1) = (undefined4)uStack_118;
  *(undefined4 *)((longlong)local_1c8 + 0xc) = uStack_118._4_4_;
  *(undefined1 *)(local_1c8 + 4) = 0;
  FUN_180012917(&local_128,"funny_wolf_ext_",&local_1c8);
  FUN_180005564(&local_280,&local_128,0);
  FUN_18006a667(&local_330);
  FUN_180001c90(local_2e0,&local_330,&local_280);
  FUN_180001e4c(&local_330);
  FUN_180001e4c(&local_280);
  FUN_180001ef2(&local_128);
  FUN_180001ef2(&local_1c8);
  FUN_180001ef2(local_478);
  FUN_180002218();
  FUN_180002218();
  pppppuVar19 = local_2e0;
  if (7 < local_2c8) {
    pppppuVar19 = (undefined8 *****)local_2e0[0];
  }
  uVar13 = FUN_18023a990(pppppuVar19);
  local_128 = (undefined *****)(ulonglong)((uint)uVar13 & 1);
  local_278 = (undefined8 ****)FUN_180002218();
  local_280 = (undefined *****)CONCAT44(local_280._4_4_,(int)(uVar13 >> 0x20));
  if (uVar13 >> 0x20 == 0x91) {
    FUN_18006b922(local_2e0,&local_280,&local_128);
  }
  local_280 = (undefined *****)
              .?AV?$_Func_impl_no_alloc@V<lambda_14>@?0??������������@@YAXXZ@X$$V@std@@
              ::vftable;
  local_278 = local_2e0;
  local_2c0 = (undefined *****)&local_280;
  pppppuStack_248 = local_2c0;
  FUN_18006a75c(local_3f8,&local_280);
  if ((undefined ******)pppppuStack_248 != (undefined ******)0x0) {
    (*(code *)(*pppppuStack_248)[4])
              (pppppuStack_248,(undefined ******)pppppuStack_248 != &local_280);
  }
  local_280 = (undefined *****)((ulonglong)local_280 & 0xffffffff00000000);
  local_278 = (undefined8 ****)FUN_180002218();
  FUN_18006ca5d(local_2e0,&local_280);
  if ((int)local_280 != 0) {
LAB_18005d45f:
                    /* WARNING: Subroutine does not return */
    FUN_18000219a("create_directories",&local_280,local_2e0);
  }
  DAT_1804189ac = 0.01;
  local_368 = "BasicData/Game.dat";
  FUN_18006a7d6(&local_290);
  FUN_18006a842(&local_128,local_418,0);
  FUN_180001bd8(&local_128,&local_280);
  FUN_18006a88a(local_1e8 + 2,&local_280);
  FUN_180001e4c(&local_280);
  FUN_180001e4c(&local_128);
  if (local_1d0 == 0) {
    local_328 = 0;
  }
  else {
    LOCK();
    *(int *)(local_1d0 + 8) = *(int *)(local_1d0 + 8) + 1;
    UNLOCK();
    local_328 = local_1d0;
  }
  local_330 = local_1e8[2];
  local_1f8 = 0;
  uStack_1f0 = 0;
  FUN_1800578f2(&local_1f8);
  if (local_1d0 == 0) {
    local_1d0 = 0;
  }
  else {
    LOCK();
    *(int *)(local_1d0 + 8) = *(int *)(local_1d0 + 8) + 1;
    UNLOCK();
  }
  local_2a8 = local_1e8[2];
  local_a8 = 0;
  uStack_a0 = 0;
  lStack_2a0 = local_1d0;
  FUN_1800578f2(&local_2a8);
  local_78 = (ulonglong)local_78._4_4_ << 0x20;
  while (cVar7 = FUN_18006cd79(&local_330,&local_a8), uVar13 = local_330, cVar7 == '\0') {
    FUN_18006cd84(local_330,&local_280);
    iVar10 = (int)local_280;
    bVar24 = (int)local_280 == 2;
    if (bVar24) {
      local_63 = 1;
      FUN_18006a8fc(uVar13 + 0x20,local_3e8);
      pppppuVar19 = local_3e8;
      if (7 < local_3d0) {
        pppppuVar19 = (undefined8 *****)local_3e8[0];
      }
      local_61 = 1;
      local_62 = 1;
      iVar8 = FUN_180280970(pppppuVar19,L".wolf");
      bVar25 = iVar8 == 0;
    }
    else {
      bVar25 = false;
    }
    local_62 = bVar24;
    local_61 = bVar24;
    if (iVar10 == 2) {
      FUN_180001e4c(local_3e8);
    }
    if (bVar25) {
      lVar12 = uVar13 + 0x20;
      FUN_18006a9f0(lVar12,&local_280);
      FUN_180001bd8(lVar12,&local_1c8);
      FUN_180001c90(&local_128,&local_1c8,&local_280);
      FUN_180001e4c(&local_1c8);
      FUN_180001e4c(&local_280);
      local_1c8 = (undefined *****)0xffff00000000;
      ppppppuVar18 = &local_128;
      if (7 < uStack_110) {
        ppppppuVar18 = (undefined ******)local_128;
      }
      uVar9 = FUN_18023a250(ppppppuVar18,&local_280,3,0xffffffff);
      uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar9);
      FUN_1800024e2(&local_1c8,uVar9,&local_280);
      if (((int)uStack_1c0 != 0) && (((uint)local_1c8 & 0xfffffff7) != 1)) {
        FUN_18006ccef("status",uStack_1c0 & 0xffffffff,&local_128);
LAB_18005d43d:
        local_64 = 1;
        local_65 = 1;
        FUN_18006ccef("status");
        goto LAB_18005d45f;
      }
      if ((uint)local_1c8 == 3) {
        FUN_18006ce0e(&local_290,&local_280);
      }
      else {
        FUN_18006a9f0(lVar12,&local_1c8);
        FUN_180001c90(&local_280,local_2e0,&local_1c8);
        FUN_18006d598(&local_290,local_478);
        FUN_180001e4c(&local_280);
        uVar14 = FUN_180001e4c(&local_1c8);
        local_78 = CONCAT44(local_78._4_4_,(int)CONCAT71((int7)((ulonglong)uVar14 >> 8),1));
      }
      FUN_180001e4c(&local_128);
    }
    else {
      FUN_18006cd84(uVar13,&local_280);
      iVar10 = (int)local_280;
      uVar26 = (int)local_280 == 3;
      if ((bool)uVar26) {
        local_66 = 1;
        FUN_18006aafe(local_4f8,&local_368,0);
        local_5a = 1;
        local_5b = 1;
        FUN_180001c90(local_3a8,uVar13 + 0x20,local_4f8);
        local_64 = 1;
        local_65 = 0;
        local_128 = (undefined *****)0xffff00000000;
        pppppuVar19 = local_3a8;
        if (7 < local_390) {
          pppppuVar19 = (undefined8 *****)local_3a8[0];
        }
        uVar9 = FUN_18023a250(pppppuVar19,&local_280,3,0xffffffff);
        uStack_120 = CONCAT44(uStack_120._4_4_,uVar9);
        FUN_1800024e2(&local_128,uVar9);
        if (((int)uStack_120 != 0) && (((uint)local_128 & 0xfffffff7) != 1)) goto LAB_18005d43d;
        bVar24 = (uint)local_128 == 2;
      }
      else {
        bVar24 = false;
      }
      local_65 = uVar26;
      local_64 = uVar26;
      uVar6 = uVar26;
      if (iVar10 == 3) {
        FUN_180001e4c(local_3a8);
        local_5b = uVar26;
        local_5a = uVar26;
        FUN_180001e4c(local_4f8);
        uVar26 = local_5b;
        uVar6 = local_5a;
      }
      local_5a = uVar6;
      local_5b = uVar26;
      if (bVar24) {
        FUN_18006d80c(&local_290,&local_280);
      }
    }
    FUN_18006ab46(&local_330);
  }
  FUN_1800578f2(&local_a8);
  FUN_1800578f2(&local_330);
  if (local_288 == 0) {
    FUN_180017ca0(&DAT_1804189b0,&DAT_18035f707,0x18);
    bVar24 = false;
    goto LAB_18005c841;
  }
  DAT_1804189ac = 0.02;
  FUN_180004ffe(local_518);
  local_5f = 1;
  FUN_180001e92(&local_280,"WOLF-EXT-CLI.exe");
  local_67 = 0;
  FUN_1800cc381(local_4d8,&local_280,local_518);
  local_67 = 0;
  FUN_180001ef2(&local_280);
  local_5f = 0;
  if ((local_78 & 1) == 0) {
    bVar24 = false;
  }
  else {
    local_330 = local_330 & 0xffffffffffffff00;
    local_328 = 0;
    local_5e = 1;
    FUN_18000358a(local_320,local_2e0);
    local_300 = 0;
    uStack_2f8 = 0;
    local_2f0 = 0;
    local_2e8 = 0;
    local_6b = 1;
    local_60 = 1;
    local_69 = 0;
    local_6a = 1;
    local_5c = 0;
    local_130 = local_478;
    FUN_18000358a(local_130,local_4d8);
    local_130 = (undefined8 ****)local_458;
    local_5c = 0;
    FUN_18000358a(local_130,local_418);
    local_5c = 0;
    local_130 = (undefined8 ****)local_438;
    FUN_180001254(local_438,&DAT_180386510);
    local_5c = 0;
    local_280 = local_418;
    local_498 = 0;
    uStack_490 = 0;
    local_488 = 0;
    local_128 = (undefined *****)local_478;
    local_5d = 1;
    local_130 = (undefined8 ****)local_438;
    FUN_18006dbd0(&local_498,3);
    local_68 = 1;
    iVar10 = FUN_1800c9d31(&local_498,&local_330);
    bVar24 = iVar10 != 0;
  }
  bVar20 = (byte)local_78 & 1;
  local_68 = bVar20;
  if ((local_78 & 1) != 0) {
    FUN_18006db58(&local_498);
  }
  local_5d = bVar20;
  if ((local_78 & 1) != 0) {
    plVar15 = (longlong *)0x40;
    do {
      local_80 = plVar15;
      FUN_1800010ec((longlong)local_478 + (longlong)plVar15);
      plVar15 = local_80 + -4;
    } while (plVar15 != (longlong *)0xffffffffffffffe0);
  }
  local_6a = bVar20;
  local_69 = bVar20;
  if ((local_78 & 1) != 0) {
    FUN_18006db58(&local_300);
    FUN_1800010ec(local_320);
  }
  if (bVar24) {
    FUN_180017ca0(&DAT_1804189b0,&DAT_18035f38e,0x15);
LAB_18005c835:
    bVar24 = false;
  }
  else {
    DAT_1804189ac = 0.4;
    local_2b8 = (undefined8 *)*local_290;
    local_2b0 = 0;
    local_338 = local_290;
    while (local_208 = local_2b8, local_2b8 != local_338) {
      local_1e8[0] = 0;
      local_1e8[1] = 0;
      local_200 = (undefined *****)(local_2b8 + 4);
      FUN_18006abef(&local_280);
      FUN_180022ada(local_1e8,&local_280);
      ppppuVar5 = local_278;
      if (local_278 != (undefined8 ****)0x0) {
        LOCK();
        plVar15 = (longlong *)(local_278 + 1);
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (*(code *)**local_278)(local_278);
          LOCK();
          piVar1 = (int *)((longlong)ppppuVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)((longlong)*ppppuVar5 + 8))(ppppuVar5);
          }
        }
      }
      FUN_18006acce(local_200,&local_280);
      local_128 = (undefined *****)&local_280;
      if (7 < local_268) {
        local_128 = local_280;
      }
      uStack_120 = local_270;
      FUN_18000560c(local_388,&local_128,&local_1c8);
      FUN_180001e4c(&local_280);
      FUN_18006add7(&local_280,local_388,"/title");
      local_220[0] = 0;
      local_220[1] = 0;
      local_220[2] = 0;
      local_220[3] = 0;
      local_220[4] = 0;
      local_220[5] = 0;
      local_220[6] = 0;
      local_220[7] = 0;
      local_220[8] = 0;
      local_220[9] = 0;
      local_220[10] = 0;
      local_220[0xb] = 0;
      local_220[0xc] = 0;
      local_220[0xd] = 0;
      local_220[0xe] = 0;
      local_220[0xf] = 0;
      local_230 = 0;
      uStack_228 = 0;
      local_240 = 0;
      uStack_238 = 0;
      local_250 = 0;
      pppppuStack_248 = (undefined *****)0x0;
      local_260 = 0;
      uStack_258 = 0;
      local_220[0x10] = 0;
      local_220[0x11] = 0;
      local_220[0x12] = 0;
      local_220[0x13] = 0;
      local_220[0x14] = 0;
      local_220[0x15] = 0;
      local_220[0x16] = 0;
      local_220[0x17] = 0;
      FUN_18002266a(&pppppuStack_248);
      lVar12 = local_1e8[0];
      FUN_1800afb84(local_1e8[0]);
      FUN_18006af2d(&local_280,lVar12 + 0xa0);
      FUN_18006b10c(&DAT_1804188a0,&local_280);
      lVar12 = local_1e8[0];
      DAT_1804189ac = 0.45;
      FUN_1800afb84(local_1e8[0]);
      local_2b0 = local_2b0 + 1;
      lVar2 = *(longlong *)(lVar12 + 0x2e0);
      for (lVar12 = *(longlong *)(lVar12 + 0x2d8); lVar21 = local_1e8[0], lVar12 != lVar2;
          lVar12 = lVar12 + 0xde0) {
        lVar21 = lVar12 + 0x28;
        FUN_1800c9080(&local_128,lVar21);
        FUN_1800b0d5c(&DAT_1804178c8,&local_128);
        FUN_180001ef2(&local_128);
        FUN_1800c9080(&local_1c8,lVar21);
        FUN_18006add7(&local_a8,local_388,"/common_event/");
        FUN_1800b1004(&local_128);
        local_c8 = 0;
        uStack_c0 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        local_e8 = 0;
        uStack_e0 = 0;
        local_f8 = 0;
        uStack_f0 = 0;
        uStack_108 = 0;
        local_100 = 0;
        local_b8 = 0;
        FUN_18002266a(&uStack_f0);
        FUN_180001ef2(&local_a8);
        FUN_180001ef2(&local_1c8);
        FUN_18006af2d(&local_128,lVar21);
        plVar23 = *(longlong **)(lVar12 + 0x50);
        for (plVar15 = *(longlong **)(lVar12 + 0x48); plVar15 != plVar23; plVar15 = plVar15 + 2) {
          if ((int)((longlong *)*plVar15)[4] != 0x67) {
            plVar16 = (longlong *)(**(code **)(*(longlong *)*plVar15 + 0x20))();
            lVar3 = plVar16[1];
            for (lVar21 = *plVar16; lVar21 != lVar3; lVar21 = lVar21 + 0x20) {
              FUN_18006af2d(&local_128,lVar21);
            }
          }
        }
        FUN_18006b10c(&DAT_1804188a0,&local_128);
        FUN_18006ae42(&uStack_108);
        FUN_180001ef2(&local_128);
      }
      DAT_1804189ac = 0.55;
      FUN_1800afb84(local_1e8[0]);
      local_340 = *(ulonglong *)(lVar21 + 0x268);
      for (local_78 = *(ulonglong *)(lVar21 + 0x260); lVar12 = local_1e8[0], local_78 != local_340;
          local_78 = local_78 + 200) {
        local_1c8 = (undefined *****)0x0;
        uStack_1c0 = 0;
        local_1b8 = 0;
        uStack_1b0 = 0xf;
        uStack_1a0 = 0;
        uStack_198 = 0;
        local_190 = 0;
        local_128 = local_200;
        if (7 < (ulonglong)local_208[7]) {
          local_128 = (undefined *****)local_208[4];
        }
        uStack_120 = local_208[6];
        FUN_18000560c(local_360,&local_128,&local_a8);
        FUN_180005564(&local_150,local_360,0);
        FUN_18006b2ab(&local_a8,local_78 + 8,&local_150);
        FUN_1800b489a(&local_a8,&local_128,local_4b8);
        FUN_180004c8c(&local_1c8);
        local_1b8 = uStack_118;
        uStack_1b0 = uStack_110;
        local_1c8 = local_128;
        uStack_1c0 = uStack_120;
        uStack_118 = 0;
        uStack_110 = 0xf;
        local_128 = (undefined *****)((ulonglong)local_128 & 0xffffffffffffff00);
        FUN_180001ef2(&local_128);
        FUN_180001e4c(&local_a8);
        FUN_180001e4c(&local_150);
        FUN_180001ef2(local_360);
        local_1a8 = *(undefined8 *)(local_78 + 0x8c);
        FUN_18006add7(&local_a8,local_388,"/map_event/");
        ppppppuVar18 = &local_1c8;
        if (0xf < uStack_1b0) {
          ppppppuVar18 = (undefined ******)local_1c8;
        }
        plVar15 = (longlong *)FUN_180003300(&local_a8,ppppppuVar18,local_1b8);
        local_128 = (undefined *****)*plVar15;
        uStack_120 = plVar15[1];
        uStack_118 = plVar15[2];
        uStack_110 = plVar15[3];
        plVar15[2] = 0;
        plVar15[3] = 0xf;
        *(undefined1 *)plVar15 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        local_e8 = 0;
        uStack_e0 = 0;
        local_f8 = 0;
        uStack_f0 = 0;
        uStack_108 = 0;
        local_100 = 0;
        local_b8 = 0;
        FUN_18002266a(&uStack_f0);
        FUN_180001ef2(&local_a8);
        local_80 = *(longlong **)(local_78 + 0xb8);
        for (plVar15 = *(longlong **)(local_78 + 0xb0); plVar15 != local_80;
            plVar15 = plVar15 + 0x10) {
          local_a8 = 0;
          uStack_a0 = 0;
          local_98 = 0;
          uStack_90 = 0xf;
          FUN_1800c9080(&local_150,plVar15 + 1);
          FUN_180004c8c(&local_a8);
          local_98 = local_140;
          uStack_90 = uStack_138;
          local_a8 = CONCAT44(uStack_14c,local_150);
          uStack_a0 = CONCAT44(uStack_144,uStack_148);
          local_140 = 0;
          uStack_138 = 0xf;
          local_150 = local_150 & 0xffffff00;
          FUN_180001ef2(&local_150);
          local_88 = plVar15[5];
          FUN_18006af2d(&local_128,plVar15 + 1);
          lVar2 = plVar15[7];
          for (lVar12 = plVar15[6]; lVar12 != lVar2; lVar12 = lVar12 + 0xa0) {
            plVar16 = *(longlong **)(lVar12 + 0x88);
            for (plVar23 = *(longlong **)(lVar12 + 0x80); plVar23 != plVar16; plVar23 = plVar23 + 2)
            {
              if ((int)((longlong *)*plVar23)[4] != 0x67) {
                plVar17 = (longlong *)(**(code **)(*(longlong *)*plVar23 + 0x20))();
                lVar3 = plVar17[1];
                for (lVar21 = *plVar17; lVar21 != lVar3; lVar21 = lVar21 + 0x20) {
                  FUN_18006af2d(&local_128,lVar21);
                }
              }
            }
          }
          FUN_1800b49ce(&uStack_1a0,&local_a8);
          FUN_180001ef2(&local_a8);
        }
        FUN_18006b10c(&DAT_1804188a0,&local_128);
        FUN_1800b4dcc(&DAT_180418ca8,&local_a8,&local_1c8,&local_1c8);
        FUN_18006ae42(&uStack_108);
        FUN_180001ef2(&local_128);
        FUN_1800b11e4(&uStack_1a0);
        FUN_180001ef2(&local_1c8);
      }
      DAT_1804189ac = 0.7;
      FUN_1800afb84(local_1e8[0]);
      local_80 = *(longlong **)(lVar12 + 0x300);
      for (plVar15 = *(longlong **)(lVar12 + 0x2f8); plVar15 != local_80; plVar15 = plVar15 + 0xf) {
        local_128 = local_200;
        if (7 < (ulonglong)local_208[7]) {
          local_128 = (undefined *****)local_208[4];
        }
        uStack_120 = local_208[6];
        FUN_18000560c(local_360,&local_128,&local_1c8);
        FUN_180005564(&local_150,local_360,0);
        FUN_18006b2ab(&local_1c8,plVar15 + 0xb,&local_150);
        FUN_1800b489a(&local_1c8,&local_128,&local_a8);
        FUN_18006add7(local_4b8,local_388,"/database/");
        FUN_1800b1004(&local_a8);
        FUN_180001ef2(local_4b8);
        FUN_180001ef2(&local_128);
        FUN_180001e4c(&local_1c8);
        FUN_180001e4c(&local_150);
        FUN_180001ef2(local_360);
        lVar2 = plVar15[1];
        for (lVar12 = *plVar15; lVar12 != lVar2; lVar12 = lVar12 + 0xa0) {
          FUN_1800c9080(&local_1c8,lVar12);
          local_3c8 = &DAT_18036a462;
          local_3c0 = 0xb;
          FUN_18006b4a7(&local_128,&local_3c8,&local_a8,&local_1c8);
          local_c8 = 0;
          uStack_c0 = 0;
          local_d8 = 0;
          uStack_d0 = 0;
          local_e8 = 0;
          uStack_e0 = 0;
          local_f8 = 0;
          uStack_f0 = 0;
          uStack_108 = 0;
          local_100 = 0;
          local_b8 = 0;
          FUN_18002266a(&uStack_f0);
          FUN_180001ef2(&local_1c8);
          FUN_18006af2d(&local_128,lVar12);
          FUN_18006af2d(&local_128,lVar12 + 0x20);
          lVar3 = *(longlong *)(lVar12 + 0x48);
          for (lVar21 = *(longlong *)(lVar12 + 0x40); lVar21 != lVar3; lVar21 = lVar21 + 0x80) {
            FUN_18006af2d(&local_128,lVar21);
            lVar4 = *(longlong *)(lVar21 + 0x50);
            for (lVar22 = *(longlong *)(lVar21 + 0x48); lVar22 != lVar4; lVar22 = lVar22 + 0x20) {
              FUN_18006af2d(&local_128,lVar22);
            }
          }
          FUN_1800c9080(&local_150,lVar12);
          local_3b8 = "{}/{}/value";
          local_3b0 = 0xb;
          FUN_18006b4a7(&local_1c8,&local_3b8,&local_a8,&local_150);
          local_168 = 0;
          uStack_160 = 0;
          local_178 = 0;
          uStack_170 = 0;
          local_188 = 0;
          uStack_180 = 0;
          uStack_198 = 0;
          local_190 = 0;
          local_1a8 = 0;
          uStack_1a0 = 0;
          local_158 = 0;
          FUN_18002266a(&local_190);
          FUN_180001ef2(&local_150);
          lVar3 = *(longlong *)(lVar12 + 0x68);
          for (lVar21 = *(longlong *)(lVar12 + 0x60); lVar21 != lVar3; lVar21 = lVar21 + 0x58) {
            FUN_18006af2d(&local_1c8,lVar21);
            lVar4 = *(longlong *)(lVar21 + 0x40);
            for (lVar22 = *(longlong *)(lVar21 + 0x38); lVar22 != lVar4; lVar22 = lVar22 + 0x20) {
              FUN_18006af2d(&local_1c8,lVar22);
            }
          }
          FUN_18006b10c(&DAT_1804188a0,&local_128);
          FUN_18006b10c(&DAT_1804188a0,&local_1c8);
          FUN_18006ae42(&local_1a8);
          FUN_180001ef2(&local_1c8);
          FUN_18006ae42(&uStack_108);
          FUN_180001ef2(&local_128);
        }
        DAT_1804189ac = (float)((double)DAT_1804189ac + DAT_1802b7bf0);
        FUN_180001ef2(&local_a8);
      }
      FUN_18006b234(&local_280);
      FUN_180001ef2(local_388);
      FUN_18004363a(local_1e8);
      FUN_180016c4c(&local_2b8);
    }
    bVar24 = true;
    if (local_2b0 == 0) {
      FUN_180017ca0(&DAT_1804189b0,&DAT_18035f292,0x12);
      goto LAB_18005c835;
    }
  }
  FUN_180001e4c(local_4d8);
LAB_18005c841:
  FUN_1800578f2(local_1e8 + 2);
  FUN_18006cc9a(&local_290,&local_290,local_290[1]);
  thunk_FUN_1802464a0(local_290,0x40);
  FUN_18006b556(local_3f8);
  FUN_180001e4c(local_2e0);
  FUN_1800010ec(local_418);
  if (bVar24) {
    DAT_1804189a9 = 1;
  }
  return;
}

