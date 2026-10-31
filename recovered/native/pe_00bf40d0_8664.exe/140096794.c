/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140096794 */

/* Library Function - Single Match
    __acrt_unlock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_unlock(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001400967a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_140142eb0 + (longlong)param_1 * 0x28));
  return;
}

