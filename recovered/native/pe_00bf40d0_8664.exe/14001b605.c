/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001b605 */

void FUN_14001b605(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if ((param_1 != 0) && (DAT_14013ce90 != 0)) {
    FUN_14001b64d((int *)(DAT_14013ce90 + 0x2b8c),*(int *)(DAT_14013ce90 + 4),param_3,-1);
  }
                    /* WARNING: Could not recover jumptable at 0x00014001b64a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_14012ebc0)(param_1,DAT_14013cea0);
  return;
}

