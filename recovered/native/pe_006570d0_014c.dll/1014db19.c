/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014db19 */

undefined4 FUN_1014db19(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(DAT_1039d74c + 0x1fc8);
  if ((((iVar1 < *(int *)(DAT_1039d74c + 0x1fbc)) &&
       (iVar2 = *(int *)(DAT_1039d74c + 0x14cc), (*(byte *)(iVar2 + 0xf) & 0x10) == 0)) &&
      (*(int *)(iVar2 + 0x19c) == *(int *)(*(int *)(DAT_1039d74c + 0x1fc4) + 0xc + iVar1 * 0x28)))
     && ((iVar1 = *(int *)(*(int *)(DAT_1039d74c + 0x1fc4) + iVar1 * 0x28 + 4), iVar1 != 0 &&
         ((*(byte *)(iVar1 + 0xf) & 0x10) != 0)))) {
    uVar3 = FUN_10111ac1(iVar1,iVar2,1,0);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

