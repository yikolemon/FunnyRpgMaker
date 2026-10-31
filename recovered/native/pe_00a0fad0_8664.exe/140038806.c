/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140038806 */

void FUN_140038806(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_c8 [16];
  longlong local_b8;
  undefined1 local_a8 [32];
  uint local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_1 + 0x140);
  for (plVar3 = *(longlong **)(param_1 + 0x138); plVar3 != plVar1; plVar3 = plVar3 + 1) {
    lVar2 = *plVar3;
    if ((*(longlong *)(lVar2 + 0x240) == *(longlong *)(lVar2 + 0x238)) &&
       (*(longlong *)(lVar2 + 0xb8) != 0)) {
      FUN_14003a302(local_c8,lVar2 + 0xa8);
      if (local_b8 != 0) {
        FUN_140006874(&local_88,local_c8);
        FUN_140021146(*plVar3,&local_68,&local_88,0);
        FUN_1400065bc(&local_88);
        local_78 = (undefined4)local_58;
        uStack_74 = local_58._4_4_;
        uStack_70 = (undefined4)uStack_50;
        uStack_6c = uStack_50._4_4_;
        local_88 = local_68;
        uStack_84 = uStack_64;
        uStack_80 = uStack_60;
        uStack_7c = uStack_5c;
        local_58 = 0;
        uStack_50 = 0xf;
        local_68 = local_68 & 0xffffff00;
        FUN_1400017de(&local_68);
        if (CONCAT44(uStack_74,local_78) == 0) {
          lVar2 = *plVar3;
          FUN_140006874(local_a8,local_c8);
          FUN_14003a478(lVar2,local_a8,lVar2 + 0x238);
          *(undefined1 *)(lVar2 + 0x268) = 0;
          FUN_1400017de(local_a8);
        }
        FUN_1400017de(&local_88);
      }
      FUN_1400017de(local_c8);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x308);
  for (plVar3 = *(longlong **)(param_1 + 0x300); plVar3 != plVar1; plVar3 = plVar3 + 2) {
    if ((*(longlong *)(*plVar3 + 0x18) == 0) ||
       ((lVar2 = FUN_1400200fc(), lVar2 != 0 && (*(longlong *)(*plVar3 + 200) == 0)))) {
      FUN_140038806();
    }
  }
  return;
}

