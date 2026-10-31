/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ab5b7 */

int * FUN_1400ab5b7(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = (longlong)*(int *)(param_1 + 0x2950);
  if (0 < lVar2) {
    piVar1 = *(int **)(param_1 + 0x2958);
    do {
      if (*piVar1 == param_2) {
        return piVar1;
      }
      piVar1 = piVar1 + 9;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return (int *)0x0;
}

