/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140322114 */

bool FUN_140322114(void)

{
  if (*(int *)(DAT_14062a630 + 0x1664) != 0) {
    return true;
  }
  return *(int *)(DAT_14062a630 + 0x1668) != 0;
}

