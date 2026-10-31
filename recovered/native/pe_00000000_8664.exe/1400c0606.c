/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c0606 */

void FUN_1400c0606(int *param_1)

{
  if (param_1[1] == param_1[2]) {
    param_1[2] = *param_1;
    param_1[1] = *param_1;
    return;
  }
  *param_1 = param_1[2];
  return;
}

