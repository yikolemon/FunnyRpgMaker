/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14009b06e */

void FUN_14009b06e(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x111) = 1;
  *(char *)(param_1 + 299) = '\x02' - *(char *)(param_1 + 0x109);
  return;
}

