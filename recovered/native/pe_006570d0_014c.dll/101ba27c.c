/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ba27c */

int FUN_101ba27c(void)

{
  int *unaff_FS_OFFSET;
  int local_1c;
  undefined1 *local_18;
  int local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_c = 0xffffffff;
  local_10 = &LAB_101bcfb0;
  local_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_14;
  FUN_100fb460(&DAT_10356101);
  *(undefined4 *)(local_1c + 0x110) = 0;
  *(undefined1 *)(local_1c + 0x114) = 0;
  *unaff_FS_OFFSET = local_14;
  return local_1c;
}

