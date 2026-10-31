/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cc381 */

undefined8 FUN_1800cc381(undefined8 param_1,undefined8 param_2,longlong param_3)

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
    FUN_1800c8ca5(&local_68,0);
    local_38 = (undefined4)local_58;
    uStack_34 = local_58._4_4_;
    uStack_30 = (undefined4)uStack_50;
    uStack_2c = uStack_50._4_4_;
    local_48 = local_68;
    uStack_44 = uStack_64;
    local_58 = 0;
    uStack_50 = 7;
    local_68 = local_68 & 0xffff0000;
    FUN_180001bd8(&local_48,local_88);
    FUN_180012524(local_28,local_88);
    FUN_180001e4c(local_88);
    FUN_180001e4c(&local_48);
    FUN_1800010ec(&local_68);
  }
  uVar1 = FUN_1800cc8a0(local_28,"FunnyGamePlayer");
  FUN_1800cc906(uVar1,param_2);
  local_48 = 0;
  uStack_40 = FUN_180002218();
  FUN_180001bd8(local_28,local_88);
  FUN_18006ca5d(local_88,&local_48);
  FUN_180001e4c(local_88);
  FUN_18006d722(param_1,local_28);
  FUN_180001e4c(local_28);
  return param_1;
}

