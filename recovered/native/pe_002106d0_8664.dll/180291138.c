/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180291138 */

PVOID FUN_180291138(void)

{
  DWORD dwErrCode;
  PVOID pvVar1;
  PVOID pvVar2;
  
  pvVar2 = (PVOID)0x0;
  if (DAT_180421240 == '\0') {
    dwErrCode = GetLastError();
    pvVar1 = pvVar2;
    if (DAT_180415e90 != 0xffffffff) {
      pvVar1 = FlsGetValue(DAT_180415e90);
    }
    if ((pvVar1 != (PVOID)0xffffffffffffffff) && (pvVar2 = pvVar1, pvVar1 == (PVOID)0x0)) {
      pvVar2 = (PVOID)FUN_1802914c4();
    }
    SetLastError(dwErrCode);
  }
  else {
    pvVar1 = pvVar2;
    if (DAT_180415e90 != 0xffffffff) {
      pvVar1 = (PVOID)FUN_180291a4c();
    }
    if ((pvVar1 != (PVOID)0xffffffffffffffff) && (pvVar2 = pvVar1, pvVar1 == (PVOID)0x0)) {
      pvVar2 = (PVOID)FUN_1802914c4();
    }
  }
  return pvVar2;
}

