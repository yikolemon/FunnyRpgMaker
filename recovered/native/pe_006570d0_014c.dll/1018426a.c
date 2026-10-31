/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018426a */

undefined4 FUN_1018426a(void)

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
  local_14 = &LAB_10186140;
  local_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_18;
  local_28 = 0;
  FUN_10184570(&local_28,&local_1d);
  *unaff_FS_OFFSET = local_18;
  return local_24;
}

