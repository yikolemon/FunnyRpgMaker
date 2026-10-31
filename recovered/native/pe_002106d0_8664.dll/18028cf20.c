/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18028cf20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_18028cf20(void)

{
  BOOL BVar1;
  
  DAT_180415e80 = FlsAlloc((PFLS_CALLBACK_FUNCTION)&LAB_18028d240);
  if (DAT_180415e80 != 0xffffffff) {
    BVar1 = FlsSetValue(DAT_180415e80,&DAT_180421180);
    if (BVar1 != 0) {
      _DAT_1804211f8 = 0xfffffffe;
      return 1;
    }
    if (DAT_180415e80 != 0xffffffff) {
      FlsFree(DAT_180415e80);
      DAT_180415e80 = 0xffffffff;
    }
  }
  return 0;
}

