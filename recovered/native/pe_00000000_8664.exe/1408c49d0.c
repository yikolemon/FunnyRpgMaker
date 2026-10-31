/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408c49d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1408c49d0(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ushort *puVar3;
  bool bVar4;
  bool bVar5;
  undefined2 in_FPUControlWord;
  float10 in_ST0;
  
  bVar4 = _DAT_150c69e73 == 0;
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
      uVar1 = FUN_1408d5408();
      return uVar1;
    }
  }
  uVar2 = (ulonglong)((longlong)register0x00000020 + 4) & 0xffffffff;
  *(int *)((longlong)register0x00000020 + -8) = 0x408d5338;
  *(int *)((longlong)register0x00000020 + -4) = 1;
  uVar1 = FUN_1408db045();
  *(ulonglong *)((longlong)register0x00000020 + -8) = uVar2;
  *(undefined2 *)((longlong)register0x00000020 + -8) = in_FPUControlWord;
  if (bVar4) {
    if (((uVar1 & 0xfffff) == 0) && (*(int *)register0x00000020 == 0)) {
LAB_1408d53ba:
      uVar1 = 1;
    }
    else {
      *(int *)((longlong)register0x00000020 + -0x10) = 0x408d53aa;
      *(int *)((longlong)register0x00000020 + -0xc) = 1;
      uVar1 = FUN_1408db02c();
    }
    if (_DAT_150c7a882 == 0) {
      *(int *)((longlong)register0x00000020 + -0x10) = 0x408d53e4;
      *(int *)((longlong)register0x00000020 + -0xc) = 1;
      uVar1 = FUN_1408dec17(0x50bfae6f,0xd);
      return uVar1;
    }
  }
  else {
    if ((short)*(int *)((longlong)register0x00000020 + -8) != 0x27f) {
      *(int *)((longlong)register0x00000020 + -0x10) = 0x408d534c;
      *(int *)((longlong)register0x00000020 + -0xc) = 1;
      uVar1 = FUN_1408db015();
    }
    if ((uint)uVar1 < 0x3ff00000) {
      fpatan(SQRT(((float10)1 - in_ST0) * ((float10)1 + in_ST0)),in_ST0);
    }
    else {
      if ((0x3ff00000 < (uint)uVar1) ||
         ((*(uint *)((longlong)register0x00000020 + 4) & 0xfffff) != 0 ||
          *(int *)register0x00000020 != 0)) goto LAB_1408d53ba;
      uVar1 = 0;
    }
    if (_DAT_150c7a81e == 0) {
      uVar1 = FUN_1408db0ab(0x50bfae0b,0xd);
      return uVar1;
    }
  }
  return uVar1;
}

