/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048d49c */

void FUN_0048d49c(UINT param_1,char param_2)

{
  HANDLE hProcess;
  UINT uExitCode;
  
  if (param_2 != '\0') {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  FUN_0048d41a(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}

