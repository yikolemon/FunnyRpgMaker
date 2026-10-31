/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1028a9ab */

LPVOID VirtualAllocEx(HANDLE hProcess,LPVOID lpAddress,SIZE_T dwSize,DWORD flAllocationType,
                     DWORD flProtect)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1028a9ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = VirtualAllocEx(hProcess,lpAddress,dwSize,flAllocationType,flProtect);
  return pvVar1;
}

