/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1013db45 */

void FUN_1013db45(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)FUN_1013daa2(param_1);
  if (param_1 < pcVar2) {
    do {
      cVar1 = *param_1;
      if (((cVar1 != '$') && (cVar1 != '\'')) && (cVar1 != '_')) {
        *param_2 = cVar1;
        param_2 = param_2 + 1;
      }
      param_1 = param_1 + 1;
    } while (param_1 != pcVar2);
  }
  *param_2 = '\0';
  return;
}

