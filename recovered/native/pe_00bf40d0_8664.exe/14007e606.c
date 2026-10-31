/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007e606 */

bool FUN_14007e606(longlong param_1,int param_2,int param_3,uint param_4,int param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    return false;
  }
  if (*(char *)(param_1 + 0xc) == -1) {
    iVar5 = 0;
    if ((((param_5 < param_3) || (iVar5 = 0, param_3 < 1)) ||
        ((int)param_4 <= param_2 || param_2 < 0)) ||
       (iVar5 = 1, *(char *)(param_1 + 0xc + (longlong)(int)-param_4 * 0x10) != '\0')) {
      iVar6 = param_3 + 1;
      if (iVar6 < param_5 && (-2 < param_3 && ((int)param_4 > param_2 && param_2 >= 0))) {
        if (*(char *)(param_1 + 0xc + (ulonglong)param_4 * 0x10) == '\0') {
          return true;
        }
        iVar5 = iVar5 + 1;
      }
      bVar4 = 0 < param_2;
      bVar3 = param_2 <= (int)param_4;
      if (param_3 < param_5 && (-1 < param_3 && (bVar3 && bVar4))) {
        if (*(char *)(param_1 + -4) == '\0') {
          return true;
        }
        iVar5 = iVar5 + 1;
      }
      bVar2 = -2 < param_2;
      bVar1 = param_2 + 1 < (int)param_4;
      if (((bVar1 && bVar2) && -1 < param_3) && param_3 < param_5) {
        if (*(char *)(param_1 + 0x1c) == '\0') {
          return true;
        }
        iVar5 = iVar5 + 1;
      }
      if ((param_3 <= param_5) && (0 < param_3 && (bVar3 && bVar4))) {
        if (*(char *)(param_1 + -4 + (longlong)(int)-param_4 * 0x10) == '\0') {
          return true;
        }
        iVar5 = iVar5 + 1;
      }
      if ((param_3 <= param_5) && (0 < param_3 && (bVar1 && bVar2))) {
        if (*(char *)(param_1 + 0x1c + (longlong)(int)-param_4 * 0x10) == '\0') {
          return true;
        }
        iVar5 = iVar5 + 1;
      }
      if ((-2 < param_3 && (bVar3 && bVar4)) && iVar6 < param_5) {
        if (*(char *)(param_1 + -4 + (ulonglong)param_4 * 0x10) == '\0') {
          return true;
        }
        iVar5 = iVar5 + 1;
      }
      if ((-2 < param_3 && (bVar1 && bVar2)) && iVar6 < param_5) {
        if (*(char *)(param_1 + 0x1c + (ulonglong)param_4 * 0x10) == '\0') {
          return true;
        }
        iVar5 = iVar5 + 1;
      }
      return iVar5 != 8;
    }
  }
  return true;
}

