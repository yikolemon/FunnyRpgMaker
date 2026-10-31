/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180132687 */

int * FUN_180132687(longlong param_1,int param_2)

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

