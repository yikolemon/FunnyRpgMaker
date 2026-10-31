/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018f6b9 */

void FUN_1018f6b9(int param_1,int param_2,int param_3)

{
  if (*(char *)(param_3 + 0x31) == '\0') {
    FUN_101909d8();
    *(int *)(param_2 + 4) = param_1;
  }
  *(undefined1 *)(param_1 + 0x42) = 0;
  FUN_101909fa();
  return;
}

