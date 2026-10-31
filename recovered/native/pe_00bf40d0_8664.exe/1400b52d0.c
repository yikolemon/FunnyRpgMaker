/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400b52d0 */

BOOL __stdcall TerminateProcess(HANDLE hProcess,UINT uExitCode)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001400b52d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TerminateProcess(hProcess,uExitCode);
  return BVar1;
}

