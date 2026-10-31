/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800be0be */

void FUN_1800be0be(longlong param_1,char param_2)

{
  FUN_1800bd8be(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (*DAT_180417870)();
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if (param_2 != '\0') {
    thunk_FUN_1802464a0(param_1,0x40);
    return;
  }
  return;
}

