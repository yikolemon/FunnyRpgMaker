/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400744c6 */

byte FUN_1400744c6(byte param_1,undefined1 param_2)

{
  longlong lVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c
              ) < DAT_140f2a904) {
    FUN_140188840(&DAT_140f2a904);
    if (DAT_140f2a904 == -1) {
      DAT_140f2a900 = FUN_140074584();
      _Init_thread_footer(&DAT_140f2a904);
    }
  }
  if ((param_1 & DAT_140f2a900) == 1) {
    lVar1 = FUN_140081200();
    *(byte *)(lVar1 + 1) = *(byte *)(lVar1 + 1) | 4;
    *(undefined1 *)(lVar1 + 0x55) = 1;
    *(undefined1 *)(lVar1 + 0x56) = param_2;
  }
  return DAT_140f2a900;
}

