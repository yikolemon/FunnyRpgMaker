/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400da290 */

undefined4 thunk_FUN_140107e60(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14011d7c0();
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0x30);
  }
  return 0;
}

