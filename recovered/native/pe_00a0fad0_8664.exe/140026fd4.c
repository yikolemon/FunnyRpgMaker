/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140026fd4 */

ulonglong FUN_140026fd4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 unaff_RBX;
  uint *puVar3;
  uint local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  uVar1 = *param_1;
  puVar3 = &local_50;
  local_30 = param_2;
  FUN_140006874(puVar3,param_2);
  if (0xf < uStack_38) {
    puVar3 = (uint *)CONCAT44(uStack_4c,local_50);
  }
  FUN_140017bc5(&local_78,puVar3,local_40 + (longlong)puVar3,puVar3);
  local_78 = local_50;
  uStack_74 = uStack_4c;
  uStack_70 = uStack_48;
  uStack_6c = uStack_44;
  local_68 = (undefined4)local_40;
  uStack_64 = local_40._4_4_;
  uStack_60 = (undefined4)uStack_38;
  uStack_5c = uStack_38._4_4_;
  local_40 = 0;
  uStack_38 = 0xf;
  local_50 = local_50 & 0xffffff00;
  FUN_1400017de(&local_50);
  uVar2 = FUN_1400170b4(&local_78,uVar1);
  FUN_1400017de(&local_78);
  FUN_1400017de(local_30);
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar2) & 0xffffffff;
}

