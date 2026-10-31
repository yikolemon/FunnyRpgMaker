/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102723b0 */

PVOID FUN_102723b0(void)

{
  DWORD dwErrCode;
  PVOID pvVar1;
  
  if (DAT_1039b3e0 == 0xffffffff) {
    return (PVOID)0x0;
  }
  dwErrCode = GetLastError();
  pvVar1 = FlsGetValue(DAT_1039b3e0);
  SetLastError(dwErrCode);
  if (pvVar1 == (PVOID)0xffffffff) {
    pvVar1 = (PVOID)0x0;
  }
  return pvVar1;
}

