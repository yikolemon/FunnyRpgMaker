/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10192950 */

void FUN_10192950(void)

{
  int *unaff_FS_OFFSET;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_10196020;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_14 = 2;
  FUN_101909d8();
  local_14 = 0xffffffff;
  if (*(int *)(local_24 + 0x34) != 0) {
    FUN_100fa2cb(*(int *)(local_24 + 0x34));
  }
  if (*(int *)(local_24 + 0x20) == 0) {
    *unaff_FS_OFFSET = local_1c;
  }
  else {
    FUN_100fa2cb(*(int *)(local_24 + 0x20));
    *unaff_FS_OFFSET = local_1c;
  }
  return;
}

