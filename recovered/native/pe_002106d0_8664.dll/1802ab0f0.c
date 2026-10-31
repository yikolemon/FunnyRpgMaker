/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802ab0f0 */

BOOL __stdcall
VirtualProtectEx(HANDLE hProcess,LPVOID lpAddress,SIZE_T dwSize,DWORD flNewProtect,
                PDWORD lpflOldProtect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802ab0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = VirtualProtectEx(hProcess,lpAddress,dwSize,flNewProtect,lpflOldProtect);
  return BVar1;
}

