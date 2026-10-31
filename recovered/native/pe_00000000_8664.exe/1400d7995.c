/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d7995 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_1400d7995(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  HDC hdc;
  uint local_30 [4];
  
  local_30[2] = 0xfffffffe;
  local_30[3] = 0xffffffff;
  local_30[0] = 0x60;
  local_30[1] = 0x60;
  iVar1 = FUN_1400d7895(6,3);
  if (iVar1 != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2c) < DAT_140f2b250) {
      FUN_140188840(&DAT_140f2b250);
      if (DAT_140f2b250 == -1) {
        DAT_140f2b248 = LoadLibraryA("shcore.dll");
        _Init_thread_footer(&DAT_140f2b250);
      }
    }
    if (DAT_140f2b248 != (HMODULE)0x0 && DAT_140f2b258 == (FARPROC)0x0) {
      DAT_140f2b258 = GetProcAddress(DAT_140f2b248,"GetDpiForMonitor");
    }
    if (DAT_140f2b258 != (FARPROC)0x0) {
      (*DAT_140f2b258)(param_1,0,local_30,local_30 + 1);
      uVar2 = local_30[0];
      goto LAB_1400d7a77;
    }
  }
  hdc = GetDC((HWND)0x0);
  uVar2 = GetDeviceCaps(hdc,0x58);
  GetDeviceCaps(hdc,0x5a);
  ReleaseDC((HWND)0x0,hdc);
LAB_1400d7a77:
  return (float)uVar2 / _DAT_140e8233c;
}

