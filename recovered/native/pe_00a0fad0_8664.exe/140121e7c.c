/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140121e7c */

DWORD __stdcall FlsAlloc(PFLS_CALLBACK_FUNCTION lpCallback)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140121e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = FlsAlloc(lpCallback);
  return DVar1;
}

