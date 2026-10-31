/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f41e7 */

void FUN_101f41e7(int param_1)

{
  if (*(int *)(param_1 + 0x224) != 0) {
                    /* WARNING: Could not recover jumptable at 0x101f41f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 0x224) + 0x48))();
    return;
  }
  return;
}

