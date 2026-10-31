/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400554d2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1400554d2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_1401cc240) {
    FUN_1400dd790(&DAT_1401cc240);
    if (DAT_1401cc240 == -1) {
      _DAT_1401cc238 = 0;
      FUN_1400d3740(&LAB_140059aaf);
      _Init_thread_footer(&DAT_1401cc240);
    }
  }
  return &DAT_1401cc200;
}

