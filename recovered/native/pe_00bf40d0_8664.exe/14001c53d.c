/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001c53d */

void FUN_14001c53d(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014001c546. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x10))();
    return;
  }
  return;
}

