/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00494630 */

PVOID FUN_00494630(void)

{
  DWORD dwErrCode;
  PVOID pvVar1;
  
  if (DAT_0051ae60 == 0xffffffff) {
    return (PVOID)0x0;
  }
  dwErrCode = GetLastError();
  pvVar1 = FlsGetValue(DAT_0051ae60);
  SetLastError(dwErrCode);
  if (pvVar1 == (PVOID)0xffffffff) {
    pvVar1 = (PVOID)0x0;
  }
  return pvVar1;
}

