/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016593a */

void FUN_1016593a(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(byte *)(*(int *)(DAT_1039d74c + 0x2308) + 6) & 0x10) == 0) {
    iVar2 = *(int *)(DAT_1039d74c + 0x14cc);
    iVar1 = *(int *)(*(int *)(DAT_1039d74c + 0x2308) + 0x10) + param_1 * 0x74;
    FUN_101655b6(iVar2,iVar1 + 0x24);
    FUN_1018de6c(*(undefined4 *)(iVar2 + 0x2e8),*(undefined2 *)(iVar1 + 0x60));
  }
  return;
}

