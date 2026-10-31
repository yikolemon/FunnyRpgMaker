/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f779c */

void FUN_1800f779c(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 unaff_RBX;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  char local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_38 = param_1 + 0x20;
  local_30 = 0;
  local_28 = param_2;
  FUN_180044980();
  local_30 = '\x01';
  local_48 = 0;
  uStack_40 = 0;
  FUN_180247290(&local_48,local_28);
  FUN_1800f788e(param_1,&local_48,&local_38,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_3) & 0xffffffff);
  if (local_30 == '\x01') {
    FUN_18023d6e0(local_38);
  }
  FUN_180247230(local_28);
  return;
}

