/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10165986 */

void FUN_10165986(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(DAT_1039d74c + 0x2308);
  if (((*(byte *)(iVar1 + 6) & 0x10) == 0) && (*(int *)(iVar1 + 0x48) != -1)) {
    iVar2 = *(int *)(DAT_1039d74c + 0x14cc);
    iVar1 = *(int *)(iVar1 + 0x10) + *(int *)(iVar1 + 0x48) * 0x74;
    FUN_101655b6(iVar2,iVar1 + 0x24);
    FUN_1018de6c(*(undefined4 *)(iVar2 + 0x2e8),*(undefined2 *)(iVar1 + 0x60));
  }
  return;
}

