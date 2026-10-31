/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009ed0e */

int FUN_1009ed0e(void)

{
  int *unaff_FS_OFFSET;
  undefined1 local_44 [24];
  int local_2c;
  int local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_44;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3eb0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  FUN_100012b0(L"");
  local_2c = local_24 + 0x18;
  *(undefined4 *)(local_24 + 0x18) = 0;
  *(undefined4 *)(local_24 + 0x1c) = 0;
  *(undefined4 *)(local_24 + 0x20) = 0;
  local_28 = local_24 + 0x24;
  *(undefined4 *)(local_24 + 0x24) = 0;
  *(undefined4 *)(local_24 + 0x28) = 0;
  *(undefined4 *)(local_24 + 0x2c) = 0;
  local_14 = 2;
  *(undefined4 *)(local_24 + 0x30) = 0;
  FUN_1008a8f0(local_44);
  local_14 = 3;
  FUN_100128b2(local_44);
  local_14 = 0xffffffff;
  FUN_10001134();
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

