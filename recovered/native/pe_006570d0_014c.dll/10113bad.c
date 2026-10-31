/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10113bad */

int __fastcall FUN_10113bad(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_3 >> 0xb & 1) == 0) {
    if ((param_3 >> 10 & 1) == 0) {
      if ((param_3 >> 0xc & 1) == 0) {
        return 0;
      }
      if ((short)param_3 < 0) {
        return 400;
      }
      if ((param_2 != 0) && (*(int *)(DAT_1039d74c + 0x1528) == param_2)) {
        return 300;
      }
      if ((param_3 >> 0xe & 1) != 0) {
        return 200;
      }
      return 1;
    }
    if ((param_2 != 0) && (*(int *)(DAT_1039d74c + 0x1528) == param_2)) {
      return 300;
    }
  }
  else {
    if ((param_2 != 0) && (*(int *)(DAT_1039d74c + 0x1528) == param_2)) {
      return 300;
    }
    if ((param_1 != 0) && (0 < *(int *)(DAT_1039d74c + 0x2068))) {
      iVar3 = -599;
      iVar2 = 199;
      do {
        if (*(int *)(*(int *)(DAT_1039d74c + 0x2070) + 0x12b8 + iVar3 * 8) == param_1) {
          if (-1 < (short)param_3) {
            return iVar2;
          }
          return -iVar3;
        }
        iVar2 = iVar2 + -1;
        iVar1 = iVar3 - *(int *)(DAT_1039d74c + 0x2068);
        iVar3 = iVar3 + 1;
      } while (iVar1 != -600);
    }
  }
  return 0;
}

