/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140121554 */

undefined4 FUN_140121554(void)

{
  if (DAT_1401ca634 != 0xffffffff) {
    FlsFree(DAT_1401ca634);
    DAT_1401ca634 = 0xffffffff;
  }
  return 1;
}

