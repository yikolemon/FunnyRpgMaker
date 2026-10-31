/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802ab010 */

HANDLE __stdcall GetCurrentProcess(void)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802ab010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetCurrentProcess();
  return pvVar1;
}

