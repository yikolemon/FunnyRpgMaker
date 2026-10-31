/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fa34e */

void FUN_100fa34e(uint param_1,uint param_2)

{
  char *pcVar1;
  
  do {
    if (param_1 <= param_2) {
      return;
    }
    pcVar1 = (char *)(param_1 - 1);
    param_1 = param_1 - 1;
  } while (*pcVar1 != '\n');
  return;
}

