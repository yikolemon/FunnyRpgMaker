/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009d5f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14009d5f0(void)

{
  uint dwFlsIndex;
  BOOL BVar1;
  
  dwFlsIndex = FlsAlloc((PFLS_CALLBACK_FUNCTION)&LAB_14009d7d0);
  DAT_14013bbe0 = dwFlsIndex;
  if (dwFlsIndex != 0xffffffff) {
    BVar1 = FlsSetValue(dwFlsIndex,&DAT_140143120);
    if (BVar1 != 0) {
      _DAT_140143198 = 0xfffffffe;
      return CONCAT31((int3)((uint)BVar1 >> 8),1);
    }
    dwFlsIndex = 0;
    if (DAT_14013bbe0 != 0xffffffff) {
      dwFlsIndex = FlsFree(DAT_14013bbe0);
      DAT_14013bbe0 = 0xffffffff;
    }
  }
  return dwFlsIndex & 0xffffff00;
}

