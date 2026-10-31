/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800132ae */

bool FUN_1800132ae(longlong param_1)

{
  BOOL BVar1;
  HANDLE pvVar2;
  DWORD *lpFileName;
  DWORD local_40;
  undefined4 uStack_3c;
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (*(HANDLE *)(param_1 + 8) != (HANDLE)0xffffffffffffffff) {
    local_40 = 0;
    BVar1 = PeekNamedPipe(*(HANDLE *)(param_1 + 8),(LPVOID)0x0,0,(LPDWORD)0x0,&local_40,(LPDWORD)0x0
                         );
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
  FUN_180015c27(lpFileName,"\\\\.\\pipe\\",param_1 + 0x10);
  if (0xf < local_28) {
    lpFileName = (DWORD *)CONCAT44(uStack_3c,local_40);
  }
  pvVar2 = CreateFileA((LPCSTR)lpFileName,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  *(HANDLE *)(param_1 + 8) = pvVar2;
  FUN_180001ef2(&local_40);
  return *(longlong *)(param_1 + 8) != -1;
}

