/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401aed28 */

PVOID FUN_1401aed28(void)

{
  DWORD dwErrCode;
  PVOID pvVar1;
  PVOID pvVar2;
  
  pvVar2 = (PVOID)0x0;
  if (DAT_140f32bf0 == '\0') {
    dwErrCode = GetLastError();
    pvVar1 = pvVar2;
    if (DAT_140f29630 != 0xffffffff) {
      pvVar1 = FlsGetValue(DAT_140f29630);
    }
    if ((pvVar1 != (PVOID)0xffffffffffffffff) && (pvVar2 = pvVar1, pvVar1 == (PVOID)0x0)) {
      pvVar2 = (PVOID)FUN_1401af064();
    }
    SetLastError(dwErrCode);
  }
  else {
    pvVar1 = pvVar2;
    if (DAT_140f29630 != 0xffffffff) {
      pvVar1 = (PVOID)FUN_1401af5ec();
    }
    if ((pvVar1 != (PVOID)0xffffffffffffffff) && (pvVar2 = pvVar1, pvVar1 == (PVOID)0x0)) {
      pvVar2 = (PVOID)FUN_1401af064();
    }
  }
  return pvVar2;
}

