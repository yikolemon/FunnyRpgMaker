/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802ab0e0 */

BOOL __stdcall
WriteProcessMemory(HANDLE hProcess,LPVOID lpBaseAddress,LPCVOID lpBuffer,SIZE_T nSize,
                  SIZE_T *lpNumberOfBytesWritten)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802ab0e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = WriteProcessMemory(hProcess,lpBaseAddress,lpBuffer,nSize,lpNumberOfBytesWritten);
  return BVar1;
}

