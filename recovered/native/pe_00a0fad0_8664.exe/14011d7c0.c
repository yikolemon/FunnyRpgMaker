/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14011d7c0 */

PVOID FUN_14011d7c0(void)

{
  DWORD dwErrCode;
  PVOID pvVar1;
  
  if (DAT_1401ca630 == 0xffffffff) {
    return (PVOID)0x0;
  }
  dwErrCode = GetLastError();
  pvVar1 = FlsGetValue(DAT_1401ca630);
  SetLastError(dwErrCode);
  if (pvVar1 == (PVOID)0xffffffffffffffff) {
    pvVar1 = (PVOID)0x0;
  }
  return pvVar1;
}

