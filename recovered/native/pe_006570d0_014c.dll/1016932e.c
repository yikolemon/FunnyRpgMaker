/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016932e */

void FUN_1016932e(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
  iVar2 = *(int *)(iVar1 + 0x1e8);
  if (*(int *)(iVar2 + 0x10) != 1) {
    FUN_101655b6(iVar1,iVar2 + 0x3c);
    FUN_1018de6c(*(undefined4 *)(iVar1 + 0x2e8),*(int *)(iVar2 + 0xc) + 1);
  }
  return;
}

