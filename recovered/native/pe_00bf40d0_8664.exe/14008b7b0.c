/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008b7b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14008b7b0(uint param_1)

{
  code *pcVar1;
  bool bVar2;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar3;
  
  if (DAT_14013d279 == '\0') {
    if (1 < param_1) {
      FUN_14008c330(5);
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    bVar2 = FUN_14008c290();
    in_RAX = CONCAT71(extraout_var,bVar2);
    if (((int)in_RAX == 0) || (param_1 != 0)) {
      DAT_14013d280 = _DAT_1400be880;
      uRam000000014013d288 = _UNK_1400be888;
      _DAT_14013d290 = 0xffffffffffffffff;
      _DAT_14013d298 = _DAT_1400be880;
      uRam000000014013d2a0 = _UNK_1400be888;
      _DAT_14013d2a8 = 0xffffffffffffffff;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_14013d280);
      if ((int)in_RAX != 0) {
LAB_14008b7f3:
        return in_RAX & 0xffffffffffffff00;
      }
      in_RAX = _initialize_onexit_table((longlong *)&DAT_14013d298);
      if ((int)in_RAX != 0) goto LAB_14008b7f3;
    }
    DAT_14013d279 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}

