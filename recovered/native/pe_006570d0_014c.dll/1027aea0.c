/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027aea0 */

/* Library Function - Single Match
    ___acrt_lowio_unlock_fh
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___acrt_lowio_unlock_fh(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)((param_1 & 0x3f) * 0x38 + (&DAT_103a5230)[(int)param_1 >> 6]));
  return;
}

