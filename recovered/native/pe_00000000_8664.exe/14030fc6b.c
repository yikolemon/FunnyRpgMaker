/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14030fc6b */

void FUN_14030fc6b(char *param_1,char *param_2,longlong param_3)

{
  if (param_3 != 0) {
    if (param_3 != 1) {
      strncpy(param_1,param_2,param_3 - 1);
    }
    param_1[param_3 + -1] = '\0';
  }
  return;
}

