/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10115e32 */

int FUN_10115e32(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  
  iVar1 = *(int *)(DAT_1039d74c + 0x1fbc);
  if (0 < iVar1) {
    iVar2 = *(int *)(DAT_1039d74c + 0x1fc4);
    iVar5 = 0;
    do {
      iVar3 = *(int *)(iVar2 + 4 + iVar5);
      if (((iVar3 != 0) && ((*(byte *)(iVar3 + 0xf) & 8) != 0)) &&
         ((*(char *)(iVar3 + 0xf9) != '\0' || (*(char *)(iVar3 + 0xfa) == '\x01')))) {
        if (param_1 == 0) {
          return iVar3;
        }
        cVar4 = FUN_101029f7(param_1,iVar3);
        if (cVar4 == '\0') {
          return iVar3;
        }
      }
      iVar5 = iVar5 + 0x28;
    } while (iVar1 * 0x28 != iVar5);
  }
  return 0;
}

