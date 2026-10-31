/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022c0d0 */

void FUN_1022c0d0(int *param_1)

{
  int iVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_1039cdf8);
  iVar1 = *param_1;
  while( true ) {
    if (iVar1 == 0) {
      *param_1 = -1;
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1039cdf8);
      return;
    }
    if (iVar1 != -1) break;
    SleepConditionVariableSRW
              ((PCONDITION_VARIABLE)&DAT_1039cdf4,(PSRWLOCK)&DAT_1039cdf8,0xffffffff,0);
    iVar1 = *param_1;
  }
  *(undefined4 *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) = DAT_10388d58;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1039cdf8);
  return;
}

