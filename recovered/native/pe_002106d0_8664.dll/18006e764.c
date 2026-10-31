/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006e764 */

void FUN_18006e764(longlong param_1)

{
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined **local_a0;
  undefined8 **local_98 [2];
  undefined8 local_88;
  ulonglong local_80;
  longlong local_78;
  longlong local_70;
  undefined4 local_60;
  undefined7 local_58;
  undefined4 uStack_51;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined2 local_28;
  undefined1 local_26;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_180001e04(local_c0,"BasicData/CommonEvent.dat",0);
  FUN_180001c90(local_e0,param_1,local_c0);
  FUN_18009f5fa(&local_a0,local_e0,param_1 + 0x21);
  if ((undefined ***)(param_1 + 0x278) == &local_a0) {
    *(undefined4 *)(param_1 + 0x2b8) = local_60;
    *(ulonglong *)(param_1 + 0x2c0) = CONCAT17((undefined1)uStack_51,local_58);
    *(undefined4 *)(param_1 + 0x2c7) = uStack_51;
    *(undefined1 *)(param_1 + 0x2d0) = local_48;
  }
  else {
    if (local_80 < 8) {
      local_98[0] = local_98;
    }
    FUN_180004488(param_1 + 0x280,local_98[0],local_88);
    FUN_180078422(param_1 + 0x2a0,local_78,local_70 - local_78);
    *(undefined4 *)(param_1 + 0x2b8) = local_60;
    *(ulonglong *)(param_1 + 0x2c0) = CONCAT17((undefined1)uStack_51,local_58);
    *(undefined4 *)(param_1 + 0x2c7) = uStack_51;
    *(undefined1 *)(param_1 + 0x2d0) = local_48;
    FUN_18008e9c4(param_1 + 0x2d8);
    *(undefined8 *)(param_1 + 0x2d8) = local_40;
    *(undefined8 *)(param_1 + 0x2e0) = uStack_38;
    *(undefined8 *)(param_1 + 0x2e8) = local_30;
    local_40 = 0;
    uStack_38 = 0;
    local_30 = 0;
  }
  *(undefined1 *)(param_1 + 0x2f2) = local_26;
  *(undefined2 *)(param_1 + 0x2f0) = local_28;
  local_a0 = CommonEvents::vftable;
  FUN_18008e9c4(&local_40);
  FUN_1800703dc(&local_a0);
  FUN_180001e4c(local_e0);
  FUN_180001e4c(local_c0);
  return;
}

