/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18027f8b4 */

/* Library Function - Single Match
    __acrt_unlock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_unlock(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018027f8c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_180420f10 + (longlong)param_1 * 0x28));
  return;
}

