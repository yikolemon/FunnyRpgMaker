/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010befd */

undefined4 FUN_1010befd(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(DAT_1039d74c + 0x1528);
  if (((iVar1 == 0) || (iVar1 != *(int *)(DAT_1039d74c + 0x1e80))) ||
     (uVar2 = 1, *(int *)(DAT_1039d74c + 0x1550) == iVar1)) {
    uVar2 = 0;
  }
  return uVar2;
}

