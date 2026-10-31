/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d39b9 */

void FUN_1400d39b9(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_140081211();
  iVar1 = *(int *)(lVar2 + 0x150);
  if (1 < iVar1) {
    lVar3 = 1;
    do {
      if (*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x158) + lVar3 * 8) + 0x48) != 0) {
        FUN_1400d3de1();
        iVar1 = *(int *)(lVar2 + 0x150);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
  }
  return;
}

