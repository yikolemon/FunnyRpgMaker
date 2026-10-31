/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016a586 */

int FUN_18016a586(void)

{
  if (*(longlong *)(DAT_180419160 + 0x24f8) != 0) {
    return (int)*(short *)(*(longlong *)(DAT_180419160 + 0x24f8) + 0x20a);
  }
  return -1;
}

