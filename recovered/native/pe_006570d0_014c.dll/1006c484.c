/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006c484 */

void FUN_1006c484(int param_1)

{
  int *unaff_FS_OFFSET;
  undefined1 *local_14;
  int local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_14;
  local_c = &LAB_100c25a0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  local_8 = 0xffffffff;
  FUN_10228d00(*(undefined4 *)(param_1 + 0x38));
  FUN_1006c378();
  *unaff_FS_OFFSET = local_10;
  return;
}

