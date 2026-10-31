/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800befea */

void FUN_1800befea(longlong param_1)

{
  FUN_1800bf45a(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (*DAT_180417870)();
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}

