/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00481750 */

ulonglong FUN_00481750(LPCWSTR param_1,DWORD param_2,LPWSTR param_3)

{
  DWORD DVar1;
  
  DVar1 = GetFullPathNameW(param_1,param_2,param_3,(LPWSTR *)0x0);
  if (DVar1 == 0) {
    DVar1 = GetLastError();
    return (ulonglong)DVar1 << 0x20;
  }
  return (ulonglong)DVar1;
}

