/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012a4f7 */

void FUN_14012a4f7(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x90) + 8);
  lVar3 = *(longlong *)(lVar2 + 0x128);
  if (lVar3 == 0) {
    iVar1 = *(int *)(param_1 + 0x60);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x60);
    if (*(int *)(lVar3 + 0x20) == iVar1) {
      return;
    }
  }
  FUN_14012bcac(lVar2,iVar1,0);
  return;
}

