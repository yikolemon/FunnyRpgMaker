/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180106818 */

void FUN_180106818(undefined8 *param_1)

{
  if (param_1[3] != 0) {
    param_1[2] = 0;
    FUN_1800fe8d4();
    param_1[3] = 0;
  }
  if (param_1[1] != 0) {
    *param_1 = 0;
    FUN_1800fe8d4();
    param_1[1] = 0;
  }
  param_1[4] = 0;
  return;
}

