/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e1a88 */

void FUN_100e1a88(void)

{
  int *unaff_FS_OFFSET;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_20;
  local_14 = 0xffffffff;
  local_18 = &LAB_100ea860;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  if ((*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x18) < DAT_1039d49c) &&
     (FUN_1022c0d0(&DAT_1039d49c), DAT_1039d49c == -1)) {
    local_14 = 0;
    FUN_100c6a84(&DAT_1039d494);
    FUN_1022c3a0(&LAB_100e21f6);
    local_14 = 0xffffffff;
    FUN_1022c180(&DAT_1039d49c);
    *unaff_FS_OFFSET = local_1c;
    return;
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}

