/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14011d640 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14011d640(void)

{
  BOOL BVar1;
  
  DAT_1401ca630 = FlsAlloc((PFLS_CALLBACK_FUNCTION)&LAB_14011d820);
  if (DAT_1401ca630 != 0xffffffff) {
    BVar1 = FlsSetValue(DAT_1401ca630,&DAT_140354f60);
    if (BVar1 != 0) {
      _DAT_140354fd8 = 0xfffffffe;
      return 1;
    }
    if (DAT_1401ca630 != 0xffffffff) {
      FlsFree(DAT_1401ca630);
      DAT_1401ca630 = 0xffffffff;
    }
  }
  return 0;
}

