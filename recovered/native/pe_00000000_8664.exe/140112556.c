/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140112556 */

int FUN_140112556(void)

{
  if (*(longlong *)(DAT_140f2a910 + 0x24f8) != 0) {
    return (int)*(short *)(*(longlong *)(DAT_140f2a910 + 0x24f8) + 0x20a);
  }
  return -1;
}

