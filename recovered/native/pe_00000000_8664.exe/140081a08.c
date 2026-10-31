/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140081a08 */

undefined8 FUN_140081a08(void)

{
  if (*(char *)(DAT_140f2a910 + 0x2428) == '\x01') {
    return CONCAT71((int7)((ulonglong)DAT_140f2a910 >> 8),*(int *)(DAT_140f2a910 + 0x24b0) != 0);
  }
  return 0;
}

