/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020d41e */

void FUN_18020d41e(longlong param_1)

{
  if (*(char *)(param_1 + 0xa4) == '\0') {
    FUN_1801c9b65(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x98));
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018020d45b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x30))(param_1);
    return;
  }
  return;
}

