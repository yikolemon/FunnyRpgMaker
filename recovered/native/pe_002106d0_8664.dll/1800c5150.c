/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c5150 */

void FUN_1800c5150(longlong *param_1)

{
  DWORD dwMilliseconds;
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_58;
  FUN_1800c526e(&local_28);
  lVar1 = *param_1;
  if (local_28 < lVar1) {
    do {
      local_30 = lVar1 - local_28;
      dwMilliseconds = FUN_1800c52eb(&local_30);
      Sleep(dwMilliseconds);
      FUN_1800c526e(&local_28);
      lVar1 = *param_1;
    } while (local_28 < lVar1);
  }
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_58);
}

