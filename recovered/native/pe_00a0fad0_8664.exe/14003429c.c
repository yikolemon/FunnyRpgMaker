/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14003429c */

ulonglong FUN_14003429c(longlong param_1,longlong *param_2,int param_3,char param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 unaff_RBX;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 ****ppppuVar13;
  ulonglong unaff_R15;
  longlong *plVar14;
  undefined1 local_570 [64];
  undefined1 local_530 [64];
  undefined1 local_4f0 [64];
  undefined1 local_4b0 [64];
  undefined1 local_470 [64];
  undefined1 local_430 [64];
  undefined1 local_3f0 [32];
  undefined1 local_3d0 [32];
  undefined1 local_3b0 [32];
  undefined1 local_390 [32];
  undefined1 local_370 [32];
  undefined1 local_350 [32];
  undefined1 local_330 [32];
  undefined1 local_310 [32];
  undefined1 local_2f0 [32];
  undefined1 local_2d0 [32];
  undefined1 local_2b0 [32];
  undefined1 local_290 [32];
  int local_270;
  undefined1 local_268 [32];
  undefined1 local_248 [32];
  undefined1 local_228 [32];
  undefined1 local_208 [32];
  undefined1 local_1e8 [32];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8 [32];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined1 local_148 [32];
  undefined8 local_128;
  undefined8 uStack_120;
  longlong local_118;
  undefined8 local_110;
  ulonglong *local_100;
  undefined8 ***local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  ulonglong uStack_e0;
  longlong local_d0;
  undefined8 ***local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  longlong local_a8;
  int local_9c;
  undefined8 ***local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  ulonglong uStack_80;
  undefined8 ***local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_68;
  ulonglong uStack_60;
  int local_54;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_50 = param_1;
  FUN_140006874(local_1a8,param_2[1] + -0x20);
  local_c8 = (undefined8 ****)0x0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0xf;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  local_110 = 0xf;
  local_f8 = (undefined8 ****)0x0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0xf;
  if (param_3 == 2) {
    cVar4 = FUN_140036ebb(local_1a8,&local_c8,&local_f8);
    if (cVar4 == '\0') {
      FUN_14000169c(local_3d0,"Short parsed but missing! You should not see this");
      FUN_140036a0a(local_530,local_3d0);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_530,&DAT_14017a578);
    }
  }
  else if (param_3 == 4) {
    cVar4 = FUN_140037034(local_1a8,&local_c8,&local_128);
    if (cVar4 == '\0') {
      FUN_14000169c(local_3b0,"windows option parsed but missing! You should not see this");
      FUN_140036a0a(local_4f0,local_3b0);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_4f0,&DAT_14017a578);
    }
  }
  else {
    if (param_3 != 3) {
      FUN_14000169c(local_390,"parsing got called with invalid option! You should not see this");
      FUN_140036a0a(local_4b0,local_390);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_4b0,&DAT_14017a578);
    }
    cVar4 = FUN_140036c5a(local_1a8,&local_c8,&local_128);
    if (cVar4 == '\0') {
      FUN_140006fbc(local_3f0,"Long parsed but missing (you should not see this):",
                    param_2[1] + -0x20);
      FUN_140036a0a(local_570,local_3f0);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_570,&DAT_14017a578);
    }
  }
  FUN_140006874(local_290,&local_c8);
  local_270 = param_3;
  FUN_14003cecc(&local_100,*(undefined8 *)(local_50 + 0x138),*(undefined8 *)(local_50 + 0x140),
                local_290);
  if (local_100 == *(ulonglong **)(local_50 + 0x140)) {
    plVar14 = *(longlong **)(local_50 + 0x308);
    for (plVar8 = *(longlong **)(local_50 + 0x300); plVar8 != plVar14; plVar8 = plVar8 + 2) {
      lVar11 = *plVar8;
      if (((*(longlong *)(lVar11 + 0x18) == 0) && (*(char *)(lVar11 + 0x4d) == '\0')) &&
         (cVar4 = FUN_14003429c(lVar11,param_2,param_3,
                                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_4) & 0xffffffff),
         cVar4 != '\0')) {
        lVar11 = *plVar8;
        plVar14 = (longlong *)CONCAT71((int7)((ulonglong)plVar14 >> 8),1);
        if (*(char *)(lVar11 + 0x4e) == '\0') {
          lVar7 = *param_2;
          lVar3 = param_2[1];
          *(undefined1 *)(lVar11 + 0x4e) = 1;
          if (*(longlong **)(lVar11 + 0x88) != (longlong *)0x0) {
            local_78 = (undefined8 ***)(lVar3 - lVar7 >> 5);
            (**(code **)(**(longlong **)(lVar11 + 0x88) + 0x10))();
          }
        }
        goto LAB_140035341;
      }
    }
    if ((*(longlong *)(local_50 + 0x348) == 0) || (*(longlong *)(local_50 + 0x18) != 0)) {
      lVar11 = FUN_14000e108(&local_c8,0x2e,1);
      if (lVar11 != -1) {
        FUN_1400191d4(&local_78,&local_c8,0,lVar11,&local_98);
        lVar7 = FUN_14003727a(local_50,&local_78,1,0);
        FUN_1400017de(&local_78);
        local_a8 = lVar7;
        if (lVar7 == 0) {
          plVar14 = (longlong *)0x0;
        }
        else {
          FUN_140006874(&local_78,param_2[1] + -0x20);
          FUN_1400017de(param_2[1] + -0x20);
          param_2[1] = param_2[1] + -0x20;
          FUN_1400191d4(&local_98,&local_c8,lVar11 + 1,0xffffffffffffffff,local_148);
          FUN_1400065bc(&local_c8);
          local_b8 = local_88;
          uStack_b0 = uStack_80;
          local_c8 = local_98;
          uStack_c0 = uStack_90;
          local_88 = 0;
          uStack_80 = 0xf;
          local_98 = (undefined8 ***)((ulonglong)local_98 & 0xffffffffffffff00);
          FUN_1400017de(&local_98);
          if (local_b8 < 2) {
            FUN_1400191d4(&local_98,&local_78,lVar11 + 2,0xffffffffffffffff,local_148);
            ppppuVar13 = &local_98;
            if (0xf < uStack_80) {
              ppppuVar13 = (undefined8 ****)local_98;
            }
            *(undefined1 *)ppppuVar13 = 0x2d;
            if (2 < local_88) {
              FUN_1400191d4(local_148,&local_98,3,0xffffffffffffffff,local_268);
              FUN_14001a45e(param_2,local_148);
              FUN_1400017de(local_148);
              FUN_140024d7e(&local_98,2,0);
            }
            FUN_14000d086(param_2,&local_98);
            FUN_1400017de(&local_98);
            param_3 = 2;
          }
          else {
            FUN_1400191d4(local_148,&local_78,lVar11 + 3,0xffffffffffffffff,&local_98);
            FUN_14000169c(local_268,&DAT_140171466);
            FUN_140018470(&local_98);
            FUN_14001a45e(param_2,&local_98);
            FUN_1400017de(&local_98);
            FUN_1400017de(local_268);
            FUN_1400017de(local_148);
            param_3 = 3;
          }
          cVar4 = FUN_14003429c(local_a8,param_2,param_3,1);
          if (cVar4 == '\0') {
            FUN_1400017de(param_2[1] + -0x20);
            param_2[1] = param_2[1] + -0x20;
            FUN_14000d086(param_2,&local_78);
          }
          else {
            if (*(char *)(local_a8 + 0x321) == '\0') {
              plVar8 = *(longlong **)(local_50 + 0x2b0);
              if (plVar8 == *(longlong **)(local_50 + 0x2b8)) {
                FUN_1400322a6(local_50 + 0x2a8,plVar8,&local_a8);
              }
              else {
                *plVar8 = local_a8;
                *(longlong *)(local_50 + 0x2b0) = *(longlong *)(local_50 + 0x2b0) + 8;
              }
            }
            FUN_14003362e(local_50);
            if (*(char *)(local_50 + 0x4e) == '\0') {
              lVar11 = param_2[1];
              lVar7 = *param_2;
              *(undefined1 *)(local_50 + 0x4e) = 1;
              if (*(longlong **)(local_50 + 0x88) != (longlong *)0x0) {
                local_98 = (undefined8 ***)(lVar11 - lVar7 >> 5);
                (**(code **)(**(longlong **)(local_50 + 0x88) + 0x10))();
              }
            }
            else if ((*(char *)(local_50 + 0x4f) == '\x01') && (*(longlong *)(local_50 + 0x18) != 0)
                    ) {
              uVar1 = *(undefined4 *)(local_50 + 0x324);
              local_88 = *(ulonglong *)(local_50 + 0x288);
              *(undefined8 *)(local_50 + 0x288) = 0;
              local_98 = *(undefined8 ****)(local_50 + 0x278);
              uStack_90 = *(undefined8 *)(local_50 + 0x280);
              *(undefined8 *)(local_50 + 0x278) = 0;
              *(undefined8 *)(local_50 + 0x280) = 0;
              FUN_140032a72(local_50);
              lVar11 = local_50;
              *(undefined4 *)(local_50 + 0x324) = uVar1;
              *(undefined1 *)(local_50 + 0x4e) = 1;
              if ((undefined8 ****)(local_50 + 0x278) != &local_98) {
                FUN_14003184c();
                *(undefined8 ****)(lVar11 + 0x278) = local_98;
                *(undefined8 *)(lVar11 + 0x280) = uStack_90;
                *(ulonglong *)(lVar11 + 0x288) = local_88;
                local_98 = (undefined8 ****)0x0;
                uStack_90 = 0;
                local_88 = 0;
              }
              FUN_14003184c(&local_98);
            }
            if (*(longlong *)(local_a8 + 200) != 0) {
              FUN_140038806();
              FUN_140038ab4(local_a8);
              FUN_140038b82(local_a8,0,0);
              FUN_140038c80(local_a8);
              FUN_140032fde(local_a8,0,1);
            }
          }
          FUN_1400017de(&local_78);
          plVar14 = (longlong *)CONCAT71((int7)((ulonglong)&local_98 >> 8),1);
          if (cVar4 != '\0') goto LAB_140035341;
        }
      }
      lVar11 = local_50;
      if (param_4 == '\0') {
        if ((*(longlong *)(local_50 + 0x348) == 0) ||
           (lVar7 = *(longlong *)(local_50 + 0x348), *(char *)(local_50 + 0x31a) == '\0')) {
          FUN_1400017de(param_2[1] + -0x20);
          param_2[1] = param_2[1] + -0x20;
          local_78 = (undefined8 ***)CONCAT44(local_78._4_4_,param_3);
          lVar7 = lVar11;
          if (*(char *)(lVar11 + 0x48) == '\0') {
            for (plVar8 = *(longlong **)(lVar11 + 0x300);
                (lVar7 = lVar11, plVar8 != *(longlong **)(lVar11 + 0x308) &&
                ((lVar7 = *plVar8, *(longlong *)(lVar7 + 0x18) != 0 ||
                 (*(char *)(lVar7 + 0x48) == '\0')))); plVar8 = plVar8 + 2) {
            }
          }
          FUN_140037f04(lVar7 + 0x278,&local_78,local_1a8);
          plVar14 = (longlong *)CONCAT71((int7)((ulonglong)plVar14 >> 8),1);
        }
        else {
          do {
            lVar11 = lVar7;
            if (*(longlong *)(lVar11 + 0x348) == 0) break;
            lVar7 = *(longlong *)(lVar11 + 0x348);
          } while (*(longlong *)(lVar11 + 0x18) == 0);
          uVar10 = FUN_14003429c(lVar11,param_2,param_3,0);
          plVar14 = (longlong *)(ulonglong)uVar10;
        }
        goto LAB_140035341;
      }
    }
    plVar14 = (longlong *)0x0;
    goto LAB_140035341;
  }
  FUN_1400017de(param_2[1] + -0x20);
  param_2[1] = param_2[1] + -0x20;
  uVar12 = *local_100;
  if (((*(char *)(uVar12 + 0x26c) == '\x01') &&
      (*(longlong *)(uVar12 + 0x238) != *(longlong *)(uVar12 + 0x240))) &&
     (*(longlong *)(*(longlong *)(uVar12 + 0x240) + -0x10) != 0)) {
    local_188 = 0;
    uStack_180 = 0;
    local_178 = 0;
    local_170 = 0xf;
    FUN_14003a478(uVar12,&local_188,uVar12 + 0x238);
    *(undefined1 *)(uVar12 + 0x268) = 0;
    FUN_1400017de(&local_188);
    uVar12 = *local_100;
  }
  if ((*(char *)(uVar12 + 0x26d) == '\x01') && (*(char *)(uVar12 + 0x268) == '\x06')) {
    uVar9 = *(ulonglong *)(uVar12 + 0x238);
    unaff_R15 = *(ulonglong *)(uVar12 + 0x240);
    if (uVar9 != unaff_R15) {
      do {
        FUN_1400017de(uVar9);
        uVar9 = uVar9 + 0x20;
      } while (uVar9 != unaff_R15);
      *(undefined8 *)(uVar12 + 0x240) = *(undefined8 *)(uVar12 + 0x238);
    }
    *(undefined1 *)(uVar12 + 0x268) = 0;
    uVar12 = *local_100;
  }
  iVar5 = *(int *)(uVar12 + 0x1ac);
  local_9c = *(int *)(uVar12 + 0x1b0) * iVar5;
  if (iVar5 <= local_9c) {
    local_9c = iVar5;
  }
  local_78 = (undefined8 ***)CONCAT44(local_78._4_4_,*(undefined4 *)(uVar12 + 0x1a8));
  cVar4 = FUN_1400217d0(&local_78,*(undefined4 *)(uVar12 + 0x1b4));
  local_54 = 0x20000000;
  if (cVar4 != '\0') {
    local_54 = (int)local_78;
  }
  if (local_54 < 0x2000000) {
LAB_14003461f:
    local_54 = (int)local_78;
    if ((int)local_78 != 0) goto code_r0x00014003462e;
    uVar12 = *local_100;
    FUN_140006874(local_370,&local_128);
    FUN_14001f9b2(uVar12,&local_78,&local_c8,local_370);
    uVar12 = *local_100;
    FUN_140006874(local_248,&local_78);
    FUN_14003a478(uVar12,local_248,uVar12 + 0x238);
    *(undefined1 *)(uVar12 + 0x268) = 0;
    FUN_1400017de(local_248);
    local_98 = (undefined8 ***)*local_100;
    puVar2 = *(undefined8 **)(local_50 + 0x298);
    if (puVar2 == *(undefined8 **)(local_50 + 0x2a0)) {
      FUN_1400322a6(local_50 + 0x290,puVar2,&local_98);
    }
    else {
      *puVar2 = local_98;
      *(longlong *)(local_50 + 0x298) = *(longlong *)(local_50 + 0x298) + 8;
    }
    FUN_1400017de(&local_78);
    local_54 = 0;
LAB_140034aa7:
    iVar5 = 0;
  }
  else {
    uVar12 = *local_100;
    if (*(char *)(uVar12 + 0x269) == '\0') {
      local_78 = (undefined8 ***)CONCAT44(local_78._4_4_,*(undefined4 *)(uVar12 + 0x1a8));
      cVar4 = FUN_1400217d0(&local_78,*(undefined4 *)(uVar12 + 0x1b0));
      local_54 = 0x20000000;
      if (cVar4 != '\0') {
        goto LAB_14003461f;
      }
    }
code_r0x00014003462e:
    if (local_118 == 0) {
      if (local_e8 == 0) goto LAB_140034aa7;
      uVar12 = *local_100;
      FUN_140006874(local_208,&local_f8);
      iVar5 = FUN_14003a478(uVar12,local_208,uVar12 + 0x238);
      *(undefined1 *)(uVar12 + 0x268) = 0;
      FUN_1400017de(local_208);
      local_78 = (undefined8 ***)*local_100;
      puVar2 = *(undefined8 **)(local_50 + 0x298);
      if (puVar2 == *(undefined8 **)(local_50 + 0x2a0)) {
        FUN_1400322a6(local_50 + 0x290,puVar2,&local_78);
      }
      else {
        *puVar2 = local_78;
        *(longlong *)(local_50 + 0x298) = *(longlong *)(local_50 + 0x298) + 8;
      }
      FUN_140017200(&local_f8,&DAT_1401728de,0);
    }
    else {
      uVar12 = *local_100;
      FUN_140006874(local_228,&local_128);
      iVar5 = FUN_14003a478(uVar12,local_228,uVar12 + 0x238);
      *(undefined1 *)(uVar12 + 0x268) = 0;
      FUN_1400017de(local_228);
      local_78 = (undefined8 ***)*local_100;
      puVar2 = *(undefined8 **)(local_50 + 0x298);
      if (puVar2 == *(undefined8 **)(local_50 + 0x2a0)) {
        FUN_1400322a6(local_50 + 0x290,puVar2,&local_78);
      }
      else {
        *puVar2 = local_78;
        *(longlong *)(local_50 + 0x298) = *(longlong *)(local_50 + 0x298) + 8;
      }
    }
  }
  local_d0 = local_50 + 0x290;
  for (; iVar5 < local_9c; iVar5 = iVar5 + iVar6) {
    if (*param_2 == param_2[1]) {
      FUN_140019f68(*local_100,local_330);
      FUN_14001190c(*local_100,local_310,0,0);
      FUN_14003cf72(local_470,local_310,local_9c,local_330);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_470,&DAT_14017a2d8);
    }
    FUN_140006874(&local_78,param_2[1] + -0x20);
    FUN_1400017de(param_2[1] + -0x20);
    param_2[1] = param_2[1] + -0x20;
    unaff_R15 = *local_100;
    FUN_140006874(local_350,&local_78);
    iVar6 = FUN_14003a478(unaff_R15,local_350);
    *(undefined1 *)(unaff_R15 + 0x268) = 0;
    FUN_1400017de(local_350);
    local_98 = (undefined8 ***)*local_100;
    if (*(undefined8 **)(local_50 + 0x298) == *(undefined8 **)(local_50 + 0x2a0)) {
      FUN_1400322a6(local_d0);
    }
    else {
      **(undefined8 **)(local_50 + 0x298) = local_98;
      *(longlong *)(local_50 + 0x298) = *(longlong *)(local_50 + 0x298) + 8;
    }
    FUN_1400017de(&local_78);
  }
  if ((iVar5 < local_54) || (uVar12 = *local_100, *(char *)(uVar12 + 0x269) == '\x01')) {
    plVar8 = *(longlong **)(local_50 + 0x138);
    if (plVar8 == *(longlong **)(local_50 + 0x140)) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      do {
        lVar11 = *plVar8;
        if ((*(longlong *)(lVar11 + 0x98) != 0) && (*(char *)(lVar11 + 0x20) == '\x01')) {
          uVar10 = *(int *)(lVar11 + 0x1b0) * *(int *)(lVar11 + 0x1ac);
          if ((0 < (int)uVar10) &&
             (lVar11 = *(longlong *)(lVar11 + 0x240) - *(longlong *)(lVar11 + 0x238) >> 5,
             (int)lVar11 < (int)uVar10)) {
            uVar12 = (uVar12 + uVar10) - lVar11;
          }
        }
        plVar8 = plVar8 + 1;
      } while (plVar8 != *(longlong **)(local_50 + 0x140));
    }
    do {
      if (iVar5 < local_54) {
        lVar11 = param_2[1];
      }
      else {
        lVar11 = param_2[1];
        if (*(char *)(*local_100 + 0x269) != '\x01') goto code_r0x000140034e06;
      }
      if (*param_2 == lVar11) goto code_r0x000140034e06;
      iVar6 = FUN_1400339a2(local_50,lVar11 + -0x20,0);
      lVar11 = param_2[1];
      if ((iVar6 != 0) || ((ulonglong)(lVar11 - *param_2 >> 5) <= uVar12))
      goto code_r0x000140034e06;
      if (*(char *)(local_50 + 800) == '\x01') {
        FUN_140006874(&local_78,lVar11 + -0x20);
        FUN_140021146(*local_100,&local_98,&local_78,0);
        FUN_1400065bc(&local_78);
        local_68 = local_88;
        uStack_60 = uStack_80;
        local_78 = local_98;
        uStack_70 = (undefined4)uStack_90;
        uStack_6c = uStack_90._4_4_;
        local_88 = 0;
        uStack_80 = 0xf;
        local_98 = (undefined8 ***)((ulonglong)local_98 & 0xffffffffffffff00);
        FUN_1400017de(&local_98);
        uVar9 = local_68;
        FUN_1400017de(&local_78);
        lVar11 = param_2[1];
        if (uVar9 != 0) goto code_r0x000140034e06;
      }
      uVar9 = *local_100;
      FUN_140006874(local_2f0,lVar11 + -0x20);
      uVar10 = FUN_14003a478(uVar9,local_2f0);
      *(undefined1 *)(uVar9 + 0x268) = 0;
      unaff_R15 = (ulonglong)uVar10;
      FUN_1400017de(local_2f0);
      local_78 = (undefined8 ***)*local_100;
      if (*(undefined8 **)(local_50 + 0x298) == *(undefined8 **)(local_50 + 0x2a0)) {
        FUN_1400322a6(local_d0);
      }
      else {
        **(undefined8 **)(local_50 + 0x298) = local_78;
        *(longlong *)(local_50 + 0x298) = *(longlong *)(local_50 + 0x298) + 8;
      }
      FUN_1400017de(param_2[1] + -0x20);
      param_2[1] = param_2[1] + -0x20;
      iVar5 = iVar5 + uVar10;
    } while( true );
  }
LAB_140034f2b:
  if ((0 < local_9c) && (iVar5 % *(int *)(uVar12 + 0x1a8) != 0)) {
    if (*(int *)(uVar12 + 0x1a8) == *(int *)(uVar12 + 0x1ac)) {
      FUN_140019f68(uVar12,local_2d0);
      uVar1 = *(undefined4 *)(*local_100 + 0x1ac);
      FUN_14001190c(*local_100,local_2b0,0,0);
      FUN_14003d1b4(local_430,local_2b0,uVar1,local_2d0);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_430,&DAT_14017a2d8);
    }
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    local_150 = 0xf;
    FUN_14003a478(uVar12,&local_168,uVar12 + 0x238);
    *(undefined1 *)(uVar12 + 0x268) = 0;
    FUN_1400017de(&local_168);
    uVar12 = *local_100;
  }
  if (*(char *)(uVar12 + 0x26d) == '\x01') {
    FUN_14003a6d0(uVar12);
  }
  plVar14 = (longlong *)CONCAT71((int7)(unaff_R15 >> 8),1);
  if (local_e8 != 0) {
    FUN_140006fbc(&local_78,&DAT_140171467,&local_f8);
    FUN_1400065bc(&local_f8);
    local_e8 = local_68;
    uStack_e0 = uStack_60;
    local_f8 = local_78;
    uStack_f0 = CONCAT44(uStack_6c,uStack_70);
    local_68 = 0;
    uStack_60 = 0xf;
    local_78 = (undefined8 ***)((ulonglong)local_78 & 0xffffffffffffff00);
    FUN_1400017de(&local_78);
    FUN_14000d086(param_2,&local_f8);
  }
LAB_140035341:
  FUN_1400017de(&local_f8);
  FUN_1400017de(&local_128);
  FUN_1400017de(&local_c8);
  FUN_1400017de(local_1a8);
  return (ulonglong)plVar14 & 0xffffffff;
code_r0x000140034e06:
  if ((*param_2 != lVar11) && (iVar6 = FUN_1400339a2(local_50,lVar11 + -0x20,1), iVar6 == 1)) {
    FUN_1400017de(param_2[1] + -0x20);
    param_2[1] = param_2[1] + -0x20;
  }
  uVar12 = *local_100;
  if ((0 < local_54) && (iVar5 == 0 && local_9c == 0)) {
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_1b8 = 0;
    local_1b0 = 0xf;
    FUN_14001f9b2(uVar12,&local_78,&local_c8,&local_1c8);
    uVar12 = *local_100;
    FUN_140006874(local_1e8,&local_78);
    FUN_14003a478(uVar12,local_1e8,uVar12 + 0x238);
    *(undefined1 *)(uVar12 + 0x268) = 0;
    FUN_1400017de(local_1e8);
    local_98 = (undefined8 ***)*local_100;
    puVar2 = *(undefined8 **)(local_50 + 0x298);
    if (puVar2 == *(undefined8 **)(local_50 + 0x2a0)) {
      FUN_1400322a6(local_d0,puVar2,&local_98);
    }
    else {
      *puVar2 = local_98;
      *(longlong *)(local_50 + 0x298) = *(longlong *)(local_50 + 0x298) + 8;
    }
    FUN_1400017de(&local_78);
    uVar12 = *local_100;
  }
  goto LAB_140034f2b;
}

