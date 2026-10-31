/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14009454e */

void FUN_14009454e(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  lVar4 = DAT_140f2a910;
  iVar1 = *(int *)(DAT_140f2a910 + 0x2158);
  if ((0 < iVar1) && (iVar1 <= *(int *)(DAT_140f2a910 + 0x2148))) {
    uVar6 = iVar1 - 1;
    lVar2 = *(longlong *)(DAT_140f2a910 + 0x2150);
    if (*(int *)(*(longlong *)(DAT_140f2a910 + 0x2160) + (ulonglong)uVar6 * 0x38) ==
        *(int *)(lVar2 + (ulonglong)uVar6 * 0x38)) {
      uVar5 = (ulonglong)uVar6;
      while (uVar7 = uVar5, 0 < (int)uVar7) {
        lVar3 = *(longlong *)(lVar2 + 8 + uVar7 * 0x38);
        if ((lVar3 == 0) || ((*(byte *)(lVar3 + 0x17) & 0x10) == 0)) goto LAB_1400945d0;
        uVar5 = (ulonglong)((int)uVar7 - 1);
        lVar3 = *(longlong *)(lVar2 + 8 + uVar5 * 0x38);
        if ((lVar3 == 0) || ((*(byte *)(lVar3 + 0x15) & 4) != 0)) goto LAB_1400945d0;
      }
      uVar7 = 0;
LAB_1400945d0:
      if ((*(byte *)(DAT_140f2a910 + 0x2acc) & 8) != 0) {
        FUN_1400772a6("[popup] CloseCurrentPopup %d -> %d\n",uVar6,uVar7);
      }
      FUN_140094394(uVar7,1);
      if (*(longlong *)(lVar4 + 0x2200) != 0) {
        *(undefined1 *)(*(longlong *)(lVar4 + 0x2200) + 0x1b9) = 1;
      }
    }
  }
  return;
}

