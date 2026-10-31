/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140089e6e */

undefined8 FUN_140089e6e(void)

{
  if (*(int *)(DAT_140f2a910 + 0x167c) != 0) {
    return CONCAT71((int7)((ulonglong)DAT_140f2a910 >> 8),
                    *(int *)(DAT_140f2a910 + 0x167c) == *(int *)(DAT_140f2a910 + 0x1fe0));
  }
  return 0;
}

