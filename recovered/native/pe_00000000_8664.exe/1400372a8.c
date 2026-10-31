/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400372a8 */

void FUN_1400372a8(longlong param_1,longlong param_2)

{
  ushort uVar1;
  ulonglong uVar2;
  BOOL BVar3;
  undefined1 *local_168;
  ulonglong local_160;
  undefined8 local_158;
  code *local_150;
  undefined1 local_148 [256];
  _CONSOLE_SCREEN_BUFFER_INFO local_48;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x10) - 1U < 0xfffffffffffffffe) {
    local_30 = *(undefined8 *)(param_1 + 0x18);
    FUN_1400378a0();
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    local_168 = local_148;
    local_160 = 0;
    local_150 = FUN_1400199de;
    local_158 = 0xfa;
    (**(code **)(**(longlong **)(param_1 + 0x28) + 8))
              (*(longlong **)(param_1 + 0x28),param_2,&local_168);
    if ((*(char *)(param_1 + 0x20) == '\x01') &&
       (uVar2 = *(ulonglong *)(param_2 + 0x28), uVar2 < *(ulonglong *)(param_2 + 0x30))) {
      if (uVar2 != 0) {
        WriteConsoleA(*(HANDLE *)(param_1 + 0x10),local_168,(DWORD)uVar2,(LPDWORD)0x0,(LPVOID)0x0);
      }
      uVar1 = *(ushort *)(param_1 + 0x30 + (longlong)*(int *)(param_2 + 0x10) * 2);
      BVar3 = GetConsoleScreenBufferInfo(*(HANDLE *)(param_1 + 0x10),&local_48);
      if (BVar3 == 0) {
        local_48.wAttributes = 7;
      }
      else {
        SetConsoleTextAttribute(*(HANDLE *)(param_1 + 0x10),uVar1 | local_48.wAttributes & 0xfff0);
      }
      uVar2 = *(ulonglong *)(param_2 + 0x28);
      if (uVar2 < *(ulonglong *)(param_2 + 0x30)) {
        WriteConsoleA(*(HANDLE *)(param_1 + 0x10),local_168 + uVar2,
                      (int)*(ulonglong *)(param_2 + 0x30) - (int)uVar2,(LPDWORD)0x0,(LPVOID)0x0);
      }
      SetConsoleTextAttribute(*(HANDLE *)(param_1 + 0x10),local_48.wAttributes);
      uVar2 = *(ulonglong *)(param_2 + 0x30);
      if (uVar2 < local_160) {
        WriteConsoleA(*(HANDLE *)(param_1 + 0x10),local_168 + uVar2,(int)local_160 - (int)uVar2,
                      (LPDWORD)0x0,(LPVOID)0x0);
      }
    }
    else {
      local_48.dwSize.X = 0;
      local_48.dwSize.Y = 0;
      WriteFile(*(HANDLE *)(param_1 + 0x10),local_168,(DWORD)local_160,(LPDWORD)&local_48,
                (LPOVERLAPPED)0x0);
    }
    if (local_168 != local_148) {
      thunk_FUN_1401aea30();
    }
    FUN_14018a340(local_30);
  }
  return;
}

