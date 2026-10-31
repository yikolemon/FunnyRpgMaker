/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140129646 */

void FUN_140129646(longlong param_1)

{
  if ((param_1 != 0) && (*(code **)(param_1 + 0x28) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000140129654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x28))();
    return;
  }
  return;
}

