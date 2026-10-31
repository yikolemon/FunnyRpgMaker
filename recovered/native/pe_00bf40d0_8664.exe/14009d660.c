/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009d660 */

undefined1 FUN_14009d660(void)

{
  if (DAT_14013bbe0 != 0xffffffff) {
    FlsFree(DAT_14013bbe0);
    DAT_14013bbe0 = 0xffffffff;
  }
  return 1;
}

