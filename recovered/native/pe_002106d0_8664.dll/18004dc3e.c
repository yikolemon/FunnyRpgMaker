/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18004dc3e */

void FUN_18004dc3e(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + -1;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    if (*(longlong *)(param_1 + 0x30) != 0) {
      *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + -1;
    }
  }
  else {
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -1;
  }
  if (*(int *)(param_1 + 0x14) != -1) {
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
  }
  return;
}

