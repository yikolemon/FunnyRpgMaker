/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14031892f */

void FUN_14031892f(int param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_14062a630;
  *(int *)(DAT_14062a630 + 0x1664) = param_1;
  *(undefined1 *)(lVar1 + 0x1678) = 0;
  if ((param_1 != 0) && (*(int *)(lVar1 + 0x1668) != param_1)) {
    *(undefined8 *)(lVar1 + 0x1670) = 0;
  }
  return;
}

