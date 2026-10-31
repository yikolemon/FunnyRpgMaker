/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180157b0d */

uint FUN_180157b0d(uint param_1,uint param_2,uint param_3)

{
  if (param_1 < param_3) {
    param_3 = param_1;
  }
  if (param_1 < param_2) {
    param_3 = param_2;
  }
  return param_3;
}

