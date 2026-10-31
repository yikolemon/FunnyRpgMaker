/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010bf22 */

uint FUN_1010bf22(void)

{
  if ((*(uint *)(DAT_1039d74c + 0x1e88) & 0x20) != 0) {
    return (*(uint *)(DAT_1039d74c + 0x1e88) & 0x40) >> 6;
  }
  if (*(int *)(DAT_1039d74c + 0x1e80) == 0 ||
      *(int *)(DAT_1039d74c + 0x1554) != *(int *)(DAT_1039d74c + 0x1e80)) {
    return 0;
  }
  return CONCAT31((int3)((uint)*(int *)(DAT_1039d74c + 0x1558) >> 8),
                  *(int *)(DAT_1039d74c + 4) <= *(int *)(DAT_1039d74c + 0x1558));
}

