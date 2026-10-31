/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010ad03 */

int * FUN_1010ad03(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(DAT_1039d74c + 0x1fe0) != 0) {
    iVar2 = 0;
    do {
      piVar1 = *(int **)(*(int *)(DAT_1039d74c + 0x1fe8) + iVar2);
      if (*piVar1 == param_1) {
        return piVar1;
      }
      iVar2 = iVar2 + 4;
    } while (*(int *)(DAT_1039d74c + 0x1fe0) << 2 != iVar2);
  }
  return (int *)0x0;
}

