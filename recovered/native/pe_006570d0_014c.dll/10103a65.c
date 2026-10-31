/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10103a65 */

undefined4 FUN_10103a65(void)

{
  if (*(char *)(DAT_1039d74c + 0x2250) == '\x01') {
    return CONCAT31((int3)((uint)DAT_1039d74c >> 8),*(int *)(DAT_1039d74c + 0x22d0) != 0);
  }
  return 0;
}

