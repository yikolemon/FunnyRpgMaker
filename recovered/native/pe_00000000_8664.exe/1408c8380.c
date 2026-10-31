/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408c8380 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1408c8380(void)

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
  
  bVar4 = _DAT_150c6d823 == 0;
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
      uVar1 = FUN_1408dae48();
      return uVar1;
    }
  }
  uVar2 = (ulonglong)((longlong)register0x00000020 + 4) & 0xffffffff;
  *(int *)((longlong)register0x00000020 + -8) = 0x408dad98;
  *(int *)((longlong)register0x00000020 + -4) = 1;
  uVar1 = FUN_1408db045();
  *(ulonglong *)((longlong)register0x00000020 + -8) = uVar2;
  *(undefined2 *)((longlong)register0x00000020 + -8) = in_FPUControlWord;
  if (bVar4) {
    if (((uVar1 & 0xfffff) == 0) && (*(int *)register0x00000020 == 0)) {
      if (_DAT_150c802be != 0) {
        return 1;
      }
      *(int *)((longlong)register0x00000020 + -0x10) = 0x408dae20;
      *(int *)((longlong)register0x00000020 + -0xc) = 1;
      uVar1 = FUN_1408dec17(0x50c00f2b,0x1e);
    }
    return uVar1;
  }
  fVar6 = (float10)fsin(in_ST0);
  if ((in_FPUStatusWord & 0x400) != 0) {
    do {
      fVar6 = fVar6 - ROUND(fVar6 / _DAT_150c00fa2) * _DAT_150c00fa2;
    } while ((in_FPUStatusWord & 0x400) != 0);
    fsin(fVar6);
  }
  if (_DAT_150c80270 != 0) {
    return (ulonglong)in_FPUStatusWord;
  }
  uVar1 = FUN_1408db0ab(0x50c00edd,0x1e);
  return uVar1;
}

