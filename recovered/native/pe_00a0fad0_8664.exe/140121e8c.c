/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140121e8c */

PVOID __stdcall FlsGetValue(DWORD dwFlsIndex)

{
  PVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140121e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = FlsGetValue(dwFlsIndex);
  return pvVar1;
}

