/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016a574 */

longlong FUN_14016a574(longlong param_1,ulonglong param_2)

{
  if (*(ulonglong *)(param_1 + 0x20) <= param_2) {
    FUN_1401691c8(*(undefined8 *)(param_1 + 8),0x82);
    param_2 = 0;
  }
  return param_2 * *(longlong *)(param_1 + 0x10) + *(longlong *)(param_1 + 0x30);
}

