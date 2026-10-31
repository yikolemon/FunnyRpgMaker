/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10165279 */

int FUN_10165279(void)

{
  if (*(int *)(DAT_1039d74c + 0x2308) != 0) {
    return (int)*(short *)(*(int *)(DAT_1039d74c + 0x2308) + 0x1be);
  }
  return -1;
}

