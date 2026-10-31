/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019db9a */

void FUN_1019db9a(void)

{
  undefined1 **ppuVar1;
  int *unaff_FS_OFFSET;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_20;
  local_14 = 0xffffffff;
  local_18 = &LAB_101bcd40;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  ppuVar1 = &local_20;
  if (*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x18) < DAT_103a49e0) {
    FUN_1022c0d0(&DAT_103a49e0);
    ppuVar1 = (undefined1 **)local_20;
    if (DAT_103a49e0 == -1) {
      local_14 = 0;
      FUN_101b882a();
      FUN_1022c3a0(&LAB_101b8e0e);
      local_14 = 0xffffffff;
      FUN_1022c180(&DAT_103a49e0);
      ppuVar1 = (undefined1 **)local_20;
    }
  }
  local_20 = (undefined1 *)ppuVar1;
  FUN_101b8e18("Example: Console",&DAT_103a33da);
  *unaff_FS_OFFSET = local_1c;
  return;
}

