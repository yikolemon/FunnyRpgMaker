/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011b292 */

void FUN_18011b292(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  lVar4 = DAT_180419160;
  iVar1 = *(int *)(DAT_180419160 + 0x2158);
  if ((0 < iVar1) && (iVar1 <= *(int *)(DAT_180419160 + 0x2148))) {
    uVar6 = iVar1 - 1;
    lVar2 = *(longlong *)(DAT_180419160 + 0x2150);
    if (*(int *)(*(longlong *)(DAT_180419160 + 0x2160) + (ulonglong)uVar6 * 0x38) ==
        *(int *)(lVar2 + (ulonglong)uVar6 * 0x38)) {
      uVar5 = (ulonglong)uVar6;
      while (uVar7 = uVar5, 0 < (int)uVar7) {
        lVar3 = *(longlong *)(lVar2 + 8 + uVar7 * 0x38);
        if ((lVar3 == 0) || ((*(byte *)(lVar3 + 0x17) & 0x10) == 0)) goto LAB_18011b314;
        uVar5 = (ulonglong)((int)uVar7 - 1);
        lVar3 = *(longlong *)(lVar2 + 8 + uVar5 * 0x38);
        if ((lVar3 == 0) || ((*(byte *)(lVar3 + 0x15) & 4) != 0)) goto LAB_18011b314;
      }
      uVar7 = 0;
LAB_18011b314:
      if ((*(byte *)(DAT_180419160 + 0x2acc) & 8) != 0) {
        FUN_1800fdfea("[popup] CloseCurrentPopup %d -> %d\n",uVar6,uVar7);
      }
      FUN_18011b0d8(uVar7,1);
      if (*(longlong *)(lVar4 + 0x2200) != 0) {
        *(undefined1 *)(*(longlong *)(lVar4 + 0x2200) + 0x1b9) = 1;
      }
    }
  }
  return;
}

