/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140128b39 */

void FUN_140128b39(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140128b42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x10))();
    return;
  }
  return;
}

