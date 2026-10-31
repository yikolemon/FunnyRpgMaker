/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400b5360 */

BOOL __stdcall
VirtualProtectEx(HANDLE hProcess,LPVOID lpAddress,SIZE_T dwSize,DWORD flNewProtect,
                PDWORD lpflOldProtect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001400b5360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = VirtualProtectEx(hProcess,lpAddress,dwSize,flNewProtect,lpflOldProtect);
  return BVar1;
}

