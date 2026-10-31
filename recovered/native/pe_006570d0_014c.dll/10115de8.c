/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10115de8 */

int FUN_10115de8(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  
  iVar1 = *(int *)(DAT_1039d74c + 0x1fbc);
  if (0 < iVar1) {
    uVar4 = iVar1 + 1;
    piVar3 = (int *)(*(int *)(DAT_1039d74c + 0x1fc4) + iVar1 * 0x28 + -0x24);
    do {
      iVar1 = *piVar3;
      if (((iVar1 != 0) && ((*(byte *)(iVar1 + 0xf) & 8) != 0)) &&
         (cVar2 = FUN_1010a68d(), cVar2 != '\0')) {
        return iVar1;
      }
      uVar4 = uVar4 - 1;
      piVar3 = piVar3 + -10;
    } while (1 < uVar4);
  }
  return 0;
}

