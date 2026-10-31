/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012712e */

void __fastcall FUN_1012712e(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_1039d74c;
  bVar2 = true;
  if ((param_3 & 0x200) == 0) {
    if (*(int *)(DAT_1039d74c + 0x2050) != *(int *)(*(int *)(DAT_1039d74c + 0x14cc) + 0x19c)) {
      return;
    }
    if (*(int *)(DAT_1039d74c + 0x204c) != *(int *)(DAT_1039d74c + 0x1e3c)) {
      return;
    }
    if ((param_2 & 1) == 0) {
      bVar2 = (param_2 & 0x100000) != 0 || (*(uint *)(DAT_1039d74c + 0x30) & 1) != 0;
    }
    else {
      bVar2 = false;
    }
  }
  iVar1 = DAT_1039d74c + 0x2120;
  iVar4 = *(int *)(DAT_1039d74c + 0x2118);
  if (iVar4 == -1) {
    if (*(int *)(DAT_1039d74c + 0x2044) == param_1) {
      if (*(int *)(DAT_1039d74c + 0x2124) != 0) {
        *(undefined1 *)(DAT_1039d74c + 0x20d9) = 0;
        *(undefined1 *)(iVar3 + 0x2099) = *(undefined1 *)(iVar3 + 0x209a);
      }
    }
    else if (bVar2) {
LAB_10127237:
      FUN_10112734();
      return;
    }
  }
  else if (iVar4 == 0) {
    if (bVar2) {
      if (*(int *)(DAT_1039d74c + 0x2044) == param_1) {
        FUN_10112545(iVar1);
      }
      if (*(int *)(iVar3 + 0x21cc) == 0) goto LAB_10127237;
    }
  }
  else if (iVar4 == 1) {
    if (bVar2) {
      if (*(int *)(DAT_1039d74c + 0x21cc) == 0) {
        FUN_10112734();
      }
      if ((0 < *(int *)(iVar3 + 0x211c)) &&
         (iVar4 = *(int *)(iVar3 + 0x211c) + -1, *(int *)(iVar3 + 0x211c) = iVar4, iVar4 == 0)) {
        FUN_10112545(iVar1);
        return;
      }
    }
    if (*(int *)(iVar3 + 0x2044) == param_1) {
      *(undefined4 *)(iVar3 + 0x211c) = 1;
    }
  }
  return;
}

