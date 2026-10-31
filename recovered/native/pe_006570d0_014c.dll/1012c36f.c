/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012c36f */

int * __fastcall FUN_1012c36f(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x26b4);
  if (0 < iVar2) {
    piVar1 = *(int **)(param_1 + 0x26bc);
    do {
      if (*piVar1 == param_2) {
        return piVar1;
      }
      piVar1 = piVar1 + 9;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return (int *)0x0;
}

