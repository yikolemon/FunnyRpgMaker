/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408c5380 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1408c5380(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ushort *puVar3;
  bool bVar4;
  bool bVar5;
  undefined2 in_FPUControlWord;
  ushort in_FPUStatusWord;
  unkbyte10 in_ST0;
  float10 fVar6;
  
  bVar4 = _DAT_150c6a823 == 0;
  if (!bVar4) {
    puVar3 = (ushort *)(ulonglong)((int)&stack0x00000000 - 8);
    *(undefined4 *)(puVar3 + 2) = MXCSR;
    bVar5 = false;
    if ((*(uint *)(puVar3 + 2) & 0x7f80) == 0x1f80) {
      *puVar3 = in_FPUControlWord;
      bVar5 = (*puVar3 & 0x7f) == 0x7f;
    }
    register0x00000020 = (BADSPACEBASE *)((ulonglong)(puVar3 + 4) & 0xffffffff);
    bVar4 = false;
    if (bVar5) {
      uVar1 = FUN_1408d6158();
      return uVar1;
    }
  }
  uVar2 = (ulonglong)((longlong)register0x00000020 + 4) & 0xffffffff;
  *(int *)((longlong)register0x00000020 + -8) = 0x408d60a8;
  *(int *)((longlong)register0x00000020 + -4) = 1;
  uVar1 = FUN_1408db045();
  *(ulonglong *)((longlong)register0x00000020 + -8) = uVar2;
  *(undefined2 *)((longlong)register0x00000020 + -8) = in_FPUControlWord;
  if (bVar4) {
    if (((uVar1 & 0xfffff) == 0) && (*(int *)register0x00000020 == 0)) {
      if (_DAT_150c7b5ce != 0) {
        return 1;
      }
      *(int *)((longlong)register0x00000020 + -0x10) = 0x408d6130;
      *(int *)((longlong)register0x00000020 + -0xc) = 1;
      uVar1 = FUN_1408dec17(0x50bfbd6b,0x12);
    }
    return uVar1;
  }
  fVar6 = (float10)fcos(in_ST0);
  if ((in_FPUStatusWord & 0x400) != 0) {
    do {
      fVar6 = fVar6 - ROUND(fVar6 / _DAT_150bfc2b2) * _DAT_150bfc2b2;
    } while ((in_FPUStatusWord & 0x400) != 0);
    fcos(fVar6);
  }
  if (_DAT_150c7b580 != 0) {
    return (ulonglong)in_FPUStatusWord;
  }
  uVar1 = FUN_1408db0ab(0x50bfbd1d,0x12);
  return uVar1;
}

