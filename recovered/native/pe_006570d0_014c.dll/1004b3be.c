/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004b3be */

undefined4 FUN_1004b3be(void)

{
  int *unaff_FS_OFFSET;
  undefined4 local_20;
  undefined1 *local_1c;
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_20;
  local_10 = 0xffffffff;
  local_14 = &LAB_1005a7b0;
  local_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_18;
  FUN_10014148(0);
  *unaff_FS_OFFSET = local_18;
  return local_20;
}

