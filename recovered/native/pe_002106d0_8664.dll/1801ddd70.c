/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ddd70 */

longlong FUN_1801ddd70(longlong param_1,longlong param_2)

{
  *(undefined1 *)(param_1 + 0x40) = 0;
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1800181b0(param_1);
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  return param_1;
}

