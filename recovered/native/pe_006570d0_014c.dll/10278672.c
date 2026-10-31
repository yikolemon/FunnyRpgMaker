/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10278672 */

char FUN_10278672(char *param_1)

{
  char cVar1;
  
  if (*param_1 == '\0') {
    cVar1 = '\x01';
  }
  else if (param_1[1] == '\0') {
    cVar1 = '\x02';
  }
  else {
    cVar1 = (param_1[2] != '\0') + '\x03';
  }
  return cVar1;
}

