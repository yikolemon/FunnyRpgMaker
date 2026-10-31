/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18028ac40 */

float FUN_18028ac40(float param_1)

{
  float fVar1;
  
  if (((uint)param_1 & 0x7f800000) == 0x7f800000) {
    if (((uint)param_1 & 0x7fffff) != 0) {
      fVar1 = (float)FUN_18029c410(param_1);
      return fVar1;
    }
    if ((int)param_1 < 0) goto LAB_18028ac77;
  }
  if (-1 < (int)param_1 || ABS(param_1) == 0.0) {
    return SQRT(param_1);
  }
LAB_18028ac77:
  fVar1 = (float)FUN_18029c420("sqrtf",5,0xffc00000,1,8,0x21,param_1,0,1);
  return fVar1;
}

