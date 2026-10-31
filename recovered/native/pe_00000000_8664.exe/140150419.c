/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140150419 */

void FUN_140150419(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x2e0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140150425. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + 0x2e0) + 0x90))();
    return;
  }
  return;
}

