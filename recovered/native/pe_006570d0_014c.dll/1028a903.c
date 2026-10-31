/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1028a903 */

HMODULE GetModuleHandleW(LPCWSTR lpModuleName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1028a903. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetModuleHandleW(lpModuleName);
  return pHVar1;
}

