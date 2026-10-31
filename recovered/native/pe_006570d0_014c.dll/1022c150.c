/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022c150 */

void FUN_1022c150(undefined4 *param_1)

{
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_1039cdf8);
  *param_1 = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1039cdf8);
  WakeAllConditionVariable((PCONDITION_VARIABLE)&DAT_1039cdf4);
  return;
}

