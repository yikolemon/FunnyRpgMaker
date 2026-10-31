/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b0a66 */

longlong FUN_1800b0a66(longlong param_1,longlong param_2)

{
  FUN_180003216();
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  return param_1;
}

