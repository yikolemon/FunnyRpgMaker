/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802ab080 */

BOOL __stdcall TerminateProcess(HANDLE hProcess,UINT uExitCode)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802ab080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TerminateProcess(hProcess,uExitCode);
  return BVar1;
}

