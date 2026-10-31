/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a8e70 */

void FUN_100a8e70(void)

{
  int *unaff_FS_OFFSET;
  undefined4 *local_1c;
  int local_18;
  undefined1 *local_14;
  int local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_1c;
  local_c = &LAB_100c43a0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  local_8 = 0xffffffff;
  FUN_100a8db8();
  local_1c = (undefined4 *)(local_18 + 0x1a8);
  *local_1c = CommonEvents::vftable;
  local_8 = 0xffffffff;
  FUN_1008d8fe();
  FUN_10070120();
  FUN_100a8e12();
  FUN_1006f9a8();
  FUN_10001f04();
  *unaff_FS_OFFSET = local_10;
  return;
}

