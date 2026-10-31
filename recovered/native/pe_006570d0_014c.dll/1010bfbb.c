/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010bfbb */

bool FUN_1010bfbb(void)

{
  if (*(int *)(DAT_1039d74c + 0x1510) != 0) {
    return true;
  }
  return *(int *)(DAT_1039d74c + 0x1514) != 0;
}

