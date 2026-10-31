/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180139e6f */

int FUN_180139e6f(int param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  
  sVar1 = (short)param_2;
  if (sVar1 < 1) {
    if ((-1 < sVar1) || ((int)(short)param_1 <= (int)(short)param_4 + (int)sVar1))
    goto LAB_180139ea2;
  }
  else {
    param_4 = param_3;
    if ((int)(short)param_3 + (int)sVar1 <= (int)(short)param_1) {
LAB_180139ea2:
      return param_1 - param_2;
    }
  }
  return param_4;
}

