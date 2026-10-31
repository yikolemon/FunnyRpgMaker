/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400bf498 */

void FUN_1400bf498(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 == 0) {
    return;
  }
  if ((param_1 != 0) && (DAT_140f2a910 != 0)) {
    FUN_14008114c(DAT_140f2a910 + 0x2b8c,*(undefined4 *)(DAT_140f2a910 + 4),param_3,
                  0xffffffffffffffff);
  }
                    /* WARNING: Could not recover jumptable at 0x000140077bd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_140f17ae0)(param_1,DAT_140f2a920);
  return;
}

