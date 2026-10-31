/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026a047 */

/* Library Function - Single Match
    ___acrt_unlock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___acrt_unlock(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_103a4e98 + param_1 * 0x18));
  return;
}

