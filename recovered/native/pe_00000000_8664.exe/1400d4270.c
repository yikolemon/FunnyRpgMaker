/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d4270 */

void FUN_1400d4270(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001400d4277. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  return;
}

