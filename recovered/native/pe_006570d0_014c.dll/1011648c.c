/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011648c */

void FUN_1011648c(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar4 = DAT_1039d74c;
  iVar3 = *(int *)(DAT_1039d74c + 0x1fc8);
  if ((0 < iVar3) && (iVar3 <= *(int *)(DAT_1039d74c + 0x1fbc))) {
    iVar1 = iVar3 + -1;
    if (*(int *)(*(int *)(DAT_1039d74c + 0x1fd0) + iVar1 * 0x28) ==
        *(int *)(*(int *)(DAT_1039d74c + 0x1fc4) + iVar1 * 0x28)) {
      piVar5 = (int *)(*(int *)(DAT_1039d74c + 0x1fc4) + iVar3 * 0x28 + -0x24);
      iVar3 = iVar1;
      while (iVar6 = iVar3, 0 < iVar6) {
        if (((*piVar5 == 0) || ((*(byte *)(*piVar5 + 0xf) & 0x10) == 0)) ||
           (piVar2 = piVar5 + -10, *piVar2 == 0)) goto LAB_10116504;
        piVar5 = piVar5 + -10;
        iVar3 = iVar6 + -1;
        if ((*(byte *)(*piVar2 + 0xd) & 4) != 0) goto LAB_10116504;
      }
      iVar6 = 0;
LAB_10116504:
      if ((*(byte *)(DAT_1039d74c + 0x27b4) & 8) != 0) {
        FUN_100f99e6("[popup] CloseCurrentPopup %d -> %d\n",iVar1,iVar6);
      }
      FUN_1011630c(iVar6,1);
      if (*(int *)(iVar4 + 0x2048) != 0) {
        *(undefined1 *)(*(int *)(iVar4 + 0x2048) + 0x1a5) = 1;
      }
    }
  }
  return;
}

