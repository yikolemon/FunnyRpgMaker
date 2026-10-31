/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10040f38 */

void __thiscall FUN_10040f38(int param_1,int param_2)

{
  uint uVar1;
  BOOL BVar2;
  DWORD nNumberOfCharsToWrite;
  undefined1 *local_150;
  DWORD local_14c;
  undefined4 local_148;
  undefined1 *local_144;
  undefined1 local_140 [252];
  _CONSOLE_SCREEN_BUFFER_INFO local_44;
  undefined4 local_2c;
  uint local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_150;
  local_14 = 0xffffffff;
  local_18 = &LAB_1005a350;
  local_1c = ExceptionList;
  if (*(int *)(param_1 + 8) - 1U < 0xfffffffe) {
    local_2c = *(undefined4 *)(param_1 + 0xc);
    ExceptionList = &local_1c;
    FUN_100446d6();
    *(undefined4 *)(param_2 + 0x1c) = 0;
    *(undefined4 *)(param_2 + 0x20) = 0;
    local_150 = local_140;
    local_14c = 0;
    local_144 = &LAB_100190fe;
    local_148 = 0xfa;
    local_14 = 1;
    local_24 = param_1;
    (**(code **)(**(int **)(param_1 + 0x14) + 4))(param_2,&local_150);
    if ((*(char *)(local_24 + 0x10) == '\x01') &&
       (uVar1 = *(uint *)(param_2 + 0x1c), uVar1 < *(uint *)(param_2 + 0x20))) {
      if (uVar1 != 0) {
        WriteConsoleA(*(HANDLE *)(local_24 + 8),local_150,uVar1,(LPDWORD)0x0,(LPVOID)0x0);
      }
      local_28 = (uint)*(ushort *)(local_24 + 0x18 + *(int *)(param_2 + 8) * 2);
      BVar2 = GetConsoleScreenBufferInfo(*(HANDLE *)(local_24 + 8),&local_44);
      if (BVar2 == 0) {
        local_28 = CONCAT22(local_28._2_2_,7);
      }
      else {
        SetConsoleTextAttribute
                  (*(HANDLE *)(local_24 + 8),(ushort)local_28 | local_44.wAttributes & 0xfff0);
        local_28 = CONCAT22(local_28._2_2_,local_44.wAttributes);
      }
      uVar1 = *(uint *)(param_2 + 0x1c);
      nNumberOfCharsToWrite = *(uint *)(param_2 + 0x20) - uVar1;
      if (uVar1 <= *(uint *)(param_2 + 0x20) && nNumberOfCharsToWrite != 0) {
        WriteConsoleA(*(HANDLE *)(local_24 + 8),local_150 + uVar1,nNumberOfCharsToWrite,(LPDWORD)0x0
                      ,(LPVOID)0x0);
      }
      SetConsoleTextAttribute(*(HANDLE *)(local_24 + 8),(WORD)local_28);
      uVar1 = *(uint *)(param_2 + 0x20);
      if (uVar1 <= local_14c && local_14c - uVar1 != 0) {
        WriteConsoleA(*(HANDLE *)(local_24 + 8),local_150 + uVar1,local_14c - uVar1,(LPDWORD)0x0,
                      (LPVOID)0x0);
      }
    }
    else {
      local_44.dwSize.X = 0;
      local_44.dwSize.Y = 0;
      WriteFile(*(HANDLE *)(local_24 + 8),local_150,local_14c,(LPDWORD)&local_44,(LPOVERLAPPED)0x0);
    }
    local_14 = 0xffffffff;
    if (local_150 != local_140) {
      thunk_FUN_10274120(local_150);
    }
    FUN_1022c200(local_2c);
  }
  ExceptionList = local_1c;
  return;
}

