/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140107e60 */

undefined4 FUN_140107e60(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14011d7c0();
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0x30);
  }
  return 0;
}

