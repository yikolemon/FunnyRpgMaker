/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041dd9c */

void __fastcall FUN_0041dd9c(int param_1)

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
  FUN_0041f302(iVar1,iVar3,(int *)0x0);
  return;
}

