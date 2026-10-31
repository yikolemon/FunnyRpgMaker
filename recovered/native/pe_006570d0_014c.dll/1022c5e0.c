/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022c5e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1022c5e0(void)

{
  int iVar1;
  
  if (DAT_1039ce05 == '\0') {
    iVar1 = ___scrt_is_ucrt_dll_in_use();
    if (iVar1 == 0) {
      DAT_1039ce08 = 0xffffffff;
      _DAT_1039ce0c = 0xffffffff;
      _DAT_1039ce10 = 0xffffffff;
      _DAT_1039ce14 = 0xffffffff;
      _DAT_1039ce18 = 0xffffffff;
      _DAT_1039ce1c = 0xffffffff;
    }
    else {
      iVar1 = __initialize_onexit_table(&DAT_1039ce08);
      if (iVar1 != 0) {
        return 0;
      }
      iVar1 = __initialize_onexit_table(&DAT_1039ce14);
      if (iVar1 != 0) {
        return 0;
      }
    }
    DAT_1039ce05 = '\x01';
  }
  return 1;
}

