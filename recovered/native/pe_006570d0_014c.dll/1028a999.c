/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1028a999 */

BOOL VirtualProtectEx(HANDLE hProcess,LPVOID lpAddress,SIZE_T dwSize,DWORD flNewProtect,
                     PDWORD lpflOldProtect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1028a999. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = VirtualProtectEx(hProcess,lpAddress,dwSize,flNewProtect,lpflOldProtect);
  return BVar1;
}

