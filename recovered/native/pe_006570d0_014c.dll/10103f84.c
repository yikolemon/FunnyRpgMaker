/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10103f84 */

int FUN_10103f84(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  
  if ((param_2 >> 10 & 1) == 0) {
    if ((param_2 >> 0xb & 1) == 0) {
      if (*(int *)(DAT_1039d74c + 0x1fc8) < *(int *)(DAT_1039d74c + 0x1fbc)) {
        return CONCAT31((int3)((uint)*(int *)(DAT_1039d74c + 0x1fc4) >> 8),
                        *(int *)(*(int *)(DAT_1039d74c + 0x1fc4) +
                                *(int *)(DAT_1039d74c + 0x1fc8) * 0x28) == param_1);
      }
    }
    else {
      iVar2 = 0;
      if (*(int *)(DAT_1039d74c + 0x1fbc) != 0) {
        iVar1 = DAT_1039d74c;
        do {
          bVar3 = *(int *)(*(int *)(DAT_1039d74c + 0x1fc4) + iVar2) == param_1;
          iVar1 = CONCAT31((int3)((uint)iVar1 >> 8),bVar3);
          if (bVar3) {
            return iVar1;
          }
          bVar3 = *(int *)(DAT_1039d74c + 0x1fbc) * 0x28 + -0x28 != iVar2;
          iVar2 = iVar2 + 0x28;
        } while (bVar3);
        return iVar1;
      }
    }
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(DAT_1039d74c + 0x1fbc);
    if ((param_2 >> 0xb & 1) == 0) {
      iVar1 = *(int *)(DAT_1039d74c + 0x1fc8);
      bVar4 = SBORROW4(iVar2,iVar1);
      bVar3 = iVar2 == iVar1;
      iVar2 = iVar2 - iVar1;
    }
    else {
      bVar4 = false;
      bVar3 = iVar2 == 0;
    }
    iVar2 = CONCAT31((int3)((uint)DAT_1039d74c >> 8),!bVar3 && bVar4 == iVar2 < 0);
  }
  return iVar2;
}

