/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012f7ec */

undefined8 FUN_1012f7ec(uint param_1,int param_2,uint param_3,int param_4)

{
  if ((SBORROW4(param_4,param_2) != SBORROW4(param_4 - param_2,(uint)(param_3 < param_1))) !=
      (int)((param_4 - param_2) - (uint)(param_3 < param_1)) < 0) {
    param_4 = param_2;
    param_3 = param_1;
  }
  return CONCAT44(param_4,param_3);
}

