/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18010745f */

void FUN_18010745f(int param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_180419160;
  *(int *)(DAT_180419160 + 0x1664) = param_1;
  *(undefined1 *)(lVar1 + 0x1678) = 0;
  if ((param_1 != 0) && (*(int *)(lVar1 + 0x1668) != param_1)) {
    *(undefined8 *)(lVar1 + 0x1670) = 0;
  }
  return;
}

