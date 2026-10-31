/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14030fda4 */

void FUN_14030fda4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if ((param_1 != 0) && (DAT_14062a630 != 0)) {
    FUN_140319304(DAT_14062a630 + 0x2b8c,*(undefined4 *)(DAT_14062a630 + 4),param_3,
                  0xffffffffffffffff);
  }
  (*DAT_140614e78)(param_1,DAT_14062a640);
  return;
}

