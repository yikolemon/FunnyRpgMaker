/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14003fc0a */

ulonglong FUN_14003fc0a(ulonglong param_1,longlong *param_2,ulonglong param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined8 unaff_RSI;
  undefined7 uVar13;
  ulonglong uVar12;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 local_348 [64];
  undefined1 local_308 [64];
  undefined1 local_2c8 [64];
  undefined1 local_288 [64];
  undefined1 local_248 [32];
  undefined1 local_228 [32];
  undefined1 local_208 [32];
  undefined1 local_1e8 [32];
  undefined1 local_1c8 [32];
  undefined1 local_1a8 [32];
  undefined1 local_188 [32];
  undefined1 local_168 [32];
  undefined1 local_148 [32];
  undefined1 local_128 [32];
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 local_a8 [32];
  uint local_88 [4];
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (param_3 < (ulonglong)(param_2[1] - *param_2 >> 5)) {
    FUN_140006874(local_a8,*param_2 + param_3 * 0x20);
    lVar8 = FUN_14003727a(param_1,local_a8,0,0);
    FUN_1400017de(local_a8);
    if (lVar8 != 0) {
      uVar7 = FUN_14003fc0a(lVar8,param_2,param_3 + 1);
      uVar12 = (ulonglong)uVar7;
      goto LAB_14003ff78;
    }
  }
  else {
    plVar1 = param_2 + 3;
    cVar6 = FUN_14000d7b8(plVar1,"++");
    uVar13 = (undefined7)((ulonglong)unaff_RSI >> 8);
    if (cVar6 != '\0') {
      uVar12 = CONCAT71(uVar13,1);
      if (*(char *)(param_1 + 0x31e) == '\x01') {
        FUN_14003362e(param_1);
        if (*(char *)(param_1 + 0x4e) == '\0') {
          *(undefined1 *)(param_1 + 0x4e) = 1;
          if (*(longlong **)(param_1 + 0x88) != (longlong *)0x0) {
            local_68 = 2;
            (**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))();
          }
        }
        else if ((*(char *)(param_1 + 0x4f) == '\x01') && (*(longlong *)(param_1 + 0x18) != 0)) {
          uVar2 = *(undefined4 *)(param_1 + 0x324);
          local_58 = *(undefined8 *)(param_1 + 0x288);
          *(undefined8 *)(param_1 + 0x288) = 0;
          local_68 = *(ulonglong *)(param_1 + 0x278);
          uStack_60 = *(undefined8 *)(param_1 + 0x280);
          *(undefined8 *)(param_1 + 0x278) = 0;
          *(undefined8 *)(param_1 + 0x280) = 0;
          FUN_140032a72(param_1);
          *(undefined4 *)(param_1 + 0x324) = uVar2;
          *(undefined1 *)(param_1 + 0x4e) = 1;
          if ((ulonglong *)(param_1 + 0x278) != &local_68) {
            FUN_14003184c();
            *(ulonglong *)(param_1 + 0x278) = local_68;
            *(undefined8 *)(param_1 + 0x280) = uStack_60;
            *(undefined8 *)(param_1 + 0x288) = local_58;
            local_68 = 0;
            uStack_60 = 0;
            local_58 = 0;
          }
          FUN_14003184c(&local_68);
        }
        lVar8 = *(longlong *)(param_1 + 0x348);
        if (lVar8 != 0) {
          puVar3 = *(ulonglong **)(lVar8 + 0x2b0);
          if (puVar3 == *(ulonglong **)(lVar8 + 0x2b8)) {
            local_68 = param_1;
            FUN_1400322a6(lVar8 + 0x2a8,puVar3,&local_68);
          }
          else {
            *puVar3 = param_1;
            *(longlong *)(lVar8 + 0x2b0) = *(longlong *)(lVar8 + 0x2b0) + 8;
          }
        }
      }
      goto LAB_14003ff78;
    }
    cVar6 = FUN_14000d7b8(plVar1,&DAT_140171466);
    if (cVar6 != '\0') {
      uVar12 = CONCAT71(uVar13,1);
      if ((*(char *)(param_1 + 0x31e) == '\x01') && (*(longlong *)(param_1 + 200) != 0)) {
        FUN_140038ab4(param_1);
        FUN_140038c80(param_1);
        FUN_140032fde(param_1,0,0);
      }
      goto LAB_14003ff78;
    }
    FUN_140006fbc(local_248,&DAT_140171466,plVar1);
    lVar8 = FUN_14002e0a2(param_1,local_248);
    if (lVar8 == 0) {
      if (param_2[5] == 1) {
        FUN_140006fbc(local_228,&DAT_140171467,plVar1);
        lVar8 = FUN_14002e0a2(param_1,local_228);
        if (lVar8 != 0) goto LAB_14003fe7f;
      }
      FUN_140006874(local_208,plVar1);
      lVar8 = FUN_14002e0a2(param_1,local_208);
      if (lVar8 == 0) {
        if (*(char *)(param_1 + 0x49) == '\x03') {
          FUN_140029f44(param_2,&local_68);
          local_88[0] = 0;
          FUN_140040ca0(param_1 + 0x278,local_88,&local_68);
          FUN_1400017de(&local_68);
          lVar8 = param_2[7];
          lVar9 = param_2[8];
          if (lVar8 != lVar9) {
            do {
              local_68 = local_68 & 0xffffffff00000000;
              FUN_140037f04(param_1 + 0x278,&local_68,lVar8);
              lVar8 = lVar8 + 0x20;
            } while (lVar8 != lVar9);
          }
        }
        goto LAB_14003ff60;
      }
    }
LAB_14003fe7f:
    if (*(char *)(lVar8 + 0x23) != '\0') {
      uVar12 = CONCAT71(uVar13,1);
      if (*(longlong *)(lVar8 + 0x238) != *(longlong *)(lVar8 + 0x240)) goto LAB_14003ff78;
      if (*(int *)(lVar8 + 0x1b0) == 0) {
        uVar14 = param_2[8] - param_2[7] >> 5;
        if (uVar14 < 2) {
          (**(code **)(**(longlong **)(param_1 + 0x390) + 0x10))
                    (*(longlong **)(param_1 + 0x390),&local_68,param_2);
          if (*(char *)(lVar8 + 0x24) == '\x01') {
            FUN_140006874(local_1c8,&local_68);
            lVar9 = FUN_140022bdc(local_1c8);
            if (lVar9 != 1) goto LAB_14004024b;
            FUN_14000169c(local_1a8,&DAT_14016e735);
            FUN_14001f9b2(lVar8,local_88,plVar1,local_1a8);
            FUN_1400065bc(&local_68);
            uStack_50 = (undefined4)uStack_70;
            uStack_4c = uStack_70._4_4_;
            local_78 = 0;
            uStack_70 = 0xf;
            local_88[0] = local_88[0] & 0xffffff00;
            FUN_1400017de(local_88);
          }
          else {
LAB_14004024b:
            puVar10 = (undefined4 *)FUN_140113dd4();
            *puVar10 = 0;
            FUN_140006874(local_188,&local_68);
            FUN_14001f9b2(lVar8,local_88,plVar1,local_188);
            FUN_1400065bc(&local_68);
            uStack_50 = (undefined4)uStack_70;
            uStack_4c = uStack_70._4_4_;
            local_78 = 0;
            uStack_70 = 0xf;
            local_88[0] = local_88[0] & 0xffffff00;
            FUN_1400017de(local_88);
          }
          FUN_140006874(local_168,&local_68);
          FUN_14003a40e(lVar8,local_168);
          FUN_1400017de(&local_68);
          goto LAB_14003ff78;
        }
        local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(lVar8 + 0x1a8));
        cVar6 = FUN_1400217d0(&local_68,*(undefined4 *)(lVar8 + 0x1b4));
        iVar11 = 0x20000000;
        if (cVar6 != '\0') {
          iVar11 = (int)local_68;
        }
        if ((iVar11 < (int)uVar14) && (*(char *)(lVar8 + 0x27) != '\x04')) {
          local_68._0_4_ = *(int *)(lVar8 + 0x1a8);
          cVar6 = FUN_1400217d0(&local_68,*(undefined4 *)(lVar8 + 0x1b4));
          if ((cVar6 == '\0') || (1 < (int)local_68)) {
            lVar9 = param_2[7];
            lVar4 = param_2[8];
            local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(lVar8 + 0x1a8));
            cVar6 = FUN_1400217d0(&local_68,*(undefined4 *)(lVar8 + 0x1b4));
            uVar12 = local_68;
            FUN_140029f44(param_2,local_148);
            uVar14 = 0x20000000;
            if (cVar6 != '\0') {
              uVar14 = uVar12 & 0xffffffff;
            }
            FUN_1400227a4(local_308,local_148,uVar14,lVar4 - lVar9 >> 5);
                    /* WARNING: Subroutine does not return */
            FUN_140106270(local_308,&DAT_14017a2d8);
          }
          if (*(char *)(lVar8 + 0x24) == '\0') {
            FUN_140029f44(param_2,local_128);
            FUN_140029eb2(local_2c8,local_128);
                    /* WARNING: Subroutine does not return */
            FUN_140106270(local_2c8,&DAT_14017a3a8);
          }
          lVar9 = param_2[7];
          lVar4 = param_2[8];
          if (lVar9 != lVar4) {
            do {
              lVar15 = *(longlong *)(lVar8 + 0x58);
              lVar5 = *(longlong *)(lVar8 + 0x60);
              if (lVar15 == lVar5) {
                cVar6 = FUN_14000d7b8(lVar9,&DAT_14016fed7);
                if ((((cVar6 == '\0') && (cVar6 = FUN_14000d7b8(lVar9,"false"), cVar6 == '\0')) &&
                    (cVar6 = FUN_14000d7b8(lVar9,&DAT_14017106a), cVar6 == '\0')) &&
                   (cVar6 = FUN_14000d7b8(lVar9,"0"), cVar6 == '\0')) {
LAB_14004030a:
                  FUN_14000169c(local_e8,"invalid flag argument given");
                  FUN_1400332d6(local_288,local_e8);
                    /* WARNING: Subroutine does not return */
                  FUN_140106270(local_288,&DAT_14017a528);
                }
              }
              else {
                while (cVar6 = FUN_1400170b4(lVar15 + 0x20,lVar9), cVar6 == '\0') {
                  lVar15 = lVar15 + 0x40;
                  if (lVar15 == lVar5) goto LAB_14004030a;
                }
              }
              FUN_140006874(local_108,lVar9);
              FUN_14003a478(lVar8,local_108,lVar8 + 0x238);
              *(undefined1 *)(lVar8 + 0x268) = 0;
              FUN_1400017de(local_108);
              lVar9 = lVar9 + 0x20;
            } while (lVar9 != lVar4);
          }
          goto LAB_14003ff78;
        }
      }
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      FUN_140020d68(&local_c8,param_2[8] - param_2[7] >> 5,param_2 + 7,param_2 + 8);
      FUN_140040c0c(lVar8,&local_c8);
      FUN_14003a6d0(lVar8);
      goto LAB_14003ff78;
    }
    if (*(char *)(param_1 + 0x49) != '\x02') {
      FUN_140029f44(param_2,local_1e8);
      FUN_140040b7a(local_348,local_1e8);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_348,&DAT_14017a818);
    }
  }
LAB_14003ff60:
  uVar12 = 0;
LAB_14003ff78:
  return uVar12 & 0xffffffff;
}

