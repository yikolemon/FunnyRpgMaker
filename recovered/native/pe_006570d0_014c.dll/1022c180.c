/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022c180 */

void FUN_1022c180(int *param_1)

{
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_1039cdf8);
  DAT_10388d58 = DAT_10388d58 + 1;
  *param_1 = DAT_10388d58;
  *(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) = DAT_10388d58;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1039cdf8);
  WakeAllConditionVariable((PCONDITION_VARIABLE)&DAT_1039cdf4);
  return;
}

