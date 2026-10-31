/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802ab1b0 */

BOOL __stdcall ImmReleaseContext(HWND param_1,HIMC param_2)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802ab1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImmReleaseContext(param_1,param_2);
  return BVar1;
}

