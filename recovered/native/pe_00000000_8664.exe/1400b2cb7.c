/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400b2cb7 */

char FUN_1400b2cb7(char param_1,char param_2,char param_3,char param_4)

{
  if (param_2 < '\0') {
    if ((int)param_1 < (int)param_3 - (int)param_2) {
      return param_3;
    }
  }
  else if ((param_2 != '\0') && ((int)param_4 - (int)param_2 < (int)param_1)) {
    return param_4;
  }
  return param_2 + param_1;
}

