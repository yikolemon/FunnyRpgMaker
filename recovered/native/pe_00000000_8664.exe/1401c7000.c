/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401c7000 */

BOOL __stdcall ImmReleaseContext(HWND param_1,HIMC param_2)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001401c7000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImmReleaseContext(param_1,param_2);
  return BVar1;
}

