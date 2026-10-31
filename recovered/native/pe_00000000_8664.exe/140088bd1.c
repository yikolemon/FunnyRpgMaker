/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140088bd1 */

int * FUN_140088bd1(int param_1)

{
  int *piVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(DAT_140f2a910 + 0x2178) != 0) {
    lVar2 = 0;
    do {
      piVar1 = *(int **)(*(longlong *)(DAT_140f2a910 + 0x2180) + lVar2);
      if (*piVar1 == param_1) {
        return piVar1;
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)*(int *)(DAT_140f2a910 + 0x2178) * 8 != lVar2);
  }
  return (int *)0x0;
}

