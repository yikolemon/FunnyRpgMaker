/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14079ac17 */

void FUN_14079ac17(int *param_1)

{
  if (param_1[1] == param_1[2]) {
    param_1[2] = *param_1;
    param_1[1] = *param_1;
    return;
  }
  *param_1 = param_1[2];
  return;
}

