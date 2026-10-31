/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c955c */

undefined4 FUN_101c955c(void)

{
  int *unaff_FS_OFFSET;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_1d;
  undefined1 *local_1c;
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_28;
  local_10 = 0xffffffff;
  local_14 = &LAB_101ca090;
  local_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_18;
  local_28 = 0;
  FUN_101c97e6(&local_28,&local_1d);
  *unaff_FS_OFFSET = local_18;
  return local_24;
}

