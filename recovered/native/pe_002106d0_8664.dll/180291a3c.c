/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180291a3c */

PVOID __stdcall FlsGetValue(DWORD dwFlsIndex)

{
  PVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000180291a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = FlsGetValue(dwFlsIndex);
  return pvVar1;
}

