/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f2548 */

undefined4 * FUN_1800f2548(undefined4 *param_1,undefined8 *param_2)

{
  *param_1 = *(undefined4 *)*param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined1 **)(param_1 + 4) = &DAT_1803861e4;
  FUN_1800f25e0();
  return param_1;
}

