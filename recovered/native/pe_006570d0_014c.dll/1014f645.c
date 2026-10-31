/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014f645 */

int * FUN_1014f645(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if ((param_2 != 0) && (iVar1 = *(int *)(param_1 + 4), 0 < iVar1)) {
    piVar2 = *(int **)(param_1 + 0xc);
    do {
      if (*piVar2 == param_2) {
        return piVar2;
      }
      piVar2 = piVar2 + 0xc;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return (int *)0x0;
}

