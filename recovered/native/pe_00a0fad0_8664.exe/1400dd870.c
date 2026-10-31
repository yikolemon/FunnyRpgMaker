/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400dd870 */

/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2019 Release */

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_1401cca08);
  uVar1 = (ulonglong)_tls_index;
  DAT_1401ca060 = DAT_1401ca060 + 1;
  *param_1 = DAT_1401ca060;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 4) = DAT_1401ca060;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1401cca08);
                    /* WARNING: Could not recover jumptable at 0x0001400dd8d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WakeAllConditionVariable(&DAT_1401cca00);
  return;
}

