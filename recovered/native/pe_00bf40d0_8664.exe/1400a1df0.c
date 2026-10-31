/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a1df0 */

PVOID __stdcall FlsGetValue(DWORD dwFlsIndex)

{
  PVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001400a1df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = FlsGetValue(dwFlsIndex);
  return pvVar1;
}

