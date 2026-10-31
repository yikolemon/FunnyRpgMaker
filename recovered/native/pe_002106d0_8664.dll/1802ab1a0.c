/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802ab1a0 */

HIMC __stdcall ImmGetContext(HWND param_1)

{
  HIMC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802ab1a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = ImmGetContext(param_1);
  return pHVar1;
}

