/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400eaf9a */

void FUN_1400eaf9a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c
              ) < DAT_140f320c8) {
    FUN_140188840(&DAT_140f320c8);
    if (DAT_140f320c8 == -1) {
      FUN_14010789a(&DAT_140f31e70);
      FUN_140188b50(&LAB_140107e15);
      _Init_thread_footer(&DAT_140f320c8);
    }
  }
  FUN_140107e22(&DAT_140f31e70,"Example: Console",&DAT_140f30932);
  return;
}

