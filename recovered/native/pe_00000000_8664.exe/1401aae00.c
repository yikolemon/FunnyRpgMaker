/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401aae00 */

undefined1 FUN_1401aae00(void)

{
  if (DAT_140f29620 != 0xffffffff) {
    FlsFree(DAT_140f29620);
    DAT_140f29620 = 0xffffffff;
  }
  return 1;
}

