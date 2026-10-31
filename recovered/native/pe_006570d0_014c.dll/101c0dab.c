/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c0dab */

int * FUN_101c0dab(int param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((param_2 != (char *)0x0 && param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x10), iVar1 != 0)) {
    puVar4 = (undefined4 *)(param_1 + 0x14);
    do {
      piVar2 = (int *)*puVar4;
      iVar3 = _strcmp(*(char **)(*piVar2 + 8),param_2);
      if (iVar3 == 0) {
        return piVar2;
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 < (undefined4 *)(param_1 + iVar1 * 4 + 0x14));
  }
  return (int *)0x0;
}

