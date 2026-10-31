/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401aaf10 */

PVOID FUN_1401aaf10(void)

{
  DWORD dwErrCode;
  PVOID pvVar1;
  
  if (DAT_140f29620 == 0xffffffff) {
    return (PVOID)0x0;
  }
  dwErrCode = GetLastError();
  pvVar1 = FlsGetValue(DAT_140f29620);
  SetLastError(dwErrCode);
  if (pvVar1 == (PVOID)0xffffffffffffffff) {
    pvVar1 = (PVOID)0x0;
  }
  return pvVar1;
}

