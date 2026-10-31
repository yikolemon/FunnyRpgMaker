/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14010bf88 */

undefined8 * FUN_14010bf88(undefined8 *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14010bf20();
  return param_1;
}

