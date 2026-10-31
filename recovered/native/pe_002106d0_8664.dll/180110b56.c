/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180110b56 */

undefined8 FUN_180110b56(void)

{
  if (*(int *)(DAT_180419160 + 0x167c) != 0) {
    return CONCAT71((int7)((ulonglong)DAT_180419160 >> 8),
                    *(int *)(DAT_180419160 + 0x167c) == *(int *)(DAT_180419160 + 0x1fe0));
  }
  return 0;
}

