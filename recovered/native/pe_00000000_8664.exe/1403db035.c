/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403db035 */

void FUN_1403db035(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001403db03e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x10))();
    return;
  }
  return;
}

