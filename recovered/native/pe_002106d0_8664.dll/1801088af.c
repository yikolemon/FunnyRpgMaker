/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801088af */

void FUN_1801088af(int param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_180419160;
  if (*(int *)(DAT_180419160 + 0x167c) == param_1) {
    *(int *)(DAT_180419160 + 0x1680) = param_1;
  }
  if (*(int *)(lVar1 + 0x16ac) == param_1) {
    *(undefined1 *)(lVar1 + 0x16b5) = 1;
  }
  return;
}

