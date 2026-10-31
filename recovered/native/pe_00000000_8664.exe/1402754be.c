/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402754be */

undefined8 * FUN_1402754be(undefined8 *param_1,undefined4 param_2)

{
  *param_1 = &DAT_1404bd618;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &DAT_1404c9268;
  *param_1 = &DAT_1404c9328;
  *(undefined4 *)(param_1 + 3) = param_2;
  return param_1;
}

