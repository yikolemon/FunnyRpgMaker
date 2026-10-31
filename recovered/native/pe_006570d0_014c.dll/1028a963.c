/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1028a963 */

BOOL GetExitCodeProcess(HANDLE hProcess,LPDWORD lpExitCode)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1028a963. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetExitCodeProcess(hProcess,lpExitCode);
  return BVar1;
}

