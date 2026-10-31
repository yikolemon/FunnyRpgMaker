/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017f7cf */

void FUN_18017f7cf(float *param_1,byte *param_2)

{
  double dVar1;
  float fVar2;
  
  if (param_2[3] == 0) {
    param_1[0] = 0.0;
    param_1[1] = 0.0;
    fVar2 = 0.0;
  }
  else {
    dVar1 = (double)FUN_180287220(DAT_1802ac578,param_2[3] - 0x88);
    fVar2 = (float)dVar1;
    *param_1 = (float)*param_2 * fVar2;
    param_1[1] = (float)param_2[1] * fVar2;
    fVar2 = (float)param_2[2] * fVar2;
  }
  param_1[3] = 1.0;
  param_1[2] = fVar2;
  return;
}

