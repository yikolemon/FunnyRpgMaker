/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802ab070 */

HANDLE __stdcall OpenProcess(DWORD dwDesiredAccess,BOOL bInheritHandle,DWORD dwProcessId)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802ab070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = OpenProcess(dwDesiredAccess,bInheritHandle,dwProcessId);
  return pvVar1;
}

