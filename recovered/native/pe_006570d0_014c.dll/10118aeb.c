/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10118aeb */

int * FUN_10118aeb(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(DAT_1039d74c + 0x26f0);
  if (iVar1 != 0) {
    piVar2 = (int *)(iVar1 + 4);
    do {
      if ((*piVar2 == param_1) && (*(char *)((int)piVar2 + 0x21) != '\x01')) {
        return piVar2;
      }
      piVar2 = (int *)((int)piVar2 + piVar2[-1]);
    } while (piVar2 != (int *)(*(int *)(DAT_1039d74c + 0x26e8) + iVar1 + 4));
  }
  return (int *)0x0;
}

