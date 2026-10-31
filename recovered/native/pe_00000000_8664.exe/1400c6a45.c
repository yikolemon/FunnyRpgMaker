/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c6a45 */

void FUN_1400c6a45(longlong param_1)

{
  FUN_1400abfd5("SearchBuffer = \"%s\"",param_1 + 0x18);
  FUN_1400abfd5("SingleCharMode = %d, Size = %d, Lock = %d",*(undefined1 *)(param_1 + 0x11),
                (int)*(char *)(param_1 + 0x12),*(undefined1 *)(param_1 + 100));
  FUN_1400abfd5("LastRequest = time: %.2f, frame: %d",(double)*(float *)(param_1 + 0x60),
                *(undefined4 *)(param_1 + 0x5c));
  return;
}

