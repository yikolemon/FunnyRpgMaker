/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140004b57 */

undefined8 FUN_140004b57(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c
              ) < DAT_140f2a608) {
    FUN_140188840(&DAT_140f2a608);
    if (DAT_140f2a608 == -1) {
      FUN_1400172b8(&DAT_140f2a410);
      FUN_140188b50(&LAB_140017a3e);
      _Init_thread_footer(&DAT_140f2a608);
    }
  }
  return DAT_140f2a5e8;
}

