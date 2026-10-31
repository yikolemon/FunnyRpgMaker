/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408dad8f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1408dad8f(void)

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
      if (_DAT_150c802be != 0) {
        return 1;
      }
      uVar1 = FUN_1408dec17(0x50c00f2b,0x1e);
    }
    return uVar1;
  }
  fVar2 = (float10)fsin(in_ST0);
  if ((in_FPUStatusWord & 0x400) != 0) {
    do {
      fVar2 = fVar2 - ROUND(fVar2 / _DAT_150c00fa2) * _DAT_150c00fa2;
    } while ((in_FPUStatusWord & 0x400) != 0);
    fsin(fVar2);
  }
  if (_DAT_150c80270 != 0) {
    return (ulonglong)in_FPUStatusWord;
  }
  uVar1 = FUN_1408db0ab(0x50c00edd,0x1e);
  return uVar1;
}

