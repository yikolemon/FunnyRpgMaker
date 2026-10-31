/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10167b81 */

int * FUN_10167b81(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(DAT_1039d74c + 0x26fc);
  if (iVar1 != 0) {
    piVar2 = (int *)(iVar1 + 4);
    do {
      if (*piVar2 == param_1) {
        return piVar2;
      }
      piVar2 = (int *)((int)piVar2 + piVar2[-1]);
    } while (piVar2 != (int *)(*(int *)(DAT_1039d74c + 0x26f4) + iVar1 + 4));
  }
  return (int *)0x0;
}

