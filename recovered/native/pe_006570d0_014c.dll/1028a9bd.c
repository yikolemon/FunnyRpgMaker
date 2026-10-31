/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1028a9bd */

BOOL FlushInstructionCache(HANDLE hProcess,LPCVOID lpBaseAddress,SIZE_T dwSize)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1028a9bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FlushInstructionCache(hProcess,lpBaseAddress,dwSize);
  return BVar1;
}

