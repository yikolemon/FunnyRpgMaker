/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140017f32 */

bool FUN_140017f32(longlong param_1)

{
  BOOL BVar1;
  HANDLE pvVar2;
  ulonglong *lpFileName;
  undefined8 local_40;
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (*(HANDLE *)(param_1 + 8) != (HANDLE)0xffffffffffffffff) {
    local_40._0_4_ = 0;
    BVar1 = PeekNamedPipe(*(HANDLE *)(param_1 + 8),(LPVOID)0x0,0,(LPDWORD)0x0,(LPDWORD)&local_40,
                          (LPDWORD)0x0);
    pvVar2 = *(HANDLE *)(param_1 + 8);
    if (BVar1 == 0) {
      if (pvVar2 != (HANDLE)0xffffffffffffffff) {
        CloseHandle(pvVar2);
        *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
      }
    }
    else if (pvVar2 != (HANDLE)0xffffffffffffffff) {
      return true;
    }
  }
  lpFileName = &local_40;
  FUN_14001863d(lpFileName,"\\\\.\\pipe\\",(undefined8 *)(param_1 + 0x10));
  if (0xf < local_28) {
    lpFileName = (ulonglong *)CONCAT44(local_40._4_4_,(DWORD)local_40);
  }
  pvVar2 = CreateFileA((LPCSTR)lpFileName,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  *(HANDLE *)(param_1 + 8) = pvVar2;
  FUN_1400021ea(&local_40);
  return *(longlong *)(param_1 + 8) != -1;
}

