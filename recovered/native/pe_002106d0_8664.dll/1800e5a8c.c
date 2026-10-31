/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e5a8c */

undefined8 FUN_1800e5a8c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c
              ) < DAT_180417808) {
    FUN_18023d500(&DAT_180417808);
    if (DAT_180417808 == -1) {
      FUN_180021e84(&DAT_180417610);
      FUN_18023d710(&LAB_18002260a);
      _Init_thread_footer(&DAT_180417808);
    }
  }
  return DAT_1804177e8;
}

