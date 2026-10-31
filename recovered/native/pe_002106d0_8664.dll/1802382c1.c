/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802382c1 */

ulonglong FUN_1802382c1(undefined8 param_1)

{
  ulonglong uVar1;
  undefined1 auStack_38 [38];
  char local_12;
  char local_11;
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_38;
  uVar1 = FUN_1801ce63e(param_1,0);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_1801ce682(param_1,&local_12,2);
    if ((int)uVar1 == 0) {
      uVar1 = (ulonglong)((uint)(local_11 != -99 || local_12 != '\x1f') * 3);
    }
  }
  if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_38)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_38);
}

