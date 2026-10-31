/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b92ac */

/* Library Function - Single Match
    __acrt_lowio_lock_fh
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_lowio_lock_fh(uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001401b92cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_140f32db0)[(longlong)(int)param_1 >> 6] + (ulonglong)(param_1 & 0x3f) * 0x48));
  return;
}

