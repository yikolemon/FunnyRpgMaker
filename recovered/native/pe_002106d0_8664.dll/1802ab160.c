/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802ab160 */

BOOL __stdcall GetThreadContext(HANDLE hThread,LPCONTEXT lpContext)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802ab160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetThreadContext(hThread,lpContext);
  return BVar1;
}

