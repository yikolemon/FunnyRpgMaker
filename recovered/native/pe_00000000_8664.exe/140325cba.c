/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140325cba */

void FUN_140325cba(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_1[1];
  fVar2 = param_2[1];
  if ((param_2[1] <= fVar1) && (fVar2 = param_2[3], fVar1 <= param_2[3])) {
    fVar2 = fVar1;
  }
  fVar1 = *param_1;
  fVar3 = *param_2;
  if ((*param_2 <= fVar1) && (fVar3 = param_2[2], fVar1 <= param_2[2])) {
    fVar3 = fVar1;
  }
  *param_1 = fVar3;
  param_1[1] = fVar2;
  fVar1 = param_1[3];
  fVar2 = param_2[1];
  if ((param_2[1] <= fVar1) && (fVar2 = param_2[3], fVar1 <= param_2[3])) {
    fVar2 = fVar1;
  }
  fVar1 = param_1[2];
  fVar3 = *param_2;
  if ((*param_2 <= fVar1) && (fVar3 = param_2[2], fVar1 <= param_2[2])) {
    fVar3 = fVar1;
  }
  param_1[2] = fVar3;
  param_1[3] = fVar2;
  return;
}

