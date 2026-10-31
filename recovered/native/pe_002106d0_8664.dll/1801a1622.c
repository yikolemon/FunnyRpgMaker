/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a1622 */

void FUN_1801a1622(void)

{
  int iVar1;
  longlong lVar2;
  FARPROC UNRECOVERED_JUMPTABLE_00;
  
  lVar2 = FUN_18019ff31();
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + 0x30) = 1;
  }
  iVar1 = FUN_1801a17cb(10,0);
  if (iVar1 != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2c) < DAT_18041f158) {
      FUN_18023d500(&DAT_18041f158);
      if (DAT_18041f158 == -1) {
        DAT_18041f150 = LoadLibraryA("user32.dll");
        _Init_thread_footer(&DAT_18041f158);
      }
    }
    UNRECOVERED_JUMPTABLE_00 = GetProcAddress(DAT_18041f150,"SetThreadDpiAwarenessContext");
    if (UNRECOVERED_JUMPTABLE_00 != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001801a169e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(0xfffffffffffffffc);
      return;
    }
  }
  iVar1 = FUN_1801a17cb(6,3);
  if (iVar1 != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2c) < DAT_18041f168) {
      FUN_18023d500(&DAT_18041f168);
      if (DAT_18041f168 == -1) {
        DAT_18041f160 = LoadLibraryA("shcore.dll");
        _Init_thread_footer(&DAT_18041f168);
      }
    }
    UNRECOVERED_JUMPTABLE_00 = GetProcAddress(DAT_18041f160,"SetProcessDpiAwareness");
    if (UNRECOVERED_JUMPTABLE_00 != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001801a16f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(2);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001801a1700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetProcessDPIAware();
  return;
}

