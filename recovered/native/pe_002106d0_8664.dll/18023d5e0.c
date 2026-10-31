/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023d5e0 */

/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2019 Release */

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_180418070);
  uVar1 = (ulonglong)_tls_index;
  DAT_180402690 = DAT_180402690 + 1;
  *param_1 = DAT_180402690;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x2c) = DAT_180402690;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180418070);
                    /* WARNING: Could not recover jumptable at 0x00018023d642. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WakeAllConditionVariable((PCONDITION_VARIABLE)&DAT_180418068);
  return;
}

