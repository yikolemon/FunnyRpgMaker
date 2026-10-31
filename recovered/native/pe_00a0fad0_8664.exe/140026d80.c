/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140026d80 */

ulonglong FUN_140026d80(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 uVar3;
  uint *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  uint local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong local_40;
  ulonglong local_38;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  uVar1 = *param_1;
  puVar4 = &local_50;
  local_58 = param_2;
  FUN_140006874(puVar4,param_2);
  if (0xf < local_38) {
    puVar4 = (uint *)CONCAT44(uStack_4c,local_50);
  }
  lVar6 = local_40 + (longlong)puVar4;
  local_29 = 0x5f;
  FUN_14000d6fa(&local_98,puVar4,lVar6);
  lVar2 = CONCAT44(uStack_94,local_98);
  if (local_38 < 0x10) {
    puVar4 = &local_50;
  }
  else {
    puVar4 = (uint *)CONCAT44(uStack_4c,local_50);
  }
  uVar7 = lVar6 - lVar2;
  uVar5 = local_40 - (lVar2 - (longlong)puVar4);
  if (uVar7 <= uVar5) {
    uVar5 = uVar7;
  }
  lVar6 = local_40 - uVar5;
  FUN_140135ff0(lVar2,uVar5 + lVar2,(lVar6 - (lVar2 - (longlong)puVar4)) + 1);
  local_78 = local_50;
  uStack_74 = uStack_4c;
  uStack_70 = uStack_48;
  uStack_6c = uStack_44;
  uStack_60 = local_38;
  local_40 = 0;
  local_38 = 0xf;
  local_50 = local_50 & 0xffffff00;
  local_68 = lVar6;
  FUN_1400017de(&local_50);
  if (uStack_60 < 0x10) {
    puVar4 = &local_78;
  }
  else {
    puVar4 = (uint *)CONCAT44(uStack_74,local_78);
  }
  FUN_140017bc5(&local_98,puVar4,local_68 + (longlong)puVar4,puVar4);
  local_98 = local_78;
  uStack_94 = uStack_74;
  uStack_90 = uStack_70;
  uStack_8c = uStack_6c;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_68 = 0;
  uStack_60 = 0xf;
  local_78 = local_78 & 0xffffff00;
  FUN_1400017de(&local_78);
  uVar3 = FUN_1400170b4(&local_98,uVar1);
  FUN_1400017de(&local_98);
  FUN_1400017de(local_58);
  return CONCAT71((int7)((ulonglong)lVar6 >> 8),uVar3) & 0xffffffff;
}

