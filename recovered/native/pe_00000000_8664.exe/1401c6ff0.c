/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401c6ff0 */

HIMC __stdcall ImmGetContext(HWND param_1)

{
  HIMC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001401c6ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = ImmGetContext(param_1);
  return pHVar1;
}

