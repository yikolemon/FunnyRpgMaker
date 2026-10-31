/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002bfdc */

longlong FUN_14002bfdc(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                      char param_5,longlong *param_6)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 ****ppppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 local_630 [40];
  longlong local_608;
  longlong local_600;
  longlong local_5f0;
  longlong local_5e8;
  undefined1 auStack_5a8 [16];
  longlong local_598;
  undefined1 local_3c0 [64];
  undefined1 local_380 [64];
  undefined1 local_340 [64];
  undefined1 local_300 [64];
  undefined1 local_2c0 [64];
  undefined1 local_280 [32];
  undefined1 local_260 [32];
  undefined1 local_240 [64];
  undefined1 local_200 [64];
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [32];
  undefined1 local_180 [32];
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 local_100 [32];
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined8 ***local_80 [2];
  longlong local_70;
  ulonglong local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_60 = param_4;
  local_58 = param_3;
  local_50 = param_2;
  FUN_140006874(local_1c0,param_2);
  FUN_140006874(local_1a0,local_60);
  FUN_14002d81a(local_240,local_58);
  FUN_14002d8a2(local_630,local_1c0,local_1a0,local_240,param_1);
  puVar9 = *(undefined8 **)(param_1 + 0x138);
  puVar8 = *(undefined8 **)(param_1 + 0x140);
  if (puVar9 != puVar8) {
    do {
      lVar4 = FUN_14002e504(*puVar9,local_630);
      puVar10 = puVar9;
      if (*(longlong *)(lVar4 + 0x10) != 0) break;
      puVar9 = puVar9 + 1;
      puVar10 = puVar8;
    } while (puVar9 != puVar8);
    puVar9 = *(undefined8 **)(param_1 + 0x140);
    if (puVar10 != puVar9) {
      puVar8 = *(undefined8 **)(param_1 + 0x138);
      do {
        if (puVar8 == puVar9) {
          FUN_14000169c(local_a0,"added option matched existing option name");
          FUN_14002e1b4(local_2c0,local_a0);
                    /* WARNING: Subroutine does not return */
          FUN_140106270(local_2c0,&DAT_14017a468);
        }
        lVar4 = FUN_14002e504(*puVar8,local_630);
        puVar8 = puVar8 + 1;
      } while (*(longlong *)(lVar4 + 0x10) == 0);
      FUN_140006fbc(local_c0,"added option matched existing option name: ",lVar4);
      FUN_14002e1b4(local_300,local_c0);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_300,&DAT_14017a468);
    }
  }
  if ((local_5f0 == local_5e8) && (local_608 == local_600)) {
    FUN_140006fbc(local_80,&DAT_140171466,auStack_5a8 + (ulonglong)(local_598 == 0) * 0x20);
    if (local_70 == 3) {
      ppppuVar7 = local_80;
      if (0xf < local_68) {
        ppppuVar7 = (undefined8 ****)local_80[0];
      }
      *(undefined1 *)((longlong)ppppuVar7 + 2) = *(undefined1 *)((longlong)ppppuVar7 + 3);
      *(undefined2 *)ppppuVar7 = *(undefined2 *)((longlong)ppppuVar7 + 1);
      local_70 = 2;
    }
    FUN_140006874(local_180,local_80);
    lVar4 = FUN_14002e0a2(param_1,local_180);
    if (lVar4 != 0) {
      FUN_140006fbc(local_160,"added option positional name matches existing option: ",local_80);
      FUN_14002e1b4(local_3c0,local_160);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_3c0,&DAT_14017a468);
    }
    FUN_1400017de(local_80);
  }
  else if (*(longlong *)(param_1 + 0x348) != 0) {
    for (lVar4 = local_5f0; lVar4 != local_5e8; lVar4 = lVar4 + 0x20) {
      uVar1 = *(undefined8 *)(param_1 + 0x348);
      FUN_140006874(local_280,lVar4);
      lVar5 = FUN_14002e0a2(uVar1,local_280);
      if (lVar5 != 0) {
        FUN_140006fbc(local_140,"added option matches existing positional option: ",lVar4);
        FUN_14002e1b4(local_380,local_140);
                    /* WARNING: Subroutine does not return */
        FUN_140106270(local_380,&DAT_14017a468);
      }
    }
    for (lVar4 = local_608; lVar4 != local_600; lVar4 = lVar4 + 0x20) {
      uVar1 = *(undefined8 *)(param_1 + 0x348);
      FUN_140006874(local_260,lVar4);
      lVar5 = FUN_14002e0a2(uVar1,local_260);
      if (lVar5 != 0) {
        FUN_140006fbc(local_120,"added option matches existing positional option: ",lVar4);
        FUN_14002e1b4(local_340,local_120);
                    /* WARNING: Subroutine does not return */
        FUN_140106270(local_340,&DAT_14017a468);
      }
    }
  }
  if (*(undefined8 **)(param_1 + 0x140) == *(undefined8 **)(param_1 + 0x148)) {
    FUN_14003101e((undefined8 *)(param_1 + 0x138));
    lVar4 = *(longlong *)(param_1 + 0x140);
  }
  else {
    **(undefined8 **)(param_1 + 0x140) = 0;
    lVar4 = *(longlong *)(param_1 + 0x140) + 8;
    *(longlong *)(param_1 + 0x140) = lVar4;
  }
  local_48 = FUN_1400d3680(0x270);
  FUN_14002d81a(local_200,local_58);
  FUN_140006874(local_100,local_60);
  FUN_140006874(local_e0,local_50);
  FUN_14002d8a2(local_48,local_e0,local_100,local_200,param_1);
  lVar5 = *(longlong *)(lVar4 + -8);
  *(longlong *)(lVar4 + -8) = local_48;
  lVar6 = local_48;
  if (lVar5 != 0) {
    local_48 = lVar5;
    FUN_14002ac68(lVar5);
    thunk_FUN_1400ddcd0(local_48,0x270);
    lVar6 = *(longlong *)(lVar4 + -8);
  }
  FUN_140012258(lVar6 + 0x168,param_6);
  if (param_5 != '\0') {
    FUN_14002e3d6(*(undefined8 *)(lVar4 + -8));
  }
  FUN_14002e47c(param_1 + 0x110,*(undefined8 *)(lVar4 + -8));
  lVar5 = *(longlong *)(lVar4 + -8);
  if ((param_5 == '\0') && (*(char *)(lVar5 + 0x26) == '\x01')) {
    FUN_14002e3d6(lVar5);
    lVar5 = *(longlong *)(lVar4 + -8);
  }
  FUN_14002ac68(local_630);
  FUN_1400017de(local_50);
  plVar3 = local_58;
  plVar2 = (longlong *)local_58[7];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != local_58);
    plVar3[7] = 0;
  }
  FUN_1400017de(local_60);
  plVar2 = (longlong *)param_6[7];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_6);
  }
  return lVar5;
}

