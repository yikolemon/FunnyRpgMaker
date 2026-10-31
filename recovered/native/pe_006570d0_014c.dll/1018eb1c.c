/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018eb1c */

void FUN_1018eb1c(int param_1)

{
  if ((*(int *)(param_1 + 0x30) != 0) &&
     (*(int *)(*(int *)(param_1 + 0x30) + 0x18) != *(int *)(param_1 + 4))) {
    FUN_10190667(param_1);
  }
  if (*(int *)(param_1 + 0x290) == 0) {
    FUN_1018f313(param_1);
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    FUN_1018f6f4(0);
  }
  FUN_10190745();
  if (*(char *)(param_1 + 0x41) == '\0') {
    FUN_1019077d(param_1);
  }
  *(undefined1 *)(param_1 + 0x42) = 1;
  return;
}

