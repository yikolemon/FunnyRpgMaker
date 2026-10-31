/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180186f86 */

byte FUN_180186f86(byte param_1,undefined1 param_2)

{
  longlong lVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c
              ) < DAT_180419894) {
    FUN_18023d500(&DAT_180419894);
    if (DAT_180419894 == -1) {
      DAT_180419890 = FUN_180187044();
      _Init_thread_footer(&DAT_180419894);
    }
  }
  if ((param_1 & DAT_180419890) == 1) {
    lVar1 = FUN_180107ee8();
    *(byte *)(lVar1 + 1) = *(byte *)(lVar1 + 1) | 4;
    *(undefined1 *)(lVar1 + 0x55) = 1;
    *(undefined1 *)(lVar1 + 0x56) = param_2;
  }
  return DAT_180419890;
}

