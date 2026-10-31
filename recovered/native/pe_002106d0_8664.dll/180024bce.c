/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180024bce */

char * FUN_180024bce(char *param_1)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  if (sVar1 == 0) {
LAB_180024bf6:
    param_1 = param_1 + sVar1;
  }
  else {
    do {
      if ((param_1[sVar1 - 1] == '/') || (param_1[sVar1 - 1] == '\\')) goto LAB_180024bf6;
      sVar1 = sVar1 - 1;
    } while (sVar1 != 0);
  }
  return param_1;
}

