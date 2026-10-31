/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140080777 */

void FUN_140080777(int param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_140f2a910;
  *(int *)(DAT_140f2a910 + 0x1664) = param_1;
  *(undefined1 *)(lVar1 + 0x1678) = 0;
  if ((param_1 != 0) && (*(int *)(lVar1 + 0x1668) != param_1)) {
    *(undefined8 *)(lVar1 + 0x1670) = 0;
  }
  return;
}

