/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140319d7f */

void FUN_140319d7f(int param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_14062a630;
  if (*(int *)(DAT_14062a630 + 0x167c) == param_1) {
    *(int *)(DAT_14062a630 + 0x1680) = param_1;
  }
  if (*(int *)(lVar1 + 0x16ac) == param_1) {
    *(undefined1 *)(lVar1 + 0x16b5) = 1;
  }
  return;
}

