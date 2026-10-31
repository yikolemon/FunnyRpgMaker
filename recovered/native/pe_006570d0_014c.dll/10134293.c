/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10134293 */

char FUN_10134293(char param_1,char param_2,char param_3,char param_4)

{
  int iVar1;
  
  iVar1 = (int)param_2;
  if (iVar1 < 1) {
    if ((param_2 < '\0') && (param_4 + iVar1 < (int)param_1)) {
      return param_4;
    }
  }
  else if ((int)param_1 < param_3 + iVar1) {
    return param_3;
  }
  return param_1 - param_2;
}

