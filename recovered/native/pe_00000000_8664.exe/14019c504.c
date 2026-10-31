/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14019c504 */

void FUN_14019c504(UINT param_1,char param_2)

{
  HANDLE hProcess;
  
  if (param_2 != '\0') {
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,param_1);
  }
  FUN_14019c4a0(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}

