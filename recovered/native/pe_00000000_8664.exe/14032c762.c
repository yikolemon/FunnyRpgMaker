/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14032c762 */

void FUN_14032c762(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  lVar4 = DAT_14062a630;
  iVar1 = *(int *)(DAT_14062a630 + 0x2158);
  if ((0 < iVar1) && (iVar1 <= *(int *)(DAT_14062a630 + 0x2148))) {
    uVar6 = iVar1 - 1;
    lVar2 = *(longlong *)(DAT_14062a630 + 0x2150);
    if (*(int *)(*(longlong *)(DAT_14062a630 + 0x2160) + (ulonglong)uVar6 * 0x38) ==
        *(int *)(lVar2 + (ulonglong)uVar6 * 0x38)) {
      uVar5 = (ulonglong)uVar6;
      while (uVar7 = uVar5, 0 < (int)uVar7) {
        lVar3 = *(longlong *)(lVar2 + 8 + uVar7 * 0x38);
        if ((lVar3 == 0) || ((*(byte *)(lVar3 + 0x17) & 0x10) == 0)) goto LAB_14032c7e4;
        uVar5 = (ulonglong)((int)uVar7 - 1);
        lVar3 = *(longlong *)(lVar2 + 8 + uVar5 * 0x38);
        if ((lVar3 == 0) || ((*(byte *)(lVar3 + 0x15) & 4) != 0)) goto LAB_14032c7e4;
      }
      uVar7 = 0;
LAB_14032c7e4:
      if ((*(byte *)(DAT_14062a630 + 0x2acc) & 8) != 0) {
        FUN_14030f4ba(&DAT_14058e4fc,uVar6,uVar7);
      }
      FUN_14032c5a8(uVar7,1);
      if (*(longlong *)(lVar4 + 0x2200) != 0) {
        *(undefined1 *)(*(longlong *)(lVar4 + 0x2200) + 0x1b9) = 1;
      }
    }
  }
  return;
}

