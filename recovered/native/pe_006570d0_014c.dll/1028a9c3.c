/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1028a9c3 */

BOOL GetThreadContext(HANDLE hThread,LPCONTEXT lpContext)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1028a9c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetThreadContext(hThread,lpContext);
  return BVar1;
}

