/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023d500 */

void FUN_18023d500(int *param_1)

{
  int iVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_180418070);
  iVar1 = *param_1;
  while( true ) {
    if (iVar1 == 0) {
      *param_1 = -1;
                    /* WARNING: Could not recover jumptable at 0x00018023d52e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180418070);
      return;
    }
    if (iVar1 != -1) break;
    SleepConditionVariableSRW
              ((PCONDITION_VARIABLE)&DAT_180418068,(PSRWLOCK)&DAT_180418070,0xffffffff,0);
    iVar1 = *param_1;
  }
  *(undefined4 *)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) =
       DAT_180402690;
                    /* WARNING: Could not recover jumptable at 0x00018023d597. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180418070);
  return;
}

