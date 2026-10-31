/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015cb0a */

void FUN_14015cb0a(longlong param_1)

{
  if (*(char *)(param_1 + 0xa4) == '\0') {
    FUN_140128b39(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x98));
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014015cb47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x30))(param_1);
    return;
  }
  return;
}

