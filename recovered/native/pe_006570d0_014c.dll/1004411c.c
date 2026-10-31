/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004411c */

int FUN_1004411c(int param_1)

{
  int *unaff_FS_OFFSET;
  int local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_14 = 0xffffffff;
  local_18 = &LAB_1005a600;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  FUN_1000334a(param_1);
  local_14 = 0;
  local_28 = local_24 + 0x18;
  FUN_10013db4(param_1 + 0x18);
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

