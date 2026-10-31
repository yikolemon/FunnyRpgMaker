/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012f80d */

undefined8 FUN_1012f80d(uint param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6)

{
  if ((SBORROW4(param_2,param_6) != SBORROW4(param_2 - param_6,(uint)(param_1 < param_5))) !=
      (int)((param_2 - param_6) - (uint)(param_1 < param_5)) < 0) {
    param_5 = param_1;
    param_6 = param_2;
  }
  if ((SBORROW4(param_2,param_4) != SBORROW4(param_2 - param_4,(uint)(param_1 < param_3))) !=
      (int)((param_2 - param_4) - (uint)(param_1 < param_3)) < 0) {
    param_6 = param_4;
    param_5 = param_3;
  }
  return CONCAT44(param_6,param_5);
}

