/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400190c8 */

undefined8 FUN_1400190c8(longlong param_1)

{
  bool bVar1;
  BOOL BVar2;
  DWORD DVar3;
  HMODULE hmod;
  tagMSG *lpText;
  LPCWSTR **lpText_00;
  wchar_t *local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  undefined8 local_c0;
  longlong local_b8 [4];
  tagMSG local_98;
  longlong local_68;
  LPCWSTR *local_60 [3];
  ulonglong local_48;
  longlong local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_68 = param_1;
  FUN_140018798((uint *)&DAT_14012e920);
  if (DAT_14013c988 == (HHOOK)0x0) {
    hmod = FUN_140006f9b((undefined *)0x0);
    DAT_14013c988 = SetWindowsHookExW(0xd,FUN_140019431,hmod,0);
    bVar1 = true;
    if (DAT_14013c988 == (HHOOK)0x0) {
      DVar3 = GetLastError();
      FUN_1400069fc((longlong *)local_60,DVar3);
      local_d8 = L"Failed to install global hotkey manager: {}";
      local_d0 = 0x2b;
      FUN_14000705d(&local_98.hwnd,(longlong *)&local_d8,local_60);
      lpText = &local_98;
      if (7 < (ulonglong)local_98.lParam) {
        lpText = (tagMSG *)local_98.hwnd;
      }
      MessageBoxW((HWND)0x0,(LPCWSTR)lpText,L"ERROR",0x10);
      FUN_140002174((longlong *)&local_98);
      FUN_140002174((longlong *)local_60);
      bVar1 = false;
    }
  }
  else {
    bVar1 = false;
  }
  FUN_14008b270(0x14012e920);
  if (bVar1) {
    DAT_14013c990 = GetCurrentThreadId();
    local_98.time = 0;
    local_98.pt.x = 0;
    local_98.pt.y = 0;
    local_98._44_4_ = 0;
    local_98.wParam = 0;
    local_98.lParam = 0;
    local_98.hwnd = (HWND)0x0;
    local_98.message = 0;
    local_98._12_4_ = 0;
    while( true ) {
      BVar2 = GetMessageW(&local_98,(HWND)0x0,0,0);
      if (BVar2 == 0) break;
      if (BVar2 == -1) {
        DVar3 = GetLastError();
        FUN_1400069fc(local_b8,DVar3);
        local_c8 = L"Failed to process global hotkey manager: {}";
        local_c0 = 0x2b;
        FUN_14000705d(local_60,(longlong *)&local_c8,local_b8);
        lpText_00 = local_60;
        if (7 < local_48) {
          lpText_00 = (LPCWSTR **)local_60[0];
        }
        MessageBoxW((HWND)0x0,(LPCWSTR)lpText_00,L"ERROR",0x10);
        FUN_140002174((longlong *)local_60);
        FUN_140002174(local_b8);
        break;
      }
      TranslateMessage(&local_98);
      DispatchMessageW(&local_98);
    }
    FUN_140017c6e();
    DAT_14013c994 = 0;
  }
  FUN_14008b4f0();
  if (param_1 != 0) {
    local_40 = param_1;
    FUN_1400863f0();
  }
  return 0;
}

