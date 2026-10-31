/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140114e0a */

int * FUN_140114e0a(int param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *(longlong *)(DAT_140f2a910 + 0x29b0);
  if (lVar1 != 0) {
    piVar2 = (int *)(lVar1 + 4);
    do {
      if (*piVar2 == param_1) {
        return piVar2;
      }
      piVar2 = (int *)((longlong)piVar2 + (longlong)piVar2[-1]);
    } while (piVar2 != (int *)(*(int *)(DAT_140f2a910 + 0x29a8) + lVar1 + 4));
  }
  return (int *)0x0;
}

