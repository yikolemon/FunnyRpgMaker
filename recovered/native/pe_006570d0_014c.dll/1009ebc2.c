/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009ebc2 */

int FUN_1009ebc2(void)

{
  int *unaff_FS_OFFSET;
  undefined1 local_48 [24];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_48;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3ea0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  FUN_100012b0(L"");
  local_14 = 0;
  *(undefined1 *)(local_24 + 0x18) = 0;
  local_30 = local_24 + 0x1c;
  FUN_100012b0(L"");
  local_2c = local_24 + 0x34;
  *(undefined4 *)(local_24 + 0x34) = 0;
  *(undefined4 *)(local_24 + 0x38) = 0;
  *(undefined4 *)(local_24 + 0x3c) = 0;
  local_28 = local_24 + 0x40;
  *(undefined4 *)(local_24 + 0x40) = 0;
  *(undefined4 *)(local_24 + 0x44) = 0;
  *(undefined4 *)(local_24 + 0x48) = 0;
  local_14 = 3;
  *(undefined4 *)(local_24 + 0x4c) = 0;
  *(undefined4 *)(local_24 + 0x50) = 0;
  FUN_1008a8f0(local_48);
  local_14 = 4;
  FUN_100128b2(local_48);
  local_14 = 0xffffffff;
  FUN_10001134();
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

