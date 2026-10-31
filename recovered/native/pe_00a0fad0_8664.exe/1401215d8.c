/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401215d8 */

PVOID FUN_1401215d8(void)

{
  DWORD dwErrCode;
  PVOID pvVar1;
  PVOID pvVar2;
  
  pvVar2 = (PVOID)0x0;
  if (DAT_140355020 == '\0') {
    dwErrCode = GetLastError();
    pvVar1 = pvVar2;
    if (DAT_1401ca634 != 0xffffffff) {
      pvVar1 = FlsGetValue(DAT_1401ca634);
    }
    if ((pvVar1 != (PVOID)0xffffffffffffffff) && (pvVar2 = pvVar1, pvVar1 == (PVOID)0x0)) {
      pvVar2 = (PVOID)FUN_140121914();
    }
    SetLastError(dwErrCode);
  }
  else {
    pvVar1 = pvVar2;
    if (DAT_1401ca634 != 0xffffffff) {
      pvVar1 = (PVOID)FUN_140121e9c();
    }
    if ((pvVar1 != (PVOID)0xffffffffffffffff) && (pvVar2 = pvVar1, pvVar1 == (PVOID)0x0)) {
      pvVar2 = (PVOID)FUN_140121914();
    }
  }
  return pvVar2;
}

