/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140275340 */

undefined8 * FUN_140275340(undefined8 *param_1,undefined1 param_2)

{
  *param_1 = &DAT_1404bd618;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &DAT_1404c9268;
  *param_1 = &DAT_1404c92a8;
  *(undefined1 *)(param_1 + 3) = param_2;
  return param_1;
}

