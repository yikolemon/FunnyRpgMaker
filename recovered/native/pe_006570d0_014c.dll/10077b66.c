/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10077b66 */

undefined4 __fastcall FUN_10077b66(char *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  undefined1 local_80 [36];
  undefined1 local_5c [36];
  undefined1 local_38 [24];
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_80;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2c70;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (*param_1 == '\0') {
    FUN_10001f66("FileWalker not initialized");
    local_14 = 0;
    FUN_1007788e(local_38);
                    /* WARNING: Subroutine does not return */
    FUN_102586e0(local_80,&DAT_10367d38);
  }
  uVar1 = *(int *)(param_1 + 0x14) + 4;
  if (uVar1 <= *(uint *)(param_1 + 0x18)) {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x14));
    *(uint *)(param_1 + 0x14) = uVar1;
    *unaff_FS_OFFSET = local_1c;
    return uVar2;
  }
  local_20 = local_80;
  FUN_10001f66("read: End of file reached");
  local_14 = 1;
  FUN_1007788e(local_38);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(local_5c,&DAT_10367d38);
}

