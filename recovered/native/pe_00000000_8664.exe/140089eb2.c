/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140089eb2 */

uint FUN_140089eb2(void)

{
  if ((*(uint *)(DAT_140f2a910 + 0x1fe8) & 0x20) != 0) {
    return (*(uint *)(DAT_140f2a910 + 0x1fe8) & 0x40) >> 6;
  }
  if (*(int *)(DAT_140f2a910 + 0x1fe0) == 0 ||
      *(int *)(DAT_140f2a910 + 0x16ac) != *(int *)(DAT_140f2a910 + 0x1fe0)) {
    return 0;
  }
  return CONCAT31((int3)((uint)*(int *)(DAT_140f2a910 + 0x16b0) >> 8),
                  *(int *)(DAT_140f2a910 + 4) <= *(int *)(DAT_140f2a910 + 0x16b0));
}

