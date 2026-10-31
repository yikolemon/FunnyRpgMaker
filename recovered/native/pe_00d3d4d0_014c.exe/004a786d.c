/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004a786d */

LPVOID VirtualAllocEx(HANDLE hProcess,LPVOID lpAddress,SIZE_T dwSize,DWORD flAllocationType,
                     DWORD flProtect)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a786d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = VirtualAllocEx(hProcess,lpAddress,dwSize,flAllocationType,flProtect);
  return pvVar1;
}

