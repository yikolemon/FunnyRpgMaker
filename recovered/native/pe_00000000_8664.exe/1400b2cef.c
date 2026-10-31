/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400b2cef */

char FUN_1400b2cef(char param_1,char param_2,char param_3,char param_4)

{
  if (param_2 < '\x01') {
    if ((-1 < param_2) || ((int)param_1 <= (int)param_4 + (int)param_2)) goto LAB_1400b2d21;
  }
  else {
    param_4 = param_3;
    if ((int)param_3 + (int)param_2 <= (int)param_1) {
LAB_1400b2d21:
      return param_1 - param_2;
    }
  }
  return param_4;
}

