/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402c1f36 */

longlong FUN_1402c1f36(longlong param_1,longlong param_2)

{
  FUN_1402146e6();
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  return param_1;
}

