/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014f6a8 */

undefined * FUN_1014f6a8(int param_1,int param_2)

{
  if (*(int *)(param_2 + 8) != 0) {
    return *(undefined **)(*(int *)(param_2 + 8) + 4);
  }
  if (*(int *)(param_2 + 0x24) != -1) {
    return (undefined *)(*(int *)(param_2 + 0x24) + *(int *)(param_1 + 0xa0));
  }
  return &DAT_1033cdfd;
}

