/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cef3c */

void FUN_1800cef3c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong local_90 [7];
  longlong *local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  undefined1 local_2a;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_48 = param_1 + 0x50;
  FUN_180044980();
  local_50 = param_1;
  local_40 = FUN_180239630(0xb0);
  local_29 = 1;
  FUN_1800cf108(local_90,&local_50);
  local_2a = 1;
  FUN_1800cf19a(local_40,local_90,param_2);
  local_38 = local_40;
  local_2a = 0;
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x20))(local_58,local_58 != local_90);
  }
  local_29 = 0;
  local_38 = 0;
  lVar1 = *(longlong *)(param_1 + 0x1d0);
  *(longlong *)(param_1 + 0x1d0) = local_40;
  if (lVar1 != 0) {
    FUN_180043fc0(param_1 + 0x1d0);
  }
  if (local_38 != 0) {
    FUN_180043fc0(&local_38);
  }
  FUN_18023d6e0(local_48);
  return;
}

