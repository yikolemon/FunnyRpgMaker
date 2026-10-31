/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140319bc0 */

undefined8 FUN_140319bc0(void)

{
  if (*(char *)(DAT_14062a630 + 0x2428) == '\x01') {
    return CONCAT71((int7)((ulonglong)DAT_14062a630 >> 8),*(int *)(DAT_14062a630 + 0x24b0) != 0);
  }
  return 0;
}

