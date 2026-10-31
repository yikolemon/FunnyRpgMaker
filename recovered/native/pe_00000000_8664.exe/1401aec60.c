/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401aec60 */

undefined4 FUN_1401aec60(void)

{
  longlong lVar1;
  
  DAT_140f32bf0 = FUN_1401afdd4();
  DAT_140f29630 = FlsAlloc(FUN_1401aee14);
  if (DAT_140f29630 != 0xffffffff) {
    lVar1 = FUN_1401aed28();
    if (lVar1 != 0) {
      return 1;
    }
    FUN_1401aeca4(0);
  }
  return 0;
}

