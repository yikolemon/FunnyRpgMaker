/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10134472 */

int FUN_10134472(uint param_1,int param_2,undefined4 param_3,int param_4)

{
  if (param_1 <= (uint)(param_4 - param_2)) {
    param_4 = param_2 + param_1;
  }
  if (param_2 == 0) {
    param_4 = param_2 + param_1;
  }
  return param_4;
}

