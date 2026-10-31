/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bfcca */

void FUN_1800bfcca(longlong param_1,char param_2)

{
  FUN_1800bf45a(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    (*DAT_180417870)();
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  if (param_2 != '\0') {
    thunk_FUN_1802464a0(param_1,0x50);
    return;
  }
  return;
}

