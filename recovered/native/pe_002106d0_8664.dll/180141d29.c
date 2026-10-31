/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180141d29 */

void FUN_180141d29(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  while ((cVar1 != '\0' && ((cVar1 != '%' || (param_1[1] == '%'))))) {
    param_1 = param_1 + (ulonglong)(cVar1 == '%') + 1;
    cVar1 = *param_1;
  }
  return;
}

