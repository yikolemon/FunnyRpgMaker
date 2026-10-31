/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012a1ce */

void __fastcall FUN_1012a1ce(int param_1)

{
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_10129747(*(int *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}

