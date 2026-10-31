/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180146568 */

void FUN_180146568(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 == 0) {
    return;
  }
  if ((param_1 != 0) && (DAT_180419160 != 0)) {
    FUN_180107e34(DAT_180419160 + 0x2b8c,*(undefined4 *)(DAT_180419160 + 4),param_3,
                  0xffffffffffffffff);
  }
                    /* WARNING: Could not recover jumptable at 0x0001800fe919. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_1804039a8)(param_1,DAT_180419170);
  return;
}

