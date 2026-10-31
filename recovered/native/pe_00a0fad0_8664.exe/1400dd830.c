/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400dd830 */

void FUN_1400dd830(undefined4 *param_1)

{
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_1401cca08);
  *param_1 = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1401cca08);
                    /* WARNING: Could not recover jumptable at 0x0001400dd865. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WakeAllConditionVariable(&DAT_1401cca00);
  return;
}

