/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009d770 */

PVOID FUN_14009d770(void)

{
  DWORD dwErrCode;
  PVOID pvVar1;
  
  if (DAT_14013bbe0 == 0xffffffff) {
    return (PVOID)0x0;
  }
  dwErrCode = GetLastError();
  pvVar1 = FlsGetValue(DAT_14013bbe0);
  SetLastError(dwErrCode);
  if (pvVar1 == (PVOID)0xffffffffffffffff) {
    pvVar1 = (PVOID)0x0;
  }
  return pvVar1;
}

