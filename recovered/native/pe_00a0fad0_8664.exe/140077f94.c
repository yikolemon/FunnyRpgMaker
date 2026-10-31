/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140077f94 */

ulonglong FUN_140077f94(longlong param_1,undefined8 param_2,undefined4 *param_3,char *param_4)

{
  BOOL BVar1;
  undefined *puVar2;
  ulonglong uVar3;
  LPWSTR **lpCommandLine;
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [240];
  wchar_t *local_1d8;
  undefined8 local_1d0;
  wchar_t *local_1c8;
  undefined8 local_1c0;
  _STARTUPINFOW local_1b8;
  undefined1 local_148 [32];
  undefined1 local_128 [32];
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  LPWSTR *local_c8 [3];
  ulonglong local_b0;
  DWORD local_a8 [8];
  DWORD local_88 [8];
  _PROCESS_INFORMATION local_68;
  undefined1 local_48 [32];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_1b8.lpReserved = (LPWSTR)0x0;
  local_1b8.lpDesktop = (LPWSTR)0x0;
  local_1b8.lpTitle = (LPWSTR)0x0;
  local_1b8.dwX = 0;
  local_1b8.dwY = 0;
  local_1b8.dwXSize = 0;
  local_1b8.dwYSize = 0;
  local_1b8.dwXCountChars = 0;
  local_1b8.dwYCountChars = 0;
  local_1b8.dwFillAttribute = 0;
  local_1b8.dwFlags = 0;
  local_1b8.wShowWindow = 0;
  local_1b8.cbReserved2 = 0;
  local_1b8._68_4_ = 0;
  local_1b8.lpReserved2 = (LPBYTE)0x0;
  local_1b8.hStdInput = (HANDLE)0x0;
  local_1b8.hStdOutput = (HANDLE)0x0;
  local_1b8.hStdError = (HANDLE)0x0;
  local_1b8.cb = 0x68;
  local_1b8._4_4_ = 0;
  local_68.hProcess = (HANDLE)0x0;
  local_68.hThread = (HANDLE)0x0;
  local_68.dwProcessId = 0;
  local_68.dwThreadId = 0;
  puVar2 = &DAT_140174404;
  if (*param_4 != '\0') {
    puVar2 = &DAT_140173114;
  }
  FUN_14000892c(local_88);
  FUN_140079b6f(local_128,*param_3);
  FUN_140078b15(local_e8,L"\"",param_1 + 0x20);
  FUN_140052f9e(local_108,local_e8,L"\" -m ");
  FUN_140059abc(local_148);
  FUN_140052f9e(local_a8,local_148,L" \"");
  FUN_140059abc(local_48);
  FUN_140052f9e(local_2d8,local_48,L"\"");
  FUN_140052f9e(local_c8,local_2d8,puVar2);
  FUN_140005242(local_2d8);
  FUN_140005242(local_48);
  FUN_140005242(local_a8);
  FUN_140005242(local_148);
  FUN_140005242(local_108);
  FUN_140005242(local_e8);
  FUN_140005242(local_128);
  FUN_140005242(local_88);
  lpCommandLine = local_c8;
  if (7 < local_b0) {
    lpCommandLine = (LPWSTR **)local_c8[0];
  }
  BVar1 = CreateProcessW((LPCWSTR)0x0,(LPWSTR)lpCommandLine,(LPSECURITY_ATTRIBUTES)0x0,
                         (LPSECURITY_ATTRIBUTES)0x0,0,0,(LPVOID)0x0,(LPCWSTR)0x0,&local_1b8,
                         &local_68);
  if (BVar1 == 0) {
    local_88[0] = GetLastError();
    local_1d8 = L"CreateProcess() failed: {}";
    local_1d0 = 0x1a;
    FUN_14007701d(local_48);
    FUN_140052d74(local_2d8,&DAT_1401cc978,local_48);
    FUN_140052e4f(local_2c8);
    FUN_140052e84(local_2d8);
    FUN_140005242(local_48);
    uVar3 = 0;
  }
  else {
    WaitForSingleObject(local_68.hProcess,0xffffffff);
    BVar1 = GetExitCodeProcess(local_68.hProcess,local_88);
    if (BVar1 == 0) {
      local_a8[0] = GetLastError();
      local_1c8 = L"GetExitCodeProcess() failed: {}";
      local_1c0 = 0x1f;
      FUN_14007701d(local_48);
      FUN_140052d74(local_2d8,&DAT_1401cc978,local_48);
      FUN_140052e4f(local_2c8);
      FUN_140052e84(local_2d8);
      FUN_140005242(local_48);
      uVar3 = 0;
    }
    else {
      uVar3 = CONCAT71((int7)((ulonglong)puVar2 >> 8),local_88[0] == 0);
    }
    CloseHandle(local_68.hProcess);
    CloseHandle(local_68.hThread);
  }
  FUN_140005242(local_c8);
  return uVar3 & 0xffffffff;
}

