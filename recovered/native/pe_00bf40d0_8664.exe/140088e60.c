/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140088e60 */

ulonglong FUN_140088e60(LPCWSTR param_1,DWORD param_2,LPWSTR param_3)

{
  DWORD DVar1;
  
  DVar1 = GetFullPathNameW(param_1,param_2,param_3,(LPWSTR *)0x0);
  if (DVar1 == 0) {
    DVar1 = GetLastError();
    return (ulonglong)DVar1 << 0x20;
  }
  return (ulonglong)DVar1;
}

