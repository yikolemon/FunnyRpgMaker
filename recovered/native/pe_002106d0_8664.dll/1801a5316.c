/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a5316 */

void FUN_1801a5316(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c
              ) < DAT_180420978) {
    FUN_18023d500(&DAT_180420978);
    if (DAT_180420978 == -1) {
      FUN_1801c1b96(&DAT_180420720);
      FUN_18023d710(&LAB_1801c2111);
      _Init_thread_footer(&DAT_180420978);
    }
  }
  FUN_1801c211e(&DAT_180420720,"Example: Console",&DAT_18041f1e2);
  return;
}

