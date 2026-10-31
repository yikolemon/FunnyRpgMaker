/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140189650 */

char * FUN_140189650(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_140e620e0;
  do {
    if (*piVar1 == param_1) {
      return *(char **)(piVar1 + 2);
    }
    piVar1 = piVar1 + 4;
  } while (piVar1 != &DAT_140e625d0);
  return "unknown error";
}

