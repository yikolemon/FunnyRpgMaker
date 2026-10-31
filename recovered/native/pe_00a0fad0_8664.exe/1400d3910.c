/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d3910 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1400d3910(uint param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (DAT_1401cc281 == '\0') {
    if (1 < param_1) {
      FUN_1400de070(5);
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    iVar2 = FUN_1400ddfc0();
    if ((iVar2 == 0) || (param_1 != 0)) {
      DAT_1401cc288 = _DAT_140142df0;
      uRam00000001401cc290 = _UNK_140142df8;
      _DAT_1401cc298 = 0xffffffffffffffff;
      _DAT_1401cc2a0 = _DAT_140142df0;
      uRam00000001401cc2a8 = _UNK_140142df8;
      _DAT_1401cc2b0 = 0xffffffffffffffff;
    }
    else {
      iVar2 = _initialize_onexit_table(&DAT_1401cc288);
      if (iVar2 != 0) {
        return 0;
      }
      iVar2 = _initialize_onexit_table(&DAT_1401cc2a0);
      if (iVar2 != 0) {
        return 0;
      }
    }
    DAT_1401cc281 = '\x01';
  }
  return 1;
}

