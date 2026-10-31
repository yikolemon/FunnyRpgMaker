/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140081f3e */

longlong FUN_140081f3e(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  
  if ((param_2 >> 10 & 1) != 0) {
    iVar2 = *(int *)(DAT_140f2a910 + 0x2148);
    if ((param_2 >> 0xb & 1) == 0) {
      iVar1 = *(int *)(DAT_140f2a910 + 0x2158);
      bVar6 = SBORROW4(iVar2,iVar1);
      bVar5 = iVar2 == iVar1;
      iVar2 = iVar2 - iVar1;
    }
    else {
      bVar6 = false;
      bVar5 = iVar2 == 0;
    }
    return CONCAT71((int7)((ulonglong)DAT_140f2a910 >> 8),!bVar5 && bVar6 == iVar2 < 0);
  }
  if ((param_2 >> 0xb & 1) == 0) {
    if (*(int *)(DAT_140f2a910 + 0x2148) <= *(int *)(DAT_140f2a910 + 0x2158)) {
      return 0;
    }
    lVar3 = CONCAT71((int7)((ulonglong)*(longlong *)(DAT_140f2a910 + 0x2150) >> 8),
                     *(int *)(*(longlong *)(DAT_140f2a910 + 0x2150) +
                             (longlong)*(int *)(DAT_140f2a910 + 0x2158) * 0x38) == param_1);
  }
  else {
    if ((longlong)*(int *)(DAT_140f2a910 + 0x2148) == 0) {
      return 0;
    }
    lVar4 = 0;
    lVar3 = DAT_140f2a910;
    do {
      bVar5 = *(int *)(*(longlong *)(DAT_140f2a910 + 0x2150) + lVar4) == param_1;
      lVar3 = CONCAT71((int7)((ulonglong)lVar3 >> 8),bVar5);
      if (bVar5) {
        return lVar3;
      }
      bVar5 = (longlong)*(int *)(DAT_140f2a910 + 0x2148) * 0x38 + -0x38 != lVar4;
      lVar4 = lVar4 + 0x38;
    } while (bVar5);
  }
  return lVar3;
}

