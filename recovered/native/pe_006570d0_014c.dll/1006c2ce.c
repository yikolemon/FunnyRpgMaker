/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006c2ce */

void FUN_1006c2ce(int param_1)

{
  int *unaff_FS_OFFSET;
  undefined1 local_40 [24];
  int local_28;
  undefined4 local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_40;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2580;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  FUN_1006c3e2(param_1);
  local_28 = param_1 + 0x2c;
  local_24 = FUN_10271d80(local_28);
  FUN_10002056(&local_28,0);
  local_14 = 0;
  FUN_1006c422();
  FUN_1000404c(local_40);
  local_14 = 0xffffffff;
  FUN_10001f04();
  *unaff_FS_OFFSET = local_1c;
  return;
}

