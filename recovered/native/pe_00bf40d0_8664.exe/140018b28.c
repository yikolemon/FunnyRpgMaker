/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140018b28 */

undefined1 FUN_140018b28(longlong param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  HANDLE pvVar3;
  ulonglong ***lpName;
  ulonglong **local_48 [3];
  ulonglong local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 8) == -1) {
    DVar2 = *(DWORD *)(param_1 + 0x38);
    FUN_14001863d((ulonglong *)local_48,"\\\\.\\pipe\\",(undefined8 *)(param_1 + 0x18));
    lpName = local_48;
    if (0xf < local_30) {
      lpName = (ulonglong ***)local_48[0];
    }
    pvVar3 = CreateNamedPipeA((LPCSTR)lpName,3,0,DVar2,0x1000,0x1000,0,(LPSECURITY_ATTRIBUTES)0x0);
    *(HANDLE *)(param_1 + 8) = pvVar3;
    FUN_1400021ea((longlong *)local_48);
    if (*(HANDLE *)(param_1 + 8) != (HANDLE)0xffffffffffffffff) {
      BVar1 = ConnectNamedPipe(*(HANDLE *)(param_1 + 8),(LPOVERLAPPED)0x0);
      if (BVar1 == 0) {
        DVar2 = GetLastError();
        *(bool *)(param_1 + 0x10) = DVar2 == 0x217;
        if ((DVar2 != 0x217) && (*(HANDLE *)(param_1 + 8) != (HANDLE)0xffffffffffffffff)) {
          CloseHandle(*(HANDLE *)(param_1 + 8));
          *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x10) = 1;
      }
    }
  }
  return *(undefined1 *)(param_1 + 0x10);
}

