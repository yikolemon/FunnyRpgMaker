/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408db3ef */

undefined4 FUN_1408db3ef(void)

{
  longlong lVar1;
  
  if (*(int *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8) != 0) {
    lVar1 = FUN_1408db499();
    if ((-1 < (int)(uint)lVar1) && ((uint)lVar1 < 0xe4)) {
      return *(undefined4 *)(lVar1 * 8 + 0x10326218);
    }
  }
  return 0;
}

