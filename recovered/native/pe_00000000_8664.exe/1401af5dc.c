/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401af5dc */

PVOID __stdcall FlsGetValue(DWORD dwFlsIndex)

{
  PVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001401af5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = FlsGetValue(dwFlsIndex);
  return pvVar1;
}

