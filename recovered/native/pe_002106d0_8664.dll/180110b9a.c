/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180110b9a */

uint FUN_180110b9a(void)

{
  if ((*(uint *)(DAT_180419160 + 0x1fe8) & 0x20) != 0) {
    return (*(uint *)(DAT_180419160 + 0x1fe8) & 0x40) >> 6;
  }
  if (*(int *)(DAT_180419160 + 0x1fe0) == 0 ||
      *(int *)(DAT_180419160 + 0x16ac) != *(int *)(DAT_180419160 + 0x1fe0)) {
    return 0;
  }
  return CONCAT31((int3)((uint)*(int *)(DAT_180419160 + 0x16b0) >> 8),
                  *(int *)(DAT_180419160 + 4) <= *(int *)(DAT_180419160 + 0x16b0));
}

