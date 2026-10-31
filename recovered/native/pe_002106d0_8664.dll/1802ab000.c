/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802ab000 */

BOOL __stdcall
ReadProcessMemory(HANDLE hProcess,LPCVOID lpBaseAddress,LPVOID lpBuffer,SIZE_T nSize,
                 SIZE_T *lpNumberOfBytesRead)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802ab000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ReadProcessMemory(hProcess,lpBaseAddress,lpBuffer,nSize,lpNumberOfBytesRead);
  return BVar1;
}

