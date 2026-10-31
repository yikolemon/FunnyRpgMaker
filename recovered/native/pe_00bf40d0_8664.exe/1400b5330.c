/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400b5330 */

BOOL __stdcall
ReadProcessMemory(HANDLE hProcess,LPCVOID lpBaseAddress,LPVOID lpBuffer,SIZE_T nSize,
                 SIZE_T *lpNumberOfBytesRead)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001400b5330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ReadProcessMemory(hProcess,lpBaseAddress,lpBuffer,nSize,lpNumberOfBytesRead);
  return BVar1;
}

