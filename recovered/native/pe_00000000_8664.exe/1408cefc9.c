/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408cefc9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1408cefc9(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 0xc);
  uVar2 = _DAT_150bf3d85 * 0xc + uVar1;
  if (uVar1 != uVar2) {
    do {
      if (*(int *)((ulonglong)uVar1 + 4) ==
          *(int *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8)) {
        return (ulonglong)uVar1;
      }
      uVar1 = uVar1 + 0xc;
    } while (uVar1 != uVar2);
  }
  return 0;
}

