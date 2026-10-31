/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016a946 */

undefined4 FUN_18016a946(void)

{
  if (*(longlong *)(DAT_180419160 + 0x24f8) != 0) {
    return *(undefined4 *)(*(longlong *)(DAT_180419160 + 0x24f8) + 0x74);
  }
  return 0;
}

