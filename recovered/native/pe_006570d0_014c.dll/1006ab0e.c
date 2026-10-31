/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006ab0e */

undefined4 FUN_1006ab0e(undefined4 param_1)

{
  int *unaff_FS_OFFSET;
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined4 local_20;
  undefined1 *local_18;
  int local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = local_2c;
  local_c = 0xffffffff;
  local_10 = &LAB_100c2430;
  local_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_14;
  local_28 = param_1;
  FUN_1006d854();
  *unaff_FS_OFFSET = local_14;
  return local_20;
}

