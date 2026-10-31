/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140081bc7 */

void FUN_140081bc7(int param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_140f2a910;
  if (*(int *)(DAT_140f2a910 + 0x167c) == param_1) {
    *(int *)(DAT_140f2a910 + 0x1680) = param_1;
  }
  if (*(int *)(lVar1 + 0x16ac) == param_1) {
    *(undefined1 *)(lVar1 + 0x16b5) = 1;
  }
  return;
}

