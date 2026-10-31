/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400ac0b2 */

void FUN_1400ac0b2(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_14008483f(*(longlong *)(param_1 + 8) + 0x20);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_1400ddcd0(*(longlong *)(param_1 + 8),0x60);
    return;
  }
  return;
}

