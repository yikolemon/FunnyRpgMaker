/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140188840 */

void FUN_140188840(int *param_1)

{
  int iVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_140f2a998);
  iVar1 = *param_1;
  while( true ) {
    if (iVar1 == 0) {
      *param_1 = -1;
                    /* WARNING: Could not recover jumptable at 0x00014018886e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_140f2a998);
      return;
    }
    if (iVar1 != -1) break;
    SleepConditionVariableSRW
              ((PCONDITION_VARIABLE)&DAT_140f2a990,(PSRWLOCK)&DAT_140f2a998,0xffffffff,0);
    iVar1 = *param_1;
  }
  *(undefined4 *)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) =
       DAT_140f17b00;
                    /* WARNING: Could not recover jumptable at 0x0001401888d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_140f2a998);
  return;
}

