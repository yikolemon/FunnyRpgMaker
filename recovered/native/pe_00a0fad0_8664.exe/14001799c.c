/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14001799c */

ulonglong FUN_14001799c(undefined8 *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 unaff_RBX;
  uint *puVar2;
  uint local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
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
  uint local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  puVar2 = &local_68;
  local_28 = param_2;
  FUN_140006874(puVar2,*param_1);
  if (0xf < uStack_50) {
    puVar2 = (uint *)CONCAT44(uStack_64,local_68);
  }
  FUN_140017bc5(&local_a8,puVar2,local_58 + (longlong)puVar2,puVar2);
  local_a8 = local_68;
  uStack_a4 = uStack_64;
  uStack_a0 = uStack_60;
  uStack_9c = uStack_5c;
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_58 = 0;
  uStack_50 = 0xf;
  local_68 = local_68 & 0xffffff00;
  FUN_1400017de(&local_68);
  puVar2 = &local_48;
  FUN_140006874(puVar2,local_28);
  if (0xf < uStack_30) {
    puVar2 = (uint *)CONCAT44(uStack_44,local_48);
  }
  FUN_140017bc5(&local_88,puVar2,local_38 + (longlong)puVar2,puVar2);
  local_88 = local_48;
  uStack_84 = uStack_44;
  uStack_80 = uStack_40;
  uStack_7c = uStack_3c;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_38 = 0;
  uStack_30 = 0xf;
  local_48 = local_48 & 0xffffff00;
  FUN_1400017de(&local_48);
  uVar1 = FUN_1400170b4(&local_88,&local_a8);
  FUN_1400017de(&local_88);
  FUN_1400017de(&local_a8);
  FUN_1400017de(local_28);
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff;
}

