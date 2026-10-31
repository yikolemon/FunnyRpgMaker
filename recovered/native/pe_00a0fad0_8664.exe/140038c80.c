/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140038c80 */

void FUN_140038c80(longlong param_1)

{
  longlong ****pppplVar1;
  longlong ***ppplVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *****ppppplVar10;
  bool bVar11;
  undefined1 local_4b0 [64];
  undefined1 local_470 [64];
  undefined1 local_430 [64];
  undefined1 local_3f0 [64];
  undefined1 local_3b0 [64];
  undefined1 local_370 [64];
  undefined1 local_330 [64];
  undefined1 local_2f0 [64];
  undefined1 local_2b0 [32];
  undefined1 local_290 [32];
  undefined1 local_270 [32];
  undefined1 local_250 [32];
  undefined1 local_230 [32];
  undefined1 local_210 [32];
  undefined1 local_1f0 [32];
  undefined1 local_1d0 [32];
  undefined1 local_1b0 [32];
  undefined1 local_190 [32];
  undefined1 local_170 [32];
  undefined1 local_150 [32];
  undefined1 local_130 [32];
  longlong local_110;
  longlong local_108;
  undefined8 *local_f8 [4];
  longlong ****local_d8;
  longlong lStack_d0;
  undefined8 local_c8;
  ulonglong uStack_c0;
  longlong ****local_b8;
  longlong lStack_b0;
  undefined8 local_a8;
  ulonglong uStack_a0;
  longlong ****local_98;
  longlong lStack_90;
  undefined8 local_88;
  ulonglong uStack_80;
  longlong ****local_60;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_d8 = (longlong ****)0x0;
  lStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0xf;
  pppplVar1 = *(longlong *****)(param_1 + 0x2d0);
  local_b8 = (longlong ****)*pppplVar1;
  bVar11 = false;
  local_50 = param_1;
  while (local_b8 != pppplVar1) {
    ppplVar2 = local_b8[4];
    if (ppplVar2[0x48] != ppplVar2[0x47]) {
      FUN_14001190c(ppplVar2,&local_98,0,0);
      FUN_1400065bc(&local_d8);
      local_c8 = local_88;
      uStack_c0 = uStack_80;
      local_d8 = local_98;
      lStack_d0 = lStack_90;
      local_88 = 0;
      uStack_80 = 0xf;
      local_98 = (longlong ****)((ulonglong)local_98 & 0xffffffffffffff00);
      FUN_1400017de(&local_98);
      bVar11 = true;
    }
    FUN_14001010a(&local_b8);
  }
  ppppplVar10 = *(longlong ******)(local_50 + 0x2c0);
  local_b8 = *ppppplVar10;
  while (pppplVar1 = local_b8, (longlong *****)local_b8 != ppppplVar10) {
    lVar6 = FUN_1400200fc(local_b8[4]);
    if (lVar6 != 0) {
      FUN_14001818a(pppplVar1[4],&local_98);
      FUN_1400065bc(&local_d8);
      local_c8 = local_88;
      uStack_c0 = uStack_80;
      local_d8 = local_98;
      lStack_d0 = lStack_90;
      local_88 = 0;
      uStack_80 = 0xf;
      local_98 = (longlong ****)((ulonglong)local_98 & 0xffffffffffffff00);
      FUN_1400017de(&local_98);
      bVar11 = true;
    }
    FUN_14001010a(&local_b8);
  }
  if (bVar11) {
    lVar6 = FUN_1400200fc(local_50);
    if (lVar6 != 0) {
      FUN_140006874(local_2b0,&local_d8);
      FUN_14001818a(local_50,local_290,0);
      FUN_14003b1ba(local_4b0,local_290,local_2b0);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_4b0,&DAT_14017a6d8);
    }
  }
  else {
    local_b8 = (longlong ****)0x0;
    lStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0xf;
    puVar3 = *(undefined8 **)(local_50 + 0x2f0);
    local_f8[0] = (undefined8 *)*puVar3;
    bVar11 = false;
    while (local_f8[0] != puVar3) {
      lVar6 = local_f8[0][4];
      if (*(longlong *)(lVar6 + 0x240) == *(longlong *)(lVar6 + 0x238)) {
        FUN_14001190c(lVar6,&local_98,0,0);
        FUN_1400065bc(&local_b8);
        local_a8 = local_88;
        uStack_a0 = uStack_80;
        local_b8 = local_98;
        lStack_b0 = lStack_90;
        local_88 = 0;
        uStack_80 = 0xf;
        local_98 = (longlong ****)((ulonglong)local_98 & 0xffffffffffffff00);
        FUN_1400017de(&local_98);
        bVar11 = true;
      }
      FUN_14001010a(local_f8);
    }
    puVar3 = *(undefined8 **)(local_50 + 0x2e0);
    local_f8[0] = (undefined8 *)*puVar3;
    while (puVar5 = local_f8[0], local_f8[0] != puVar3) {
      lVar6 = FUN_1400200fc(local_f8[0][4]);
      if (lVar6 == 0) {
        FUN_14001818a(puVar5[4],&local_98);
        FUN_1400065bc(&local_b8);
        local_a8 = local_88;
        uStack_a0 = uStack_80;
        local_b8 = local_98;
        lStack_b0 = lStack_90;
        local_88 = 0;
        uStack_80 = 0xf;
        local_98 = (longlong ****)((ulonglong)local_98 & 0xffffffffffffff00);
        FUN_1400017de(&local_98);
        bVar11 = true;
      }
      FUN_14001010a(local_f8);
    }
    if (bVar11) {
      lVar6 = FUN_1400200fc(local_50);
      if (lVar6 != 0) {
        FUN_140006874(local_270,&local_b8);
        FUN_14001818a(local_50,local_250,0);
        FUN_14003b494(local_470,local_250,local_270);
                    /* WARNING: Subroutine does not return */
        FUN_140106270(local_470,&DAT_14017a728);
      }
    }
    else {
      plVar8 = *(longlong **)(local_50 + 0x138);
      plVar4 = *(longlong **)(local_50 + 0x140);
      if (plVar8 == plVar4) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        do {
          lVar6 = *plVar8;
          bVar11 = *(longlong *)(lVar6 + 0x240) != *(longlong *)(lVar6 + 0x238);
          if ((!bVar11) && (*(char *)(lVar6 + 0x20) != '\0')) {
            FUN_14001190c(lVar6,local_230,0,0);
            FUN_14003b76e(local_430,local_230);
                    /* WARNING: Subroutine does not return */
            FUN_140106270(local_430,&DAT_14017a778);
          }
          pppplVar1 = *(longlong *****)(lVar6 + 0x1d0);
          local_98 = (longlong ****)*pppplVar1;
          while (local_98 != pppplVar1) {
            if ((*(longlong *)(*plVar8 + 0x240) != *(longlong *)(*plVar8 + 0x238)) &&
               (ppplVar2 = local_98[4], ppplVar2[0x48] == ppplVar2[0x47])) {
              FUN_14001190c(ppplVar2,local_210,0,0);
              FUN_14001190c(*plVar8,local_1f0,0,0);
              FUN_14003b494(local_3f0,local_1f0,local_210);
                    /* WARNING: Subroutine does not return */
              FUN_140106270(local_3f0,&DAT_14017a728);
            }
            FUN_14001010a(&local_98);
          }
          ppppplVar10 = *(longlong ******)(*plVar8 + 0x1e0);
          local_98 = *ppppplVar10;
          while ((longlong *****)local_98 != ppppplVar10) {
            if ((*(longlong *)(*plVar8 + 0x240) != *(longlong *)(*plVar8 + 0x238)) &&
               (pppplVar1 = (longlong ****)local_98[4], pppplVar1[0x48] != pppplVar1[0x47])) {
              FUN_14001190c(pppplVar1,local_1d0,0,0);
              FUN_14001190c(*plVar8,local_1b0,0,0);
              FUN_14003b1ba(local_3b0,local_1b0,local_1d0);
                    /* WARNING: Subroutine does not return */
              FUN_140106270(local_3b0,&DAT_14017a6d8);
            }
            FUN_14001010a(&local_98);
          }
          uVar9 = uVar9 + bVar11;
          plVar8 = plVar8 + 1;
        } while (plVar8 != plVar4);
      }
      if (*(longlong *)(local_50 + 0x328) != 0) {
        local_98 = (longlong ****)0x0;
        lStack_90 = 0;
        local_88 = 0;
        FUN_14001700e(&local_98,
                      *(longlong *)(local_50 + 0x2b0) - *(longlong *)(local_50 + 0x2a8) >> 3,
                      local_50 + 0x2a8,local_50 + 0x2b0);
        if ((ulonglong)(lStack_90 - (longlong)local_98 >> 3) < *(ulonglong *)(local_50 + 0x328)) {
          FUN_14003b990(local_370);
                    /* WARNING: Subroutine does not return */
          FUN_140106270(local_370,&DAT_14017a778);
        }
        FUN_140016e5c(&local_98);
      }
      lVar6 = local_50 + 0x138;
      plVar4 = *(longlong **)(local_50 + 0x308);
      for (plVar8 = *(longlong **)(local_50 + 0x300); plVar8 != plVar4; plVar8 = plVar8 + 2) {
        if ((*(char *)(*plVar8 + 0x4d) == '\0') && (*(longlong *)(*plVar8 + 0x18) == 0)) {
          lVar7 = FUN_1400200fc();
          uVar9 = (uVar9 + 1) - (ulonglong)(lVar7 == 0);
        }
      }
      if ((uVar9 < *(ulonglong *)(local_50 + 0x338)) ||
         ((*(ulonglong *)(local_50 + 0x340) != 0 && (*(ulonglong *)(local_50 + 0x340) < uVar9)))) {
        FUN_14000169c(local_190,&DAT_14017146a);
        FUN_14003bac6(local_f8,lVar6,local_50,local_190);
        FUN_14003be08(&local_98,local_130);
        FUN_14003bd1a(local_50,&local_110,&local_98);
        if ((longlong *****)local_60 != (longlong *****)0x0) {
          (*(code *)(*local_60)[4])(local_60,(longlong *****)local_60 != &local_98);
        }
        if (local_110 != local_108) {
          FUN_14000169c(local_170,&DAT_14017146a);
          FUN_14003be8f(local_130,&local_110);
          FUN_140018136(&local_98,&DAT_14017146a,local_130);
          ppppplVar10 = &local_98;
          if (0xf < uStack_80) {
            ppppplVar10 = (longlong *****)local_98;
          }
          FUN_14000b1f8(local_f8,ppppplVar10,local_88);
          FUN_1400017de(&local_98);
          FUN_1400017de(local_130);
        }
        FUN_14003c066(local_330,*(undefined8 *)(local_50 + 0x338),*(undefined8 *)(local_50 + 0x340),
                      uVar9,local_f8);
                    /* WARNING: Subroutine does not return */
        FUN_140106270(local_330,&DAT_14017a778);
      }
      plVar4 = *(longlong **)(local_50 + 0x308);
      for (plVar8 = *(longlong **)(local_50 + 0x300); plVar8 != plVar4; plVar8 = plVar8 + 2) {
        lVar6 = *plVar8;
        if ((*(char *)(lVar6 + 0x4d) == '\0') &&
           ((((*(longlong *)(lVar6 + 0x18) != 0 || (*(char *)(lVar6 + 0x4c) != '\0')) ||
             (lVar6 = FUN_1400200fc(), lVar6 != 0)) ||
            ((uVar9 <= *(ulonglong *)(local_50 + 0x338) - 1 &&
             ((*(longlong *)(local_50 + 0x340) == 0 || (uVar9 < *(ulonglong *)(local_50 + 0x338)))))
            )))) {
          lVar6 = *plVar8;
          if ((*(int *)(lVar6 + 0x324) != 0) || (*(longlong *)(lVar6 + 0x18) == 0)) {
            FUN_140038c80();
            lVar6 = *plVar8;
          }
          if ((*(char *)(lVar6 + 0x4c) == '\x01') && (lVar6 = FUN_1400200fc(), lVar6 == 0)) {
            FUN_14001818a(*plVar8,local_150,0);
            FUN_14003b76e(local_2f0,local_150);
                    /* WARNING: Subroutine does not return */
            FUN_140106270(local_2f0,&DAT_14017a778);
          }
        }
      }
    }
    FUN_1400017de(&local_b8);
  }
  FUN_1400017de(&local_d8);
  return;
}

