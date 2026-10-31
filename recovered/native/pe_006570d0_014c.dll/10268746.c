/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10268746 */

void FUN_10268746(UINT param_1,char param_2)

{
  HANDLE hProcess;
  UINT uExitCode;
  
  if (param_2 != '\0') {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  FUN_102686c4(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}

