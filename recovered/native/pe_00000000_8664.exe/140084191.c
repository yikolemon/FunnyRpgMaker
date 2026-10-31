/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140084191 */

void FUN_140084191(void)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = DAT_140f2a910;
  iVar1 = *(int *)(DAT_140f2a910 + 0x1300);
  if ((longlong)iVar1 != 0) {
    uVar2 = *(uint *)(DAT_140f2a910 + 0x34);
    lVar3 = *(longlong *)(DAT_140f2a910 + 0x1308);
    lVar6 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar6);
      if (*(longlong *)(lVar4 + 0x2d8) == lVar5) {
        FUN_1400e15ba(lVar4,*(undefined4 *)(lVar5 + 4),(uVar2 & 0x10) >> 4);
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  return;
}

