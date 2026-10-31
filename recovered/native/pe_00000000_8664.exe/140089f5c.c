/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140089f5c */

bool FUN_140089f5c(void)

{
  if (*(int *)(DAT_140f2a910 + 0x1664) != 0) {
    return true;
  }
  return *(int *)(DAT_140f2a910 + 0x1668) != 0;
}

