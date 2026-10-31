/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d609f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1408d609f(void)

{
  ulonglong uVar1;
  undefined1 in_ZF;
  ushort in_FPUStatusWord;
  unkbyte10 in_ST0;
  float10 fVar2;
  int unaff_retaddr;
  
  uVar1 = FUN_1408db045();
  if ((bool)in_ZF) {
    if (((uVar1 & 0xfffff) == 0) && (unaff_retaddr == 0)) {
      if (_DAT_150c7b5ce != 0) {
        return 1;
      }
      uVar1 = FUN_1408dec17(0x50bfbd6b,0x12);
    }
    return uVar1;
  }
  fVar2 = (float10)fcos(in_ST0);
  if ((in_FPUStatusWord & 0x400) != 0) {
    do {
      fVar2 = fVar2 - ROUND(fVar2 / _DAT_150bfc2b2) * _DAT_150bfc2b2;
    } while ((in_FPUStatusWord & 0x400) != 0);
    fcos(fVar2);
  }
  if (_DAT_150c7b580 != 0) {
    return (ulonglong)in_FPUStatusWord;
  }
  uVar1 = FUN_1408db0ab(0x50bfbd1d,0x12);
  return uVar1;
}

