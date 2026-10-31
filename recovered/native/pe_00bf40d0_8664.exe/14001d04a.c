/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001d04a */

void FUN_14001d04a(longlong param_1)

{
  if ((param_1 != 0) && (*(code **)(param_1 + 0x28) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014001d058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x28))();
    return;
  }
  return;
}

