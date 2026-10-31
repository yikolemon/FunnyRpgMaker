/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401c7010 */

BOOL __stdcall ImmSetCandidateWindow(HIMC param_1,LPCANDIDATEFORM lpCandidate)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001401c7010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImmSetCandidateWindow(param_1,lpCandidate);
  return BVar1;
}

