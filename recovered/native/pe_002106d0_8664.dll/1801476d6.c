/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801476d6 */

void FUN_1801476d6(int *param_1)

{
  if (param_1[1] == param_1[2]) {
    param_1[2] = *param_1;
    param_1[1] = *param_1;
    return;
  }
  *param_1 = param_1[2];
  return;
}

