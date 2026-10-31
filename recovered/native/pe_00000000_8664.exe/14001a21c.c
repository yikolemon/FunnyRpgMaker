/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001a21c */

char * FUN_14001a21c(char *param_1)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  if (sVar1 == 0) {
LAB_14001a244:
    param_1 = param_1 + sVar1;
  }
  else {
    do {
      if ((param_1[sVar1 - 1] == '/') || (param_1[sVar1 - 1] == '\\')) goto LAB_14001a244;
      sVar1 = sVar1 - 1;
    } while (sVar1 != 0);
  }
  return param_1;
}

