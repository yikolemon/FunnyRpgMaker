/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140012bc6 */

undefined8 FUN_140012bc6(longlong *param_1,undefined8 param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 local_230 [16];
  undefined1 local_220 [8];
  undefined1 local_218 [224];
  undefined1 local_138 [32];
  longlong *local_118;
  longlong *local_110;
  longlong *local_108;
  undefined8 local_100;
  longlong *local_f8;
  longlong *plStack_f0;
  undefined8 local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong *plStack_d0;
  undefined8 local_c8;
  longlong local_c0 [2];
  longlong local_b0;
  longlong *local_88;
  longlong local_80;
  longlong *local_78;
  longlong *plStack_70;
  undefined8 local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_100 = param_2;
  local_80 = param_3;
  FUN_140009eb0(local_230,1);
  local_88 = (longlong *)0x0;
  local_f8 = (longlong *)0x0;
  plStack_f0 = (longlong *)0x0;
  local_e8 = 0;
  FUN_140016d7a(&local_f8,*(longlong *)(local_80 + 0x308) - *(longlong *)(local_80 + 0x300) >> 4);
  plVar2 = plStack_f0;
  plVar6 = *(longlong **)(local_80 + 0x308);
  plVar5 = local_f8;
  for (plVar3 = *(longlong **)(local_80 + 0x300); plVar3 != plVar6; plVar3 = plVar3 + 2) {
    *plVar5 = *plVar3;
    plVar5 = plVar5 + 1;
  }
  if ((local_88 != (longlong *)0x0) &&
     (FUN_140016cbb(&local_d8,local_f8,plStack_f0,local_c0), local_d8 != plVar2)) {
    plStack_f0 = (longlong *)thunk_FUN_140016eb4(plVar2,plStack_f0);
  }
  if (local_88 != (longlong *)0x0) {
    (**(code **)(*local_88 + 0x20))(local_88,local_88 != local_c0);
  }
  plVar3 = plStack_f0;
  local_d8 = (longlong *)0x0;
  plStack_d0 = (longlong *)0x0;
  local_c8 = 0;
  for (plVar6 = local_f8; plVar6 != plVar3; plVar6 = plVar6 + 1) {
    lVar1 = *plVar6;
    if (*(longlong *)(lVar1 + 0x18) == 0) {
      if (*(longlong *)(lVar1 + 0x360) != 0) {
        (**(code **)(*param_1 + 0x30))(param_1,local_c0);
        FUN_1400058b9(local_220,local_c0);
        FUN_1400017de(local_c0);
      }
    }
    else {
      FUN_140006874(local_c0,lVar1 + 0x350);
      if ((local_b0 != 0) &&
         (FUN_140017634(&local_78,local_d8,plStack_d0,local_c0), local_78 == plStack_d0)) {
        FUN_14000d086(&local_d8,local_c0);
      }
      FUN_1400017de(local_c0);
    }
  }
  local_108 = plStack_d0;
  for (local_e0 = local_d8; local_e0 != local_108; local_e0 = local_e0 + 4) {
    uVar4 = FUN_1400052b8(local_220,&DAT_1401728dd);
    uVar4 = FUN_1400058b9(uVar4,local_e0);
    FUN_1400052b8(uVar4,&DAT_1401728bd);
    local_110 = local_e0;
    FUN_1400176d0(local_c0,&local_110);
    local_78 = (longlong *)0x0;
    plStack_70 = (longlong *)0x0;
    local_68 = 0;
    FUN_140016d7a(&local_78,*(longlong *)(local_80 + 0x308) - *(longlong *)(local_80 + 0x300) >> 4);
    plVar2 = plStack_70;
    plVar6 = *(longlong **)(local_80 + 0x308);
    plVar5 = local_78;
    for (plVar3 = *(longlong **)(local_80 + 0x300); plVar3 != plVar6; plVar3 = plVar3 + 2) {
      *plVar5 = *plVar3;
      plVar5 = plVar5 + 1;
    }
    if ((local_88 != (longlong *)0x0) &&
       (FUN_140016cbb(&local_118,local_78,plStack_70,local_c0), local_118 != plVar2)) {
      plStack_70 = (longlong *)thunk_FUN_140016eb4(plVar2,plStack_70);
    }
    plVar6 = local_78;
    plVar3 = plStack_70;
    if (local_88 != (longlong *)0x0) {
      (**(code **)(*local_88 + 0x20))(local_88,local_88 != local_c0);
      plVar6 = local_78;
      plVar3 = plStack_70;
    }
    for (; plVar6 != plVar3; plVar6 = plVar6 + 1) {
      lVar1 = *plVar6;
      if (*(longlong *)(lVar1 + 0x18) != 0) {
        if (param_4 == 1) {
          FUN_140006874(local_138,lVar1 + 8);
          FUN_140017762(lVar1,local_c0,local_138,2);
          FUN_1400058b9(local_220,local_c0);
          FUN_1400017de(local_c0);
          FUN_1400052b8(local_220,&DAT_1401728dd);
        }
        else {
          (**(code **)(*param_1 + 0x28))(param_1,local_c0,lVar1);
          FUN_1400058b9(local_220,local_c0);
          FUN_1400017de(local_c0);
        }
      }
    }
    FUN_140016e5c(&local_78);
  }
  FUN_1400170f8(local_218,local_100);
  FUN_14000eeca(&local_d8);
  FUN_140016e5c(&local_f8);
  FUN_140009ff0(local_230);
  return local_100;
}

