/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802ab120 */

LPVOID __stdcall
VirtualAllocEx(HANDLE hProcess,LPVOID lpAddress,SIZE_T dwSize,DWORD flAllocationType,DWORD flProtect
              )

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802ab120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = VirtualAllocEx(hProcess,lpAddress,dwSize,flAllocationType,flProtect);
  return pvVar1;
}

