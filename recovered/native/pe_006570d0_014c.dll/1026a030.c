/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026a030 */

/* Library Function - Single Match
    ___acrt_lock
   
   Library: Visual Studio 2019 Release */

void ___acrt_lock(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_103a4e98 + param_1 * 0x18));
  return;
}

