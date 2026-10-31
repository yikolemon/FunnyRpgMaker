/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180110c44 */

bool FUN_180110c44(void)

{
  if (*(int *)(DAT_180419160 + 0x1664) != 0) {
    return true;
  }
  return *(int *)(DAT_180419160 + 0x1668) != 0;
}

