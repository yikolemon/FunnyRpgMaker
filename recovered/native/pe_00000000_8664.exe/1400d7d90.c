/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d7d90 */

ulonglong FUN_1400d7d90(void)

{
  int iVar1;
  FARPROC pFVar2;
  FARPROC pFVar3;
  INT_PTR IVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  iVar1 = FUN_1400d7895(10,0);
  if (iVar1 != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2c) < DAT_140f2b268) {
      FUN_140188840(&DAT_140f2b268);
      if (DAT_140f2b268 == -1) {
        DAT_140f2b260 = GetModuleHandleA("user32.dll");
        _Init_thread_footer(&DAT_140f2b268);
      }
    }
    pFVar2 = GetProcAddress(DAT_140f2b260,"GetThreadDpiAwarenessContext");
    pFVar3 = GetProcAddress(DAT_140f2b260,"AreDpiAwarenessContextsEqual");
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

