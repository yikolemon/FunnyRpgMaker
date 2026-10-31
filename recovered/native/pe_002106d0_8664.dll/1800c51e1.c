/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c51e1 */

longlong * FUN_1800c51e1(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_48;
  FUN_1800c526e(&local_28);
  lVar1 = *param_2;
  lVar2 = local_28;
  if ((0 < lVar1) && (lVar2 = 0x7fffffffffffffff, local_28 < lVar1 * -1000000 + 0x7fffffffffffffff))
  {
    lVar2 = lVar1 * 1000000 + local_28;
  }
  *param_1 = lVar2;
  if (DAT_180402640 != (local_20 ^ (ulonglong)auStack_48)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_20 ^ (ulonglong)auStack_48);
  }
  return param_1;
}

