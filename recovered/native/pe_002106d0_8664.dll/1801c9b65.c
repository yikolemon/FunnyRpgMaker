/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c9b65 */

void FUN_1801c9b65(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001801c9b6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x10))();
    return;
  }
  return;
}

