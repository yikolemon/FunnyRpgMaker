/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18027f898 */

/* Library Function - Multiple Matches With Different Base Names
    __acrt_lock
    __acrt_unlock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_lock(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018027f8aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_180420f10 + (longlong)param_1 * 0x28));
  return;
}

