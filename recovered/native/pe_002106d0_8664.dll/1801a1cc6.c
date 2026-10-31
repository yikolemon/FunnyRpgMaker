/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a1cc6 */

ulonglong FUN_1801a1cc6(void)

{
  int iVar1;
  FARPROC pFVar2;
  FARPROC pFVar3;
  INT_PTR IVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  iVar1 = FUN_1801a17cb(10,0);
  if (iVar1 != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2c) < DAT_18041f190) {
      FUN_18023d500(&DAT_18041f190);
      if (DAT_18041f190 == -1) {
        DAT_18041f188 = GetModuleHandleA("user32.dll");
        _Init_thread_footer(&DAT_18041f190);
      }
    }
    pFVar2 = GetProcAddress(DAT_18041f188,"GetThreadDpiAwarenessContext");
    pFVar3 = GetProcAddress(DAT_18041f188,"AreDpiAwarenessContextsEqual");
    if (pFVar3 == (FARPROC)0x0 || pFVar2 == (FARPROC)0x0) {
      uVar5 = 0;
    }
    else {
      IVar4 = (*pFVar2)();
      IVar4 = (*pFVar3)(IVar4,0xfffffffffffffffc);
      uVar5 = CONCAT71((int7)((ulonglong)pFVar2 >> 8),(int)IVar4 != 0);
    }
  }
  return uVar5 & 0xffffffff;
}

