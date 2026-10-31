/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101bdca4 */

void FUN_101bdca4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_1010331e();
  iVar3 = *(int *)(iVar2 + 0xb4);
  if (1 < iVar3) {
    iVar4 = 1;
    do {
      iVar1 = *(int *)(*(int *)(iVar2 + 0xbc) + iVar4 * 4);
      if (*(int *)(iVar1 + 0x40) == 0) {
        FUN_101be007(iVar1);
        iVar3 = *(int *)(iVar2 + 0xb4);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  return;
}

