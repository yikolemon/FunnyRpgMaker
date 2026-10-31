/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002c7e2 */

longlong FUN_14002c7e2(longlong param_1,longlong param_2)

{
  *(undefined1 *)(param_1 + 0x40) = 0;
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_140004bec(param_1,param_2);
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  return param_1;
}

