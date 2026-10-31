/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14003ec70 */

void FUN_14003ec70(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x80) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014010b33c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x80) + 0x30));
  return;
}

