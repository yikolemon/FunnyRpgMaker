/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c7114 */

void FUN_1801c7114(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_180107ef9();
  iVar1 = *(int *)(lVar2 + 0x150);
  if (1 < iVar1) {
    lVar3 = 1;
    do {
      if (*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x158) + lVar3 * 8) + 0x48) == 0) {
        FUN_1801c7578();
        iVar1 = *(int *)(lVar2 + 0x150);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
  }
  return;
}

