/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d1122 */

undefined8 FUN_1800d1122(longlong param_1)

{
  char cVar1;
  DWORD DVar2;
  LPCWSTR **lpText;
  LPCWSTR ***lpText_00;
  wchar_t *local_100;
  undefined8 local_f8;
  wchar_t *local_e0;
  undefined8 local_d8;
  undefined **local_d0;
  HANDLE local_c8;
  undefined1 local_c0 [32];
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  LPCWSTR **local_88;
  longlong local_80;
  char local_70;
  undefined7 uStack_6f;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  LPCWSTR *local_58;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_98 = param_1;
  local_90 = param_1;
  FUN_180001e92(&local_88,PTR_s_FunnyGamePlayer_GlobalHotkeyMana_1804025b0);
  FUN_18001313c(&local_d0,&local_88);
  FUN_180001ef2(&local_88);
  do {
    while (cVar1 = FUN_1800132ae(&local_d0), cVar1 == '\0') {
      if (99 < DAT_180417e34) {
        DAT_180417e34 = DAT_180417e34 + 1;
        DVar2 = GetLastError();
        FUN_1800c88a4(&local_68,DVar2);
        local_100 = L"Failed to connect hotkey manager: {}";
        local_f8 = 0x24;
        FUN_18007e9c9(&local_88,&local_100,&local_68);
        lpText_00 = &local_88;
        if (7 < CONCAT71(uStack_6f,local_70)) {
          lpText_00 = (LPCWSTR ***)local_88;
        }
        MessageBoxW((HWND)0x0,(LPCWSTR)lpText_00,L"ERROR",0x10);
        FUN_1800010ec(&local_88);
        FUN_1800010ec(&local_68);
        goto LAB_1800d1464;
      }
      local_88 = (LPCWSTR **)0x64;
      DAT_180417e34 = DAT_180417e34 + 1;
      FUN_1800c50db(&local_88);
    }
    FUN_180015eba(&local_d0,&local_88);
    cVar1 = local_70;
    if (local_70 == '\0') {
      DVar2 = GetLastError();
      FUN_1800c88a4(&local_100,DVar2);
      local_e0 = L"Failed to read message from hotkey manager: {}";
      local_d8 = 0x2e;
      FUN_18007e9c9(&local_68,&local_e0,&local_100);
      lpText = (LPCWSTR **)&local_68;
      if (7 < local_50) {
        lpText = (LPCWSTR **)local_68;
      }
      MessageBoxW((HWND)0x0,(LPCWSTR)lpText,L"ERROR",0x10);
      FUN_1800010ec(&local_68);
      FUN_1800010ec(&local_100);
    }
    else if (local_80 - (longlong)local_88 == 0x18) {
      local_68 = (char *)*local_88;
      uStack_60 = *(undefined4 *)(local_88 + 1);
      uStack_5c = *(undefined4 *)((longlong)local_88 + 0xc);
      local_58 = local_88[2];
      FUN_1800c526e(&local_100);
      local_58 = (LPCWSTR *)local_100;
      if ((char)uStack_60 == '\x01') {
        FUN_1800d01e6((longlong)&local_68 + 4);
      }
      FUN_180044980(&DAT_1804025b8);
      if ((char)uStack_60 == '\x01') {
        FUN_1800d181c(&DAT_180417df0,&local_100,(longlong)&local_68 + 4,&local_68);
      }
      else {
        FUN_1800d181c(&DAT_180417e00,&local_100,(longlong)&local_68 + 4,&local_68);
      }
      FUN_18023d6e0(&DAT_1804025b8);
    }
    else {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x2c) < DAT_180417808) && (FUN_18023d500(&DAT_180417808), DAT_180417808 == -1)) {
        FUN_180021e84(&DAT_180417610);
        FUN_18023d710(&LAB_18002260a);
        _Init_thread_footer(&DAT_180417808);
      }
      local_a0 = local_80 - (longlong)local_88;
      local_100 = L"unknown message size: {}";
      local_f8 = 0x18;
      local_68 = "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\ui\\imgui_hotkey.cpp"
      ;
      uStack_60 = 0xf2;
      local_58 = (LPCWSTR *)0x180379ad0;
      FUN_1800b7168(DAT_1804177e8,&local_68,4,&local_100,&local_a0);
    }
    if (local_70 == '\x01') {
      FUN_180004cea(&local_88);
    }
  } while (cVar1 != '\0');
LAB_1800d1464:
  local_d0 = NamedPipeClient::vftable;
  FUN_180001ef2(local_c0);
  local_d0 = NamedPipe::vftable;
  if (local_c8 != (HANDLE)0xffffffffffffffff) {
    CloseHandle(local_c8);
  }
  FUN_18023ea60();
  if (local_90 != 0) {
    thunk_FUN_1802464a0(local_90,1);
  }
  return 0;
}

