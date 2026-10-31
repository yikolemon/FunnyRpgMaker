/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140055480 */

undefined8 FUN_140055480(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 local_88 [32];
  uint local_68;
  undefined4 uStack_64;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_28 = param_3;
  if (*(longlong *)(param_3 + 0x10) == 0) {
    FUN_1400561b5(&local_68,0);
    local_38 = (undefined4)local_58;
    uStack_34 = local_58._4_4_;
    uStack_30 = (undefined4)uStack_50;
    uStack_2c = uStack_50._4_4_;
    local_48 = local_68;
    uStack_44 = uStack_64;
    local_58 = 0;
    uStack_50 = 7;
    local_68 = local_68 & 0xffff0000;
    FUN_140015bfa(&local_48,local_88);
    FUN_140040b8e(local_28,local_88);
    FUN_140001056(local_88);
    FUN_140001056(&local_48);
    FUN_140001e90(&local_68);
  }
  uVar1 = FUN_140055674(local_28,"FunnyGamePlayer");
  FUN_140004a22(uVar1,param_2);
  local_48 = 0;
  uStack_40 = FUN_140002f76();
  FUN_140015bfa(local_28,local_88);
  FUN_1400556da(local_88,&local_48);
  FUN_140001056(local_88);
  FUN_14003f708(param_1,local_28);
  FUN_140001056(local_28);
  return param_1;
}

