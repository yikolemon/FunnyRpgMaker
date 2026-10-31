/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10165136 */

undefined4 FUN_10165136(void)

{
  if (*(int *)(DAT_1039d74c + 0x2308) != 0) {
    return *(undefined4 *)(*(int *)(DAT_1039d74c + 0x2308) + 0x40);
  }
  return 0;
}

