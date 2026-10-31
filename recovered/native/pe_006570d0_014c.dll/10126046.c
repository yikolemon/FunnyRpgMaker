/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10126046 */

float * __thiscall FUN_10126046(int param_1,float *param_2,float *param_3,float *param_4)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)FUN_100fdbca(0,(*(float *)(param_1 + 0x14) - param_3[1]) - param_4[1]);
  fVar2 = (float10)FUN_100fdbca(0,(*(float *)(param_1 + 0x10) - *param_3) - *param_4);
  *param_2 = (float)fVar2;
  param_2[1] = (float)fVar1;
  return param_2;
}

