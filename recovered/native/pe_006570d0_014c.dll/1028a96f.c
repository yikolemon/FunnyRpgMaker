/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1028a96f */

BOOL TerminateProcess(HANDLE hProcess,UINT uExitCode)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1028a96f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TerminateProcess(hProcess,uExitCode);
  return BVar1;
}

