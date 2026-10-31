/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012ae82 */

void FUN_18012ae82(float *param_1,float *param_2)

{
  float fVar1;
  
  if (*param_2 < *param_1) {
    *param_1 = *param_2;
  }
  if (param_2[1] < param_1[1]) {
    param_1[1] = param_2[1];
  }
  fVar1 = *param_2;
  if (param_1[2] <= fVar1 && fVar1 != param_1[2]) {
    param_1[2] = fVar1;
  }
  fVar1 = param_2[1];
  if (param_1[3] <= fVar1 && fVar1 != param_1[3]) {
    param_1[3] = fVar1;
  }
  return;
}

