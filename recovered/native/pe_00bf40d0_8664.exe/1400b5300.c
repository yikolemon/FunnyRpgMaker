/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400b5300 */

BOOL __stdcall GetExitCodeProcess(HANDLE hProcess,LPDWORD lpExitCode)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001400b5300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetExitCodeProcess(hProcess,lpExitCode);
  return BVar1;
}

