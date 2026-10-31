/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10154d18 */

undefined8
FUN_10154d18(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  if (param_2 < param_6 || param_2 - param_6 < (uint)(param_1 < param_5)) {
    param_5 = param_1;
    param_6 = param_2;
  }
  if (param_2 < param_4 || param_2 - param_4 < (uint)(param_1 < param_3)) {
    param_6 = param_4;
    param_5 = param_3;
  }
  return CONCAT44(param_6,param_5);
}

