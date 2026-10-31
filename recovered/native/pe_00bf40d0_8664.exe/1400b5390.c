/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400b5390 */

LPVOID __stdcall
VirtualAllocEx(HANDLE hProcess,LPVOID lpAddress,SIZE_T dwSize,DWORD flAllocationType,DWORD flProtect
              )

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001400b5390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = VirtualAllocEx(hProcess,lpAddress,dwSize,flAllocationType,flProtect);
  return pvVar1;
}

