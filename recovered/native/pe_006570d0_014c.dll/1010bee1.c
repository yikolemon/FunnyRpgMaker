/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010bee1 */

undefined4 FUN_1010bee1(void)

{
  if (*(int *)(DAT_1039d74c + 0x1528) != 0) {
    return CONCAT31((int3)((uint)DAT_1039d74c >> 8),
                    *(int *)(DAT_1039d74c + 0x1528) == *(int *)(DAT_1039d74c + 0x1e80));
  }
  return 0;
}

