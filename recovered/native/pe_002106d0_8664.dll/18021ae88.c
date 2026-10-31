/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021ae88 */

longlong FUN_18021ae88(longlong param_1,ulonglong param_2)

{
  if (*(ulonglong *)(param_1 + 0x20) <= param_2) {
    FUN_180219adc(*(undefined8 *)(param_1 + 8),0x82);
    param_2 = 0;
  }
  return param_2 * *(longlong *)(param_1 + 0x10) + *(longlong *)(param_1 + 0x30);
}

