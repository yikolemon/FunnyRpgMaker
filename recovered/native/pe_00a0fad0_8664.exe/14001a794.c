/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14001a794 */

undefined8
FUN_14001a794(undefined8 *param_1,undefined8 param_2,longlong param_3,byte param_4,char param_5,
             longlong param_6)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  byte bVar9;
  char cVar10;
  byte bVar11;
  undefined8 uVar12;
  longlong *plVar13;
  uint *puVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *unaff_RBX;
  longlong *plVar17;
  undefined7 uVar18;
  byte bVar19;
  undefined8 *puVar20;
  longlong local_460 [7];
  undefined8 local_428;
  undefined1 local_420 [16];
  undefined1 local_410 [8];
  undefined1 local_408 [224];
  undefined1 local_328 [32];
  longlong local_308 [4];
  undefined1 local_2e8 [64];
  undefined1 local_2a8 [32];
  undefined1 local_288 [32];
  uint local_268;
  uint uStack_264;
  uint uStack_260;
  uint uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined1 local_248 [32];
  uint local_228;
  uint uStack_224;
  uint uStack_220;
  uint uStack_21c;
  longlong local_218;
  ulonglong uStack_210;
  longlong *local_1e8;
  longlong *local_1e0;
  longlong *local_1c8;
  longlong *local_1c0;
  undefined1 local_1b0 [32];
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  longlong *local_168;
  longlong *local_158;
  longlong *plStack_150;
  undefined8 local_148;
  uint local_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong *local_118;
  longlong *plStack_110;
  undefined8 local_108;
  longlong local_100 [2];
  longlong local_f0;
  longlong *local_c8;
  longlong *local_c0;
  longlong local_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_80;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  byte local_4c;
  byte local_4b;
  byte local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_190 = param_2;
  local_80 = param_3;
  local_58 = param_1;
  local_49 = param_4;
  FUN_140009eb0(local_420,1);
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  local_170 = 0xf;
  FUN_14000cf50(&local_188,*(undefined1 *)(local_58 + 4));
  FUN_14000cf50(&local_188,0x20);
  FUN_14000169c(local_248,&DAT_140170aa8);
  FUN_14000cf50(local_248,*(undefined1 *)(local_58 + 4));
  FUN_14000cf50(local_248,*(undefined1 *)(local_58 + 5));
  FUN_140006874(local_1b0,local_248);
  puVar20 = local_58;
  FUN_14000cf50(local_1b0,*(undefined1 *)((longlong)local_58 + 0x26));
  FUN_14000cf50(local_1b0,*(undefined1 *)((longlong)puVar20 + 0x25));
  FUN_14000cf50(local_1b0,*(undefined1 *)((longlong)puVar20 + 0x21));
  FUN_14000cf50(local_1b0,*(undefined1 *)((longlong)puVar20 + 0x22));
  FUN_14000cf50(local_1b0,*(undefined1 *)((longlong)puVar20 + 0x24));
  FUN_14000cf50(local_1b0,*(undefined1 *)((longlong)puVar20 + 0x23));
  local_158 = (longlong *)0x0;
  plStack_150 = (longlong *)0x0;
  local_148 = 0;
  puVar5 = *(undefined8 **)(local_80 + 0x140);
  for (puVar20 = *(undefined8 **)(local_80 + 0x138); plVar13 = plStack_150, puVar20 != puVar5;
      puVar20 = puVar20 + 1) {
    uVar12 = *puVar20;
    unaff_RBX = local_158;
    plVar17 = local_158;
    if (local_158 == plStack_150) {
LAB_14001a968:
      FUN_14000d086(&local_158,uVar12);
    }
    else {
      do {
        cVar10 = FUN_1400170b4(plVar17,uVar12);
        unaff_RBX = plVar17;
        if (cVar10 != '\0') break;
        plVar17 = plVar17 + 4;
        unaff_RBX = plVar13;
      } while (plVar17 != plVar13);
      if (unaff_RBX == plStack_150) {
        uVar12 = *puVar20;
        goto LAB_14001a968;
      }
    }
  }
  FUN_14000169c(local_100,"Options");
  FUN_14002020c(&local_158,&local_a8,local_158,local_100);
  FUN_1400017de(local_100);
  if ((param_5 != '\0') &&
     (((*(char *)(local_80 + 0x31e) != '\0' || (*(longlong *)(local_80 + 0x348) == 0)) ||
      (*(longlong *)(local_80 + 0x18) == 0)))) {
    uVar12 = FUN_1400058b9(local_410,&local_188);
    FUN_140006874(local_308,local_80 + 0x28);
    FUN_140018bac(local_100,&local_188,local_308);
    uVar12 = FUN_1400058b9(uVar12,local_100);
    FUN_1400163f5(uVar12,10);
    FUN_1400017de(local_100);
  }
  local_1c0 = plStack_150;
  bVar19 = 0;
  local_4c = local_49 ^ 1;
  plVar13 = local_158;
  while (plVar13 != local_1c0) {
    cVar10 = FUN_14000d7b8(plVar13,"Options");
    local_c0 = plVar13;
    if (cVar10 == '\0') {
      bVar9 = 1;
      if ((plVar13[2] == 0 & bVar19) == 0) {
        bVar11 = plVar13[2] == 0 | bVar19;
        goto LAB_14001aadb;
      }
    }
    else {
      bVar11 = 1;
      bVar9 = 1;
      if ((bVar19 & 1) == 0) {
LAB_14001aadb:
        local_4b = bVar11;
        if (((param_5 != '\0') && (cVar10 = FUN_14000d7b8(plVar13,"Options"), cVar10 == '\0')) &&
           (local_c0[2] != 0)) {
          uVar12 = FUN_1400163f5(local_410,10);
          uVar12 = FUN_1400058b9(uVar12,&local_188);
          uVar12 = FUN_1400058b9(uVar12,local_c0);
          FUN_1400052b8(uVar12," Options\n");
        }
        local_428 = 0;
        FUN_140016ae0(local_80,&local_1e8,local_460);
        local_1c8 = local_1e0;
        plVar13 = local_1e8;
        while (plVar13 != local_1c8) {
          lVar6 = *plVar13;
          local_168 = plVar13;
          if ((*(char *)(lVar6 + 0x23) == '\x01') &&
             ((cVar10 = FUN_1400170b4(lVar6,local_c0), cVar10 != '\0' ||
              ((cVar10 = FUN_14000d7b8(local_c0,"Options"), cVar10 != '\0' &&
               (*(longlong *)(lVar6 + 0x10) == 0)))))) {
            lVar15 = *(longlong *)(lVar6 + 0x40);
            if ((lVar15 == *(longlong *)(lVar6 + 0x48)) &&
               (lVar15 = *(longlong *)(lVar6 + 0x28), lVar15 == *(longlong *)(lVar6 + 0x30))) {
              lVar15 = lVar6 + (ulonglong)(*(longlong *)(lVar6 + 0x98) == 0) * 0x20 + 0x88;
            }
            local_b0 = lVar6;
            FUN_140006874(local_100,lVar15);
            if (local_f0 != 0) {
              uVar1 = *(undefined1 *)((longlong)local_58 + 0x26);
              uVar2 = *(undefined1 *)((longlong)local_58 + 0x25);
              uVar18 = (undefined7)((ulonglong)unaff_RBX >> 8);
              unaff_RBX = (longlong *)CONCAT71(uVar18,*(undefined1 *)((longlong)local_58 + 0x21));
              uVar3 = *(undefined1 *)((longlong)local_58 + 0x22);
              uVar4 = *(undefined1 *)((longlong)local_58 + 0x23);
              FUN_14001f18e(local_b0,&local_78);
              FUN_14001ef57(&local_a8,&local_78,
                            CONCAT71((int7)((ulonglong)lVar6 >> 8),uVar4) & 0xffffffff,
                            (ulonglong)unaff_RBX & 0xffffffff,uVar3,uVar2,uVar1);
              FUN_14000eeca(&local_78);
              if (local_98 == 0 && local_4c == 0) {
                lVar6 = local_b0 + 0xe8;
                FUN_140006874(&local_78,lVar6);
                lVar15 = local_68;
                FUN_1400017de(&local_78);
                if (lVar15 == 0) {
                  if (*(int *)(local_b0 + 0x1b0) == 0) {
                    FUN_140017200(&local_a8,"false",5);
                  }
                  else if (*(char *)(local_b0 + 0x26b) == '\x01') {
                    FUN_140017200(&local_a8,&DAT_140171d21,2);
                  }
                }
                else {
                  uVar1 = *(undefined1 *)((longlong)local_58 + 0x25);
                  unaff_RBX = (longlong *)
                              CONCAT71(uVar18,*(undefined1 *)((longlong)local_58 + 0x26));
                  FUN_140006874(&local_138,lVar6);
                  FUN_14001f304(&local_78,&local_138,
                                CONCAT71((int7)((ulonglong)lVar15 >> 8),uVar1) & 0xffffffff,
                                (ulonglong)unaff_RBX & 0xffffffff,0);
                  FUN_1400065bc(&local_a8);
                  local_98 = local_68;
                  uStack_90 = uStack_60;
                  local_a8 = local_78;
                  uStack_a4 = uStack_74;
                  uStack_a0 = uStack_70;
                  uStack_9c = uStack_6c;
                  local_68 = 0;
                  uStack_60 = 0xf;
                  local_78 = local_78 & 0xffffff00;
                  FUN_1400017de(&local_78);
                  FUN_1400017de(&local_138);
                }
              }
              if (local_98 != 0) {
                if (*(longlong *)(local_b0 + 0x70) != *(longlong *)(local_b0 + 0x78)) {
                  FUN_140006874(local_2e8,&local_a8);
                  FUN_14001f9b2(local_b0,&local_228,local_100,local_2e8);
                  FUN_1400065bc(&local_a8);
                  local_98 = local_218;
                  uStack_90 = uStack_210;
                  local_a8 = local_228;
                  uStack_a4 = uStack_224;
                  uStack_a0 = uStack_220;
                  uStack_9c = uStack_21c;
                  local_218 = 0;
                  uStack_210 = 0xf;
                  local_228 = local_228 & 0xffffff00;
                  FUN_1400017de(&local_228);
                }
                if ((param_5 != '\0') && (*(longlong *)(local_b0 + 0xd8) != 0)) {
                  FUN_1400163f5(local_410,10);
                  uVar12 = FUN_1400058b9(local_410,&local_188);
                  FUN_140006874(local_2a8,local_b0 + 200);
                  FUN_140018bac(&local_78,&local_188,local_2a8);
                  uVar12 = FUN_1400058b9(uVar12,&local_78);
                  FUN_1400163f5(uVar12,10);
                  FUN_1400017de(&local_78);
                }
                FUN_14001ff0f(local_100,local_1b0);
                FUN_14002009a(&local_78,param_6,local_100);
                uVar12 = FUN_1400058b9(local_410,&local_78);
                uVar12 = FUN_1400163f5(uVar12,*(undefined1 *)((longlong)local_58 + 0x24));
                uVar12 = FUN_1400058b9(uVar12,&local_a8);
                FUN_1400163f5(uVar12,10);
                FUN_1400017de(&local_78);
              }
              FUN_1400017de(&local_a8);
            }
            FUN_1400017de(local_100);
          }
          plVar13 = local_168 + 1;
        }
        FUN_140016e5c(&local_1e8);
        bVar9 = local_4b;
      }
    }
    bVar19 = bVar9;
    plVar13 = local_c0 + 4;
  }
  local_c8 = (longlong *)0x0;
  local_118 = (longlong *)0x0;
  plStack_110 = (longlong *)0x0;
  local_108 = 0;
  FUN_140016d7a(&local_118,*(longlong *)(local_80 + 0x308) - *(longlong *)(local_80 + 0x300) >> 4);
  plVar8 = plStack_110;
  plVar17 = *(longlong **)(local_80 + 0x308);
  plVar16 = local_118;
  for (plVar13 = *(longlong **)(local_80 + 0x300); plVar13 != plVar17; plVar13 = plVar13 + 2) {
    *plVar16 = *plVar13;
    plVar16 = plVar16 + 1;
  }
  if ((local_c8 != (longlong *)0x0) &&
     (FUN_140016cbb(&local_a8,local_118,plStack_110,local_100),
     (longlong *)CONCAT44(uStack_a4,local_a8) != plVar8)) {
    plStack_110 = (longlong *)thunk_FUN_140016eb4(plVar8,plStack_110);
  }
  if (local_c8 != (longlong *)0x0) {
    (**(code **)(*local_c8 + 0x20))(local_c8,local_c8 != local_100);
  }
  plVar13 = plStack_110;
  for (plVar17 = local_118; plVar16 = plStack_110, plVar17 != plVar13; plVar17 = plVar17 + 1) {
    lVar6 = *plVar17;
    if ((*(longlong *)(lVar6 + 0x18) == 0) &&
       ((local_49 != 0 || (lVar15 = FUN_1400200fc(lVar6), lVar15 != 0)))) {
      if ((param_5 != '\0') && (*(longlong *)(lVar6 + 0x360) != 0)) {
        uVar12 = FUN_1400163f5(local_410,10);
        uVar12 = FUN_1400058b9(uVar12,&local_188);
        uVar12 = FUN_1400058b9(uVar12,lVar6 + 0x350);
        FUN_1400052b8(uVar12," Options\n");
      }
      FUN_140006874(local_328,param_6);
      (**(code **)*local_58)(local_58,local_100,lVar6,local_49,param_5,local_328);
      FUN_1400058b9(local_410,local_100);
      FUN_1400017de(local_100);
    }
  }
  local_168 = (longlong *)(local_80 + 8);
  plVar13 = local_118;
  do {
    if (plVar13 == plVar16) {
      FUN_1400170f8(local_408,local_190);
      FUN_140016e5c(&local_118);
      FUN_14000eeca(&local_158);
      FUN_1400017de(local_1b0);
      FUN_1400017de(local_248);
      FUN_1400017de(&local_188);
      FUN_140009ff0(local_420);
      FUN_1400017de(param_6);
      return local_190;
    }
    lVar6 = *plVar13;
    if ((*(longlong *)(lVar6 + 0x18) != 0) &&
       ((local_49 != 0 || (lVar15 = FUN_1400200fc(lVar6), lVar15 != 0)))) {
      lVar15 = lVar6 + 8;
      FUN_140006874(&local_78,lVar15);
      FUN_14001ff0f(&local_78,local_1b0);
      if (*(char *)(lVar6 + 0x31e) == '\x01') {
        plVar17 = *(longlong **)(local_80 + 0x300);
        while( true ) {
          if (plVar17 == *(longlong **)(local_80 + 0x308)) {
            FUN_140006874(&local_a8,lVar15);
            FUN_140027342(local_100,&local_a8);
                    /* WARNING: Subroutine does not return */
            FUN_140106270(local_100,&DAT_14017a328);
          }
          lVar7 = *plVar17;
          if (lVar7 == lVar6) break;
          plVar17 = plVar17 + 2;
        }
        if (*(int *)(lVar7 + 0x324) == 0) goto code_r0x00014001b32d;
        if ((*(longlong *)(param_6 + 0x10) == 0) && (*(longlong *)(local_80 + 0x348) != 0)) {
          FUN_140006874(local_100,local_168);
          FUN_14001ff0f(local_100,local_1b0);
          FUN_14002017d(&local_138,local_100,*(undefined1 *)(local_58 + 5));
          puVar14 = &local_78;
          if (0xf < uStack_60) {
            puVar14 = (uint *)CONCAT44(uStack_74,local_78);
          }
          puVar14 = (uint *)FUN_14000b1f8(&local_138,puVar14,local_68);
          local_a8 = *puVar14;
          uStack_a4 = puVar14[1];
          uStack_a0 = puVar14[2];
          uStack_9c = puVar14[3];
          local_98._0_4_ = puVar14[4];
          local_98._4_4_ = puVar14[5];
          uStack_90._0_4_ = puVar14[6];
          uStack_90._4_4_ = puVar14[7];
          puVar14[4] = 0;
          puVar14[5] = 0;
          puVar14[6] = 0xf;
          puVar14[7] = 0;
          *(undefined1 *)puVar14 = 0;
          FUN_1400065bc(&local_78);
          local_68 = CONCAT44(local_98._4_4_,(uint)local_98);
          uStack_60 = CONCAT44(uStack_90._4_4_,(uint)uStack_90);
          local_78 = local_a8;
          uStack_74 = uStack_a4;
          uStack_70 = uStack_a0;
          uStack_6c = uStack_9c;
          local_98 = 0;
          uStack_90 = 0xf;
          local_a8 = local_a8 & 0xffffff00;
          FUN_1400017de(&local_a8);
          FUN_1400017de(&local_138);
          lVar15 = *(longlong *)(local_80 + 0x348);
          while (*(longlong *)(lVar15 + 0x348) != 0) {
            FUN_140006874(&local_a8,lVar15 + 8);
            FUN_14001ff0f(&local_a8,local_1b0);
            FUN_14002017d(&local_1e8,&local_a8,*(undefined1 *)(local_58 + 5));
            puVar14 = &local_78;
            if (0xf < uStack_60) {
              puVar14 = (uint *)CONCAT44(uStack_74,local_78);
            }
            puVar14 = (uint *)FUN_14000b1f8(&local_1e8,puVar14,local_68);
            local_138 = *puVar14;
            uStack_134 = puVar14[1];
            uStack_130 = puVar14[2];
            uStack_12c = puVar14[3];
            local_128._0_4_ = puVar14[4];
            local_128._4_4_ = puVar14[5];
            uStack_120._0_4_ = puVar14[6];
            uStack_120._4_4_ = puVar14[7];
            puVar14[4] = 0;
            puVar14[5] = 0;
            puVar14[6] = 0xf;
            puVar14[7] = 0;
            *(undefined1 *)puVar14 = 0;
            FUN_1400065bc(&local_78);
            local_68 = CONCAT44(local_128._4_4_,(uint)local_128);
            uStack_60 = CONCAT44(uStack_120._4_4_,(uint)uStack_120);
            local_78 = local_138;
            uStack_74 = uStack_134;
            uStack_70 = uStack_130;
            uStack_6c = uStack_12c;
            local_128 = 0;
            uStack_120 = 0xf;
            local_138 = local_138 & 0xffffff00;
            FUN_1400017de(&local_138);
            FUN_1400017de(&local_1e8);
            lVar15 = *(longlong *)(lVar15 + 0x348);
            FUN_1400017de(&local_a8);
          }
          uVar12 = FUN_1400163f5(local_410,0x5b);
          uVar12 = FUN_1400058b9(uVar12,&local_78);
          FUN_1400052b8(uVar12,&DAT_1401728b7);
          FUN_1400017de(local_100);
        }
        else {
          uVar12 = FUN_1400163f5(local_410,CONCAT71((int7)((ulonglong)lVar7 >> 8),0x5b));
          uVar12 = FUN_1400058b9(uVar12,param_6);
          uVar12 = FUN_1400058b9(uVar12,&local_78);
          FUN_1400052b8(uVar12,&DAT_1401728b7);
        }
        FUN_14000169c(local_288,&DAT_1401728de);
        (**(code **)*local_58)(local_58,local_100,lVar6,local_49,param_5,local_288);
        FUN_1400058b9(local_410,local_100);
        FUN_1400017de(local_100);
      }
      else {
code_r0x00014001b32d:
        uVar1 = *(undefined1 *)(local_58 + 5);
        FUN_14002009a(&local_a8,param_6,&local_78);
        FUN_14000cf50(&local_a8,CONCAT71((int7)((ulonglong)lVar15 >> 8),uVar1) & 0xffffffff);
        local_258 = (uint)local_98;
        uStack_254 = local_98._4_4_;
        uStack_250 = (uint)uStack_90;
        uStack_24c = uStack_90._4_4_;
        local_268 = local_a8;
        uStack_264 = uStack_a4;
        uStack_260 = uStack_a0;
        uStack_25c = uStack_9c;
        local_98 = 0;
        uStack_90 = 0xf;
        local_a8 = local_a8 & 0xffffff00;
        (**(code **)*local_58)(local_58,local_100,lVar6,local_49,param_5,&local_268);
        FUN_1400058b9(local_410,local_100);
        FUN_1400017de(local_100);
        FUN_1400017de(&local_a8);
      }
      FUN_1400017de(&local_78);
    }
    plVar13 = plVar13 + 1;
  } while( true );
}

