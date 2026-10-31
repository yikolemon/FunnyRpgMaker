/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016e486 */

void FUN_18016e486(int param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x208);
  if (lVar1 == 0) {
    FUN_180111069(local_18);
    if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_38)) {
      return;
    }
  }
  else {
    if (param_1 < 0) {
      param_1 = *(int *)(lVar1 + 0xc);
    }
    if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_38)) {
      FUN_18016e419(lVar1,*(float *)(*(longlong *)(lVar1 + 0x68) + 0x1c + (longlong)param_1 * 0x1c)
                          - *(float *)(*(longlong *)(lVar1 + 0x68) + (longlong)param_1 * 0x1c));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_38);
}

