/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c17ac */

void __fastcall FUN_101c17ac(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0x60) + 4);
  iVar2 = *(int *)(iVar1 + 0x9c);
  if (iVar2 == 0) {
    iVar3 = *(int *)(param_1 + 0x48);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x48);
    if (*(int *)(iVar2 + 0x10) == iVar3) {
      return;
    }
  }
  FUN_101c2d85(iVar1,iVar3,0);
  return;
}

