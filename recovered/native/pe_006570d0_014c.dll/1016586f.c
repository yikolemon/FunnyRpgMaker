/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016586f */

void FUN_1016586f(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x40);
  if (0 < iVar2) {
    iVar3 = 0;
    iVar4 = 0x70;
    do {
      iVar1 = *(int *)(param_1 + 0x10);
      if ((*(char *)(iVar1 + -10 + iVar4) != '\0') || ((*(byte *)(iVar1 + -0x70 + iVar4) & 8) != 0))
      {
        *(undefined2 *)(iVar1 + -1 + iVar4) = 0x102;
        iVar2 = *(int *)(param_1 + 0x40);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x74;
    } while (iVar3 < iVar2);
  }
  return;
}

