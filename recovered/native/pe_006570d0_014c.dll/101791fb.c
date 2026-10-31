/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101791fb */

void __fastcall FUN_101791fb(float *param_1,byte *param_2)

{
  float10 fVar1;
  float fVar2;
  
  if (param_2[3] == 0) {
    param_1[0] = 0.0;
    param_1[1] = 0.0;
    fVar2 = 0.0;
  }
  else {
    fVar1 = (float10)FUN_1026f660(0,0x3ff00000,param_2[3] - 0x88);
    fVar2 = (float)fVar1;
    *param_1 = (float)*param_2 * fVar2;
    param_1[1] = (float)param_2[1] * fVar2;
    fVar2 = (float)param_2[2] * fVar2;
  }
  param_1[3] = 1.0;
  param_1[2] = fVar2;
  return;
}

