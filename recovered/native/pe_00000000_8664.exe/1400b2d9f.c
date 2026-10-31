/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400b2d9f */

int FUN_1400b2d9f(int param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  
  sVar1 = (short)param_2;
  if (sVar1 < 1) {
    if ((-1 < sVar1) || ((int)(short)param_1 <= (int)(short)param_4 + (int)sVar1))
    goto LAB_1400b2dd2;
  }
  else {
    param_4 = param_3;
    if ((int)(short)param_3 + (int)sVar1 <= (int)(short)param_1) {
LAB_1400b2dd2:
      return param_1 - param_2;
    }
  }
  return param_4;
}

