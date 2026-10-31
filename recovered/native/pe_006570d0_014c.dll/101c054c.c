/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c054c */

void FUN_101c054c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 4);
    iVar2 = *(int *)(param_1 + 0x14);
    if (iVar1 != 0) {
      iVar3 = 0;
      do {
        FUN_101c0017(param_2,*(undefined4 *)(iVar2 + iVar3 * 4));
        *(undefined4 *)(iVar2 + iVar3 * 4) = 0;
        iVar3 = iVar3 + 1;
      } while (iVar1 != iVar3);
      iVar2 = *(int *)(param_1 + 0x14);
    }
    FUN_101c0017(param_2,iVar2);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}

