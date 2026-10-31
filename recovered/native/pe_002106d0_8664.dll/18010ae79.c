/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18010ae79 */

void FUN_18010ae79(void)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = DAT_180419160;
  iVar1 = *(int *)(DAT_180419160 + 0x1300);
  if ((longlong)iVar1 != 0) {
    uVar2 = *(uint *)(DAT_180419160 + 0x34);
    lVar3 = *(longlong *)(DAT_180419160 + 0x1308);
    lVar6 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar6);
      if (*(longlong *)(lVar4 + 0x2d8) == lVar5) {
        FUN_180196046(lVar4,*(undefined4 *)(lVar5 + 4),(uVar2 & 0x10) >> 4);
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  return;
}

