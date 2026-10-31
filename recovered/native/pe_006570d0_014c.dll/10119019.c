/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10119019 */

void FUN_10119019(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    FUN_1011907b();
    return;
  }
  iVar1 = *(int *)(DAT_1039d74c + 0x1484);
  if (iVar1 != 0) {
    iVar2 = *(int *)(DAT_1039d74c + 0x148c);
    iVar3 = 0;
    do {
      if (*(int *)(*(int *)(iVar2 + iVar3) + 0x3c) == param_1) {
        FUN_1011907b(param_2);
      }
      iVar3 = iVar3 + 4;
    } while (iVar1 << 2 != iVar3);
  }
  return;
}

