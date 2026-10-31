/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023d5a0 */

void FUN_18023d5a0(undefined4 *param_1)

{
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_180418070);
  *param_1 = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180418070);
                    /* WARNING: Could not recover jumptable at 0x00018023d5d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WakeAllConditionVariable((PCONDITION_VARIABLE)&DAT_180418068);
  return;
}

