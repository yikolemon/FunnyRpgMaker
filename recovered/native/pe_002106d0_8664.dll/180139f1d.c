/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180139f1d */

int FUN_180139f1d(int param_1,int param_2,int param_3,int param_4)

{
  if (param_2 < 1 || param_3 + param_2 <= param_1) {
    if (param_1 <= param_4 + param_2) {
      param_4 = param_1 - param_2;
    }
    param_3 = param_4;
    if (-1 < param_2) {
      param_3 = param_1 - param_2;
    }
  }
  return param_3;
}

