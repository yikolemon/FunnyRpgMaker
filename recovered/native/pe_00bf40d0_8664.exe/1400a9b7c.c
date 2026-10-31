/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a9b7c */

void FUN_1400a9b7c(uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001400a9b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_1401433a0)[(longlong)(int)param_1 >> 6] + (ulonglong)(param_1 & 0x3f) * 0x48));
  return;
}

