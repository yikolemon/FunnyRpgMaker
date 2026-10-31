/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fee07 */

char * FUN_1800fee07(char *param_1)

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

