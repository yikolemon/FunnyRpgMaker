/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101692a9 */

void FUN_101692a9(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(DAT_1039d74c + 0x14cc) + 0x1e8);
  if (param_1 < 0) {
    param_1 = *(int *)(iVar1 + 0xc);
  }
  iVar1 = *(int *)(iVar1 + 100);
  FUN_1010a52a(iVar1 + param_1 * 0x1c + 0xc,iVar1 + 0x14 + param_1 * 0x1c,0);
  return;
}

