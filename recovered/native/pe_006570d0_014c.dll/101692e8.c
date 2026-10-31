/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101692e8 */

void FUN_101692e8(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
  iVar2 = *(int *)(iVar1 + 0x1e8);
  if (*(int *)(iVar2 + 0x10) != 1) {
    uVar3 = *(undefined4 *)(iVar1 + 0x290);
    uVar4 = *(undefined4 *)(iVar1 + 0x294);
    uVar5 = *(undefined4 *)(iVar1 + 0x298);
    *(undefined4 *)(iVar2 + 0x3c) = *(undefined4 *)(iVar1 + 0x28c);
    *(undefined4 *)(iVar2 + 0x40) = uVar3;
    *(undefined4 *)(iVar2 + 0x44) = uVar4;
    *(undefined4 *)(iVar2 + 0x48) = uVar5;
    FUN_101655b6(iVar1,iVar2 + 0x2c);
    FUN_1018de6c(*(undefined4 *)(iVar1 + 0x2e8),0);
  }
  return;
}

