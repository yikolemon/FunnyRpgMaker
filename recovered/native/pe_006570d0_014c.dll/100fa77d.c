/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fa77d */

char * FUN_100fa77d(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = param_1;
  do {
    while( true ) {
      pcVar2 = pcVar1;
      pcVar1 = pcVar2 + 1;
      if (*pcVar2 != '#') break;
      if ((*pcVar1 == '#') && (pcVar2[2] == '#')) {
        param_1 = pcVar2 + 3;
      }
    }
  } while (*pcVar2 != '\0');
  return param_1;
}

