/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007ece0 */

void FUN_14007ece0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 ***pppuVar1;
  undefined1 local_280 [408];
  undefined1 local_e8 [32];
  undefined8 **local_c8 [2];
  undefined8 local_b8;
  ulonglong local_b0;
  uint local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [32];
  uint local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_3c;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  DAT_1401cc8c4 = 0;
  FUN_140055d5e(param_1 + 1,local_c8);
  pppuVar1 = local_c8;
  if (7 < local_b0) {
    pppuVar1 = (undefined8 ***)local_c8[0];
  }
  FUN_14000ffc0(&DAT_1401cc780,pppuVar1,local_b8);
  FUN_1400a13d9(local_280,param_3);
  FUN_1400a13d9(&local_68,param_1 + 1);
  FUN_140052ee6(&local_68,local_88);
  FUN_1400a1254(local_e8,local_88,local_280);
  FUN_140005690(local_88);
  FUN_140005690(&local_68);
  FUN_140005690(local_280);
  FUN_14007dcb3(local_280,param_2,local_e8);
  FUN_14007dcb3(local_88,local_280,local_c8);
  FUN_140005690(local_280);
  FUN_140052ee6(local_88,local_280);
  FUN_1400a14ea(local_280);
  FUN_140005690(local_280);
  local_3c = 1;
  FUN_14000892c(&local_a8,local_88);
  local_58 = (undefined4)local_98;
  uStack_54 = local_98._4_4_;
  uStack_50 = (undefined4)uStack_90;
  uStack_4c = uStack_90._4_4_;
  local_68 = local_a8;
  uStack_64 = uStack_a4;
  uStack_60 = uStack_a0;
  uStack_5c = uStack_9c;
  local_98 = 0;
  uStack_90 = 7;
  local_a8 = local_a8 & 0xffff0000;
  FUN_140088778(local_280,&local_68,&local_3c,(longlong)param_1 + 0x4c,param_1 + 10);
  FUN_140005690(&local_68);
  FUN_140005242(&local_a8);
  (**(code **)(*param_1 + 0x20))(param_1,local_280);
  FUN_140088af0(local_280);
  FUN_140005690(local_88);
  FUN_140005690(local_e8);
  FUN_140005690(local_c8);
  return;
}

