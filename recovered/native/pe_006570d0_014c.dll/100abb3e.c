/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100abb3e */

int FUN_100abb3e(int param_1)

{
  int *unaff_FS_OFFSET;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_2c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c4530;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  FUN_1000334a(param_1);
  local_14 = 0;
  local_28 = local_24 + 0x18;
  *(undefined4 *)(local_24 + 0x18) = 0;
  *(undefined4 *)(local_24 + 0x1c) = 0;
  *(undefined4 *)(local_24 + 0x20) = 0;
  FUN_100abcd4((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 4) * -0x55555555,
               param_1 + 0x18,param_1 + 0x1c);
  local_14 = 1;
  local_2c = local_24 + 0x24;
  FUN_100abc5e(param_1 + 0x24);
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

