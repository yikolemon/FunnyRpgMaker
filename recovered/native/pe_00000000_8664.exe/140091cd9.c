/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140091cd9 */

int FUN_140091cd9(int param_1,int param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  
  if ((param_3 >> 0xb & 1) == 0) {
    if ((param_3 >> 10 & 1) == 0) {
      if ((param_3 >> 0xc & 1) == 0) {
        return 0;
      }
      iVar1 = 400;
      if ((-1 < (short)param_3) &&
         ((param_2 == 0 || (iVar1 = 300, *(int *)(DAT_140f2a910 + 0x167c) != param_2)))) {
        iVar1 = 200;
        if ((param_3 >> 0xe & 1) == 0) {
          iVar1 = 1;
        }
        return iVar1;
      }
    }
    else {
      if (param_2 == 0) {
        return 0;
      }
      iVar1 = 300;
      if (*(int *)(DAT_140f2a910 + 0x167c) != param_2) {
        return 0;
      }
    }
  }
  else if ((((param_2 == 0) || (iVar1 = 300, *(int *)(DAT_140f2a910 + 0x167c) != param_2)) &&
           (iVar1 = 0, param_1 != 0)) && (0 < (longlong)*(int *)(DAT_140f2a910 + 0x2228))) {
    lVar2 = 0;
    do {
      if (*(int *)(*(longlong *)(DAT_140f2a910 + 0x2230) + lVar2 * 8) == param_1) {
        if ((short)param_3 < 0) {
          iVar1 = 599;
        }
        else {
          iVar1 = 199;
        }
        return iVar1 - (int)lVar2;
      }
      lVar2 = lVar2 + 1;
    } while (*(int *)(DAT_140f2a910 + 0x2228) != lVar2);
    return 0;
  }
  return iVar1;
}

