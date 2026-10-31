/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023e520 */

BOOL __stdcall SwitchToThread(void)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00018023e520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SwitchToThread();
  return BVar1;
}

