/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140774ad9 */

void FUN_140774ad9(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x101) = 1;
  *(char *)(param_1 + 0x11b) = '\x02' - *(char *)(param_1 + 0xf9);
  return;
}

