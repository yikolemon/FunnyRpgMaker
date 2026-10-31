/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048fed3 */

/* Library Function - Single Match
    ___acrt_unlock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___acrt_unlock(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_00521938 + param_1 * 0x18));
  return;
}

