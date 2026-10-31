/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801377c5 */

void FUN_1801377c5(void)

{
  longlong lVar1;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  lVar1 = DAT_180419160;
  local_8 = DAT_180402640 ^ (ulonglong)auStack_38;
  *(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1;
  if (*(char *)(*(longlong *)(lVar1 + 0x1608) + 0x10e) == '\0') {
    local_10 = 0;
    FUN_180111514(&local_10,DAT_1802bb8e0);
  }
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_38);
}

