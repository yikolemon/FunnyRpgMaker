/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a18cb */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_1801a18cb(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  HDC hdc;
  uint local_30 [4];
  
  local_30[2] = 0xfffffffe;
  local_30[3] = 0xffffffff;
  local_30[0] = 0x60;
  local_30[1] = 0x60;
  iVar1 = FUN_1801a17cb(6,3);
  if (iVar1 != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2c) < DAT_18041f178) {
      FUN_18023d500(&DAT_18041f178);
      if (DAT_18041f178 == -1) {
        DAT_18041f170 = LoadLibraryA("shcore.dll");
        _Init_thread_footer(&DAT_18041f178);
      }
    }
    if (DAT_18041f170 != (HMODULE)0x0 && DAT_18041f180 == (FARPROC)0x0) {
      DAT_18041f180 = GetProcAddress(DAT_18041f170,"GetDpiForMonitor");
    }
    if (DAT_18041f180 != (FARPROC)0x0) {
      (*DAT_18041f180)(param_1,0,local_30,local_30 + 1);
      uVar2 = local_30[0];
      goto LAB_1801a19ad;
    }
  }
  hdc = GetDC((HWND)0x0);
  uVar2 = GetDeviceCaps(hdc,0x58);
  GetDeviceCaps(hdc,0x5a);
  ReleaseDC((HWND)0x0,hdc);
LAB_1801a19ad:
  return (float)uVar2 / _DAT_1803280d8;
}

