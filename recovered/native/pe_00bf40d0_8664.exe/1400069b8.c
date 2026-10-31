/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400069b8 */

void FUN_1400069b8(longlong param_1)

{
  CloseHandle(*(HANDLE *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001400069db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CloseHandle(*(HANDLE *)(param_1 + 8));
  return;
}

