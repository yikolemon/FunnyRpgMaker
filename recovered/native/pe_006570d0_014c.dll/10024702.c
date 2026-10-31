/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10024702 */

char * FUN_10024702(char *param_1)

{
  size_t sVar1;
  
  sVar1 = _strlen(param_1);
  if (sVar1 == 0) {
LAB_10024728:
    param_1 = param_1 + sVar1;
  }
  else {
    do {
      if ((param_1[sVar1 - 1] == '/') || (param_1[sVar1 - 1] == '\\')) goto LAB_10024728;
      sVar1 = sVar1 - 1;
    } while (sVar1 != 0);
  }
  return param_1;
}

