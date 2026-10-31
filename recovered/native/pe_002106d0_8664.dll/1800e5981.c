/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e5981 */

void FUN_1800e5981(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c
              ) < DAT_180418c58) {
    FUN_18023d500(&DAT_180418c58);
    if (DAT_180418c58 == -1) {
      FUN_1800ca954(&DAT_180418c48);
      FUN_18023d710(FUN_1800e6011);
      _Init_thread_footer(&DAT_180418c58);
      return;
    }
  }
  return;
}

