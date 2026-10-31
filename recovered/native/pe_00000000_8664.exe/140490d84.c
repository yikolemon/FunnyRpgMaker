/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140490d84 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Multiple Matches With Different Base Names
    __acrt_lock
    __acrt_unlock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void FID_conflict___acrt_lock(int param_1)

{
  (*_DAT_14059e0c8)(&DAT_1406323e0 + (longlong)param_1 * 0x28);
  return;
}

