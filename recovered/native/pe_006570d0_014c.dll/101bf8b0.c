/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101bf8b0 */

void FUN_101bf8b0(int param_1)

{
  undefined1 **ppuVar1;
  int *unaff_FS_OFFSET;
  undefined1 *local_18;
  int local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_18;
  local_10 = &LAB_101bfd20;
  local_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_14;
  if (param_1 == 0) {
    *unaff_FS_OFFSET = local_14;
  }
  else {
    local_c = 0xffffffff;
    ppuVar1 = &local_18;
    if (*(int *)(param_1 + 0x4c) != 0) {
      FUN_100fa2cb(*(int *)(param_1 + 0x4c));
      ppuVar1 = (undefined1 **)local_18;
    }
    local_18 = (undefined1 *)ppuVar1;
    FUN_100fa2cb(param_1);
    *unaff_FS_OFFSET = local_14;
  }
  return;
}

