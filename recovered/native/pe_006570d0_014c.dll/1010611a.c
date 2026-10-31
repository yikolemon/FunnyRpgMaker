/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010611a */

void FUN_1010611a(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = DAT_1039d74c;
  iVar1 = *(int *)(DAT_1039d74c + 0x1214);
  if (iVar1 != 0) {
    uVar2 = *(uint *)(DAT_1039d74c + 0x34);
    iVar3 = *(int *)(DAT_1039d74c + 0x121c);
    iVar6 = 0;
    do {
      iVar4 = *(int *)(iVar3 + iVar6);
      if (*(int *)(iVar4 + 0x2a8) == iVar5) {
        FUN_1018e8ad(iVar4,*(undefined4 *)(iVar5 + 4),(uVar2 & 0x10) >> 4);
      }
      iVar6 = iVar6 + 4;
    } while (iVar1 << 2 != iVar6);
  }
  return;
}

