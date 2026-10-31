/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005f2ae */

void FUN_14005f2ae(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  do {
    if (*param_1 == '\0') {
LAB_14005f2c8:
      pcVar2 = param_1 + -1;
      do {
        pcVar1 = pcVar2 + 1;
        pcVar2 = pcVar2 + 1;
      } while (*pcVar1 == ' ');
      return;
    }
    if (*param_1 == ' ') {
      *param_1 = '\0';
      param_1 = param_1 + 1;
      goto LAB_14005f2c8;
    }
    param_1 = param_1 + 1;
  } while( true );
}

