/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101658f6 */

void FUN_101658f6(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
  iVar2 = *(int *)(DAT_1039d74c + 0x2308);
  FUN_101655b6(iVar1,iVar2 + 0x144);
  FUN_1018de6c(*(undefined4 *)(iVar1 + 0x2e8),
               *(undefined2 *)(*(int *)(iVar2 + 0x10) + 0x60 + *(int *)(iVar2 + 0x48) * 0x74));
  return;
}

