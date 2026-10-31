/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180139e36 */

int FUN_180139e36(int param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  
  sVar1 = (short)param_2;
  if (sVar1 < 0) {
    if ((int)(short)param_1 < (int)(short)param_3 - (int)sVar1) {
      return param_3;
    }
  }
  else if ((sVar1 != 0) && ((int)(short)param_4 - (int)sVar1 < (int)(short)param_1)) {
    return param_4;
  }
  return param_2 + param_1;
}

