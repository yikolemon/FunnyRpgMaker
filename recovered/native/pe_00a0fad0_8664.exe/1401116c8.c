/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401116c8 */

void FUN_1401116c8(UINT param_1,char param_2)

{
  HANDLE hProcess;
  
  if (param_2 != '\0') {
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,param_1);
  }
  FUN_140111664(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}

