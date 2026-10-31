/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a1de0 */

DWORD __stdcall FlsAlloc(PFLS_CALLBACK_FUNCTION lpCallback)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001400a1de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = FlsAlloc(lpCallback);
  return DVar1;
}

