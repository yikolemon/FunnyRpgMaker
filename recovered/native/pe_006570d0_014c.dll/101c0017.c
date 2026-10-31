/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c0017 */

void FUN_101c0017(int param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x101c0022. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 8))();
    return;
  }
  return;
}

