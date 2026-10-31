/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14012c784 */

/* Library Function - Single Match
    __acrt_lowio_unlock_fh
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_lowio_unlock_fh(uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014012c7a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_1403551e0)[(longlong)(int)param_1 >> 6] + (ulonglong)(param_1 & 0x3f) * 0x48));
  return;
}

