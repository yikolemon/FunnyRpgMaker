/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012b652 */

undefined4 __fastcall FUN_1012b652(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(DAT_1039d74c + 0x221c) == 0) {
    iVar3 = *(int *)(DAT_1039d74c + 0x2048);
    if ((iVar3 != 0) && (*(int *)(param_2 + 0x98) == *param_1)) {
      while (iVar3 = *(int *)(iVar3 + 0x3a8), (*(byte *)(iVar3 + 0xf) & 0x10) != 0) {
        iVar3 = *(int *)(iVar3 + 0x3a0);
      }
      iVar1 = *(int *)(iVar3 + 0x434);
      if (*(int *)(iVar3 + 0x434) != 0) goto LAB_1012b6b1;
      for (; iVar1 = *(int *)(iVar3 + 0x430), *(int *)(iVar3 + 0x430) != 0;
          iVar3 = *(int *)(*(int *)(iVar3 + 0x78) + 0x3a8)) {
LAB_1012b6b1:
        do {
          iVar3 = iVar1;
          iVar1 = *(int *)(iVar3 + 0x18);
        } while (*(int *)(iVar3 + 0x18) != 0);
        if (iVar3 == param_2) {
          return CONCAT31((int3)((uint)iVar3 >> 8),1);
        }
        if (*(int *)(iVar3 + 0x78) == 0) break;
      }
    }
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT31((int3)((uint)DAT_1039d74c >> 8),
                     *(int **)(*(int *)(DAT_1039d74c + 0x221c) + 0x430) == param_1);
  }
  return uVar2;
}

