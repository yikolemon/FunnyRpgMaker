/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140072f62 */

void FUN_140072f62(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140072f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x10) + 0x10))(param_1 + 0x10,0);
  return;
}

