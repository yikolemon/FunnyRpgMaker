/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400045b6 */

undefined8 FUN_1400045b6(longlong param_1,undefined8 param_2)

{
  uint local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_28 = *(longlong *)(param_1 + 0x38);
  local_1a = local_28 == 0;
  if ((bool)local_1a) {
    FUN_1400561b5(&local_48,0);
    local_19 = 0;
    local_58 = (undefined4)local_38;
    uStack_54 = local_38._4_4_;
    uStack_50 = (undefined4)uStack_30;
    uStack_4c = uStack_30._4_4_;
    local_68 = local_48;
    uStack_64 = uStack_44;
    uStack_60 = uStack_40;
    uStack_5c = uStack_3c;
    local_38 = 0;
    uStack_30 = 7;
    local_48 = local_48 & 0xffff0000;
    local_1b = 1;
    FUN_140015bfa(&local_68,param_2);
  }
  else {
    local_1b = 0;
    FUN_1400032ac(param_2,param_1 + 0x28);
  }
  local_1b = local_1a;
  if (local_28 == 0) {
    FUN_140001056(&local_68);
  }
  local_19 = local_1a;
  if (local_28 == 0) {
    FUN_140001e90(&local_48);
  }
  return param_2;
}

