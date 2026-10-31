/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400145be */

undefined8 FUN_1400145be(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  char *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 local_328 [16];
  undefined1 local_318 [8];
  undefined1 local_310 [224];
  undefined1 local_230 [64];
  undefined1 local_1f0 [64];
  undefined1 local_1b0 [32];
  undefined1 local_190 [32];
  undefined1 local_170 [32];
  undefined1 local_150 [32];
  undefined1 local_130 [16];
  longlong local_120;
  longlong local_110;
  longlong local_108;
  undefined8 *local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_d8;
  longlong lStack_d0;
  undefined8 local_c8;
  longlong local_c0 [7];
  longlong *local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_80 = param_2;
  local_60 = param_4;
  local_58 = param_1;
  FUN_14001956a(param_3,local_130);
  if (local_120 == 0) {
    FUN_140009eb0(local_328,1);
    FUN_14000169c(local_1b0,"Usage");
    FUN_1400173aa(local_58,local_c0,local_1b0);
    uVar5 = FUN_1400058b9(local_318,local_c0);
    uVar5 = FUN_1400052b8(uVar5,&DAT_140170ae9);
    puVar6 = &DAT_1401728a8;
    if (*(longlong *)(local_60 + 0x10) == 0) {
      puVar6 = &DAT_1401728de;
    }
    uVar5 = FUN_1400052b8(uVar5,puVar6);
    FUN_1400058b9(uVar5,local_60);
    FUN_1400017de(local_c0);
    local_d8 = 0;
    lStack_d0 = 0;
    local_c8 = 0;
    puVar1 = *(undefined8 **)(param_3 + 0x140);
    for (puVar11 = *(undefined8 **)(param_3 + 0x138); lVar2 = lStack_d0, puVar11 != puVar1;
        puVar11 = puVar11 + 1) {
      uVar5 = *puVar11;
      lVar9 = local_d8;
      if (local_d8 == lStack_d0) {
LAB_14001474a:
        FUN_14000d086(&local_d8,uVar5);
      }
      else {
        do {
          cVar4 = FUN_1400170b4(lVar9,uVar5);
          lVar10 = lVar9;
          if (cVar4 != '\0') break;
          lVar9 = lVar9 + 0x20;
          lVar10 = lVar2;
        } while (lVar9 != lVar2);
        if (lVar10 == lStack_d0) {
          uVar5 = *puVar11;
          goto LAB_14001474a;
        }
      }
    }
    FUN_1400196f6(local_230,local_c0);
    FUN_140016ae0(param_3,&local_110,local_230);
    if (local_110 != local_108) {
      uVar5 = FUN_1400052b8(local_318,&DAT_14017066c);
      FUN_14000169c(local_190,"OPTIONS");
      FUN_1400173aa(local_58,local_c0,local_190);
      uVar5 = FUN_1400058b9(uVar5,local_c0);
      FUN_1400052b8(uVar5,&DAT_1401705ae);
      FUN_1400017de(local_c0);
    }
    FUN_14001977e(local_1f0,local_c0);
    FUN_140016ae0(param_3,&local_f0,local_1f0);
    if (local_f0 != local_e8) {
      local_78 = (undefined8 *)0x0;
      puStack_70 = (undefined8 *)0x0;
      local_68 = 0;
      FUN_140019ae8(&local_78,local_e8 - local_f0 >> 3);
      FUN_140019805(local_c0,local_f0,local_e8,local_78,local_58);
      uVar5 = FUN_1400052b8(local_318,&DAT_1401728a8);
      FUN_14000169c(local_170,&DAT_1401728a8);
      FUN_1400198e7(local_c0,&local_78,local_170);
      FUN_1400058b9(uVar5,local_c0);
      FUN_1400017de(local_c0);
      FUN_14000eeca(&local_78);
    }
    FUN_140019a0a(local_c0,&local_49);
    local_78 = (undefined8 *)0x0;
    puStack_70 = (undefined8 *)0x0;
    local_68 = 0;
    FUN_140016d7a(&local_78,*(longlong *)(param_3 + 0x308) - *(longlong *)(param_3 + 0x300) >> 4);
    puVar3 = puStack_70;
    puVar1 = *(undefined8 **)(param_3 + 0x308);
    puVar7 = local_78;
    for (puVar11 = *(undefined8 **)(param_3 + 0x300); puVar11 != puVar1; puVar11 = puVar11 + 2) {
      *puVar7 = *puVar11;
      puVar7 = puVar7 + 1;
    }
    if ((local_88 != (longlong *)0x0) &&
       (FUN_140016cbb(&local_f8,local_78,puStack_70,local_c0), local_f8 != puVar3)) {
      puStack_70 = (undefined8 *)thunk_FUN_140016eb4(puVar3,puStack_70);
    }
    puVar1 = puStack_70;
    puVar11 = local_78;
    FUN_140016e5c();
    if (local_88 != (longlong *)0x0) {
      (**(code **)(*local_88 + 0x20))(local_88,local_88 != local_c0);
    }
    if (puVar11 != puVar1) {
      uVar5 = FUN_1400052b8(local_318,&DAT_1401728a8);
      puVar6 = &DAT_14017066d;
      if (*(longlong *)(param_3 + 0x328) != 0) {
        puVar6 = &DAT_1401728de;
      }
      uVar5 = FUN_1400052b8(uVar5,puVar6);
      if (*(ulonglong *)(param_3 + 0x330) < 2) {
        pcVar8 = "SUBCOMMAND";
      }
      else {
        pcVar8 = "SUBCOMMANDS";
        if (1 < *(ulonglong *)(param_3 + 0x328)) {
          pcVar8 = "SUBCOMMAND";
        }
      }
      FUN_14000169c(local_150,pcVar8);
      FUN_1400173aa(local_58,local_c0,local_150);
      uVar5 = FUN_1400058b9(uVar5,local_c0);
      puVar6 = &DAT_1401728de;
      if (*(longlong *)(param_3 + 0x328) == 0) {
        puVar6 = &DAT_1401705ae;
      }
      FUN_1400052b8(uVar5,puVar6);
      FUN_1400017de(local_c0);
    }
    FUN_1400163f5(local_318,10);
    FUN_1400170f8(local_310,local_80);
    FUN_140016e5c(&local_f0);
    FUN_140016e5c(&local_110);
    FUN_14000eeca(&local_d8);
    FUN_140009ff0(local_328);
  }
  else {
    FUN_1400193d2(local_80,local_130,&DAT_1401728dd);
  }
  FUN_1400017de(local_130);
  FUN_1400017de(local_60);
  return local_80;
}

