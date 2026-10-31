/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140124aa4 */

longlong FUN_140124aa4(longlong param_1,longlong param_2)

{
  *(undefined1 *)(param_1 + 0x40) = 0;
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_140007f78(param_1);
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  return param_1;
}

