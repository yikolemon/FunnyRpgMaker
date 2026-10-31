/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004cf0a */

void __fastcall FUN_1004cf0a(int param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
  if (*(int *)(param_1 + 0x18) == 0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
    }
  }
  else {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  }
  if (*(int *)(param_1 + 0xc) != -1) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
  }
  return;
}

