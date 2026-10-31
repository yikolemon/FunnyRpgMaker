/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d9c20 */

char * FUN_1400d9c20(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_1401441e0;
  do {
    if (*piVar1 == param_1) {
      return *(char **)(piVar1 + 2);
    }
    piVar1 = piVar1 + 4;
  } while (piVar1 != &DAT_1401446d0);
  return "unknown error";
}

