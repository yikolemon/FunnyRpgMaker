/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009fe10 */

int FUN_1009fe10(void)

{
  int *unaff_FS_OFFSET;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 *local_18;
  int local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = local_24;
  local_c = 0xffffffff;
  local_10 = &LAB_100c3f50;
  local_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_14;
  FUN_100012b0(L"");
  *(undefined4 *)(local_1c + 0x18) = 0;
  *(undefined4 *)(local_1c + 0x1c) = 0;
  *(undefined4 *)(local_1c + 0x20) = 0;
  *(undefined4 *)(local_1c + 0x24) = 0;
  *(undefined4 *)(local_1c + 0x28) = 0;
  *(undefined4 *)(local_1c + 0x2c) = 0;
  *(undefined4 *)(local_1c + 0x30) = 0;
  *unaff_FS_OFFSET = local_14;
  return local_1c;
}

