/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401aad90 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1401aad90(void)

{
  BOOL BVar1;
  
  DAT_140f29620 = FlsAlloc((PFLS_CALLBACK_FUNCTION)&LAB_1401aaf70);
  if (DAT_140f29620 != 0xffffffff) {
    BVar1 = FlsSetValue(DAT_140f29620,&DAT_140f32b30);
    if (BVar1 != 0) {
      _DAT_140f32ba8 = 0xfffffffe;
      return 1;
    }
    if (DAT_140f29620 != 0xffffffff) {
      FlsFree(DAT_140f29620);
      DAT_140f29620 = 0xffffffff;
    }
  }
  return 0;
}

