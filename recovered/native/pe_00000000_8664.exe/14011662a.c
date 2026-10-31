/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14011662a */

void FUN_14011662a(int param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x208);
  if (param_1 < 0) {
    param_1 = *(int *)(lVar1 + 0xc);
  }
  lVar1 = *(longlong *)(lVar1 + 0x68);
  FUN_1400883a6(lVar1 + (longlong)param_1 * 0x1c + 0xc,(longlong)param_1 * 0x1c + lVar1 + 0x14,0);
  return;
}

