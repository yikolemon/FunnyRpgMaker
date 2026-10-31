/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802ab150 */

BOOL __stdcall FlushInstructionCache(HANDLE hProcess,LPCVOID lpBaseAddress,SIZE_T dwSize)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802ab150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FlushInstructionCache(hProcess,lpBaseAddress,dwSize);
  return BVar1;
}

