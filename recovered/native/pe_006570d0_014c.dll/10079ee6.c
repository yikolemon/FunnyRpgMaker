/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10079ee6 */

int __thiscall FUN_10079ee6(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = *(int *)(iVar1 + 4);
  if (*(char *)(iVar2 + 0xd) == '\0') {
    do {
      if (*param_2 <= *(int *)(iVar2 + 0x10)) {
        iVar1 = iVar2;
      }
      iVar2 = *(int *)(iVar2 + (uint)(*(int *)(iVar2 + 0x10) < *param_2) * 8);
    } while (*(char *)(iVar2 + 0xd) == '\0');
  }
  if ((*(char *)(iVar1 + 0xd) == '\0') && (*(int *)(iVar1 + 0x10) <= *param_2)) {
    return iVar1 + 0x14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102284b0("invalid map<K, T> key");
}

