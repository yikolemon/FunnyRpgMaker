/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027ae7d */

/* Library Function - Single Match
    ___acrt_lowio_lock_fh
   
   Library: Visual Studio 2019 Release */

void ___acrt_lowio_lock_fh(uint param_1)

{
  EnterCriticalSection
            ((LPCRITICAL_SECTION)((param_1 & 0x3f) * 0x38 + (&DAT_103a5230)[(int)param_1 >> 6]));
  return;
}

