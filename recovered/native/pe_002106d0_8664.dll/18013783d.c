/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18013783d */

void FUN_18013783d(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  lVar1 = DAT_180419160;
  local_10 = DAT_180402640 ^ (ulonglong)auStack_48;
  *(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1;
  if (*(char *)(*(longlong *)(lVar1 + 0x1608) + 0x10e) == '\0') {
    local_20 = *(undefined8 *)(*(longlong *)(lVar1 + 0x1608) + 0x158);
    local_18 = CONCAT44((float)((ulonglong)*param_1 >> 0x20) + (float)((ulonglong)local_20 >> 0x20),
                        (float)*param_1 + (float)local_20);
    FUN_180111514(local_20,DAT_1802bb8e0);
    FUN_1801116b6(&local_20,0,0,0);
  }
  if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_48);
}

