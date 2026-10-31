/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802396f0 */

char * FUN_1802396f0(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_1802bb910;
  do {
    if (*piVar1 == param_1) {
      return *(char **)(piVar1 + 2);
    }
    piVar1 = piVar1 + 4;
  } while (piVar1 != &DAT_1802bbe00);
  return "unknown error";
}

