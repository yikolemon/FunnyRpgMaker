/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400bac59 */

void FUN_1400bac59(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  while ((cVar1 != '\0' && ((cVar1 != '%' || (param_1[1] == '%'))))) {
    param_1 = param_1 + (ulonglong)(cVar1 == '%') + 1;
    cVar1 = *param_1;
  }
  return;
}

