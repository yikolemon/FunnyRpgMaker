/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180211c72 */

void FUN_180211c72(char *param_1)

{
  char *pcVar1;
  
  do {
    if (*param_1 == '\0') {
LAB_180211c8c:
      param_1 = param_1 + -1;
      do {
        pcVar1 = param_1 + 1;
        param_1 = param_1 + 1;
      } while (*pcVar1 == ' ');
      return;
    }
    if (*param_1 == ' ') {
      *param_1 = '\0';
      param_1 = param_1 + 1;
      goto LAB_180211c8c;
    }
    param_1 = param_1 + 1;
  } while( true );
}

