/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140121510 */

undefined4 FUN_140121510(void)

{
  longlong lVar1;
  
  DAT_140355020 = FUN_140122594();
  DAT_1401ca634 = FlsAlloc(FUN_1401216c4);
  if (DAT_1401ca634 != 0xffffffff) {
    lVar1 = FUN_1401215d8();
    if (lVar1 != 0) {
      return 1;
    }
    FUN_140121554(0);
  }
  return 0;
}

