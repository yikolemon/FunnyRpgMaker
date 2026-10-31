/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b61e0 */

undefined4 FUN_101b61e0(void)

{
  int *unaff_FS_OFFSET;
  undefined4 local_1c;
  undefined1 *local_18;
  int local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_c = 0xffffffff;
  local_10 = &LAB_101bcf10;
  local_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_14;
  FUN_1014b032();
  *unaff_FS_OFFSET = local_14;
  return local_1c;
}

