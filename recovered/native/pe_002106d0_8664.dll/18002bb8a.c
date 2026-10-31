/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18002bb8a */

void FUN_18002bb8a(longlong param_1)

{
  undefined1 auStack_58 [47];
  undefined1 local_29;
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_58;
  if (0 < *(int *)(param_1 + 0x10)) {
    local_29 = 1;
    FUN_180025c48(local_28,"cannot switch from automatic to manual argument indexing");
                    /* WARNING: Subroutine does not return */
    FUN_18026d5b0(local_28,&DAT_180391580);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (DAT_180402640 != (local_10 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_10 ^ (ulonglong)auStack_58);
  }
  return;
}

