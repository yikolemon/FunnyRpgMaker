/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140087f79 */

undefined8 FUN_140087f79(undefined8 param_1,uint *param_2)

{
  longlong lVar1;
  uint *puVar2;
  uint *local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined8 local_80;
  uint local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_14000169c(&local_78,*(undefined8 *)(param_2 + 4));
  local_80 = *(undefined8 *)(param_2 + 2);
  FUN_1400882ae(local_a0,&local_80,0);
  puVar2 = &local_58;
  FUN_140055d5e(local_a0,puVar2);
  if (7 < uStack_40) {
    puVar2 = (uint *)CONCAT44(uStack_54,local_58);
  }
  local_d8 = local_48;
  local_e0 = puVar2;
  FUN_140084c7a(local_c0,&local_e0,&local_31);
  FUN_140005690(&local_58);
  FUN_140005690(local_a0);
  lVar1 = FUN_14000e108(&local_78,0x28,0);
  if (lVar1 != -1) {
    FUN_1400191d4(&local_58,&local_78,0,lVar1,local_a0);
    FUN_1400065bc(&local_78);
    local_68 = (undefined4)local_48;
    uStack_64 = local_48._4_4_;
    uStack_60 = (undefined4)uStack_40;
    uStack_5c = uStack_40._4_4_;
    local_78 = local_58;
    uStack_74 = uStack_54;
    uStack_70 = uStack_50;
    uStack_6c = uStack_4c;
    local_48 = 0;
    uStack_40 = 0xf;
    local_58 = local_58 & 0xffffff00;
    FUN_1400017de(&local_58);
  }
  lVar1 = FUN_1400882f6(&local_78,0x20,0xffffffffffffffff);
  if (lVar1 != -1) {
    FUN_1400191d4(&local_58,&local_78,lVar1 + 1,0xffffffffffffffff,local_a0);
    FUN_1400065bc(&local_78);
    local_68 = (undefined4)local_48;
    uStack_64 = local_48._4_4_;
    uStack_60 = (undefined4)uStack_40;
    uStack_5c = uStack_40._4_4_;
    local_78 = local_58;
    uStack_74 = uStack_54;
    uStack_70 = uStack_50;
    uStack_6c = uStack_4c;
    local_48 = 0;
    uStack_40 = 0xf;
    local_58 = local_58 & 0xffffff00;
    FUN_1400017de(&local_58);
  }
  local_58 = *param_2;
  local_d0 = &DAT_14017228a;
  local_c8 = 0xf;
  FUN_140088357(param_1,&local_d0,local_c0,&local_58,&local_78);
  FUN_1400017de(local_c0);
  FUN_1400017de(&local_78);
  return param_1;
}

