/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fe79b */

void FUN_1800fe79b(char *param_1,char *param_2,longlong param_3)

{
  if (param_3 != 0) {
    if (param_3 != 1) {
      strncpy(param_1,param_2,param_3 - 1);
    }
    param_1[param_3 + -1] = '\0';
  }
  return;
}

