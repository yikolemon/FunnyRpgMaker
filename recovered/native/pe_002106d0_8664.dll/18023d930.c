/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023d930 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_18023d930(void)

{
  int iVar1;
  
  if (DAT_180418089 == '\0') {
    iVar1 = FUN_180246a20();
    if (iVar1 == 0) {
      DAT_180418090 = _DAT_1802be670;
      uRam0000000180418098 = _UNK_1802be678;
      _DAT_1804180a0 = 0xffffffffffffffff;
      _DAT_1804180a8 = _DAT_1802be670;
      uRam00000001804180b0 = _UNK_1802be678;
      _DAT_1804180b8 = 0xffffffffffffffff;
    }
    else {
      iVar1 = _initialize_onexit_table(&DAT_180418090);
      if (iVar1 != 0) {
        return 0;
      }
      iVar1 = _initialize_onexit_table(&DAT_1804180a8);
      if (iVar1 != 0) {
        return 0;
      }
    }
    DAT_180418089 = '\x01';
  }
  return 1;
}

