/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400baf6e */

void FUN_1400baf6e(longlong param_1,short param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14011cf50();
  lVar1 = (lVar1 << 0x20) + -0x100000000 >> 0x1f;
  if (*(short *)(param_1 + lVar1) == param_2) {
    *(undefined2 *)(param_1 + lVar1) = 0;
  }
  return;
}

