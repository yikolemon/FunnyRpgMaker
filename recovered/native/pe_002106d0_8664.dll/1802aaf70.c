/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802aaf70 */

HMODULE __stdcall GetModuleHandleW(LPCWSTR lpModuleName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802aaf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetModuleHandleW(lpModuleName);
  return pHVar1;
}

