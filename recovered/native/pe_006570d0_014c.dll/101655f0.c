/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101655f0 */

undefined4 FUN_101655f0(void)

{
  if (*(int *)(DAT_1039d74c + 0x2308) != 0) {
    return *(undefined4 *)(*(int *)(DAT_1039d74c + 0x2308) + 0x48);
  }
  return 0;
}

