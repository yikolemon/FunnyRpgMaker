/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017de20 */

undefined4 __thiscall FUN_1017de20(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  iVar3 = *(int *)(iVar2 + 4);
  if (*(char *)(iVar3 + 0xd) == '\0') {
    do {
      if (*param_2 <= *(int *)(iVar3 + 0x10)) {
        iVar2 = iVar3;
      }
      iVar3 = *(int *)(iVar3 + (uint)(*(int *)(iVar3 + 0x10) < *param_2) * 8);
    } while (*(char *)(iVar3 + 0xd) == '\0');
  }
  if (*(char *)(iVar2 + 0xd) == '\0') {
    uVar1 = CONCAT31((int3)((uint)*param_2 >> 8),*(int *)(iVar2 + 0x10) <= *param_2);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

