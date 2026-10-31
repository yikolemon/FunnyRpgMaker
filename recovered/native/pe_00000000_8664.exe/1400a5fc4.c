/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a5fc4 */

void FUN_1400a5fc4(int param_1,ulonglong param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar1 = DAT_140f2a910;
  bVar4 = true;
  if ((param_3 >> 9 & 1) == 0) {
    if (*(int *)(DAT_140f2a910 + 0x220c) != *(int *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x1b0))
    {
      return;
    }
    if (*(int *)(DAT_140f2a910 + 0x2208) != *(int *)(DAT_140f2a910 + 0x1f9c)) {
      return;
    }
    if ((param_2 & 1) == 0) {
      bVar4 = (param_2 & 0x100000) != 0 || (*(uint *)(DAT_140f2a910 + 0x30) & 1) != 0;
    }
    else {
      bVar4 = false;
    }
  }
  lVar3 = DAT_140f2a910 + 0x22e8;
  iVar2 = *(int *)(DAT_140f2a910 + 0x22e0);
  if (iVar2 == -1) {
    if (*(int *)(DAT_140f2a910 + 0x21f8) == param_1) {
      if (*(int *)(DAT_140f2a910 + 0x22f0) != 0) {
        *(undefined1 *)(DAT_140f2a910 + 0x22a1) = 0;
        *(undefined1 *)(lVar1 + 0x2261) = *(undefined1 *)(lVar1 + 0x2262);
      }
    }
    else if (bVar4) {
LAB_1400a60d8:
      FUN_140090768(lVar3);
      return;
    }
  }
  else if (iVar2 == 0) {
    if (bVar4) {
      if (*(int *)(DAT_140f2a910 + 0x21f8) == param_1) {
        FUN_140090546(lVar3);
      }
      if (*(int *)(lVar1 + 0x2398) == 0) {
        lVar3 = lVar1 + 0x2390;
        goto LAB_1400a60d8;
      }
    }
  }
  else if (iVar2 == 1) {
    if (bVar4) {
      if (*(int *)(DAT_140f2a910 + 0x2398) == 0) {
        FUN_140090768(DAT_140f2a910 + 0x2390);
      }
      if ((0 < *(int *)(lVar1 + 0x22e4)) &&
         (iVar2 = *(int *)(lVar1 + 0x22e4) + -1, *(int *)(lVar1 + 0x22e4) = iVar2, iVar2 == 0)) {
        FUN_140090546(lVar3);
        return;
      }
    }
    if (*(int *)(lVar1 + 0x21f8) == param_1) {
      *(undefined4 *)(lVar1 + 0x22e4) = 1;
    }
  }
  return;
}

