/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101250a4 */

void __thiscall FUN_101250a4(float *param_1,float *param_2)

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

