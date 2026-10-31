/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801399fe */

char * FUN_1801399fe(char *param_1,int param_2)

{
  char cVar1;
  size_t sVar2;
  char *pcVar3;
  
  cVar1 = *param_1;
  for (; (cVar1 != '\0' && (param_2 != 0)); param_2 = param_2 + -1) {
    sVar2 = strlen(param_1);
    param_1 = param_1 + sVar2 + 1;
    cVar1 = *param_1;
  }
  pcVar3 = (char *)0x0;
  if (cVar1 != '\0') {
    pcVar3 = param_1;
  }
  return pcVar3;
}

