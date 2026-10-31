/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004a785b */

BOOL VirtualProtectEx(HANDLE hProcess,LPVOID lpAddress,SIZE_T dwSize,DWORD flNewProtect,
                     PDWORD lpflOldProtect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a785b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = VirtualProtectEx(hProcess,lpAddress,dwSize,flNewProtect,lpflOldProtect);
  return BVar1;
}

