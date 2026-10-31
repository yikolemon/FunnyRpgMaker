/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010400a */

int FUN_1010400a(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  iVar1 = *(int *)(DAT_1039d74c + 0x1fbc);
  if (0 < iVar1) {
    uVar2 = iVar1 + 1;
    piVar3 = (int *)(*(int *)(DAT_1039d74c + 0x1fc4) + iVar1 * 0x28 + -0x24);
    do {
      iVar1 = *piVar3;
      if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0xf) & 8) != 0)) {
        return iVar1;
      }
      uVar2 = uVar2 - 1;
      piVar3 = piVar3 + -10;
    } while (1 < uVar2);
  }
  return 0;
}

