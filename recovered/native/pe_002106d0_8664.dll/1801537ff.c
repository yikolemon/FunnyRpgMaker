/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801537ff */

int * FUN_1801537ff(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (lVar2 = (longlong)*(int *)(param_1 + 8), 0 < lVar2)) {
    piVar1 = *(int **)(param_1 + 0x10);
    do {
      if (*piVar1 == param_2) {
        return piVar1;
      }
      piVar1 = piVar1 + 0xe;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return (int *)0x0;
}

