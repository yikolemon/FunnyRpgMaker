/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10134494 */

int FUN_10134494(uint param_1,int param_2,int param_3)

{
  if ((uint)(param_3 + param_2) <= param_1) {
    param_3 = param_1 - param_2;
  }
  if (param_2 == 0) {
    param_3 = param_1 - param_2;
  }
  return param_3;
}

