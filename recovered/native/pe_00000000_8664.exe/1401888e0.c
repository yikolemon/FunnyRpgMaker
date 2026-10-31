/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401888e0 */

void FUN_1401888e0(undefined4 *param_1)

{
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_140f2a998);
  *param_1 = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_140f2a998);
                    /* WARNING: Could not recover jumptable at 0x000140188915. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WakeAllConditionVariable((PCONDITION_VARIABLE)&DAT_140f2a990);
  return;
}

