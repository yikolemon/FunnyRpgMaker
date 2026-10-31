/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004193b6 */

undefined1 __fastcall FUN_004193b6(int param_1)

{
  HANDLE pvVar1;
  BOOL BVar2;
  DWORD DVar3;
  LPCSTR **lpName;
  LPCSTR *local_3c [5];
  uint local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_3c;
  local_14 = 0xffffffff;
  local_18 = &LAB_0041a140;
  local_1c = ExceptionList;
  if (*(int *)(param_1 + 4) == -1) {
    DVar3 = *(DWORD *)(param_1 + 0x24);
    ExceptionList = &local_1c;
    FUN_00418ec3(local_3c,(uint *)"\\\\.\\pipe\\",(uint *)(param_1 + 0xc));
    local_14 = 0;
    lpName = local_3c;
    if (0xf < local_28) {
      lpName = (LPCSTR **)local_3c[0];
    }
    local_24 = param_1;
    pvVar1 = CreateNamedPipeA((LPCSTR)lpName,3,0,DVar3,(DWORD)DAT_004acce0,DAT_004acce0._4_4_,0,
                              (LPSECURITY_ATTRIBUTES)0x0);
    param_1 = local_24;
    *(HANDLE *)(local_24 + 4) = pvVar1;
    local_14 = 0xffffffff;
    FUN_0040230a((int *)local_3c);
    if (*(HANDLE *)(param_1 + 4) != (HANDLE)0xffffffff) {
      BVar2 = ConnectNamedPipe(*(HANDLE *)(param_1 + 4),(LPOVERLAPPED)0x0);
      if (BVar2 == 0) {
        DVar3 = GetLastError();
        *(bool *)(param_1 + 8) = DVar3 == 0x217;
        if ((DVar3 != 0x217) && (*(HANDLE *)(param_1 + 4) != (HANDLE)0xffffffff)) {
          CloseHandle(*(HANDLE *)(param_1 + 4));
          *(undefined4 *)(param_1 + 4) = 0xffffffff;
        }
      }
      else {
        *(undefined1 *)(param_1 + 8) = 1;
      }
    }
  }
  ExceptionList = local_1c;
  return *(undefined1 *)(param_1 + 8);
}

