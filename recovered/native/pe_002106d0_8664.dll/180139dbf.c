/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180139dbf */

char FUN_180139dbf(char param_1,char param_2,char param_3,char param_4)

{
  if (param_2 < '\x01') {
    if ((-1 < param_2) || ((int)param_1 <= (int)param_4 + (int)param_2)) goto LAB_180139df1;
  }
  else {
    param_4 = param_3;
    if ((int)param_3 + (int)param_2 <= (int)param_1) {
LAB_180139df1:
      return param_1 - param_2;
    }
  }
  return param_4;
}

