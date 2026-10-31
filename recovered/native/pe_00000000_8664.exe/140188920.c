/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140188920 */

/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2019 Release */

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_140f2a998);
  uVar1 = (ulonglong)_tls_index;
  DAT_140f17b00 = DAT_140f17b00 + 1;
  *param_1 = DAT_140f17b00;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x2c) = DAT_140f17b00;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_140f2a998);
                    /* WARNING: Could not recover jumptable at 0x000140188982. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WakeAllConditionVariable((PCONDITION_VARIABLE)&DAT_140f2a990);
  return;
}

