/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100af2da */

int FUN_100af2da(int param_1)

{
  int *unaff_FS_OFFSET;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000040;
  int local_70 [8];
  int local_50 [8];
  undefined4 local_30;
  int local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_70;
  local_18 = &LAB_100c4710;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_14 = 5;
  local_50[0] = param_1;
  local_28 = &stack0x00000008;
  FUN_100afbd4(local_50,local_28,in_stack_00000020);
  local_14 = 6;
  local_30 = in_stack_00000024;
  local_24 = &stack0x00000028;
  FUN_100afbd4(&local_30,local_24,in_stack_00000040);
  local_14 = 7;
  local_2c = 0;
  while (local_70[0] != local_50[0]) {
    local_2c = local_2c + 1;
    FUN_100ae432();
  }
  local_14 = 0xffffffff;
  FUN_10001f04();
  local_14 = 0xffffffff;
  FUN_10001f04();
  local_14 = 0xffffffff;
  FUN_10001f04();
  local_14 = 0xffffffff;
  FUN_10001f04();
  *unaff_FS_OFFSET = local_1c;
  return local_2c;
}

