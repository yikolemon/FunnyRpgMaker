/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10272240 */

undefined4 FUN_10272240(void)

{
  if (DAT_1039b3e0 != 0xffffffff) {
    FlsFree(DAT_1039b3e0);
    DAT_1039b3e0 = 0xffffffff;
  }
  return 1;
}

