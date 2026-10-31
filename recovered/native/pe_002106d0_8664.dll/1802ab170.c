/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802ab170 */

BOOL __stdcall SetThreadContext(HANDLE hThread,CONTEXT *lpContext)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802ab170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetThreadContext(hThread,lpContext);
  return BVar1;
}

