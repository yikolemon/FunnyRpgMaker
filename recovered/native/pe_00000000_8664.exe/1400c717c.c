/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c717c */

void FUN_1400c717c(float *param_1,float *param_2)

{
  float fVar1;
  
  if (*param_2 < *param_1) {
    *param_1 = *param_2;
  }
  if (param_2[1] < param_1[1]) {
    param_1[1] = param_2[1];
  }
  fVar1 = param_2[2];
  if (param_1[2] <= fVar1 && fVar1 != param_1[2]) {
    param_1[2] = fVar1;
  }
  fVar1 = param_2[3];
  if (param_1[3] <= fVar1 && fVar1 != param_1[3]) {
    param_1[3] = fVar1;
  }
  return;
}

