/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101658a9 */

void FUN_101658a9(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
  iVar2 = *(int *)(DAT_1039d74c + 0x2308);
  uVar3 = *(undefined4 *)(iVar1 + 0x290);
  uVar4 = *(undefined4 *)(iVar1 + 0x294);
  uVar5 = *(undefined4 *)(iVar1 + 0x298);
  *(undefined4 *)(iVar2 + 0x144) = *(undefined4 *)(iVar1 + 0x28c);
  *(undefined4 *)(iVar2 + 0x148) = uVar3;
  *(undefined4 *)(iVar2 + 0x14c) = uVar4;
  *(undefined4 *)(iVar2 + 0x150) = uVar5;
  FUN_101655b6(iVar1,iVar2 + 0x124);
  FUN_1018de6c(*(undefined4 *)(iVar1 + 0x2e8),*(undefined2 *)(iVar2 + 0x1e8));
  return;
}

