/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140096778 */

/* Library Function - Multiple Matches With Different Base Names
    __acrt_lock
    __acrt_unlock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_lock(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014009678a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_140142eb0 + (longlong)param_1 * 0x28));
  return;
}

