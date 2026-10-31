/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401aeca4 */

undefined4 FUN_1401aeca4(void)

{
  if (DAT_140f29630 != 0xffffffff) {
    FlsFree(DAT_140f29630);
    DAT_140f29630 = 0xffffffff;
  }
  return 1;
}

