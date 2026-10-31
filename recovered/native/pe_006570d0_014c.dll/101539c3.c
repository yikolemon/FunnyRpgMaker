/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101539c3 */

uint FUN_101539c3(uint param_1,uint param_2,uint param_3)

{
  if (param_1 < param_3) {
    param_3 = param_1;
  }
  if (param_1 < param_2) {
    param_3 = param_2;
  }
  return param_3;
}

