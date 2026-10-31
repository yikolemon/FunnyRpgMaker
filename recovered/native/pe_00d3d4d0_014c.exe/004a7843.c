/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004a7843 */

BOOL ReadProcessMemory(HANDLE hProcess,LPCVOID lpBaseAddress,LPVOID lpBuffer,SIZE_T nSize,
                      SIZE_T *lpNumberOfBytesRead)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a7843. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ReadProcessMemory(hProcess,lpBaseAddress,lpBuffer,nSize,lpNumberOfBytesRead);
  return BVar1;
}

