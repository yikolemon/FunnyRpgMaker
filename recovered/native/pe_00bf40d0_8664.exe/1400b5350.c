/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400b5350 */

BOOL __stdcall
WriteProcessMemory(HANDLE hProcess,LPVOID lpBaseAddress,LPCVOID lpBuffer,SIZE_T nSize,
                  SIZE_T *lpNumberOfBytesWritten)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001400b5350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = WriteProcessMemory(hProcess,lpBaseAddress,lpBuffer,nSize,lpNumberOfBytesWritten);
  return BVar1;
}

