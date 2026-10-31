/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005aa5a */

void FUN_14005aa5a(longlong param_1)

{
  if (*(char *)(param_1 + 0xa4) == '\0') {
    FUN_14001c53d(*(longlong *)(param_1 + 0x20),*(longlong *)(param_1 + 0x98));
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014005aa97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x30))(param_1);
    return;
  }
  return;
}

