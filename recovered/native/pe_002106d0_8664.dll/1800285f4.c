/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800285f4 */

void FUN_1800285f4(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_48;
  lVar1 = _malloc_base(param_2 * 4);
  if (lVar1 == 0) {
    FUN_180018d32(local_28);
                    /* WARNING: Subroutine does not return */
    FUN_18026d5b0(local_28,&DAT_180391540);
  }
  if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_48);
}

