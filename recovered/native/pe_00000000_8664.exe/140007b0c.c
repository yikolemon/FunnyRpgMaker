/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140007b0c */

void FUN_140007b0c(longlong param_1)

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

