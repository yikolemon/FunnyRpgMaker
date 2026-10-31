/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802ab060 */

BOOL __stdcall GetExitCodeProcess(HANDLE hProcess,LPDWORD lpExitCode)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802ab060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetExitCodeProcess(hProcess,lpExitCode);
  return BVar1;
}

