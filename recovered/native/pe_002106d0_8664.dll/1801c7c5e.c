/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c7c5e */

void FUN_1801c7c5e(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001801c7c65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  return;
}

