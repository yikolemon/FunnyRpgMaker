/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d76ec */

void FUN_1400d76ec(void)

{
  int iVar1;
  longlong lVar2;
  FARPROC UNRECOVERED_JUMPTABLE_00;
  
  lVar2 = FUN_1400d6041();
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + 0x30) = 1;
  }
  iVar1 = FUN_1400d7895(10,0);
  if (iVar1 != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2c) < DAT_140f2b230) {
      FUN_140188840(&DAT_140f2b230);
      if (DAT_140f2b230 == -1) {
        DAT_140f2b228 = LoadLibraryA("user32.dll");
        _Init_thread_footer(&DAT_140f2b230);
      }
    }
    UNRECOVERED_JUMPTABLE_00 = GetProcAddress(DAT_140f2b228,"SetThreadDpiAwarenessContext");
    if (UNRECOVERED_JUMPTABLE_00 != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001400d7768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(0xfffffffffffffffc);
      return;
    }
  }
  iVar1 = FUN_1400d7895(6,3);
  if (iVar1 != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2c) < DAT_140f2b240) {
      FUN_140188840(&DAT_140f2b240);
      if (DAT_140f2b240 == -1) {
        DAT_140f2b238 = LoadLibraryA("shcore.dll");
        _Init_thread_footer(&DAT_140f2b240);
      }
    }
    UNRECOVERED_JUMPTABLE_00 = GetProcAddress(DAT_140f2b238,"SetProcessDpiAwareness");
    if (UNRECOVERED_JUMPTABLE_00 != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001400d77c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(2);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001400d77ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetProcessDPIAware();
  return;
}

