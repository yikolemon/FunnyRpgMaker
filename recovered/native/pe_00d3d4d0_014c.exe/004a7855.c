/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004a7855 */

BOOL WriteProcessMemory(HANDLE hProcess,LPVOID lpBaseAddress,LPCVOID lpBuffer,SIZE_T nSize,
                       SIZE_T *lpNumberOfBytesWritten)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a7855. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = WriteProcessMemory(hProcess,lpBaseAddress,lpBuffer,nSize,lpNumberOfBytesWritten);
  return BVar1;
}

