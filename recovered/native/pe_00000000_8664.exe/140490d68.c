/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140490d68 */

/* Library Function - Multiple Matches With Different Base Names
    __acrt_lock
    __acrt_unlock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void FID_conflict___acrt_lock(int param_1)

{
  (*(code *)s_GetEnvironmentVariableW_14059dde4._12_8_)(&DAT_1406323e0 + (longlong)param_1 * 0x28);
  return;
}

