/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18027dcac */

void FUN_18027dcac(UINT param_1,char param_2)

{
  HANDLE hProcess;
  
  if (param_2 != '\0') {
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,param_1);
  }
  FUN_18027dc48(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}

