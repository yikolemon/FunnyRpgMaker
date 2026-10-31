/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018d6d0 */

void __fastcall FUN_1018d6d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 4);
  iVar1 = *(int *)(iVar4 + 0x10);
  *(int *)(iVar4 + 0x10) = iVar4;
  *(int *)(iVar4 + 0x14) = iVar4;
  iVar3 = iVar4;
  if (iVar1 != *(int *)(param_1 + 4)) {
    do {
      iVar4 = iVar1;
      iVar1 = *(int *)(iVar4 + 0x10);
      *(int *)(iVar4 + 0x10) = iVar3;
      *(int *)(iVar3 + 0x14) = iVar4;
      *(int *)(*(int *)(param_1 + 4) + 0x10) = iVar4;
      iVar2 = *(int *)(param_1 + 4);
      *(int *)(iVar4 + 0x14) = iVar2;
      iVar3 = iVar4;
    } while (iVar1 != iVar2);
  }
  *(int *)(param_1 + 4) = iVar4;
  return;
}

