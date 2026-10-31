/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048febc */

/* Library Function - Single Match
    ___acrt_lock
   
   Library: Visual Studio 2019 Release */

void __cdecl ___acrt_lock(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_00521938 + param_1 * 0x18));
  return;
}

