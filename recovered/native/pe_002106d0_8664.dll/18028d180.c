/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18028d180 */

PVOID FUN_18028d180(void)

{
  DWORD dwErrCode;
  PVOID pvVar1;
  
  if (DAT_180415e80 == 0xffffffff) {
    return (PVOID)0x0;
  }
  dwErrCode = GetLastError();
  pvVar1 = FlsGetValue(DAT_180415e80);
  SetLastError(dwErrCode);
  if (pvVar1 == (PVOID)0xffffffffffffffff) {
    pvVar1 = (PVOID)0x0;
  }
  return pvVar1;
}

