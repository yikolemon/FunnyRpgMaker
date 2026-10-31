/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140188d20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_140188d20(uint param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (DAT_140f2a9b9 == '\0') {
    if (1 < param_1) {
      FUN_14018e4a0(5);
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    iVar2 = FUN_14018e390();
    if ((iVar2 == 0) || (param_1 != 0)) {
      DAT_140f2a9c0 = _DAT_140e61f40;
      uRam0000000140f2a9c8 = _UNK_140e61f48;
      _DAT_140f2a9d0 = 0xffffffffffffffff;
      _DAT_140f2a9d8 = _DAT_140e61f40;
      uRam0000000140f2a9e0 = _UNK_140e61f48;
      _DAT_140f2a9e8 = 0xffffffffffffffff;
    }
    else {
      iVar2 = _initialize_onexit_table(&DAT_140f2a9c0);
      if (iVar2 != 0) {
        return 0;
      }
      iVar2 = _initialize_onexit_table(&DAT_140f2a9d8);
      if (iVar2 != 0) {
        return 0;
      }
    }
    DAT_140f2a9b9 = '\x01';
  }
  return 1;
}

