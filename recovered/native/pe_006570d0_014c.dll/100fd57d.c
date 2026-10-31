/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fd57d */

char * FUN_100fd57d(char *param_1,uint param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(-(uint)(param_2 == 0) | param_2);
  pcVar1 = param_1;
  if (param_1 < pcVar2) {
    do {
      if (*param_1 == '#') {
        if (param_1[1] == '#') {
          return param_1;
        }
      }
      else if (*param_1 == '\0') {
        return param_1;
      }
      param_1 = param_1 + 1;
      pcVar1 = pcVar2;
    } while (param_1 != pcVar2);
  }
  return pcVar1;
}

