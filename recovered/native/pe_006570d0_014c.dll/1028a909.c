/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1028a909 */

HMODULE LoadLibraryW(LPCWSTR lpLibFileName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1028a909. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadLibraryW(lpLibFileName);
  return pHVar1;
}

