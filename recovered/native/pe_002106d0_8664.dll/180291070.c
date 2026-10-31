/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180291070 */

undefined4 FUN_180291070(void)

{
  longlong lVar1;
  
  DAT_180421240 = FUN_180292234();
  DAT_180415e90 = FlsAlloc(FUN_180291274);
  if (DAT_180415e90 != 0xffffffff) {
    lVar1 = FUN_180291138();
    if (lVar1 != 0) {
      return 1;
    }
    FUN_1802910b4(0);
  }
  return 0;
}

