/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802910b4 */

undefined4 FUN_1802910b4(void)

{
  if (DAT_180415e90 != 0xffffffff) {
    FlsFree(DAT_180415e90);
    DAT_180415e90 = 0xffffffff;
  }
  return 1;
}

