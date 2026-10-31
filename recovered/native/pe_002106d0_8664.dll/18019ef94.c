/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019ef94 */

undefined8 * FUN_18019ef94(undefined8 *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_18019ef2c();
  return param_1;
}

