/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1028a993 */

BOOL WriteProcessMemory(HANDLE hProcess,LPVOID lpBaseAddress,LPCVOID lpBuffer,SIZE_T nSize,
                       SIZE_T *lpNumberOfBytesWritten)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1028a993. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = WriteProcessMemory(hProcess,lpBaseAddress,lpBuffer,nSize,lpNumberOfBytesWritten);
  return BVar1;
}

