/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400b292e */

char * FUN_1400b292e(char *param_1,int param_2)

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

