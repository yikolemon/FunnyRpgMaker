/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400dd790 */

void FUN_1400dd790(int *param_1)

{
  int iVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_1401cca08);
  iVar1 = *param_1;
  while( true ) {
    if (iVar1 == 0) {
      *param_1 = -1;
                    /* WARNING: Could not recover jumptable at 0x0001400dd7be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1401cca08);
      return;
    }
    if (iVar1 != -1) break;
    SleepConditionVariableSRW
              ((PCONDITION_VARIABLE)&DAT_1401cca00,(PSRWLOCK)&DAT_1401cca08,0xffffffff,0);
    iVar1 = *param_1;
  }
  *(undefined4 *)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) =
       DAT_1401ca060;
                    /* WARNING: Could not recover jumptable at 0x0001400dd827. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1401cca08);
  return;
}

