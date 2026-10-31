/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101343ff */

int FUN_101343ff(int param_1,int param_2,int param_3,int param_4)

{
  if (-1 < param_2 || param_3 - param_2 <= param_1) {
    if (param_1 <= param_4 - param_2) {
      param_4 = param_2 + param_1;
    }
    param_3 = param_4;
    if (param_2 < 1) {
      param_3 = param_2 + param_1;
    }
  }
  return param_3;
}

