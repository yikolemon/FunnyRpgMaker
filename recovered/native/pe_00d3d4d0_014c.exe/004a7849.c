/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004a7849 */

HMODULE LoadLibraryW(LPCWSTR lpLibFileName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a7849. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadLibraryW(lpLibFileName);
  return pHVar1;
}

