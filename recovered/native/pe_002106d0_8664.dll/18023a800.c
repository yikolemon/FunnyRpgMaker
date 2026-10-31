/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023a800 */

ulonglong FUN_18023a800(LPWSTR param_1)

{
  uint uVar1;
  DWORD DVar2;
  BOOL BVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  HANDLE hObject;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  hModule = GetModuleHandleW(L"kernel32.dll");
  pFVar4 = GetProcAddress(hModule,"GetTempPath2W");
  if (pFVar4 == (FARPROC)0x0) {
    uVar1 = GetTempPathW(0x105,param_1);
  }
  else {
    uVar1 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
  }
  if (uVar1 == 0) {
    DVar2 = GetLastError();
    return (ulonglong)DVar2 << 0x20;
  }
  DVar2 = GetFileAttributesW(param_1);
  if ((DVar2 != 0xffffffff) && ((DVar2 & 0x10) != 0)) {
    if ((DVar2 >> 10 & 1) != 0) {
      local_20 = 0x2000000;
      local_28 = 0x20;
      local_18 = 0;
      uStack_10 = 0;
      hObject = (HANDLE)CreateFile2(param_1,0x80,7,3,&local_28);
      if (hObject == (HANDLE)0xffffffffffffffff) {
        DVar2 = GetLastError();
        if (DVar2 != 0) goto LAB_18023a8e5;
      }
      else {
        BVar3 = CloseHandle(hObject);
        if (BVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
    }
    return (ulonglong)uVar1;
  }
LAB_18023a8e5:
  return (ulonglong)uVar1 | 0xffffffff00000000;
}

