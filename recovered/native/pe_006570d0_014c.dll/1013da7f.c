/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1013da7f */

void FUN_1013da7f(char *param_1)

{
  char cVar1;
  
  for (; (cVar1 = *param_1, cVar1 != '\0' && ((cVar1 != '%' || (param_1[1] == '%'))));
      param_1 = param_1 + (cVar1 == '%') + 1) {
  }
  return;
}

