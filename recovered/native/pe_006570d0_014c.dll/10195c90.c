/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10195c90 */

void FUN_10195c90(void)

{
  int *unaff_FS_OFFSET;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_10196050;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_14 = 0;
  FUN_1018e3c0();
  local_14 = 0xffffffff;
  if (*(int *)(local_24 + 0x44) == 0) {
    *unaff_FS_OFFSET = local_1c;
  }
  else {
    FUN_100fa2cb(*(int *)(local_24 + 0x44));
    *unaff_FS_OFFSET = local_1c;
  }
  return;
}

