/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004e369 */

void FUN_14004e369(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x2e0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014004e375. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + 0x2e0) + 0x90))();
    return;
  }
  return;
}

