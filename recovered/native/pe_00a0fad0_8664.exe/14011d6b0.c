/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14011d6b0 */

undefined1 FUN_14011d6b0(void)

{
  if (DAT_1401ca630 != 0xffffffff) {
    FlsFree(DAT_1401ca630);
    DAT_1401ca630 = 0xffffffff;
  }
  return 1;
}

