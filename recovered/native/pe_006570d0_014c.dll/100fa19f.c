/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fa19f */

void FUN_100fa19f(char *param_1,char *param_2,int param_3)

{
  if (param_3 != 0) {
    if (param_3 != 1) {
      _strncpy(param_1,param_2,param_3 - 1);
    }
    param_1[param_3 + -1] = '\0';
  }
  return;
}

