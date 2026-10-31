/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18028cf90 */

undefined1 FUN_18028cf90(void)

{
  if (DAT_180415e80 != 0xffffffff) {
    FlsFree(DAT_180415e80);
    DAT_180415e80 = 0xffffffff;
  }
  return 1;
}

