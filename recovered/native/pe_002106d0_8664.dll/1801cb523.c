/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cb523 */

void FUN_1801cb523(longlong param_1)

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
  FUN_1801cccd8(lVar2,iVar1,0);
  return;
}

