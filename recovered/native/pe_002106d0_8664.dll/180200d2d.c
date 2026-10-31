/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180200d2d */

void FUN_180200d2d(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x2e0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000180200d39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + 0x2e0) + 0x90))();
    return;
  }
  return;
}

