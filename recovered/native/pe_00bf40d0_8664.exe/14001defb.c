/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001defb */

void FUN_14001defb(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x90) + 8);
  lVar2 = *(longlong *)(lVar1 + 0x128);
  if (lVar2 == 0) {
    iVar3 = *(int *)(param_1 + 0x60);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x60);
    if (*(int *)(lVar2 + 0x20) == iVar3) {
      return;
    }
  }
  FUN_14001f633(lVar1,iVar3,(longlong *)0x0);
  return;
}

