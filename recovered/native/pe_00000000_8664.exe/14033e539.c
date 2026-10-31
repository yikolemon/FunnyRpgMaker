/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14033e539 */

float FUN_14033e539(float param_1,float param_2,float param_3,undefined4 param_4)

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
  fVar1 = (float)FUN_1403000a5(fVar1,param_2,param_4);
  return fVar1;
}

