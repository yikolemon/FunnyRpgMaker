/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1028a969 */

HANDLE OpenProcess(DWORD dwDesiredAccess,BOOL bInheritHandle,DWORD dwProcessId)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1028a969. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = OpenProcess(dwDesiredAccess,bInheritHandle,dwProcessId);
  return pvVar1;
}

