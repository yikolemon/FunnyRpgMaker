/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c0a53 */

void FUN_101c0a53(int param_1)

{
  if ((param_1 != 0) && (*(code **)(param_1 + 0x18) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x101c0a62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x18))();
    return;
  }
  return;
}

