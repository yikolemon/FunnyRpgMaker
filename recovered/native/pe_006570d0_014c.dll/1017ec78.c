/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017ec78 */

int __thiscall FUN_1017ec78(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_1;
  iVar3 = *(int *)(iVar1 + 4);
  iVar2 = iVar1;
  if (*(char *)(iVar3 + 0xd) == '\0') {
    do {
      if (*param_2 <= *(int *)(iVar3 + 0x10)) {
        iVar2 = iVar3;
      }
      iVar3 = *(int *)(iVar3 + (uint)(*(int *)(iVar3 + 0x10) < *param_2) * 8);
    } while (*(char *)(iVar3 + 0xd) == '\0');
  }
  if ((*(char *)(iVar2 + 0xd) != '\0') || (*param_2 < *(int *)(iVar2 + 0x10))) {
    iVar2 = iVar1;
  }
  return iVar2;
}

