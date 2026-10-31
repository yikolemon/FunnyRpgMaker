/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012d069 */

float FUN_18012d069(float param_1,float param_2,float param_3,undefined4 param_4)

{
  float fVar1;
  
  if (param_1 <= param_3) {
    fVar1 = 0.0;
    param_2 = param_1;
  }
  else {
    fVar1 = param_1;
    if (param_1 < param_2 - param_3) {
      return param_1;
    }
  }
  fVar1 = (float)FUN_1800eebd5(fVar1,param_2,param_4);
  return fVar1;
}

