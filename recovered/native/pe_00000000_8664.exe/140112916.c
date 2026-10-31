/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140112916 */

undefined4 FUN_140112916(void)

{
  if (*(longlong *)(DAT_140f2a910 + 0x24f8) != 0) {
    return *(undefined4 *)(*(longlong *)(DAT_140f2a910 + 0x24f8) + 0x74);
  }
  return 0;
}

