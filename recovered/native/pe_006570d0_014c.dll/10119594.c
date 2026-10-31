/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10119594 */

void FUN_10119594(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(DAT_1039d74c + 0x1fe0);
  if (iVar1 != 0) {
    iVar2 = *(int *)(DAT_1039d74c + 0x1fe8);
    iVar3 = 0;
    do {
      FUN_10119462(*(undefined4 *)(iVar2 + iVar3));
      iVar3 = iVar3 + 4;
    } while (iVar1 << 2 != iVar3);
  }
  return;
}

