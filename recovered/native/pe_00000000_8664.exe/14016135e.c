/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016135e */

void FUN_14016135e(char *param_1)

{
  char *pcVar1;
  
  do {
    if (*param_1 == '\0') {
LAB_140161378:
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
      goto LAB_140161378;
    }
    param_1 = param_1 + 1;
  } while( true );
}

