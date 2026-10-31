/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400bad19 */

void FUN_1400bad19(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14011cf50();
  lVar1 = lVar1 << 0x20;
  if (*(short *)(param_1 + (lVar1 + -0x100000000 >> 0x1f)) != 0x5c) {
    *(undefined2 *)(param_1 + (lVar1 >> 0x1f)) = 0x5c;
    *(undefined2 *)(param_1 + (lVar1 + 0x100000000 >> 0x1f)) = 0;
  }
  return;
}

