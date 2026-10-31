/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10077a84 */

void __thiscall FUN_10077a84(char *param_1,int *param_2)

{
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
  local_18 = &LAB_100c2c60;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (*param_1 == '\0') {
    FUN_10001f66("FileWalker not initialized");
    local_14 = 0;
    FUN_1007788e(local_38);
                    /* WARNING: Subroutine does not return */
    FUN_102586e0(local_80,&DAT_10367d38);
  }
  if ((uint)(*param_2 + *(int *)(param_1 + 0x14)) <= *(uint *)(param_1 + 0x18)) {
    *(int *)(param_1 + 0x14) = *param_2 + *(int *)(param_1 + 0x14);
    *unaff_FS_OFFSET = local_1c;
    return;
  }
  local_20 = local_80;
  FUN_10001f66("Skip: Attempted to skip past end of file");
  local_14 = 1;
  FUN_1007788e(local_38);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(local_5c,&DAT_10367d38);
}

