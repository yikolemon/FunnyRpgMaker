/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1028a945 */

BOOL ReadProcessMemory(HANDLE hProcess,LPCVOID lpBaseAddress,LPVOID lpBuffer,SIZE_T nSize,
                      SIZE_T *lpNumberOfBytesRead)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1028a945. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ReadProcessMemory(hProcess,lpBaseAddress,lpBuffer,nSize,lpNumberOfBytesRead);
  return BVar1;
}

