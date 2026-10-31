/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014f66e */

int FUN_1014f66e(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 < 1) {
    iVar1 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0xc);
    iVar1 = 0;
    do {
      if ((((iVar1 == 0) || (*(int *)(iVar1 + 0x10) < *(int *)(iVar3 + 0x10))) &&
          (*(int *)(iVar3 + 8) != 0)) && (*(char *)(*(int *)(iVar3 + 8) + 0xfa) != '\0')) {
        iVar1 = iVar3;
      }
      iVar3 = iVar3 + 0x30;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return iVar1;
}

