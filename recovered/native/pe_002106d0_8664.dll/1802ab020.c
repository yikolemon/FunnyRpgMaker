/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802ab020 */

HANDLE __stdcall GetCurrentThread(void)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802ab020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetCurrentThread();
  return pvVar1;
}

