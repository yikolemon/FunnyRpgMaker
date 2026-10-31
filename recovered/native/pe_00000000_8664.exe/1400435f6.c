/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400435f6 */

void FUN_1400435f6(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140043604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x10) + 0x10))(param_1 + 0x10,0);
  return;
}

