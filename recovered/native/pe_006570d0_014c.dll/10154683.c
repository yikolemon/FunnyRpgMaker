/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10154683 */

undefined8 FUN_10154683(uint param_1,int param_2,uint param_3,int param_4)

{
  if ((SBORROW4(param_2,param_4) != SBORROW4(param_2 - param_4,(uint)(param_1 < param_3))) !=
      (int)((param_2 - param_4) - (uint)(param_1 < param_3)) < 0) {
    param_4 = param_2;
    param_3 = param_1;
  }
  return CONCAT44(param_4,param_3);
}

