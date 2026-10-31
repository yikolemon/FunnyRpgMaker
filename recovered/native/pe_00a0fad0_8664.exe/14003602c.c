/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14003602c */

ulonglong FUN_14003602c(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 local_158 [64];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined1 local_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong *local_b0;
  uint local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_60;
  longlong *local_58;
  char local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_b0 = param_2 + 1;
  lVar8 = param_2[1] + -0x20;
  local_60 = 0;
  local_58 = param_2;
  local_49 = param_3;
  if (*(char *)(param_1 + 0x31c) == '\x01') {
    plVar6 = *(longlong **)(param_1 + 0x138);
    plVar1 = *(longlong **)(param_1 + 0x140);
    if (plVar6 == plVar1) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      plVar5 = plVar6;
      do {
        lVar10 = *plVar5;
        if ((((*(longlong *)(lVar10 + 0x98) != 0) && (*(char *)(lVar10 + 0x20) == '\x01')) &&
            (uVar9 = *(int *)(lVar10 + 0x1b0) * *(int *)(lVar10 + 0x1ac), 0 < (int)uVar9)) &&
           (lVar10 = *(longlong *)(lVar10 + 0x240) - *(longlong *)(lVar10 + 0x238) >> 5,
           (int)lVar10 < (int)uVar9)) {
          uVar4 = (ulonglong)uVar9 + (uVar4 - lVar10);
        }
        plVar5 = plVar5 + 1;
      } while (plVar5 != plVar1);
    }
    if ((ulonglong)(param_2[1] - *param_2 >> 5) <= uVar4) {
      for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
        lVar10 = *plVar6;
        if (((*(longlong *)(lVar10 + 0x98) != 0) && (*(char *)(lVar10 + 0x20) == '\x01')) &&
           ((int)((ulonglong)(*(longlong *)(lVar10 + 0x240) - *(longlong *)(lVar10 + 0x238)) >> 5) <
            *(int *)(lVar10 + 0x1b0) * *(int *)(lVar10 + 0x1ac))) {
          if (*(char *)(param_1 + 799) != '\x01') goto code_r0x0001400362fb;
          FUN_140006874(&local_88,lVar8);
          FUN_140021146(*plVar6,&local_a8,&local_88,0);
          FUN_1400065bc(&local_88);
          local_78 = (undefined4)local_98;
          uStack_74 = local_98._4_4_;
          uStack_70 = (undefined4)uStack_90;
          uStack_6c = uStack_90._4_4_;
          local_88 = CONCAT44(uStack_a4,local_a8);
          uStack_80 = uStack_a0;
          uStack_7c = uStack_9c;
          local_98 = 0;
          uStack_90 = 0xf;
          local_a8 = local_a8 & 0xffffff00;
          FUN_1400017de(&local_a8);
          lVar10 = CONCAT44(uStack_74,local_78);
          FUN_1400017de(&local_88);
          if (lVar10 == 0) {
            local_60 = *plVar6;
            lVar10 = local_60;
            if (local_60 != 0) goto code_r0x0001400362fb;
            break;
          }
        }
      }
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x140);
  for (plVar6 = *(longlong **)(param_1 + 0x138); plVar6 != plVar1; plVar6 = plVar6 + 1) {
    lVar10 = *plVar6;
    if ((*(longlong *)(lVar10 + 0x98) != 0) &&
       (((int)((ulonglong)(*(longlong *)(lVar10 + 0x240) - *(longlong *)(lVar10 + 0x238)) >> 5) <
         *(int *)(lVar10 + 0x1b0) * *(int *)(lVar10 + 0x1ac) ||
        (*(char *)(lVar10 + 0x269) == '\x01')))) {
      if (*(char *)(param_1 + 799) != '\x01') goto code_r0x0001400362fb;
      FUN_140006874(&local_88,lVar8);
      FUN_140021146(*plVar6,&local_a8,&local_88,0);
      FUN_1400065bc(&local_88);
      local_78 = (undefined4)local_98;
      uStack_74 = local_98._4_4_;
      uStack_70 = (undefined4)uStack_90;
      uStack_6c = uStack_90._4_4_;
      local_88 = CONCAT44(uStack_a4,local_a8);
      uStack_80 = uStack_a0;
      uStack_7c = uStack_9c;
      local_98 = 0;
      uStack_90 = 0xf;
      local_a8 = local_a8 & 0xffffff00;
      FUN_1400017de(&local_a8);
      lVar10 = CONCAT44(uStack_74,local_78);
      FUN_1400017de(&local_88);
      if (lVar10 == 0) {
        local_60 = *plVar6;
        lVar10 = local_60;
        if (local_60 != 0) goto code_r0x0001400362fb;
        break;
      }
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x308);
  for (plVar6 = *(longlong **)(param_1 + 0x300); plVar6 != plVar1; plVar6 = plVar6 + 2) {
    lVar10 = *plVar6;
    if (((*(longlong *)(lVar10 + 0x18) == 0) && (*(char *)(lVar10 + 0x4d) == '\0')) &&
       (cVar3 = FUN_14003602c(lVar10,local_58,0), cVar3 != '\0')) {
      lVar8 = *plVar6;
      uVar4 = CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
      if (*(char *)(lVar8 + 0x4e) == '\0') {
        lVar10 = *local_58;
        lVar7 = local_58[1];
        *(undefined1 *)(lVar8 + 0x4e) = 1;
        if (*(longlong **)(lVar8 + 0x88) != (longlong *)0x0) {
          local_88 = lVar7 - lVar10 >> 5;
          (**(code **)(**(longlong **)(lVar8 + 0x88) + 0x10))();
        }
      }
      goto LAB_140036632;
    }
  }
  if ((*(longlong *)(param_1 + 0x348) != 0) &&
     (lVar10 = *(longlong *)(param_1 + 0x348), *(char *)(param_1 + 0x31a) != '\0')) {
    do {
      lVar8 = lVar10;
      if (*(longlong *)(lVar8 + 0x348) == 0) break;
      lVar10 = *(longlong *)(lVar8 + 0x348);
    } while (*(longlong *)(lVar8 + 0x18) == 0);
    uVar9 = FUN_14003602c(lVar8,local_58,*(longlong *)(param_1 + 200) != 0);
    uVar4 = (ulonglong)uVar9;
    goto LAB_140036632;
  }
  lVar10 = FUN_14003727a(param_1,local_58[1] + -0x20,1,0);
  plVar6 = local_58;
  if ((lVar10 == 0) ||
     ((*(ulonglong *)(param_1 + 0x330) != 0 &&
      (*(ulonglong *)(param_1 + 0x330) <=
       (ulonglong)(*(longlong *)(param_1 + 0x2b0) - *(longlong *)(param_1 + 0x2a8) >> 3))))) {
    lVar10 = *(longlong *)(param_1 + 0x348);
    lVar7 = param_1;
    if (*(longlong *)(param_1 + 0x348) != 0) {
      do {
        lVar7 = lVar10;
        if (*(longlong *)(lVar7 + 0x348) == 0) break;
        lVar10 = *(longlong *)(lVar7 + 0x348);
      } while (*(longlong *)(lVar7 + 0x18) == 0);
    }
    lVar10 = FUN_14003727a(lVar7,local_58[1] + -0x20,1,0);
    if (lVar10 != 0) {
      lVar10 = *(longlong *)(lVar10 + 0x348);
      if ((*(ulonglong *)(lVar10 + 0x330) == 0) ||
         ((ulonglong)(*(longlong *)(lVar10 + 0x2b0) - *(longlong *)(lVar10 + 0x2a8) >> 3) <
          *(ulonglong *)(lVar10 + 0x330))) goto LAB_140036630;
    }
    if (*(char *)(param_1 + 0x31c) == '\x01') {
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      FUN_140020d68(&local_118,local_58[1] - *local_58 >> 5,local_58,local_b0);
      FUN_140039d64(local_158,param_1 + 8,&local_118);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_158,&DAT_14017a5c8);
    }
    if ((*(longlong *)(param_1 + 0x348) == 0) || (*(longlong *)(param_1 + 0x18) != 0)) {
      local_88 = local_88 & 0xffffffff00000000;
      lVar10 = param_1;
      if (*(char *)(param_1 + 0x48) == '\0') {
        for (plVar6 = *(longlong **)(param_1 + 0x300);
            (lVar10 = param_1, plVar6 != *(longlong **)(param_1 + 0x308) &&
            ((lVar10 = *plVar6, *(longlong *)(lVar10 + 0x18) != 0 ||
             (*(char *)(lVar10 + 0x48) == '\0')))); plVar6 = plVar6 + 2) {
        }
      }
      FUN_140037f04(lVar10 + 0x278,&local_88,lVar8);
      plVar6 = local_58;
      FUN_1400017de(local_58[1] + -0x20);
      plVar1 = local_58;
      lVar8 = plVar6[1];
      plVar6[1] = lVar8 + -0x20;
      uVar4 = CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
      if ((*(char *)(param_1 + 0x4a) == '\x01') && (*plVar6 != lVar8 + -0x20)) {
        do {
          local_88 = local_88 & 0xffffffff00000000;
          lVar10 = param_1;
          if (*(char *)(param_1 + 0x48) == '\0') {
            for (plVar6 = *(longlong **)(param_1 + 0x300);
                (lVar10 = param_1, plVar6 != *(longlong **)(param_1 + 0x308) &&
                ((lVar10 = *plVar6, *(longlong *)(lVar10 + 0x18) != 0 ||
                 (*(char *)(lVar10 + 0x48) == '\0')))); plVar6 = plVar6 + 2) {
            }
          }
          FUN_140037f04(lVar10 + 0x278,&local_88,lVar8 + -0x40);
          FUN_1400017de(plVar1[1] + -0x20);
          lVar8 = plVar1[1];
          plVar1[1] = lVar8 + -0x20;
        } while (*plVar1 != lVar8 + -0x20);
      }
      goto LAB_140036632;
    }
  }
  else if (local_49 == '\0') {
    FUN_1400017de(local_58[1] + -0x20);
    plVar6[1] = plVar6[1] + -0x20;
    FUN_14003830e(lVar10,plVar6);
    uVar4 = CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
    goto LAB_140036632;
  }
LAB_140036630:
  uVar4 = 0;
LAB_140036632:
  return uVar4 & 0xffffffff;
code_r0x0001400362fb:
  local_60 = lVar10;
  plVar6 = *(longlong **)(param_1 + 0x298);
  if (plVar6 == *(longlong **)(param_1 + 0x2a0)) {
    FUN_1400322a6(param_1 + 0x290,plVar6,&local_60);
  }
  else {
    *plVar6 = local_60;
    *(longlong *)(param_1 + 0x298) = *(longlong *)(param_1 + 0x298) + 8;
  }
  lVar10 = local_60;
  if (((*(char *)(local_60 + 0x26c) == '\x01') &&
      (*(longlong *)(local_60 + 0x238) != *(longlong *)(local_60 + 0x240))) &&
     (*(longlong *)(*(longlong *)(local_60 + 0x240) + -0x10) != 0)) {
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    local_c0 = 0xf;
    FUN_14003a478(local_60,&local_d8,local_60 + 0x238);
    *(undefined1 *)(lVar10 + 0x268) = 0;
    FUN_1400017de(&local_d8);
  }
  lVar10 = local_60;
  if ((*(char *)(local_60 + 0x26d) == '\x01') && (*(char *)(local_60 + 0x268) == '\x06')) {
    lVar7 = *(longlong *)(local_60 + 0x238);
    lVar2 = *(longlong *)(local_60 + 0x240);
    if (lVar7 != lVar2) {
      do {
        FUN_1400017de(lVar7);
        lVar7 = lVar7 + 0x20;
      } while (lVar7 != lVar2);
      *(undefined8 *)(lVar10 + 0x240) = *(undefined8 *)(lVar10 + 0x238);
    }
    *(undefined1 *)(lVar10 + 0x268) = 0;
  }
  lVar10 = local_60;
  FUN_140006874(local_f8,lVar8);
  FUN_14003a478(lVar10,local_f8,lVar10 + 0x238);
  *(undefined1 *)(lVar10 + 0x268) = 0;
  FUN_1400017de(local_f8);
  if (*(char *)(local_60 + 0x26d) == '\x01') {
    FUN_14003a6d0();
  }
  plVar6 = local_b0;
  FUN_1400017de(*local_b0 + -0x20);
  *plVar6 = *plVar6 + -0x20;
  uVar4 = CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
  goto LAB_140036632;
}

