/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10112095 */

undefined1 FUN_10112095(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  bool bVar3;
  
  uVar1 = 1;
  if (*(int *)(DAT_1039d74c + 0x204c) != param_1) {
    iVar2 = 0;
    if (*(int *)(DAT_1039d74c + 0x2068) == 0) {
      uVar1 = 0;
    }
    else {
      do {
        if (*(int *)(*(int *)(DAT_1039d74c + 0x2070) + iVar2) == param_1) {
          return 1;
        }
        bVar3 = *(int *)(DAT_1039d74c + 0x2068) * 8 + -8 != iVar2;
        iVar2 = iVar2 + 8;
        uVar1 = 0;
      } while (bVar3);
    }
  }
  return uVar1;
}

