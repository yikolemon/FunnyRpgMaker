/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007fb30 */

void FUN_14007fb30(undefined8 *param_1)

{
  if (param_1[3] != 0) {
    param_1[2] = 0;
    FUN_140077b90();
    param_1[3] = 0;
  }
  if (param_1[1] != 0) {
    *param_1 = 0;
    FUN_140077b90();
    param_1[1] = 0;
  }
  param_1[4] = 0;
  return;
}

